<?php
/**
 * @file
 * marcxml_export_components.features.inc
 */

/**
 * Implements hook_views_api().
 */
function marcxml_export_components_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_eck_bundle_info().
 */
function marcxml_export_components_eck_bundle_info() {
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
function marcxml_export_components_eck_entity_type_info() {
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

/**
 * Implements hook_node_info().
 */
function marcxml_export_components_node_info() {
  $items = array(
    'marc_tag_mapper' => array(
      'name' => t('Marc Tag Mapper'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
