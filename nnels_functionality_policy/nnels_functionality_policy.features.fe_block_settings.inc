<?php
/**
 * @file
 * site_functionality_policy.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function site_functionality_policy_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['webform-client-block-320'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'client-block-320',
    'i18n_block_language' => array(
      0 => 'en',
      1 => 'fr',
    ),
    'i18n_mode' => 1,
    'module' => 'webform',
    'node_types' => array(),
    'pages' => 'node/63268',
    'roles' => array(),
    'themes' => array(
      'NNELS_CALS_v001' => array(
        'region' => 'content_bottom',
        'status' => 1,
        'theme' => 'NNELS_CALS_v001',
        'weight' => -58,
      ),
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -51,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  return $export;
}
