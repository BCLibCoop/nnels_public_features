<?php
/**
 * @file
 * site_functionality_policy.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function site_functionality_policy_default_rules_configuration() {
  $items = array();
  $items['rules_check_non_party_prov_status_by_org'] = entity_import('rules_config', '{ "rules_check_non_party_prov_status_by_org" : {
      "LABEL" : "Check non-party Province, Status by User Org",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "block visibility", "organizations", "province", "requests" ],
      "REQUIRES" : [ "rules", "php" ],
      "USES VARIABLES" : {
        "module" : { "label" : "Module", "type" : "text" },
        "delta" : { "label" : "Delta", "type" : "text" },
        "result" : { "label" : "Result", "type" : "boolean", "parameter" : false }
      },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "site:current-user:field-organization" ],
            "type" : "node",
            "bundle" : { "value" : { "organization" : "organization" } }
          }
        },
        { "entity_has_field" : { "entity" : [ "site:current-user" ], "field" : "field_organization" } },
        { "entity_has_field" : {
            "entity" : [ "site:current-user:field-organization" ],
            "field" : "field_address"
          }
        },
        { "NOT data_is" : {
            "data" : [ "site:current-user:field-organization:field-partner-library-" ],
            "value" : "0"
          }
        },
        { "OR" : [
            { "NOT data_is_empty" : { "data" : [ "site:current-user:field-organization:field-partner-library-" ] } },
            { "NOT php_eval" : { "code" : "$npps = variable_get(\\u0027list_of_npps\\u0027);\\r\\n$province = \\u0022[site:current-user:field-organization:field-address:administrative-area]\\u0022;\\r\\nif ( in_array( $province, $npps ) ) return TRUE;\\r\\nelse return FALSE;" } }
          ]
        }
      ],
      "DO" : [
        { "entity_fetch" : {
            "USING" : { "type" : "node", "id" : [ "site:current-user:field-organization:nid" ] },
            "PROVIDE" : { "entity_fetched" : { "entity_org_fetched" : "Fetched organization" } }
          }
        },
        { "data_set" : { "data" : [ "result" ], "value" : "1" } },
        { "variable_add" : {
            "USING" : { "type" : "integer", "value" : "1" },
            "PROVIDE" : { "variable_added" : { "features_unrestricted" : "Features Unrestricted" } }
          }
        }
      ],
      "PROVIDES VARIABLES" : [ "result" ]
    }
  }');
  return $items;
}
