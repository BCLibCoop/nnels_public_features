<?php

/**
 * @file
 * nnels_tutorials_faqs.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function nnels_tutorials_faqs_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['faq-faq_categories'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'faq_categories',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'faq',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'NNELS_CALS_v001' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'NNELS_CALS_v001',
        'weight' => -27,
      ),
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -27,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-cals_faq-block_2'] = array(
    'cache' => -1,
    'css_class' => 'help-recent-block landing',
    'custom' => 0,
    'delta' => 'cals_faq-block_2',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'help
aide',
    'roles' => array(),
    'themes' => array(
      'NNELS_CALS_v001' => array(
        'region' => 'content_bottom',
        'status' => 1,
        'theme' => 'NNELS_CALS_v001',
        'weight' => -60,
      ),
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -55,
      ),
    ),
    'title' => 'Recent Tutorials',
    'visibility' => 1,
  );

  $export['views-help_categories-block_1'] = array(
    'cache' => -1,
    'css_class' => 'secondary-navigation help-categories-block',
    'custom' => 0,
    'delta' => 'help_categories-block_1',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'help
help/*
node/41867',
    'roles' => array(),
    'themes' => array(
      'NNELS_CALS_v001' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'NNELS_CALS_v001',
        'weight' => -58,
      ),
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -58,
      ),
    ),
    'title' => 'Help',
    'visibility' => 1,
  );

  $export['views-tutorials-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'tutorials-block',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'nnels-tutorials
*/nnels-tutorials
nnels-tutoriels
*/nnels-tutoriels
node/337',
    'roles' => array(),
    'themes' => array(
      'NNELS_CALS_v001' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'NNELS_CALS_v001',
        'weight' => -63,
      ),
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -26,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  return $export;
}
