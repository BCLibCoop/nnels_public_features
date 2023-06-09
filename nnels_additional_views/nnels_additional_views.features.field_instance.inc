<?php

/**
 * @file
 * nnels_additional_views.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function nnels_additional_views_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'taxonomy_term-accessibility_tags-field_required_for_certification'.
  $field_instances['taxonomy_term-accessibility_tags-field_required_for_certification'] = array(
    'bundle' => 'accessibility_tags',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'default_value_label_token' => 0,
    'deleted' => 0,
    'description' => 'If checked this term will be one of the terms that need to be present on a repository item to control the display of the certified icon.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_required_for_certification',
    'label' => 'Required for Certification',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'taxonomy_term-accessibility_tags-field_source'.
  $field_instances['taxonomy_term-accessibility_tags-field_source'] = array(
    'bundle' => 'accessibility_tags',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_source',
    'label' => 'Source',
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
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('If checked this term will be one of the terms that need to be present on a repository item to control the display of the certified icon.');
  t('Required for Certification');
  t('Source');

  return $field_instances;
}
