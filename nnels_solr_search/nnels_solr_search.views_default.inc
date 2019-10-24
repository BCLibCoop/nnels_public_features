<?php

/**
 * @file
 * nnels_searchwithinsearch.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function nnels_searchwithinsearch_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'repository_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_solr_repository_search';
  $view->human_name = 'Repository Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Your Search Results';
  $handler->display->display_options['css_class'] = 'search-results';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    1 => '1',
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'input_required';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['text_input_required'] = '';
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['total_pages'] = '10';
  $handler->display->display_options['pager']['options']['quantity'] = '10';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Total items found */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['ui_name'] = 'Total items found';
  $handler->display->display_options['header']['result']['content'] = '<div id="search-view-total-count">Search found @total item</div>';
  /* No results behavior: Global: PHP */
  $handler->display->display_options['empty']['php']['id'] = 'php';
  $handler->display->display_options['empty']['php']['table'] = 'views';
  $handler->display->display_options['empty']['php']['field'] = 'php';
  $handler->display->display_options['empty']['php']['empty'] = TRUE;
  $handler->display->display_options['empty']['php']['php_output'] = '<?php
  $html = \'<h4>No results</h4>\';
  //include cals_extended_search module to return bookshare, openlibrary targets
  if (function_exists("cals_request_new_title_views_link") ) {
    $html = cals_request_new_title_views_link();
  }
  print $html;
?>
<br />
<p>Sorry, it looks like we don\'t have that title in our collection.</p>
<p>You may request the title by completing the <a href="/request-title">Request a Title form</a> and we will add it to our queue.</p>';
  /* Relationship: Indexed Node: Date */
  $handler->display->display_options['relationships']['field_date']['id'] = 'field_date';
  $handler->display->display_options['relationships']['field_date']['table'] = 'search_api_index_solr_repository_search';
  $handler->display->display_options['relationships']['field_date']['field'] = 'field_date';
  /* Relationship: Indexed Node: Date */
  $handler->display->display_options['relationships']['field_date_1']['id'] = 'field_date_1';
  $handler->display->display_options['relationships']['field_date_1']['table'] = 'search_api_index_solr_repository_search';
  $handler->display->display_options['relationships']['field_date_1']['field'] = 'field_date';
  /* Relationship: Indexed Node: File Resource */
  $handler->display->display_options['relationships']['field_file_resource']['id'] = 'field_file_resource';
  $handler->display->display_options['relationships']['field_file_resource']['table'] = 'search_api_index_solr_repository_search';
  $handler->display->display_options['relationships']['field_file_resource']['field'] = 'field_file_resource';
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_solr_repository_search';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'search_api_index_solr_repository_search';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['type'] = 'title_linked';
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  /* Field: Indexed Node: Creator */
  $handler->display->display_options['fields']['field_dc_creator']['id'] = 'field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['table'] = 'search_api_index_solr_repository_search';
  $handler->display->display_options['fields']['field_dc_creator']['field'] = 'field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['label'] = 'By';
  $handler->display->display_options['fields']['field_dc_creator']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_dc_creator']['delta_offset'] = '0';
  /* Field: The main body text: Text (indexed) */
  $handler->display->display_options['fields']['body_value']['id'] = 'body_value';
  $handler->display->display_options['fields']['body_value']['table'] = 'search_api_index_solr_repository_search';
  $handler->display->display_options['fields']['body_value']['field'] = 'body_value';
  $handler->display->display_options['fields']['body_value']['label'] = '';
  $handler->display->display_options['fields']['body_value']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body_value']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['body_value']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body_value']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body_value']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body_value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body_value']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['body_value']['link_to_entity'] = 0;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_keyword_index']['id'] = 'field_keyword_index';
  $handler->display->display_options['fields']['field_keyword_index']['table'] = 'search_api_index_solr_repository_search';
  $handler->display->display_options['fields']['field_keyword_index']['field'] = 'field_keyword_index';
  $handler->display->display_options['fields']['field_keyword_index']['label'] = 'Keywords / Topics';
  $handler->display->display_options['fields']['field_keyword_index']['hide_empty'] = TRUE;
  /* Field: Indexed Node: Genre */
  $handler->display->display_options['fields']['field_genre']['id'] = 'field_genre';
  $handler->display->display_options['fields']['field_genre']['table'] = 'search_api_index_solr_repository_search';
  $handler->display->display_options['fields']['field_genre']['field'] = 'field_genre';
  $handler->display->display_options['fields']['field_genre']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_genre']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_genre']['view_mode'] = 'full';
  /* Sort criterion: Search: Relevance */
  $handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_index_solr_repository_search';
  $handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['order'] = 'DESC';
  $handler->display->display_options['sorts']['search_api_relevance']['expose']['label'] = 'Relevance';
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext_2']['id'] = 'search_api_views_fulltext_2';
  $handler->display->display_options['filters']['search_api_views_fulltext_2']['table'] = 'search_api_index_solr_repository_search';
  $handler->display->display_options['filters']['search_api_views_fulltext_2']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext_2']['group'] = 1;
  $handler->display->display_options['filters']['search_api_views_fulltext_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext_2']['expose']['operator_id'] = 'search_api_views_fulltext_2_op';
  $handler->display->display_options['filters']['search_api_views_fulltext_2']['expose']['label'] = 'Keywords';
  $handler->display->display_options['filters']['search_api_views_fulltext_2']['expose']['operator'] = 'search_api_views_fulltext_2_op';
  $handler->display->display_options['filters']['search_api_views_fulltext_2']['expose']['identifier'] = 'search_api_views_fulltext_2';
  $handler->display->display_options['filters']['search_api_views_fulltext_2']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
    8 => 0,
    11 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext_2']['fields'] = array(
    'body:value' => 'body:value',
    'field_dc_description:field_dc_relation_value' => 'field_dc_description:field_dc_relation_value',
    'field_file_resource:field_performer' => 'field_file_resource:field_performer',
    'field_genre:name' => 'field_genre:name',
    'field_isbn' => 'field_isbn',
    'field_keyword_index' => 'field_keyword_index',
    'field_oclc_number' => 'field_oclc_number',
    'field_publisher' => 'field_publisher',
    'field_source' => 'field_source',
    'field_subject:name' => 'field_subject:name',
    'field_title_alternate' => 'field_title_alternate',
    'search_api_aggregation_1' => 'search_api_aggregation_1',
    'search_api_aggregation_2' => 'search_api_aggregation_2',
    'search_api_aggregation_3' => 'search_api_aggregation_3',
    'search_api_aggregation_4' => 'search_api_aggregation_4',
    'search_api_aggregation_5' => 'search_api_aggregation_5',
  );
  /* Filter criterion: Indexed Node: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_solr_repository_search';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'repository_item' => 'repository_item',
  );
  /* Filter criterion: Indexed Node: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_solr_repository_search';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'view-list-ul';
  $handler->display->display_options['style_options']['wrapper_class'] = 'view-list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: PHP */
  $handler->display->display_options['empty']['php']['id'] = 'php';
  $handler->display->display_options['empty']['php']['table'] = 'views';
  $handler->display->display_options['empty']['php']['field'] = 'php';
  $handler->display->display_options['empty']['php']['empty'] = TRUE;
  $handler->display->display_options['empty']['php']['php_output'] = '<?php
  $html = \'<h1 class="title no-results" id="page-title">No Results</h1>\';
  //include cals_extended_search module to return bookshare, openlibrary targets
  if (function_exists("cals_request_new_title_views_link") ) {
    $html = cals_request_new_title_views_link();
  }
  print $html;
?>';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Indexed Node: File Resource */
  $handler->display->display_options['relationships']['field_file_resource']['id'] = 'field_file_resource';
  $handler->display->display_options['relationships']['field_file_resource']['table'] = 'search_api_index_solr_repository_search';
  $handler->display->display_options['relationships']['field_file_resource']['field'] = 'field_file_resource';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<img src="http://dev.nnels.ca/sites/all/themes/NNELS_CALS_v001/images/NNELS-header-logo.png">';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: ISBN */
  $handler->display->display_options['fields']['field_isbn']['id'] = 'field_isbn';
  $handler->display->display_options['fields']['field_isbn']['table'] = 'search_api_index_solr_repository_search';
  $handler->display->display_options['fields']['field_isbn']['field'] = 'field_isbn';
  $handler->display->display_options['fields']['field_isbn']['label'] = '';
  $handler->display->display_options['fields']['field_isbn']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_isbn']['alter']['text'] = '<img src="https://covers.openlibrary.org/b/isbn/[field_isbn-value]-S.jpg">';
  $handler->display->display_options['fields']['field_isbn']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_isbn']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_isbn']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_isbn']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_isbn']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_isbn']['delta_offset'] = '0';
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_solr_repository_search';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Bookshelf button */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Bookshelf button';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php

$flag = flag_get_flag(\'bookshelf\');
if ($flag) {
  print \'<div class="bookshelf-add-wrapper">\' .
                            \'<i class="fa fa-bookmark-o flag-bookmark-icon" aria-hidden="true"></i>\' .
                            flag_create_link(\'bookshelf\', $data->_entity_properties[\'nid\']) .
                            \'</div>\';
}
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'search_api_index_solr_repository_search';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['element_type'] = 'div';
  $handler->display->display_options['fields']['title_field']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title_field']['type'] = 'title_linked';
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  /* Field: Indexed Node: Creator */
  $handler->display->display_options['fields']['field_dc_creator']['id'] = 'field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['table'] = 'search_api_index_solr_repository_search';
  $handler->display->display_options['fields']['field_dc_creator']['field'] = 'field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['label'] = 'Author';
  $handler->display->display_options['fields']['field_dc_creator']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_dc_creator']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_dc_creator']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_dc_creator']['delta_offset'] = '0';
  /* Field: Embed Edition statement view */
  $handler->display->display_options['fields']['view_1']['id'] = 'view_1';
  $handler->display->display_options['fields']['view_1']['table'] = 'views';
  $handler->display->display_options['fields']['view_1']['field'] = 'view';
  $handler->display->display_options['fields']['view_1']['ui_name'] = 'Embed Edition statement view';
  $handler->display->display_options['fields']['view_1']['label'] = '';
  $handler->display->display_options['fields']['view_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['view_1']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['view_1']['view'] = 'field_collection_view_edition_statement';
  $handler->display->display_options['fields']['view_1']['display'] = 'embed_1';
  $handler->display->display_options['fields']['view_1']['arguments'] = '[!nid]';
  /* Field: The main body text: Text (indexed) */
  $handler->display->display_options['fields']['body_value']['id'] = 'body_value';
  $handler->display->display_options['fields']['body_value']['table'] = 'search_api_index_solr_repository_search';
  $handler->display->display_options['fields']['body_value']['field'] = 'body_value';
  $handler->display->display_options['fields']['body_value']['label'] = 'Summary';
  $handler->display->display_options['fields']['body_value']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body_value']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body_value']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body_value']['element_type'] = 'div';
  $handler->display->display_options['fields']['body_value']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['body_value']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['body_value']['link_to_entity'] = 0;
  /* Field: Indexed Node: Genre */
  $handler->display->display_options['fields']['field_genre']['id'] = 'field_genre';
  $handler->display->display_options['fields']['field_genre']['table'] = 'search_api_index_solr_repository_search';
  $handler->display->display_options['fields']['field_genre']['field'] = 'field_genre';
  $handler->display->display_options['fields']['field_genre']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_genre']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_genre']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_genre']['list']['separator'] = '&nbsp;,&nbsp;';
  $handler->display->display_options['fields']['field_genre']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_genre']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_genre']['bypass_access'] = 0;
  /* Field: Embed Solr API Search - file fields */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['ui_name'] = 'Embed Solr API Search - file fields';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['element_wrapper_class'] = 'solr-embed-file-field-collection';
  $handler->display->display_options['fields']['view']['view'] = 'field_collection_view_repo_files';
  $handler->display->display_options['fields']['view']['display'] = 'embed_6';
  $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';
  /* Field: Indexed Node: URLs External */
  $handler->display->display_options['fields']['field_urls_external']['id'] = 'field_urls_external';
  $handler->display->display_options['fields']['field_urls_external']['table'] = 'search_api_index_solr_repository_search';
  $handler->display->display_options['fields']['field_urls_external']['field'] = 'field_urls_external';
  $handler->display->display_options['fields']['field_urls_external']['label'] = 'Resource URLs';
  $handler->display->display_options['fields']['field_urls_external']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_urls_external']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_urls_external']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_urls_external']['multi_type'] = 'ul';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext_2']['id'] = 'search_api_views_fulltext_2';
  $handler->display->display_options['filters']['search_api_views_fulltext_2']['table'] = 'search_api_index_solr_repository_search';
  $handler->display->display_options['filters']['search_api_views_fulltext_2']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext_2']['group'] = 1;
  $handler->display->display_options['filters']['search_api_views_fulltext_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext_2']['expose']['operator_id'] = 'search_api_views_fulltext_2_op';
  $handler->display->display_options['filters']['search_api_views_fulltext_2']['expose']['label'] = 'Keywords';
  $handler->display->display_options['filters']['search_api_views_fulltext_2']['expose']['operator'] = 'search_api_views_fulltext_2_op';
  $handler->display->display_options['filters']['search_api_views_fulltext_2']['expose']['identifier'] = 'search_api_views_fulltext_2';
  $handler->display->display_options['filters']['search_api_views_fulltext_2']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
    8 => 0,
    11 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext_2']['fields'] = array(
    'body:value' => 'body:value',
    'field_dc_description:field_dc_relation_value' => 'field_dc_description:field_dc_relation_value',
    'field_file_resource:field_performer' => 'field_file_resource:field_performer',
    'field_genre:name' => 'field_genre:name',
    'field_isbn' => 'field_isbn',
    'field_keyword_index' => 'field_keyword_index',
    'field_oclc_number' => 'field_oclc_number',
    'field_publisher' => 'field_publisher',
    'field_source' => 'field_source',
    'field_subject:name' => 'field_subject:name',
    'field_title_alternate' => 'field_title_alternate',
    'search_api_aggregation_1' => 'search_api_aggregation_1',
    'search_api_aggregation_2' => 'search_api_aggregation_2',
    'search_api_aggregation_3' => 'search_api_aggregation_3',
    'search_api_aggregation_4' => 'search_api_aggregation_4',
    'search_api_aggregation_5' => 'search_api_aggregation_5',
  );
  /* Filter criterion: Indexed Node: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_solr_repository_search';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'repository_item' => 'repository_item',
  );
  /* Filter criterion: Indexed Node: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_solr_repository_search';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['use_ajax_flags'] = array(
    'bookshelf' => 'bookshelf',
  );
  $handler->display->display_options['use_ajax_flags_noscrolltop'] = 1;
  $handler->display->display_options['path'] = 'repository-search';
  $handler->display->display_options['menu']['title'] = 'Repos Search (prototype)';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'search-block';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $export['repository_search'] = $view;

  return $export;
}
