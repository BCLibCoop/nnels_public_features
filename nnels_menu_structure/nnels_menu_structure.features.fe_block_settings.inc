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

  $export['menu_block-1'] = array(
    'cache' => -1,
    'css_class' => 'secondary-navigation',
    'custom' => 0,
    'delta' => 1,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'NNELS_CALS_v001' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'NNELS_CALS_v001',
        'weight' => -64,
      ),
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -59,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['menu_block-2'] = array(
    'cache' => -1,
    'css_class' => 'main-navigation',
    'custom' => 0,
    'delta' => 2,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'NNELS_CALS_v001' => array(
        'region' => 'navigation',
        'status' => 1,
        'theme' => 'NNELS_CALS_v001',
        'weight' => 0,
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

  $export['menu_block-3'] = array(
    'cache' => -1,
    'css_class' => 'footer-navigation',
    'custom' => 0,
    'delta' => 3,
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
        'weight' => -50,
      ),
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -50,
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

  $export['menu_block-5'] = array(
    'cache' => -1,
    'css_class' => 'secondary-navigation',
    'custom' => 0,
    'delta' => 5,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => 'node/40
node/307
node/18
node/79686
node/210544',
    'roles' => array(),
    'themes' => array(
      'NNELS_CALS_v001' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'NNELS_CALS_v001',
        'weight' => -64,
      ),
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['menu_block-6'] = array(
    'cache' => -1,
    'css_class' => 'secondary-navigation',
    'custom' => 0,
    'delta' => 6,
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => 'library
library/*
bibliotheque
bibliotheque/*',
    'roles' => array(),
    'themes' => array(
      'NNELS_CALS_v001' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'NNELS_CALS_v001',
        'weight' => -64,
      ),
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
    ),
    'title' => 'Library Staff',
    'visibility' => 1,
  );

  $export['menu_block-7'] = array(
    'cache' => -1,
    'css_class' => 'secondary-navigation',
    'custom' => 0,
    'delta' => 7,
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => 'node/20009
node/193693
node/79563',
    'roles' => array(),
    'themes' => array(
      'NNELS_CALS_v001' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'NNELS_CALS_v001',
        'weight' => -64,
      ),
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
    ),
    'title' => 'For Publishers',
    'visibility' => 1,
  );

  $export['menu_block-8'] = array(
    'cache' => -1,
    'css_class' => 'secondary-navigation',
    'custom' => 0,
    'delta' => 8,
    'i18n_block_language' => array(
      0 => 'en',
    ),
    'i18n_mode' => 0,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => 'volunteer
node/81269
node/89333',
    'roles' => array(),
    'themes' => array(
      'NNELS_CALS_v001' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'NNELS_CALS_v001',
        'weight' => -64,
      ),
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
    ),
    'title' => 'Sign Up to Record!',
    'visibility' => 1,
  );

  $export['menu_block-9'] = array(
    'cache' => -1,
    'css_class' => 'secondary-navigation',
    'custom' => 0,
    'delta' => 9,
    'i18n_block_language' => array(
      0 => 'fr',
    ),
    'i18n_mode' => 0,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => 'benevolat
profil-lecteur
profil-bibliotheque',
    'roles' => array(),
    'themes' => array(
      'NNELS_CALS_v001' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'NNELS_CALS_v001',
        'weight' => -64,
      ),
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

 $export['menu_block-10'] = array(
    'cache' => -1,
    'css_class' => 'secondary-navigation',
    'custom' => 0,
    'delta' => 10,
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => 'help
help/*
aide
aide/*
node/42737',
    'roles' => array(),
    'themes' => array(
      'NNELS_CALS_v001' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'NNELS_CALS_v001',
        'weight' => -64,
      ),
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
    ),
    'title' => 'Help',
    'visibility' => 1,
  );

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
