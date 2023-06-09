<?php
/**
 * @file
 * marc_tag_entities.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function marc_tag_entities_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "deploy" && $api == "deploy_plans") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_eck_bundle_info().
 */
function marc_tag_entities_eck_bundle_info() {
  $items = array(
    'marc_tag_marc_tag' => array(
      'machine_name' => 'marc_tag_marc_tag',
      'entity_type' => 'marc_tag',
      'name' => 'marc_tag',
      'label' => 'MARC tag',
      'config' => array(),
    ),
  );
  return $items;
}

/**
 * Implements hook_eck_entity_type_info().
 */
function marc_tag_entities_eck_entity_type_info() {
  $items = array(
    'marc_tag' => array(
      'name' => 'marc_tag',
      'label' => 'MARC tag',
      'properties' => array(
        'title' => array(
          'label' => 'Title',
          'type' => 'text',
          'behavior' => 'title',
        ),
        'uid' => array(
          'label' => 'Author',
          'type' => 'integer',
          'behavior' => 'author',
        ),
        'created' => array(
          'label' => 'Created',
          'type' => 'integer',
          'behavior' => 'created',
        ),
        'changed' => array(
          'label' => 'Changed',
          'type' => 'integer',
          'behavior' => 'changed',
        ),
      ),
    ),
  );
  return $items;
}
