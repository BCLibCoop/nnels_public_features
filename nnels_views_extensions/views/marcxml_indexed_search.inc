<?php

$view = new view();
$view->name = 'marcxml_indexed_search';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'search_api_index_marcxml_record_content';
$view->human_name = 'MarcXML Indexed Search';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'MarcXML Indexed Search';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'role';
$handler->display->display_options['access']['role'] = array(
  3 => '3',
  7 => '7',
);
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '50';
$handler->display->display_options['style_plugin'] = 'table';
/* Field: Global: View result counter */
$handler->display->display_options['fields']['counter']['id'] = 'counter';
$handler->display->display_options['fields']['counter']['table'] = 'views';
$handler->display->display_options['fields']['counter']['field'] = 'counter';
$handler->display->display_options['fields']['counter']['label'] = '';
$handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['counter']['counter_start'] = '1';
$handler->display->display_options['fields']['counter']['reverse'] = 1;
/* Field: Indexed Node: Node ID */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'search_api_index_marcxml_record_content';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['label'] = 'NID';
$handler->display->display_options['fields']['nid']['separator'] = '';
$handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
/* Field: Indexed Node: Title */
$handler->display->display_options['fields']['title_field']['id'] = 'title_field';
$handler->display->display_options['fields']['title_field']['table'] = 'search_api_index_marcxml_record_content';
$handler->display->display_options['fields']['title_field']['field'] = 'title_field';
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = 'Edit';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/node/[nid]/edit">Edit NID: [nid]</a>';
/* Field: Search: Excerpt */
$handler->display->display_options['fields']['search_api_excerpt']['id'] = 'search_api_excerpt';
$handler->display->display_options['fields']['search_api_excerpt']['table'] = 'search_api_index_marcxml_record_content';
$handler->display->display_options['fields']['search_api_excerpt']['field'] = 'search_api_excerpt';
$handler->display->display_options['fields']['search_api_excerpt']['label'] = 'Record Content';
$handler->display->display_options['fields']['search_api_excerpt']['alter']['trim_whitespace'] = TRUE;
$handler->display->display_options['fields']['search_api_excerpt']['alter']['max_length'] = '200';
$handler->display->display_options['fields']['search_api_excerpt']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['search_api_excerpt']['alter']['trim'] = TRUE;
$handler->display->display_options['fields']['search_api_excerpt']['link_to_entity'] = 0;
/* Filter criterion: Search: Fulltext search */
$handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
$handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_marcxml_record_content';
$handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
$handler->display->display_options['filters']['search_api_views_fulltext']['value'] = 'xFFFD;';
$handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
$handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
$handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'MARCXML Index Search';
$handler->display->display_options['filters']['search_api_views_fulltext']['expose']['description'] = 'Fulltext';
$handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
$handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
$handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
  2 => '2',
);
$handler->display->display_options['filters']['search_api_views_fulltext']['min_length'] = '2';
$handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
  'field_xml_string' => 'field_xml_string',
  'lsn_001' => 'lsn_001',
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'admin/views/cataloguing/marcxml-indexed-search';
