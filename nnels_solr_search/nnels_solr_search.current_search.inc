<?php

/**
 * @file
 * nnels_searchwithinsearch.current_search.inc
 */

/**
 * Implements hook_current_search_default_items().
 */
function nnels_searchwithinsearch_current_search_default_items() {
  $export = array();

  $item = new stdClass();
  $item->disabled = FALSE; /* Edit this to true to make a default item disabled initially */
  $item->api_version = 1;
  $item->name = 'reset_filters';
  $item->label = 'Reset filters';
  $item->settings = array(
    'items' => array(
      'reset_filters' => array(
        'id' => 'reset_filters',
        'label' => 'Reset Filters',
        'text' => 'Reset All Filters',
        'plural' => 0,
        'text_plural' => '',
        'plural_condition' => 'facetapi_results:result-count',
        'wrapper' => 1,
        'element' => 'div',
        'css' => 1,
        'classes' => 'reset-filters-link-wrapper',
        'weight' => '0',
      ),
    ),
    'advanced' => array(
      'empty_searches' => '2',
    ),
  );
  $export['reset_filters'] = $item;

  return $export;
}
