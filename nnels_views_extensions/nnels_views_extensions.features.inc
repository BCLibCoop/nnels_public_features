<?php
/**
 * @file
 * nnels_views_extensions.features.inc
 */

/**
 * Implements hook_default_search_api_index().
 */
function nnels_views_extensions_default_search_api_index() {
  $items = array();
  $items['marcxml_record_content'] = entity_import('search_api_index', '{
    "name" : "MARCXML Record Content",
    "machine_name" : "marcxml_record_content",
    "description" : null,
    "server" : "solr",
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [ "repository_item" ] },
      "index_directly" : 0,
      "cron_limit" : "50",
      "fields" : {
        "field_xml_string" : { "type" : "text", "boost" : "3.0" },
        "lsn_001" : { "type" : "text", "boost" : "5.0" },
        "nid" : { "type" : "integer" },
        "search_api_language" : { "type" : "string" },
        "title" : { "type" : "text" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_metatag_alter_callback" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_language_control" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "lang_field" : "", "languages" : [] }
        },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "-50",
          "settings" : { "fields" : { "field_xml_string" : true } }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "-49",
          "settings" : {
            "fields" : { "field_xml_string" : true },
            "title" : 0,
            "alt" : 0,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_stopwords" : {
          "status" : 1,
          "weight" : "-48",
          "settings" : {
            "fields" : { "field_xml_string" : true },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc\\r\\nmarc:collection\\r\\nmarc:record\\r\\nmarc:subfield\\r\\nmarc:controlfield\\r\\nmarc:datafield\\r\\ncode=\\r\\nind1=\\r\\nind2="
          }
        },
        "search_api_tokenizer" : {
          "status" : 1,
          "weight" : "-47",
          "settings" : {
            "fields" : { "field_xml_string" : true },
            "spaces" : "[^[:alnum:];]",
            "ignorable" : "[\\u0027\\u003C\\u003E\\/]"
          }
        },
        "search_api_porter_stemmer" : {
          "status" : 0,
          "weight" : "-46",
          "settings" : { "fields" : { "title" : true }, "exceptions" : "texan=texa" }
        },
        "search_api_highlighting" : {
          "status" : 1,
          "weight" : "-45",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : { "title" : "title" },
            "highlight" : "always",
            "highlight_partial" : 1
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}


/**
 * Implements hook_views_pre_view
 * @param $view
 * Utility for cataloguers to export records with BISAC subject terms applied
 * Can be re-purposed for pre-computing many expensive filter queries
 */
function nnels_views_extensions_views_pre_view(&$view) {

  if ( in_array( $view->name,['field_collection_view_marcxml_file_builder'] )) {

    if ($view->display_handler->display->id == "record_set_checkout_taxonomy_subquery") {
      $filters = $view->display_handler->get_option('filters');

      if (isset($filters['field_subject_tid'])) {

        $BISAC_terms = array(); //default

        //Check if we have the list cached
        if (!cache_get('bisac_subject_tids')) $BISAC_terms =
            nnels_views_extensions_build_BISAC_term_list();
        else $BISAC_terms = cache_get('bisac_subject_tids')->data;

        //First mode is BISAC-only
        $filters["field_subject_tid"]["group_info"]["group_items"][1]["value"]
          = [$BISAC_terms];
        //Second mode is Non-BISAC (exclude)
        $filters["field_subject_tid"]["group_info"]["group_items"][2]["operator"] = "not";
        $filters["field_subject_tid"]["group_info"]["group_items"][2]["value"]
          = [$BISAC_terms];
        //Override what's baked in default
        $view->display_handler->override_option('filters', $filters);
      }
    }
  }
}

/**
 * Cache a pre-computed list of BISAC Subject Term IDs for later filtering
 * @return array|bool
 */
function nnels_views_extensions_build_BISAC_term_list() {
  //BISAC regex pattern, could be improved
  //E.g. YOUNG ADULT FICTION / Magical Realism, DRAMA /
  $BISAC_pattern = "/^[A-Z]{2,}\s?.*\s\/\s?/";
  $BISAC_found = [];

  if ($subject_taxonomy = taxonomy_vocabulary_machine_name_load
  ('subject')) {
    $efq = new EntityFieldQuery();
    $result = $efq->entityCondition('entity_type', 'taxonomy_term')
      ->propertyCondition('vid', $subject_taxonomy->vid)
      ->propertyOrderBy('weight')
      ->execute();
    if (!empty($result['taxonomy_term'])) {
      $terms = taxonomy_term_load_multiple(array_keys($result['taxonomy_term']));
      foreach ($terms as $term) {
        if ($matched = preg_match($BISAC_pattern, $term->name)) {
          $BISAC_found[] = $term->tid;
        }
      } //end term loop
      if (! empty($BISAC_found))
        cache_set('bisac_subject_tids', $BISAC_found);
      else return FALSE;
    }
  }
  return $BISAC_found;
}
