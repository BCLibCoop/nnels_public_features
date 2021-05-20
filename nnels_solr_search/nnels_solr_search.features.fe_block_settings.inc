<?php

/**
 * @file
 * nnels_solr_search.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function nnels_solr_search_default_fe_block_settings() {
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
    'roles' => array(
      'anonymous user' => 1,
      'authenticated user' => 2,
    ),
    'themes' => array(
      'NNELS_CALS_v001' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'NNELS_CALS_v001',
        'weight' => -82,
      ),
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
    ),
    'title' => 'Facets',
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
        'weight' => -74,
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
        'weight' => -75,
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

  $export['facetapi-NU7lCVXpvmphW0VDDG41Aa7xzh9H2Odh'] = array(
    'cache' => -1,
    'css_class' => 'facet-search creator',
    'custom' => 0,
    'delta' => 'NU7lCVXpvmphW0VDDG41Aa7xzh9H2Odh',
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
        'weight' => -81,
      ),
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
    ),
    'title' => 'Filter by Accessibility:',
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
        'weight' => -79,
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

  $export['facetapi-SJafWiCpmFR9xv6hpbIR00MO51aHbA30'] = array(
    'cache' => -1,
    'css_class' => 'facet-search creator',
    'custom' => 0,
    'delta' => 'SJafWiCpmFR9xv6hpbIR00MO51aHbA30',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
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
        'weight' => -80,
      ),
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
    ),
    'title' => 'Filter by Certified Accessible:',
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
        'weight' => -77,
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
        'weight' => -78,
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
        'weight' => -74,
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

  $export['views--exp-repository_search-page'] = array(
    'cache' => -1,
    'css_class' => 'search-repository',
    'custom' => 0,
    'delta' => '-exp-repository_search-page',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'NNELS_CALS_v001' => array(
        'region' => 'search',
        'status' => 1,
        'theme' => 'NNELS_CALS_v001',
        'weight' => -30,
      ),
      'adminimal' => array(
        'region' => 'content_after',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => -30,
      ),
    ),
    'title' => 'Search the Catalogue:',
    'visibility' => 0,
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
