<?php
/**
 * @file
 * nnels_content_cafe_views_companion.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function nnels_content_cafe_views_companion_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-content_cafe_cover-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'content_cafe_cover-block',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(
      0 => 'repository_item',
    ),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'NNELS_CALS_v001' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'NNELS_CALS_v001',
        'weight' => -77,
      ),
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
