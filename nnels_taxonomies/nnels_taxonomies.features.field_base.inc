<?php
/**
 * @file
 * nnels_taxonomies.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function nnels_taxonomies_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_dc_relation_term_value'.
  $field_bases['field_dc_relation_term_value'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_dc_relation_term_value',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'relations',
          'parent' => 0,
        ),
      ),
      'entity_translation_sync' => FALSE,
      'options_list_callback' => 'i18n_taxonomy_allowed_values',
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  return $field_bases;
}
