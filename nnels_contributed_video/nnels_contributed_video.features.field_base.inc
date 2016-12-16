<?php
/**
 * @file
 * nnels_contributed_video.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function nnels_contributed_video_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_video_collection'.
  $field_bases['field_video_collection'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_video_collection',
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

  // Exported field_base: 'field_video_upload'.
  $field_bases['field_video_upload'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_video_upload',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'video',
    'settings' => array(
      'autoconversion' => 0,
      'autothumbnail' => 'auto',
      'default_video_thumbnail' => array(
        'fid' => 0,
        'remove_button' => 'Remove',
        'upload' => '',
        'upload_button' => 'Upload',
      ),
      'entity_translation_sync' => FALSE,
      'presets' => array(
        'NNELS  default' => 0,
      ),
      'preview_video_thumb_style' => 'medium',
      'thumbnail_format' => 'jpg',
      'uri_scheme' => 's3',
      'uri_scheme_converted' => 's3',
      'uri_scheme_thumbnails' => 'public',
    ),
    'translatable' => 0,
    'type' => 'video',
  );

  return $field_bases;
}
