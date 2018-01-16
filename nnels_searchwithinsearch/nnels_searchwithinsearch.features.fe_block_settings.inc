<?php
/**
 * @file
 * nnels_searchwithinsearch.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function nnels_searchwithinsearch_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['ajax_facets-ajax_facets_block'] = array(
    'cache' => 1,
    'css_class' => 'block-ajax-reset',
    'custom' => 0,
    'delta' => 'ajax_facets_block',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'ajax_facets',
    'node_types' => array(),
    'pages' => 'repository-search*',
    'roles' => array(),
    'themes' => array(
      'NNELS_CALS_v001' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'NNELS_CALS_v001',
        'weight' => -73,
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

  $export['current_search-reset_filters'] = array(
    'cache' => -1,
    'css_class' => 'search-reset-filters',
    'custom' => 0,
    'delta' => 'reset_filters',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'current_search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'NNELS_CALS_v001' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'NNELS_CALS_v001',
        'weight' => -72,
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

  $export['current_search-standard'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'standard',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'current_search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'NNELS_CALS_v001' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'NNELS_CALS_v001',
        'weight' => -75,
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

  $export['facetapi-2sJCr0OglhJ79V3xreAxpEnBXOY61L3b'] = array(
    'cache' => -1,
    'css_class' => 'facet-search genre',
    'custom' => 0,
    'delta' => '2sJCr0OglhJ79V3xreAxpEnBXOY61L3b',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'repository-search*
recently-added*',
    'roles' => array(),
    'themes' => array(
      'NNELS_CALS_v001' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'NNELS_CALS_v001',
        'weight' => -68,
      ),
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -52,
      ),
    ),
    'title' => 'Filter by Genre:',
    'visibility' => 1,
  );

  $export['facetapi-6k3h37n9W3cCgQFFWvz9QwXSCBaxJKiw'] = array(
    'cache' => -1,
    'css_class' => 'facet-search creator',
    'custom' => 0,
    'delta' => '6k3h37n9W3cCgQFFWvz9QwXSCBaxJKiw',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'repository-search*
recently-added*',
    'roles' => array(),
    'themes' => array(
      'NNELS_CALS_v001' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'NNELS_CALS_v001',
        'weight' => -69,
      ),
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -53,
      ),
    ),
    'title' => 'Filter by Language:',
    'visibility' => 1,
  );

  $export['facetapi-Q3VhKdrj85iXnijMA0g4L4dP3Esc9Jxf'] = array(
    'cache' => -1,
    'css_class' => 'facet-search creator',
    'custom' => 0,
    'delta' => 'Q3VhKdrj85iXnijMA0g4L4dP3Esc9Jxf',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'repository-search*
recently-added',
    'roles' => array(),
    'themes' => array(
      'NNELS_CALS_v001' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'NNELS_CALS_v001',
        'weight' => -72,
      ),
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -56,
      ),
    ),
    'title' => 'Filter by Format:',
    'visibility' => 1,
  );

  $export['facetapi-fXq0Xu7N2KcE2Fy9QzYzslBCiSTMiumL'] = array(
    'cache' => -1,
    'css_class' => 'facet-search narrator',
    'custom' => 0,
    'delta' => 'fXq0Xu7N2KcE2Fy9QzYzslBCiSTMiumL',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'repository-search*
recently-added',
    'roles' => array(),
    'themes' => array(
      'NNELS_CALS_v001' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'NNELS_CALS_v001',
        'weight' => -70,
      ),
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -54,
      ),
    ),
    'title' => 'Filter by Narrator:',
    'visibility' => 1,
  );

  $export['facetapi-gg3BL1HCcoroJVwrv0HDxS3GcNGhGAkm'] = array(
    'cache' => -1,
    'css_class' => 'facet-search creator',
    'custom' => 0,
    'delta' => 'gg3BL1HCcoroJVwrv0HDxS3GcNGhGAkm',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'repository-search*
recently-added*',
    'roles' => array(),
    'themes' => array(
      'NNELS_CALS_v001' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'NNELS_CALS_v001',
        'weight' => -71,
      ),
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -55,
      ),
    ),
    'title' => 'Filter by Author:',
    'visibility' => 1,
  );

  $export['facetapi-m0XBT2plKszcQ7ydU4whPlCebcEvNZ1I'] = array(
    'cache' => -1,
    'css_class' => 'facet-search creator',
    'custom' => 0,
    'delta' => 'm0XBT2plKszcQ7ydU4whPlCebcEvNZ1I',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'repository-search*
recently-added',
    'roles' => array(),
    'themes' => array(
      'NNELS_CALS_v001' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'NNELS_CALS_v001',
        'weight' => -67,
      ),
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -51,
      ),
    ),
    'title' => 'Filter by Availability:',
    'visibility' => 1,
  );

  $export['views-repository_search-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'repository_search-block',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'NNELS_CALS_v001' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'NNELS_CALS_v001',
        'weight' => -3,
      ),
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -3,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
