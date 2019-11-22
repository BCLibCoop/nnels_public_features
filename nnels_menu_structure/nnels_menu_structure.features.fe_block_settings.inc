<?php

/**
 * @file
 * nnels_menu_structure.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function nnels_menu_structure_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['system-main-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'main-menu',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'NNELS_CALS_v001' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'NNELS_CALS_v001',
        'weight' => -22,
      ),
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -22,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
