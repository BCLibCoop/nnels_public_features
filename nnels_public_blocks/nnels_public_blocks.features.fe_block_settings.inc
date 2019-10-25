<?php

/**
 * @file
 * nnels_public_blocks.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function nnels_public_blocks_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-footer_contact'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'machine_name' => 'footer_contact',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'NNELS_CALS_v001' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'NNELS_CALS_v001',
        'weight' => -49,
      ),
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -49,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['block-header_logo'] = array(
    'cache' => -1,
    'css_class' => 'header-logo',
    'custom' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'machine_name' => 'header_logo',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'NNELS_CALS_v001' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'NNELS_CALS_v001',
        'weight' => -75,
      ),
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -36,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['calsauthen-_calsauthen_custom_registration'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '_calsauthen_custom_registration',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'calsauthen',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(
      'anonymous user' => 1,
    ),
    'themes' => array(
      'NNELS_CALS_v001' => array(
        'region' => 'utility',
        'status' => 1,
        'theme' => 'NNELS_CALS_v001',
        'weight' => -74,
      ),
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -33,
      ),
    ),
    'title' => 'registration',
    'visibility' => 0,
  );

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

  $export['logintoboggan-logintoboggan_logged_in'] = array(
    'cache' => -1,
    'css_class' => 'user-logged-in',
    'custom' => 0,
    'delta' => 'logintoboggan_logged_in',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'logintoboggan',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'NNELS_CALS_v001' => array(
        'region' => 'utility',
        'status' => 1,
        'theme' => 'NNELS_CALS_v001',
        'weight' => -73,
      ),
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -34,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu_block-4'] = array(
    'cache' => -1,
    'css_class' => 'footer-navigation-copyright',
    'custom' => 0,
    'delta' => 4,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'NNELS_CALS_v001' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'NNELS_CALS_v001',
        'weight' => -46,
      ),
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -46,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['nnels_bookshelf-bookshelf_button'] = array(
    'cache' => 2,
    'css_class' => 'bookshelf-button',
    'custom' => 0,
    'delta' => 'bookshelf_button',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'nnels_bookshelf',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(
      'administrator' => 3,
      'authenticated user' => 2,
      'contributor' => 7,
      'patron' => 6,
      'site editor' => 4,
      'site manager' => 5,
    ),
    'themes' => array(
      'NNELS_CALS_v001' => array(
        'region' => 'utility',
        'status' => 1,
        'theme' => 'NNELS_CALS_v001',
        'weight' => -75,
      ),
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -35,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['search-form'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'form',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'search',
    'node_types' => array(),
    'pages' => 'admin/*
node/1',
    'roles' => array(),
    'themes' => array(
      'NNELS_CALS_v001' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'NNELS_CALS_v001',
        'weight' => -9,
      ),
      'adminimal' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => 4,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['switchtheme-switch_form'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'switch_form',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'switchtheme',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'NNELS_CALS_v001' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'NNELS_CALS_v001',
        'weight' => -34,
      ),
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -34,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
