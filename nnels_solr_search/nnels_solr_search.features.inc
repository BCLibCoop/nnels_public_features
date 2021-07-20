<?php

/**
 * @file
 * nnels_solr_search.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nnels_solr_search_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "current_search" && $api == "current_search") {
    return array("version" => "1");
  }
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function nnels_solr_search_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_search_api_index().
 */
function nnels_solr_search_default_search_api_index() {
  $items = array();
  $items['solr_repository_search'] = entity_import('search_api_index', '{
    "name" : "Solr Repository Search",
    "machine_name" : "solr_repository_search",
    "description" : null,
    "server" : "solr",
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [] },
      "index_directly" : 0,
      "cron_limit" : "500",
      "fields" : {
        "body:format" : { "type" : "string" },
        "body:summary" : { "type" : "text", "boost" : "0.8" },
        "body:value" : { "type" : "text", "boost" : "0.8" },
        "certified_accessible" : { "type" : "integer" },
        "certified_accessible_by" : { "type" : "integer" },
        "changed" : { "type" : "date" },
        "created" : { "type" : "date" },
        "field_access_restrictions" : { "type" : "integer" },
        "field_audience" : { "type" : "text" },
        "field_daisy_file_available" : { "type" : "boolean" },
        "field_date" : {
          "type" : "list\\u003Cinteger\\u003E",
          "entity_type" : "field_collection_item"
        },
        "field_dc_contributor" : { "type" : "list\\u003Ctext\\u003E" },
        "field_dc_creator" : { "type" : "list\\u003Cstring\\u003E" },
        "field_dc_description:field_dc_date" : { "type" : "list\\u003Ctext\\u003E" },
        "field_dc_description:field_dc_relation_value" : { "type" : "list\\u003Ctext\\u003E" },
        "field_dc_description:field_name" : { "type" : "list\\u003Ctext\\u003E" },
        "field_dc_relation" : {
          "type" : "list\\u003Cinteger\\u003E",
          "entity_type" : "field_collection_item"
        },
        "field_dc_relation:field_dc_relation_term_value" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_dc_relation:field_dc_relation_term_value:name" : { "type" : "list\\u003Ctext\\u003E" },
        "field_details" : {
          "type" : "list\\u003Cinteger\\u003E",
          "entity_type" : "field_collection_item"
        },
        "field_file_resource:field_accessibility_tags" : {
          "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
          "entity_type" : "taxonomy_term"
        },
        "field_file_resource:field_file_format" : { "type" : "list\\u003Cstring\\u003E" },
        "field_file_resource:field_file_upload_details" : { "type" : "list\\u003Ctext\\u003E" },
        "field_file_resource:field_performer" : { "type" : "list\\u003Clist\\u003Cstring\\u003E\\u003E" },
        "field_file_resource:field_running_time" : { "type" : "list\\u003Cinteger\\u003E" },
        "field_genre:field_required_for_certification" : { "type" : "list\\u003Cboolean\\u003E" },
        "field_genre:name" : { "type" : "list\\u003Cstring\\u003E" },
        "field_genre_harmonized" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_isbn" : { "type" : "list\\u003Ctext\\u003E" },
        "field_iso_language" : { "type" : "list\\u003Cstring\\u003E" },
        "field_marc_mapper" : {
          "type" : "list\\u003Cinteger\\u003E",
          "entity_type" : "field_collection_item"
        },
        "field_oclc_number" : { "type" : "text" },
        "field_publisher" : { "type" : "list\\u003Ctext\\u003E" },
        "field_s3_path" : { "type" : "text" },
        "field_subject:name" : { "type" : "list\\u003Ctext\\u003E" },
        "field_subject:tid" : { "type" : "list\\u003Cinteger\\u003E" },
        "field_system_control_number" : { "type" : "list\\u003Ctext\\u003E" },
        "field_title_alternate" : { "type" : "text" },
        "nid" : { "type" : "integer" },
        "search_api_aggregation_1" : { "type" : "text" },
        "search_api_aggregation_4" : { "type" : "text", "boost" : "8.0" },
        "search_api_aggregation_5" : { "type" : "text", "boost" : "0.3" },
        "search_api_aggregation_7" : { "type" : "text", "boost" : "8.0" },
        "search_api_language" : { "type" : "string" },
        "status" : { "type" : "integer" },
        "title" : { "type" : "string", "boost" : "8.0" },
        "type" : { "type" : "string" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-10",
          "settings" : { "default" : "0", "bundles" : { "repository_item" : "repository_item" } }
        },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_language_control" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "lang_field" : "", "languages" : [] }
        },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "search_api_aggregation_1" : {
                "name" : "Title FullText",
                "type" : "fulltext",
                "fields" : [ "title" ],
                "description" : "A Fulltext aggregation of the following fields: Title."
              },
              "search_api_aggregation_4" : {
                "name" : "aggregated_title",
                "type" : "fulltext",
                "fields" : [ "title_field" ],
                "description" : "A Fulltext aggregation of the following fields: Title."
              },
              "search_api_aggregation_5" : {
                "name" : "aggregated_author",
                "type" : "fulltext",
                "fields" : [ "field_dc_contributor", "field_dc_creator" ],
                "description" : "A Fulltext aggregation of the following fields: DC Contributor, Creator."
              },
              "search_api_aggregation_6" : {
                "name" : "DC Relation Term",
                "type" : "fulltext",
                "fields" : [ "field_dc_relation:field_dc_relation_term_value" ],
                "description" : "A Fulltext aggregation of the following fields: DC Relation \\u00bb Value (term)."
              },
              "search_api_aggregation_7" : {
                "name" : "Narrator (Performer)",
                "type" : "fulltext",
                "fields" : [ "field_file_resource:field_performer" ],
                "description" : "A Fulltext aggregation of the following fields: File Resource \\u00bb Narrator."
              }
            }
          }
        },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "title" : true,
              "field_title_alternate" : true,
              "field_date" : true,
              "field_genre" : true,
              "field_dc_relation:field_dc_relation_term_value" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_title_alternate" : true,
              "field_dc_contributor" : true,
              "field_dc_creator" : true
            },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : { "field_title_alternate" : true, "field_dc_contributor" : true },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_title_alternate" : true,
              "field_dc_contributor" : true,
              "field_dc_creator" : true
            },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always"
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
 * Implements hook_default_search_api_server().
 */
function nnels_solr_search_default_search_api_server() {
  $items = array();
  $items['solr'] = entity_import('search_api_server', '{
    "name" : "Solr",
    "machine_name" : "solr",
    "description" : "NNELS Search",
    "class" : "search_api_solr_service",
    "options" : {
      "clean_ids" : true,
      "site_hash_form" : [],
      "site_hash" : false,
      "scheme" : "http",
      "host" : "localhost",
      "port" : "8983",
      "path" : "\\/solr\\/nnels-drupal",
      "http_user" : "",
      "http_pass" : "",
      "excerpt" : 0,
      "retrieve_data" : 0,
      "highlight_data" : 0,
      "skip_schema_check" : 0,
      "solr_version" : "",
      "http_method" : "AUTO",
      "log_query" : 0,
      "log_response" : 0,
      "commits_disabled" : 0,
      "clean_ids_form" : []
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
