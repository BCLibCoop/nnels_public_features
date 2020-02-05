<?php

/**
 * @file
 * nnels_tutorials_faqs.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function nnels_tutorials_faqs_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basic|node|tutorial_slideshow|form';
  $field_group->group_name = 'group_basic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tutorial_slideshow';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Basic Details',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_categories',
      2 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-basic field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_basic|node|tutorial_slideshow|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_categories|node|frequently_asked_question|form';
  $field_group->group_name = 'group_categories';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'frequently_asked_question';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Categories',
    'weight' => '3',
    'children' => array(
      0 => 'field_categories',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_categories|node|frequently_asked_question|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_question|node|frequently_asked_question|form';
  $field_group->group_name = 'group_question';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'frequently_asked_question';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Full Question',
    'weight' => '4',
    'children' => array(
      0 => 'field_question_full',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-question field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_question|node|frequently_asked_question|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_slides|node|tutorial_slideshow|form';
  $field_group->group_name = 'group_slides';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tutorial_slideshow';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Slides / Files',
    'weight' => '1',
    'children' => array(
      0 => 'field_slide',
      1 => 'field_image',
      2 => 'field_file_attachment',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-slides field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_slides|node|tutorial_slideshow|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Basic Details');
  t('Categories');
  t('Full Question');
  t('Slides / Files');

  return $field_groups;
}
