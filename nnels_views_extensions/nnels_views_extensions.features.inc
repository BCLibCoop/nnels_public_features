<?php
/**
 * @file
 * nnels_utility_views.features.inc
 */

/**
 * Implements hook_default_search_api_index().
 */
function nnels_utility_views_default_search_api_index() {
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
