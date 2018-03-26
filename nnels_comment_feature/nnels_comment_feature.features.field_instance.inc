<?php
/**
 * @file
 * nnels_comment_feature.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function nnels_comment_feature_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'comment-comment_node_repository_item-field_screen_name'.
  $field_instances['comment-comment_node_repository_item-field_screen_name'] = array(
    'bundle' => 'comment_node_repository_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'field_screen_name',
    'label' => 'Screen Name',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'user-user-field_screen_name'.
  $field_instances['user-user-field_screen_name'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This is the name that will be displayed on any comments you\'ve added. This is required to comment.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 17,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_screen_name',
    'label' => 'Screen Name',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 23,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Screen Name');
  t('This is the name that will be displayed on any comments you\'ve added. This is required to comment.');

  return $field_instances;
}
