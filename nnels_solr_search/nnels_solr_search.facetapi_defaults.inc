<?php

/**
 * @file
 * nnels_solr_search.facetapi_defaults.inc
 */

/**
 * Implements hook_facetapi_default_facet_settings().
 */
function nnels_solr_search_facetapi_default_facet_settings() {
  $export = array();

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search::certified_accessible';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = '';
  $facet->facet = 'certified_accessible';
  $facet->enabled = FALSE;
  $facet->hash = 'qC7WUDMUXG7vdSOi5NAIfGlT1DNAulFV';
  $facet->settings = array(
    'operator' => 'or',
    'hard_limit' => '50',
    'dependencies' => array(
      'facets' => array(),
      'reverse_dependency' => FALSE,
      'force_deactivation' => TRUE,
      'regex' => FALSE,
      'roles' => array(),
      'bundle' => 'none',
      'bundle_selected' => array(),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => 0,
    'individual_parent' => 0,
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@solr_repository_search::certified_accessible'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search::certified_accessible_by';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = '';
  $facet->facet = 'certified_accessible_by';
  $facet->enabled = FALSE;
  $facet->hash = '6pyQmqkGmqizIp0Xrkq5UuJMTo8pNtYY';
  $facet->settings = array(
    'operator' => 'or',
    'hard_limit' => '50',
    'dependencies' => array(
      'roles' => array(
        1 => 0,
        2 => 0,
        6 => 0,
        7 => 0,
        4 => 0,
        5 => 0,
        3 => 0,
        8 => 0,
        11 => 0,
        13 => 0,
      ),
      'bundle' => 'none',
      'bundle_selected' => array(
        'article' => 0,
        'page' => 0,
        'content_builder' => 0,
        'contributed_video' => 0,
        'document' => 0,
        'faq' => 0,
        'forum' => 0,
        'frequently_asked_question' => 0,
        'group' => 0,
        'marc_export_set' => 0,
        'marc_mapper' => 0,
        'record_set' => 0,
        'marc_tag_mapper' => 0,
        'organization' => 0,
        'post' => 0,
        'repository_item' => 0,
        'tutorial_slideshow' => 0,
        'tutorial_video' => 0,
        'webform' => 0,
        's3_record_set' => 0,
      ),
      'facets' => array(
        'field_file_resource:field_file_format' => 0,
        'field_file_resource:field_performer' => 0,
        'field_file_resource:field_accessibility_tags' => 0,
        'field_access_restrictions' => 0,
        'field_isbn' => 0,
        'field_dc_creator' => 0,
        'field_iso_language' => 0,
        'field_genre_harmonized' => 0,
      ),
      'reverse_dependency' => 0,
      'force_deactivation' => 1,
      'regex' => 0,
      'facet_items_field_file_resource:field_file_format' => '',
      'facet_items_field_file_resource:field_performer' => '',
      'facet_items_field_file_resource:field_accessibility_tags' => '',
      'facet_items_field_access_restrictions' => '',
      'facet_items_field_isbn' => '',
      'facet_items_field_dc_creator' => '',
      'facet_items_field_iso_language' => '',
      'facet_items_field_genre_harmonized' => '',
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => 0,
    'individual_parent' => 0,
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@solr_repository_search::certified_accessible_by'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search::field_access_restrictions';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = '';
  $facet->facet = 'field_access_restrictions';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'operator' => 'or',
    'hard_limit' => '50',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
      'roles' => array(),
      'facets' => array(),
      'force_deactivation' => TRUE,
      'regex' => FALSE,
      'reverse_dependency' => FALSE,
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => 0,
    'query_type' => 'term',
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
    'individual_parent' => 0,
    'limit_active_items' => 0,
    'pretty_paths_alias' => 'access',
  );
  $export['search_api@solr_repository_search::field_access_restrictions'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search::field_dc_creator';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = '';
  $facet->facet = 'field_dc_creator';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'operator' => 'or',
    'hard_limit' => '50',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
      'roles' => array(),
      'facets' => array(),
      'force_deactivation' => TRUE,
      'regex' => FALSE,
      'reverse_dependency' => FALSE,
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => 0,
    'query_type' => 'term',
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
    'individual_parent' => 0,
    'limit_active_items' => 0,
    'pretty_paths_alias' => 'creator',
  );
  $export['search_api@solr_repository_search::field_dc_creator'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search::field_file_resource:field_accessibility_tags';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = '';
  $facet->facet = 'field_file_resource:field_accessibility_tags';
  $facet->enabled = FALSE;
  $facet->hash = 'aqCSdVG27Dy2pk1EAKuV87Vq18fY9WJQ';
  $facet->settings = array(
    'operator' => 'or',
    'hard_limit' => '20',
    'dependencies' => array(
      'facets' => array(),
      'reverse_dependency' => FALSE,
      'force_deactivation' => TRUE,
      'regex' => FALSE,
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => '1',
    'individual_parent' => '0',
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@solr_repository_search::field_file_resource:field_accessibility_tags'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search::field_file_resource:field_file_format';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = '';
  $facet->facet = 'field_file_resource:field_file_format';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'operator' => 'or',
    'hard_limit' => '50',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
      'roles' => array(),
      'facets' => array(),
      'force_deactivation' => TRUE,
      'regex' => FALSE,
      'reverse_dependency' => FALSE,
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => 0,
    'query_type' => 'term',
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
    'individual_parent' => 0,
    'limit_active_items' => 0,
    'pretty_paths_alias' => 'format',
  );
  $export['search_api@solr_repository_search::field_file_resource:field_file_format'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search::field_file_resource:field_performer';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = '';
  $facet->facet = 'field_file_resource:field_performer';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'operator' => 'or',
    'hard_limit' => '20',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
      'roles' => array(),
      'facets' => array(),
      'force_deactivation' => TRUE,
      'regex' => FALSE,
      'reverse_dependency' => FALSE,
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => 0,
    'query_type' => 'term',
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
    'individual_parent' => 0,
    'limit_active_items' => 0,
    'pretty_paths_alias' => 'narrator',
  );
  $export['search_api@solr_repository_search::field_file_resource:field_performer'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search::field_genre';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = '';
  $facet->facet = 'field_genre';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'operator' => 'or',
    'hard_limit' => '50',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
      'roles' => array(),
      'facets' => array(),
      'force_deactivation' => TRUE,
      'regex' => FALSE,
      'reverse_dependency' => FALSE,
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => '0',
    'query_type' => 'term',
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
    'individual_parent' => '0',
    'limit_active_items' => 0,
    'pretty_paths_alias' => 'genre',
    'pretty_paths_taxonomy_pathauto' => 0,
    'pretty_paths_taxonomy_pathauto_vocabulary' => 'genre',
  );
  $export['search_api@solr_repository_search::field_genre'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search::field_iso_language';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = '';
  $facet->facet = 'field_iso_language';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'operator' => 'or',
    'hard_limit' => '50',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
      'roles' => array(),
      'facets' => array(),
      'force_deactivation' => TRUE,
      'regex' => FALSE,
      'reverse_dependency' => FALSE,
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => 0,
    'query_type' => 'term',
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
    'individual_parent' => 0,
    'limit_active_items' => 0,
    'pretty_paths_alias' => 'language',
  );
  $export['search_api@solr_repository_search::field_iso_language'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search::language';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = '';
  $facet->facet = 'language';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => 0,
    'query_type' => 'term',
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@solr_repository_search::language'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search::search_api_language';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = '';
  $facet->facet = 'search_api_language';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => 0,
    'query_type' => 'term',
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@solr_repository_search::search_api_language'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search:block:bm_field_searchable';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = 'block';
  $facet->facet = 'bm_field_searchable';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@solr_repository_search:block:bm_field_searchable'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search:block:body:format';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = 'block';
  $facet->facet = 'body:format';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'title_override' => 0,
    'title' => 'The main body text » Text format',
  );
  $export['search_api@solr_repository_search:block:body:format'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search:block:body:summary';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = 'block';
  $facet->facet = 'body:summary';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'title_override' => 0,
    'title' => 'The main body text » Summary',
  );
  $export['search_api@solr_repository_search:block:body:summary'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search:block:body:value';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = 'block';
  $facet->facet = 'body:value';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'title_override' => 0,
    'title' => 'The main body text » Text',
  );
  $export['search_api@solr_repository_search:block:body:value'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search:block:certified_accessible';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = 'block';
  $facet->facet = 'certified_accessible';
  $facet->enabled = FALSE;
  $facet->hash = 'SJafWiCpmFR9xv6hpbIR00MO51aHbA30';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_ajax_checkboxes',
    'filters' => array(
      'active_items' => array(
        'status' => 0,
        'weight' => '-50',
      ),
      'exclude_items' => array(
        'status' => 0,
        'weight' => '-49',
      ),
      'rewrite_items' => array(
        'status' => 1,
        'weight' => '-48',
      ),
      'narrow_results' => array(
        'status' => 0,
        'weight' => '-47',
      ),
      'show_if_minimum_items' => array(
        'status' => 0,
        'weight' => '-46',
      ),
      'deepest_level_items' => array(
        'status' => 0,
        'weight' => '-45',
      ),
      'filter_depth' => array(
        'status' => 0,
        'weight' => '-44',
      ),
      'hide_if_selected' => array(
        'status' => 0,
        'weight' => '-43',
      ),
    ),
    'active_sorts' => array(
      'active' => 'active',
      'indexed' => 'indexed',
      'count' => 'count',
      'display' => 'display',
      'natural' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'indexed' => '-49',
      'count' => '-48',
      'display' => '-47',
      'natural' => '-46',
    ),
    'sort_order' => array(
      'active' => '3',
      'indexed' => '4',
      'count' => '3',
      'display' => '4',
      'natural' => '4',
    ),
    'empty_behavior' => 'ajax_facets',
    'display_count' => 1,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'title_override' => 0,
    'title' => 'Certified Accessible',
    'soft_limit' => '20',
    'nofollow' => '1',
    'show_expanded' => 0,
    'reset_link' => 0,
    'show_reset_link' => 0,
    'reset_link_text' => 'Reset filter',
    'ajax_select_default_option_label' => 'Select',
    'empty_text' => array(
      'value' => '',
      'format' => 'filtered_html',
    ),
    'exclude' => '',
    'regex' => 0,
    'invert' => 0,
    'show_minimum_items' => 2,
    'depth' => 0,
    'parents' => 0,
  );
  $export['search_api@solr_repository_search:block:certified_accessible'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search:block:certified_accessible_by';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = 'block';
  $facet->facet = 'certified_accessible_by';
  $facet->enabled = TRUE;
  $facet->hash = 'cU0vk1sQsSlmVDjq86P50MWDEU38wnKI';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_ajax_checkboxes',
    'filters' => array(
      'active_items' => array(
        'status' => 0,
        'weight' => '-50',
      ),
      'exclude_items' => array(
        'status' => 0,
        'weight' => '-49',
      ),
      'rewrite_items' => array(
        'status' => 1,
        'weight' => '-48',
      ),
      'narrow_results' => array(
        'status' => 0,
        'weight' => '-47',
      ),
      'show_if_minimum_items' => array(
        'status' => 0,
        'weight' => '-46',
      ),
      'deepest_level_items' => array(
        'status' => 0,
        'weight' => '-45',
      ),
      'filter_depth' => array(
        'status' => 0,
        'weight' => '-44',
      ),
      'hide_if_selected' => array(
        'status' => 0,
        'weight' => '-43',
      ),
    ),
    'active_sorts' => array(
      'active' => 'active',
      'indexed' => 'indexed',
      'count' => 'count',
      'display' => 'display',
      'natural' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-48',
      'display' => '-47',
      'indexed' => '-49',
      'natural' => '-46',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
      'natural' => '4',
    ),
    'empty_behavior' => 'ajax_facets',
    'display_count' => 1,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'title_override' => 0,
    'title' => 'Certified Accessible By',
    'soft_limit' => '20',
    'nofollow' => '1',
    'show_expanded' => 0,
    'reset_link' => 0,
    'show_reset_link' => 0,
    'reset_link_text' => 'Reset filter',
    'ajax_select_default_option_label' => 'Select',
    'empty_text' => array(
      'value' => '',
      'format' => 'filtered_html',
    ),
    'exclude' => '',
    'regex' => 0,
    'invert' => 0,
    'show_minimum_items' => 2,
    'depth' => 0,
    'parents' => 0,
  );
  $export['search_api@solr_repository_search:block:certified_accessible_by'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search:block:changed';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = 'block';
  $facet->facet = 'changed';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'title_override' => 0,
    'title' => 'Date changed',
  );
  $export['search_api@solr_repository_search:block:changed'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search:block:created';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = 'block';
  $facet->facet = 'created';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'title_override' => 0,
    'title' => 'Date created',
  );
  $export['search_api@solr_repository_search:block:created'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search:block:field_access_restrictions';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = 'block';
  $facet->facet = 'field_access_restrictions';
  $facet->enabled = TRUE;
  $facet->hash = '0';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_ajax_checkboxes',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'indexed' => 'indexed',
      'count' => 'count',
      'display' => 'display',
      'natural' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'indexed' => '-49',
      'count' => '-48',
      'display' => '-47',
      'natural' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'indexed' => '4',
      'count' => '3',
      'display' => '4',
      'natural' => '4',
    ),
    'empty_behavior' => 'ajax_facets',
    'soft_limit' => '20',
    'nofollow' => 1,
    'show_expanded' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'full_html',
    ),
    'submit_realm' => 'Save and go back to realm settings',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'reset_link' => 0,
    'show_reset_link' => 0,
    'reset_link_text' => 'Reset filter',
    'ajax_select_default_option_label' => 'Select',
    'display_count' => TRUE,
    'title_override' => 0,
    'title' => 'Access Restrictions',
  );
  $export['search_api@solr_repository_search:block:field_access_restrictions'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search:block:field_audience';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = 'block';
  $facet->facet = 'field_audience';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'title_override' => 0,
    'title' => 'Audience',
  );
  $export['search_api@solr_repository_search:block:field_audience'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search:block:field_bibid';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = 'block';
  $facet->facet = 'field_bibid';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@solr_repository_search:block:field_bibid'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search:block:field_daisy_file_available';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = 'block';
  $facet->facet = 'field_daisy_file_available';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'title_override' => 0,
    'title' => 'Daisy File Available',
  );
  $export['search_api@solr_repository_search:block:field_daisy_file_available'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search:block:field_date';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = 'block';
  $facet->facet = 'field_date';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'title_override' => 0,
    'title' => 'Date',
  );
  $export['search_api@solr_repository_search:block:field_date'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search:block:field_dc_contributor';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = 'block';
  $facet->facet = 'field_dc_contributor';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'title_override' => 0,
    'title' => 'DC Contributor',
  );
  $export['search_api@solr_repository_search:block:field_dc_contributor'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search:block:field_dc_creator';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = 'block';
  $facet->facet = 'field_dc_creator';
  $facet->enabled = TRUE;
  $facet->hash = '0';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_ajax_checkboxes',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'natural' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'natural' => '0',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'natural' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'ajax_facets',
    'soft_limit' => '5',
    'nofollow' => 1,
    'show_expanded' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'full_html',
    ),
    'submit_realm' => 'Save and go back to realm settings',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'reset_link' => 0,
    'show_reset_link' => 0,
    'reset_link_text' => 'Reset filter',
    'ajax_select_default_option_label' => 'Select',
    'display_count' => TRUE,
    'title_override' => 0,
    'title' => 'Creator',
  );
  $export['search_api@solr_repository_search:block:field_dc_creator'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search:block:field_dc_description:field_dc_date';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = 'block';
  $facet->facet = 'field_dc_description:field_dc_date';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'title_override' => 0,
    'title' => 'DC Description » DC Date',
  );
  $export['search_api@solr_repository_search:block:field_dc_description:field_dc_date'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search:block:field_dc_description:field_dc_relation_value';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = 'block';
  $facet->facet = 'field_dc_description:field_dc_relation_value';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'title_override' => 0,
    'title' => 'DC Description » Value',
  );
  $export['search_api@solr_repository_search:block:field_dc_description:field_dc_relation_value'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search:block:field_dc_description:field_dc_subject_value:name';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = 'block';
  $facet->facet = 'field_dc_description:field_dc_subject_value:name';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@solr_repository_search:block:field_dc_description:field_dc_subject_value:name'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search:block:field_dc_description:field_name';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = 'block';
  $facet->facet = 'field_dc_description:field_name';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'title_override' => 0,
    'title' => 'DC Description » Field name',
  );
  $export['search_api@solr_repository_search:block:field_dc_description:field_name'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search:block:field_dc_subject';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = 'block';
  $facet->facet = 'field_dc_subject';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@solr_repository_search:block:field_dc_subject'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search:block:field_dc_subject:field_dc_relation_value';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = 'block';
  $facet->facet = 'field_dc_subject:field_dc_relation_value';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@solr_repository_search:block:field_dc_subject:field_dc_relation_value'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search:block:field_dc_subject:field_dc_subject_value:name';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = 'block';
  $facet->facet = 'field_dc_subject:field_dc_subject_value:name';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@solr_repository_search:block:field_dc_subject:field_dc_subject_value:name'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search:block:field_dc_subject:field_name';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = 'block';
  $facet->facet = 'field_dc_subject:field_name';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@solr_repository_search:block:field_dc_subject:field_name'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search:block:field_dc_subject:field_value';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = 'block';
  $facet->facet = 'field_dc_subject:field_value';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@solr_repository_search:block:field_dc_subject:field_value'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search:block:field_dc_subject:item_id';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = 'block';
  $facet->facet = 'field_dc_subject:item_id';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@solr_repository_search:block:field_dc_subject:item_id'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search:block:field_details';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = 'block';
  $facet->facet = 'field_details';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'title_override' => 0,
    'title' => 'Details',
  );
  $export['search_api@solr_repository_search:block:field_details'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search:block:field_file_resource:field_accessibility_tags';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = 'block';
  $facet->facet = 'field_file_resource:field_accessibility_tags';
  $facet->enabled = TRUE;
  $facet->hash = 'fWoz6f0dyVah4fjznWgwWbr6M4OU1Nf1';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_ajax_checkboxes',
    'filters' => array(
      'active_items' => array(
        'status' => 0,
        'weight' => '-50',
      ),
      'current_depth' => array(
        'status' => 0,
        'weight' => '-49',
      ),
      'exclude_items' => array(
        'status' => 0,
        'weight' => '-48',
      ),
      'rewrite_items' => array(
        'status' => 0,
        'weight' => '-47',
      ),
      'narrow_results' => array(
        'status' => 0,
        'weight' => '-46',
      ),
      'show_if_minimum_items' => array(
        'status' => 0,
        'weight' => '-45',
      ),
      'deepest_level_items' => array(
        'status' => 0,
        'weight' => '-44',
      ),
      'filter_depth' => array(
        'status' => 0,
        'weight' => '-43',
      ),
      'hide_if_selected' => array(
        'status' => 0,
        'weight' => '-42',
      ),
    ),
    'active_sorts' => array(
      'active' => 'active',
      'indexed' => 'indexed',
      'count' => 'count',
      'display' => 'display',
      'natural' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-48',
      'display' => '-47',
      'indexed' => '-49',
      'natural' => '-46',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
      'natural' => '4',
    ),
    'empty_behavior' => 'ajax_facets',
    'display_count' => 1,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'title_override' => 0,
    'title' => 'File Resource » Accessibility Tags',
    'soft_limit' => '5',
    'nofollow' => '1',
    'show_expanded' => 0,
    'reset_link' => 0,
    'show_reset_link' => 0,
    'reset_link_text' => 'Reset filter',
    'ajax_select_default_option_label' => 'Select',
    'empty_text' => array(
      'value' => '',
      'format' => 'filtered_html',
    ),
    'exclude' => '',
    'regex' => 0,
    'invert' => 0,
    'show_minimum_items' => 2,
    'depth' => 0,
    'parents' => 0,
  );
  $export['search_api@solr_repository_search:block:field_file_resource:field_accessibility_tags'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search:block:field_file_resource:field_file_format';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = 'block';
  $facet->facet = 'field_file_resource:field_file_format';
  $facet->enabled = TRUE;
  $facet->hash = '0';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_ajax_checkboxes',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'indexed' => 0,
      'natural' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'indexed' => '-48',
      'count' => '-49',
      'display' => '-48',
      'natural' => '-46',
    ),
    'sort_order' => array(
      'active' => '3',
      'indexed' => '4',
      'count' => '3',
      'display' => '4',
      'natural' => '4',
    ),
    'empty_behavior' => 'ajax_facets',
    'soft_limit' => '20',
    'nofollow' => 1,
    'show_expanded' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'full_html',
    ),
    'submit_realm' => 'Save and go back to realm settings',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'reset_link' => 0,
    'show_reset_link' => 0,
    'reset_link_text' => 'Reset filter',
    'ajax_select_default_option_label' => 'Select',
    'display_count' => 1,
    'title_override' => 0,
    'title' => 'File Resource » File Format',
  );
  $export['search_api@solr_repository_search:block:field_file_resource:field_file_format'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search:block:field_file_resource:field_file_upload_details';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = 'block';
  $facet->facet = 'field_file_resource:field_file_upload_details';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'title_override' => 0,
    'title' => 'File Resource » File upload details',
  );
  $export['search_api@solr_repository_search:block:field_file_resource:field_file_upload_details'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search:block:field_file_resource:field_performer';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = 'block';
  $facet->facet = 'field_file_resource:field_performer';
  $facet->enabled = TRUE;
  $facet->hash = '0';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_ajax_checkboxes',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'indexed' => 0,
      'natural' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '-47',
      'natural' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
      'natural' => '4',
    ),
    'empty_behavior' => 'ajax_facets',
    'soft_limit' => '5',
    'nofollow' => 1,
    'show_expanded' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'full_html',
    ),
    'submit_realm' => 'Save and go back to realm settings',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'reset_link' => 0,
    'show_reset_link' => 0,
    'reset_link_text' => 'Reset filter',
    'ajax_select_default_option_label' => 'Select',
    'display_count' => TRUE,
    'title_override' => 0,
    'title' => 'File Resource » Narrator',
  );
  $export['search_api@solr_repository_search:block:field_file_resource:field_performer'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search:block:field_file_resource:field_running_time';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = 'block';
  $facet->facet = 'field_file_resource:field_running_time';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'title_override' => 0,
    'title' => 'File Resource » Running Time',
  );
  $export['search_api@solr_repository_search:block:field_file_resource:field_running_time'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search:block:field_genre';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = 'block';
  $facet->facet = 'field_genre';
  $facet->enabled = TRUE;
  $facet->hash = '0';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_ajax_checkboxes',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'natural' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'natural' => '0',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'natural' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'ajax_facets',
    'soft_limit' => '5',
    'nofollow' => 1,
    'show_expanded' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'full_html',
    ),
    'submit_realm' => 'Save and go back to realm settings',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'reset_link' => 0,
    'show_reset_link' => 0,
    'reset_link_text' => 'Reset filter',
    'ajax_select_default_option_label' => 'Select',
  );
  $export['search_api@solr_repository_search:block:field_genre'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search:block:field_genre:name';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = 'block';
  $facet->facet = 'field_genre:name';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'title_override' => 0,
    'title' => 'Genre » Name',
  );
  $export['search_api@solr_repository_search:block:field_genre:name'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search:block:field_isbn';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = 'block';
  $facet->facet = 'field_isbn';
  $facet->enabled = TRUE;
  $facet->hash = '0';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'title_override' => 0,
    'title' => 'ISBN',
  );
  $export['search_api@solr_repository_search:block:field_isbn'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search:block:field_iso_language';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = 'block';
  $facet->facet = 'field_iso_language';
  $facet->enabled = TRUE;
  $facet->hash = '0';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_ajax_checkboxes',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'indexed' => 'indexed',
      'count' => 'count',
      'display' => 'display',
      'natural' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'indexed' => '-49',
      'count' => '-48',
      'display' => '-47',
      'natural' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'indexed' => '4',
      'count' => '3',
      'display' => '4',
      'natural' => '4',
    ),
    'empty_behavior' => 'ajax_facets',
    'soft_limit' => '20',
    'nofollow' => 1,
    'show_expanded' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'full_html',
    ),
    'submit_realm' => 'Save and go back to realm settings',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'reset_link' => 0,
    'show_reset_link' => 0,
    'reset_link_text' => 'Reset filter',
    'ajax_select_default_option_label' => 'Select',
    'display_count' => TRUE,
    'title_override' => 0,
    'title' => 'Language (Item)',
  );
  $export['search_api@solr_repository_search:block:field_iso_language'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search:block:field_keyword_index';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = 'block';
  $facet->facet = 'field_keyword_index';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@solr_repository_search:block:field_keyword_index'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search:block:field_marc_mapper';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = 'block';
  $facet->facet = 'field_marc_mapper';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'title_override' => 0,
    'title' => 'Marc Mapper',
  );
  $export['search_api@solr_repository_search:block:field_marc_mapper'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search:block:field_oclc_number';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = 'block';
  $facet->facet = 'field_oclc_number';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'title_override' => 0,
    'title' => 'OCLC Number',
  );
  $export['search_api@solr_repository_search:block:field_oclc_number'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search:block:field_publisher';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = 'block';
  $facet->facet = 'field_publisher';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'title_override' => 0,
    'title' => 'Publisher (obsolete)',
  );
  $export['search_api@solr_repository_search:block:field_publisher'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search:block:field_s3_path';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = 'block';
  $facet->facet = 'field_s3_path';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'title_override' => 0,
    'title' => 'S3 Path',
  );
  $export['search_api@solr_repository_search:block:field_s3_path'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search:block:field_source';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = 'block';
  $facet->facet = 'field_source';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@solr_repository_search:block:field_source'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search:block:field_system_control_number';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = 'block';
  $facet->facet = 'field_system_control_number';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'title_override' => 0,
    'title' => 'System Control Number',
  );
  $export['search_api@solr_repository_search:block:field_system_control_number'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search:block:field_title_alternate';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = 'block';
  $facet->facet = 'field_title_alternate';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'title_override' => 0,
    'title' => 'Alternate Title',
  );
  $export['search_api@solr_repository_search:block:field_title_alternate'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search:block:field_type_content';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = 'block';
  $facet->facet = 'field_type_content';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@solr_repository_search:block:field_type_content'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search:block:field_type_media';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = 'block';
  $facet->facet = 'field_type_media';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@solr_repository_search:block:field_type_media'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search:block:im_field_agency_type';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = 'block';
  $facet->facet = 'im_field_agency_type';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@solr_repository_search:block:im_field_agency_type'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search:block:im_field_dc_element';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = 'block';
  $facet->facet = 'im_field_dc_element';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@solr_repository_search:block:im_field_dc_element'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search:block:im_field_dc_subject_value';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = 'block';
  $facet->facet = 'im_field_dc_subject_value';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@solr_repository_search:block:im_field_dc_subject_value'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search:block:im_field_repeatable';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = 'block';
  $facet->facet = 'im_field_repeatable';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@solr_repository_search:block:im_field_repeatable'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search:block:im_field_visibility';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = 'block';
  $facet->facet = 'im_field_visibility';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@solr_repository_search:block:im_field_visibility'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search:block:language';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = 'block';
  $facet->facet = 'language';
  $facet->enabled = TRUE;
  $facet->hash = '0';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'indexed' => 'indexed',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-48',
      'display' => '-47',
      'indexed' => '-49',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'soft_limit' => '20',
    'nofollow' => 1,
    'show_expanded' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'full_html',
    ),
    'submit_realm' => 'Save and go back to realm settings',
  );
  $export['search_api@solr_repository_search:block:language'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search:block:nid';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = 'block';
  $facet->facet = 'nid';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'title_override' => 0,
    'title' => 'Node ID',
  );
  $export['search_api@solr_repository_search:block:nid'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search:block:search_api_aggregation_1';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = 'block';
  $facet->facet = 'search_api_aggregation_1';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'title_override' => 0,
    'title' => 'Title FullText',
  );
  $export['search_api@solr_repository_search:block:search_api_aggregation_1'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search:block:search_api_aggregation_2';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = 'block';
  $facet->facet = 'search_api_aggregation_2';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@solr_repository_search:block:search_api_aggregation_2'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search:block:search_api_aggregation_3';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = 'block';
  $facet->facet = 'search_api_aggregation_3';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@solr_repository_search:block:search_api_aggregation_3'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search:block:search_api_aggregation_4';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = 'block';
  $facet->facet = 'search_api_aggregation_4';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'title_override' => 0,
    'title' => 'aggregated_title',
  );
  $export['search_api@solr_repository_search:block:search_api_aggregation_4'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search:block:search_api_aggregation_5';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = 'block';
  $facet->facet = 'search_api_aggregation_5';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'title_override' => 0,
    'title' => 'aggregated_author',
  );
  $export['search_api@solr_repository_search:block:search_api_aggregation_5'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search:block:search_api_language';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = 'block';
  $facet->facet = 'search_api_language';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'indexed' => 'indexed',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-48',
      'display' => '-47',
      'indexed' => '-49',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'soft_limit' => '20',
    'nofollow' => 1,
    'show_expanded' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'full_html',
    ),
    'submit_realm' => 'Save and go back to realm settings',
    'display_count' => TRUE,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'title_override' => 0,
    'title' => 'Item language',
  );
  $export['search_api@solr_repository_search:block:search_api_language'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search:block:sm_field_dc_coverage_type';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_dc_coverage_type';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@solr_repository_search:block:sm_field_dc_coverage_type'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search:block:sm_field_dc_description_type';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_dc_description_type';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@solr_repository_search:block:sm_field_dc_description_type'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search:block:sm_field_dc_relation_qualifiers';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_dc_relation_qualifiers';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@solr_repository_search:block:sm_field_dc_relation_qualifiers'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search:block:sm_field_dc_subject_scheme';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_dc_subject_scheme';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@solr_repository_search:block:sm_field_dc_subject_scheme'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search:block:sm_field_field_type';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_field_type';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@solr_repository_search:block:sm_field_field_type'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search:block:sm_field_qualifier_date';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = 'block';
  $facet->facet = 'sm_field_qualifier_date';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@solr_repository_search:block:sm_field_qualifier_date'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search:block:title';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = 'block';
  $facet->facet = 'title';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'title_override' => 0,
    'title' => 'Title',
  );
  $export['search_api@solr_repository_search:block:title'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_repository_search:block:type';
  $facet->searcher = 'search_api@solr_repository_search';
  $facet->realm = 'block';
  $facet->facet = 'type';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
    'display_count' => TRUE,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'title_override' => 0,
    'title' => 'Content type',
  );
  $export['search_api@solr_repository_search:block:type'] = $facet;

  return $export;
}
