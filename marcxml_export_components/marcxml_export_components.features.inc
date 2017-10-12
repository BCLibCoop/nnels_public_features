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
