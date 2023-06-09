<?php
/**
 * @file
 * nnels_comment_feature.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function nnels_comment_feature_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_screen_name'.
  $field_bases['field_screen_name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_screen_name',
    'field_permissions' => array(
      'type' => 2,
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
