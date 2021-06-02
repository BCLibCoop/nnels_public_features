<?php

/**
 * @file
 * nnels_content_cafe_views_companion.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function nnels_content_cafe_views_companion_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'content_cafe_cover';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Content Cafe Cover';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Content Cafe Cover';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Selected Jacket */
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['id'] = 'content_cafe_selected_jacket';
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['table'] = 'node';
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['field'] = 'content_cafe_selected_jacket';
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['label'] = '';
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['image_style'] = 'book_cover__200x300_';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'repository_item' => 'repository_item',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['content_cafe_cover'] = $view;

  $view = new view();
  $view->name = 'repository_items_front_page';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'repository items front page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'most-downloaded';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: File Resource (field_file_resource) */
  $handler->display->display_options['relationships']['field_file_resource_value']['id'] = 'field_file_resource_value';
  $handler->display->display_options['relationships']['field_file_resource_value']['table'] = 'field_data_field_file_resource';
  $handler->display->display_options['relationships']['field_file_resource_value']['field'] = 'field_file_resource_value';
  $handler->display->display_options['relationships']['field_file_resource_value']['delta'] = '-1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Selected Jacket */
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['id'] = 'content_cafe_selected_jacket';
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['table'] = 'node';
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['field'] = 'content_cafe_selected_jacket';
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['label'] = '';
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['element_class'] = 'views-field-delta';
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['empty'] = '<img src="/sites/default/modules/nnels_content_cafe/img/blank.gif" alt="" />';
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['image_style'] = 'book_cover__50x75_';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '180';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '60',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'repository_item' => 'repository_item',
  );
  /* Filter criterion: Content: ISBN (field_isbn) */
  $handler->display->display_options['filters']['field_isbn_value']['id'] = 'field_isbn_value';
  $handler->display->display_options['filters']['field_isbn_value']['table'] = 'field_data_field_isbn';
  $handler->display->display_options['filters']['field_isbn_value']['field'] = 'field_isbn_value';
  $handler->display->display_options['filters']['field_isbn_value']['operator'] = 'not empty';
  /* Filter criterion: Field: S3 File Upload (field_s3_file_upload:fid) */
  $handler->display->display_options['filters']['field_s3_file_upload_fid']['id'] = 'field_s3_file_upload_fid';
  $handler->display->display_options['filters']['field_s3_file_upload_fid']['table'] = 'field_data_field_s3_file_upload';
  $handler->display->display_options['filters']['field_s3_file_upload_fid']['field'] = 'field_s3_file_upload_fid';
  $handler->display->display_options['filters']['field_s3_file_upload_fid']['relationship'] = 'field_file_resource_value';
  $handler->display->display_options['filters']['field_s3_file_upload_fid']['operator'] = 'not empty';

  /* Display: Block - Recently Added */
  $handler = $view->new_display('block', 'Block - Recently Added', 'bra');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'recently-added';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'view-list-ul';
  $handler->display->display_options['style_options']['wrapper_class'] = 'view-list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Recently Added Title */
  $handler->display->display_options['header']['recently_added_title']['id'] = 'recently_added_title';
  $handler->display->display_options['header']['recently_added_title']['table'] = 'views';
  $handler->display->display_options['header']['recently_added_title']['field'] = 'recently_added_title';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Completion Date (field_completion_date) */
  $handler->display->display_options['sorts']['field_completion_date_value']['id'] = 'field_completion_date_value';
  $handler->display->display_options['sorts']['field_completion_date_value']['table'] = 'field_data_field_completion_date';
  $handler->display->display_options['sorts']['field_completion_date_value']['field'] = 'field_completion_date_value';
  $handler->display->display_options['sorts']['field_completion_date_value']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'repository_item' => 'repository_item',
  );
  /* Filter criterion: Content: File Resource (field_file_resource) */
  $handler->display->display_options['filters']['field_file_resource_value']['id'] = 'field_file_resource_value';
  $handler->display->display_options['filters']['field_file_resource_value']['table'] = 'field_data_field_file_resource';
  $handler->display->display_options['filters']['field_file_resource_value']['field'] = 'field_file_resource_value';
  $handler->display->display_options['filters']['field_file_resource_value']['operator'] = 'not empty';
  $handler->display->display_options['block_description'] = 'Block - Recently Added';

  /* Display: Block - Most Downloaded */
  $handler = $view->new_display('block', 'Block - Most Downloaded', 'bmd');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'view-list-ul';
  $handler->display->display_options['style_options']['wrapper_class'] = 'view-list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Selected Jacket */
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['id'] = 'content_cafe_selected_jacket';
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['table'] = 'node';
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['field'] = 'content_cafe_selected_jacket';
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['label'] = '';
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['element_class'] = 'views-field-delta';
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['empty'] = '<img src="/sites/default/modules/nnels_content_cafe/img/blank.gif" alt="" />';
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['image_style'] = 'book_cover__50x75_';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '120';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '60',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'repository_item' => 'repository_item',
  );
  /* Filter criterion: Content: File Resource (field_file_resource) */
  $handler->display->display_options['filters']['field_file_resource_value']['id'] = 'field_file_resource_value';
  $handler->display->display_options['filters']['field_file_resource_value']['table'] = 'field_data_field_file_resource';
  $handler->display->display_options['filters']['field_file_resource_value']['field'] = 'field_file_resource_value';
  $handler->display->display_options['filters']['field_file_resource_value']['operator'] = 'not empty';
  /* Filter criterion: Content: Promoted to front page status */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $handler->display->display_options['block_description'] = 'Block - Top Picks';
  $export['repository_items_front_page'] = $view;

  $view = new view();
  $view->name = 'repository_items_subject_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Repository Items Browse List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Recently Added';
  $handler->display->display_options['css_class'] = 'browse-results';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '5';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Term Title */
  $handler->display->display_options['header']['term_title']['id'] = 'term_title';
  $handler->display->display_options['header']['term_title']['table'] = 'views';
  $handler->display->display_options['header']['term_title']['field'] = 'term_title';
  /* Relationship: Content: File Resource (field_file_resource) */
  $handler->display->display_options['relationships']['field_file_resource_value']['id'] = 'field_file_resource_value';
  $handler->display->display_options['relationships']['field_file_resource_value']['table'] = 'field_data_field_file_resource';
  $handler->display->display_options['relationships']['field_file_resource_value']['field'] = 'field_file_resource_value';
  $handler->display->display_options['relationships']['field_file_resource_value']['delta'] = '-1';
  /* Field: Content: ISBN */
  $handler->display->display_options['fields']['field_isbn']['id'] = 'field_isbn';
  $handler->display->display_options['fields']['field_isbn']['table'] = 'field_data_field_isbn';
  $handler->display->display_options['fields']['field_isbn']['field'] = 'field_isbn';
  $handler->display->display_options['fields']['field_isbn']['label'] = '';
  $handler->display->display_options['fields']['field_isbn']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_isbn']['alter']['text'] = '<img src="http://covers.openlibrary.org/b/isbn/[field_isbn-value]-S.jpg">';
  $handler->display->display_options['fields']['field_isbn']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_isbn']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_isbn']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_isbn']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Author(s) */
  $handler->display->display_options['fields']['field_dc_creator']['id'] = 'field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['table'] = 'field_data_field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['field'] = 'field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['label'] = 'Author';
  $handler->display->display_options['fields']['field_dc_creator']['delta_offset'] = '0';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Summary';
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '240';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  /* Field: Content: Link to content */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read more';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'repository_item' => 'repository_item',
  );
  /* Filter criterion: Field: S3 File Upload (field_s3_file_upload:fid) */
  $handler->display->display_options['filters']['field_s3_file_upload_fid']['id'] = 'field_s3_file_upload_fid';
  $handler->display->display_options['filters']['field_s3_file_upload_fid']['table'] = 'field_data_field_s3_file_upload';
  $handler->display->display_options['filters']['field_s3_file_upload_fid']['field'] = 'field_s3_file_upload_fid';
  $handler->display->display_options['filters']['field_s3_file_upload_fid']['relationship'] = 'field_file_resource_value';
  $handler->display->display_options['filters']['field_s3_file_upload_fid']['operator'] = 'not empty';

  /* Display: Recent Items Feed */
  $handler = $view->new_display('feed', 'Recent Items Feed', 'feed_1');
  $handler->display->display_options['display_description'] = 'Displays recently added repo items sorted by Completion Date descending.';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['row_options']['item_length'] = 'rss';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Completion Date (field_completion_date) */
  $handler->display->display_options['sorts']['field_completion_date_value']['id'] = 'field_completion_date_value';
  $handler->display->display_options['sorts']['field_completion_date_value']['table'] = 'field_data_field_completion_date';
  $handler->display->display_options['sorts']['field_completion_date_value']['field'] = 'field_completion_date_value';
  $handler->display->display_options['sorts']['field_completion_date_value']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['path'] = 'recently-added/rss';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'page' => 0,
    'page_2' => 0,
    'page_3' => 0,
    'page_4' => 0,
    'page_5' => 0,
  );

  /* Display: Page - Browse by subject */
  $handler = $view->new_display('page', 'Page - Browse by subject', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'By Subject';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'browse-results browse-by-subject';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'view-list-ul';
  $handler->display->display_options['style_options']['wrapper_class'] = 'view-list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: Selected Jacket */
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['id'] = 'content_cafe_selected_jacket';
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['table'] = 'node';
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['field'] = 'content_cafe_selected_jacket';
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['label'] = '';
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['element_class'] = 'views-field-field-isbn';
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['empty'] = '<img src="/sites/default/modules/nnels_content_cafe/img/blank.gif" alt="" />';
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['image_style'] = 'book_cover__50x75_';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Author(s) */
  $handler->display->display_options['fields']['field_dc_creator']['id'] = 'field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['table'] = 'field_data_field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['field'] = 'field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['label'] = 'Author';
  $handler->display->display_options['fields']['field_dc_creator']['delta_offset'] = '0';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Summary';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '240';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '240',
  );
  /* Field: Content: Link to content */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read more';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: File Resource */
  $handler->display->display_options['fields']['field_file_resource']['id'] = 'field_file_resource';
  $handler->display->display_options['fields']['field_file_resource']['table'] = 'field_data_field_file_resource';
  $handler->display->display_options['fields']['field_file_resource']['field'] = 'field_file_resource';
  $handler->display->display_options['fields']['field_file_resource']['label'] = '';
  $handler->display->display_options['fields']['field_file_resource']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_resource']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_resource']['empty'] = '<span class="daisy-icon-na">No file available</span>';
  $handler->display->display_options['fields']['field_file_resource']['type'] = 'field_collection_views_view';
  $handler->display->display_options['fields']['field_file_resource']['settings'] = array(
    'name' => 'field_collection_view_repo_files',
    'display_id' => 'embed_2',
    'add' => '',
  );
  $handler->display->display_options['fields']['field_file_resource']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_file_resource']['delta_offset'] = '0';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_class'] = 'views-field-field-file-resource';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'field_collection_view_repo_files';
  $handler->display->display_options['fields']['view']['display'] = 'embed_6';
  $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Subject (field_subject) */
  $handler->display->display_options['arguments']['field_subject_tid']['id'] = 'field_subject_tid';
  $handler->display->display_options['arguments']['field_subject_tid']['table'] = 'field_data_field_subject';
  $handler->display->display_options['arguments']['field_subject_tid']['field'] = 'field_subject_tid';
  $handler->display->display_options['arguments']['field_subject_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_subject_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_subject_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_subject_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_subject_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'repository_item' => 'repository_item',
  );
  /* Filter criterion: Field: S3 File Upload (field_s3_file_upload:fid) */
  $handler->display->display_options['filters']['field_s3_file_upload_fid']['id'] = 'field_s3_file_upload_fid';
  $handler->display->display_options['filters']['field_s3_file_upload_fid']['table'] = 'field_data_field_s3_file_upload';
  $handler->display->display_options['filters']['field_s3_file_upload_fid']['field'] = 'field_s3_file_upload_fid';
  $handler->display->display_options['filters']['field_s3_file_upload_fid']['relationship'] = 'field_file_resource_value';
  $handler->display->display_options['filters']['field_s3_file_upload_fid']['operator'] = 'not empty';
  /* Filter criterion: Content: Subject (field_subject) */
  $handler->display->display_options['filters']['field_subject_tid']['id'] = 'field_subject_tid';
  $handler->display->display_options['filters']['field_subject_tid']['table'] = 'field_data_field_subject';
  $handler->display->display_options['filters']['field_subject_tid']['field'] = 'field_subject_tid';
  $handler->display->display_options['filters']['field_subject_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_subject_tid']['value'] = '';
  $handler->display->display_options['filters']['field_subject_tid']['vocabulary'] = 'subject';
  $handler->display->display_options['path'] = 'subjects/%';

  /* Display: Page - Recent Items */
  $handler = $view->new_display('page', 'Page - Recent Items', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recently Added Titles';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'view-list-ul';
  $handler->display->display_options['style_options']['wrapper_class'] = 'view-list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Feed Icons */
  $handler->display->display_options['header']['feed_icons']['id'] = 'feed_icons';
  $handler->display->display_options['header']['feed_icons']['table'] = 'views';
  $handler->display->display_options['header']['feed_icons']['field'] = 'feed_icons';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: Selected Jacket */
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['id'] = 'content_cafe_selected_jacket';
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['table'] = 'node';
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['field'] = 'content_cafe_selected_jacket';
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['label'] = '';
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['element_class'] = 'views-field-field-isbn';
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['empty'] = '<img src="/sites/default/modules/nnels_content_cafe/img/blank.gif" alt="" />';
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['image_style'] = 'book_cover__50x75_';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Author(s) */
  $handler->display->display_options['fields']['field_dc_creator']['id'] = 'field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['table'] = 'field_data_field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['field'] = 'field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['label'] = 'Author';
  $handler->display->display_options['fields']['field_dc_creator']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_dc_creator']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_dc_creator']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_dc_creator']['separator'] = ' ;  ';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Summary';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '240';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  /* Field: Content: Link to content */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read more';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: File Resource */
  $handler->display->display_options['fields']['field_file_resource']['id'] = 'field_file_resource';
  $handler->display->display_options['fields']['field_file_resource']['table'] = 'field_data_field_file_resource';
  $handler->display->display_options['fields']['field_file_resource']['field'] = 'field_file_resource';
  $handler->display->display_options['fields']['field_file_resource']['label'] = '';
  $handler->display->display_options['fields']['field_file_resource']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_resource']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_resource']['empty'] = '<span class="daisy-icon-na">No file available</span>';
  $handler->display->display_options['fields']['field_file_resource']['type'] = 'field_collection_views_view';
  $handler->display->display_options['fields']['field_file_resource']['settings'] = array(
    'name' => 'field_collection_view_repo_files',
    'display_id' => 'embed_2',
    'add' => '',
  );
  $handler->display->display_options['fields']['field_file_resource']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_file_resource']['delta_offset'] = '0';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_class'] = 'views-field-field-file-resource';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'field_collection_view_repo_files';
  $handler->display->display_options['fields']['view']['display'] = 'embed_6';
  $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Completion Date (field_completion_date) */
  $handler->display->display_options['sorts']['field_completion_date_value']['id'] = 'field_completion_date_value';
  $handler->display->display_options['sorts']['field_completion_date_value']['table'] = 'field_data_field_completion_date';
  $handler->display->display_options['sorts']['field_completion_date_value']['field'] = 'field_completion_date_value';
  $handler->display->display_options['sorts']['field_completion_date_value']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'recently-added';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Recently Added';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Page - Browse By Genre */
  $handler = $view->new_display('page', 'Page - Browse By Genre', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recently Added (Browse By Genre)';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'browse-results browse-by-genre';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Field: Genre Harmonized (field_genre_harmonized) */
  $handler->display->display_options['relationships']['field_genre_harmonized_tid']['id'] = 'field_genre_harmonized_tid';
  $handler->display->display_options['relationships']['field_genre_harmonized_tid']['table'] = 'field_data_field_genre_harmonized';
  $handler->display->display_options['relationships']['field_genre_harmonized_tid']['field'] = 'field_genre_harmonized_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: Selected Jacket */
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['id'] = 'content_cafe_selected_jacket';
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['table'] = 'node';
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['field'] = 'content_cafe_selected_jacket';
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['label'] = '';
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['element_class'] = 'views-field-field-isbn';
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['empty'] = '<img src="/sites/default/modules/nnels_content_cafe/img/blank.gif" alt="" />';
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['image_style'] = 'book_cover__50x75_';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Author(s) */
  $handler->display->display_options['fields']['field_dc_creator']['id'] = 'field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['table'] = 'field_data_field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['field'] = 'field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['label'] = 'Author';
  $handler->display->display_options['fields']['field_dc_creator']['delta_offset'] = '0';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Summary';
  /* Field: Content: Genre */
  $handler->display->display_options['fields']['field_genre']['id'] = 'field_genre';
  $handler->display->display_options['fields']['field_genre']['table'] = 'field_data_field_genre';
  $handler->display->display_options['fields']['field_genre']['field'] = 'field_genre';
  $handler->display->display_options['fields']['field_genre']['label'] = '';
  $handler->display->display_options['fields']['field_genre']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_genre']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_genre']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_genre']['delta_offset'] = '0';
  /* Field: Field: Genre Harmonized */
  $handler->display->display_options['fields']['field_genre_harmonized']['id'] = 'field_genre_harmonized';
  $handler->display->display_options['fields']['field_genre_harmonized']['table'] = 'field_data_field_genre_harmonized';
  $handler->display->display_options['fields']['field_genre_harmonized']['field'] = 'field_genre_harmonized';
  $handler->display->display_options['fields']['field_genre_harmonized']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_genre_harmonized']['delta_offset'] = '0';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: File Resource */
  $handler->display->display_options['fields']['field_file_resource']['id'] = 'field_file_resource';
  $handler->display->display_options['fields']['field_file_resource']['table'] = 'field_data_field_file_resource';
  $handler->display->display_options['fields']['field_file_resource']['field'] = 'field_file_resource';
  $handler->display->display_options['fields']['field_file_resource']['label'] = '';
  $handler->display->display_options['fields']['field_file_resource']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_resource']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_resource']['empty'] = '<span class="daisy-icon-na">No file available</span>';
  $handler->display->display_options['fields']['field_file_resource']['type'] = 'field_collection_views_view';
  $handler->display->display_options['fields']['field_file_resource']['settings'] = array(
    'name' => 'field_collection_view_repo_files',
    'display_id' => 'embed_2',
    'add' => '',
  );
  $handler->display->display_options['fields']['field_file_resource']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_file_resource']['delta_offset'] = '0';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_class'] = 'views-field-field-file-resource';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'field_collection_view_repo_files';
  $handler->display->display_options['fields']['view']['display'] = 'embed_6';
  $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  $handler->display->display_options['sorts']['nid']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Genre Harmonized (field_genre_harmonized) */
  $handler->display->display_options['arguments']['field_genre_harmonized_tid']['id'] = 'field_genre_harmonized_tid';
  $handler->display->display_options['arguments']['field_genre_harmonized_tid']['table'] = 'field_data_field_genre_harmonized';
  $handler->display->display_options['arguments']['field_genre_harmonized_tid']['field'] = 'field_genre_harmonized_tid';
  $handler->display->display_options['arguments']['field_genre_harmonized_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_genre_harmonized_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_genre_harmonized_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_genre_harmonized_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_genre_harmonized_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'repository_item' => 'repository_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Genre Harmonized */
  $handler->display->display_options['filters']['field_genre_harmonized_tid']['id'] = 'field_genre_harmonized_tid';
  $handler->display->display_options['filters']['field_genre_harmonized_tid']['table'] = 'field_data_field_genre_harmonized';
  $handler->display->display_options['filters']['field_genre_harmonized_tid']['field'] = 'field_genre_harmonized_tid';
  $handler->display->display_options['filters']['field_genre_harmonized_tid']['ui_name'] = 'Genre Harmonized';
  $handler->display->display_options['filters']['field_genre_harmonized_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_genre_harmonized_tid']['value'] = '';
  $handler->display->display_options['filters']['field_genre_harmonized_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_genre_harmonized_tid']['vocabulary'] = 'genre_harmonized';
  $handler->display->display_options['path'] = 'browse-repository-items-genre';
  $handler->display->display_options['menu']['title'] = 'Browse by Genre';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Page - Browse By Author */
  $handler = $view->new_display('page', 'Page - Browse By Author', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recently Added (Browse By Author)';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_dc_creator',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['class'] = 'author-titles';
  $handler->display->display_options['style_options']['wrapper_class'] = 'item-list author';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Genre (field_genre) */
  $handler->display->display_options['relationships']['field_genre_tid']['id'] = 'field_genre_tid';
  $handler->display->display_options['relationships']['field_genre_tid']['table'] = 'field_data_field_genre';
  $handler->display->display_options['relationships']['field_genre_tid']['field'] = 'field_genre_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Selected Jacket */
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['id'] = 'content_cafe_selected_jacket';
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['table'] = 'node';
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['field'] = 'content_cafe_selected_jacket';
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['label'] = '';
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['element_class'] = 'views-field-field-isbn';
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['empty'] = '<img src="/sites/default/modules/nnels_content_cafe/img/blank.gif" alt="" />';
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['image_style'] = 'book_cover__50x75_';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Author(s) */
  $handler->display->display_options['fields']['field_dc_creator']['id'] = 'field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['table'] = 'field_data_field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['field'] = 'field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['label'] = '';
  $handler->display->display_options['fields']['field_dc_creator']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_dc_creator']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dc_creator']['delta_offset'] = '0';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Summary';
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['empty'] = 'There is no summary available for this title.';
  /* Field: Content: Genre */
  $handler->display->display_options['fields']['field_genre']['id'] = 'field_genre';
  $handler->display->display_options['fields']['field_genre']['table'] = 'field_data_field_genre';
  $handler->display->display_options['fields']['field_genre']['field'] = 'field_genre';
  $handler->display->display_options['fields']['field_genre']['label'] = '';
  $handler->display->display_options['fields']['field_genre']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_genre']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_genre']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_genre']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_genre']['delta_offset'] = '0';
  /* Field: Content: File Resource */
  $handler->display->display_options['fields']['field_file_resource']['id'] = 'field_file_resource';
  $handler->display->display_options['fields']['field_file_resource']['table'] = 'field_data_field_file_resource';
  $handler->display->display_options['fields']['field_file_resource']['field'] = 'field_file_resource';
  $handler->display->display_options['fields']['field_file_resource']['label'] = '';
  $handler->display->display_options['fields']['field_file_resource']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_resource']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_resource']['empty'] = '<span class="daisy-icon-na">No file available</span>';
  $handler->display->display_options['fields']['field_file_resource']['type'] = 'field_collection_views_view';
  $handler->display->display_options['fields']['field_file_resource']['settings'] = array(
    'name' => 'field_collection_view_repo_files',
    'display_id' => 'embed_2',
    'add' => '',
  );
  $handler->display->display_options['fields']['field_file_resource']['delta_offset'] = '0';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_class'] = 'views-field-field-file-resource';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'field_collection_view_repo_files';
  $handler->display->display_options['fields']['view']['display'] = 'embed_6';
  $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Author(s) (field_dc_creator) */
  $handler->display->display_options['sorts']['field_dc_creator_value']['id'] = 'field_dc_creator_value';
  $handler->display->display_options['sorts']['field_dc_creator_value']['table'] = 'field_data_field_dc_creator';
  $handler->display->display_options['sorts']['field_dc_creator_value']['field'] = 'field_dc_creator_value';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  $handler->display->display_options['sorts']['nid']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'repository_item' => 'repository_item',
  );
  /* Filter criterion: Content: Author(s) (field_dc_creator) */
  $handler->display->display_options['filters']['field_dc_creator_value']['id'] = 'field_dc_creator_value';
  $handler->display->display_options['filters']['field_dc_creator_value']['table'] = 'field_data_field_dc_creator';
  $handler->display->display_options['filters']['field_dc_creator_value']['field'] = 'field_dc_creator_value';
  $handler->display->display_options['filters']['field_dc_creator_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_dc_creator_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_dc_creator_value']['expose']['operator_id'] = 'field_dc_creator_value_op';
  $handler->display->display_options['filters']['field_dc_creator_value']['expose']['label'] = 'Creator or Author';
  $handler->display->display_options['filters']['field_dc_creator_value']['expose']['operator'] = 'field_dc_creator_value_op';
  $handler->display->display_options['filters']['field_dc_creator_value']['expose']['identifier'] = 'field_dc_creator_value';
  $handler->display->display_options['filters']['field_dc_creator_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Author(s) (field_dc_creator) */
  $handler->display->display_options['filters']['field_dc_creator_value_1']['id'] = 'field_dc_creator_value_1';
  $handler->display->display_options['filters']['field_dc_creator_value_1']['table'] = 'field_data_field_dc_creator';
  $handler->display->display_options['filters']['field_dc_creator_value_1']['field'] = 'field_dc_creator_value';
  $handler->display->display_options['filters']['field_dc_creator_value_1']['operator'] = 'not empty';
  /* Filter criterion: Content: Author(s) (field_dc_creator) */
  $handler->display->display_options['filters']['field_dc_creator_value_2']['id'] = 'field_dc_creator_value_2';
  $handler->display->display_options['filters']['field_dc_creator_value_2']['table'] = 'field_data_field_dc_creator';
  $handler->display->display_options['filters']['field_dc_creator_value_2']['field'] = 'field_dc_creator_value';
  $handler->display->display_options['filters']['field_dc_creator_value_2']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['field_dc_creator_value_2']['value'] = '?';
  $handler->display->display_options['path'] = 'browse-repository-items-by-author';
  $handler->display->display_options['menu']['title'] = 'Browse by Genre';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Page - Always Available */
  $handler = $view->new_display('page', 'Page - Always Available', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Always Available Titles';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'view-list-ul';
  $handler->display->display_options['style_options']['wrapper_class'] = 'view-list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Selected Jacket */
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['id'] = 'content_cafe_selected_jacket';
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['table'] = 'node';
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['field'] = 'content_cafe_selected_jacket';
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['label'] = '';
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['element_class'] = 'views-field-field-isbn';
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['empty'] = '<img src="/sites/default/modules/nnels_content_cafe/img/blank.gif" alt="" />';
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['image_style'] = 'book_cover__50x75_';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Author(s) */
  $handler->display->display_options['fields']['field_dc_creator']['id'] = 'field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['table'] = 'field_data_field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['field'] = 'field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['label'] = 'Author';
  $handler->display->display_options['fields']['field_dc_creator']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_dc_creator']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_dc_creator']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_dc_creator']['delta_offset'] = '0';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Summary';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '240';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  /* Field: Content: Link to content */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read more';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: File Resource */
  $handler->display->display_options['fields']['field_file_resource']['id'] = 'field_file_resource';
  $handler->display->display_options['fields']['field_file_resource']['table'] = 'field_data_field_file_resource';
  $handler->display->display_options['fields']['field_file_resource']['field'] = 'field_file_resource';
  $handler->display->display_options['fields']['field_file_resource']['label'] = '';
  $handler->display->display_options['fields']['field_file_resource']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_resource']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_resource']['empty'] = '<span class="daisy-icon-na">No file available</span>';
  $handler->display->display_options['fields']['field_file_resource']['type'] = 'field_collection_views_view';
  $handler->display->display_options['fields']['field_file_resource']['settings'] = array(
    'name' => 'field_collection_view_repo_files',
    'display_id' => 'embed_2',
    'add' => '',
  );
  $handler->display->display_options['fields']['field_file_resource']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_file_resource']['delta_offset'] = '0';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_class'] = 'views-field-field-file-resource';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'field_collection_view_repo_files';
  $handler->display->display_options['fields']['view']['display'] = 'embed_6';
  $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';
  /* Field: Content: URLs External */
  $handler->display->display_options['fields']['field_urls_external']['id'] = 'field_urls_external';
  $handler->display->display_options['fields']['field_urls_external']['table'] = 'field_data_field_urls_external';
  $handler->display->display_options['fields']['field_urls_external']['field'] = 'field_urls_external';
  $handler->display->display_options['fields']['field_urls_external']['label'] = 'Resource URLs';
  $handler->display->display_options['fields']['field_urls_external']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_urls_external']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_urls_external']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Completion Date (field_completion_date) */
  $handler->display->display_options['sorts']['field_completion_date_value']['id'] = 'field_completion_date_value';
  $handler->display->display_options['sorts']['field_completion_date_value']['table'] = 'field_data_field_completion_date';
  $handler->display->display_options['sorts']['field_completion_date_value']['field'] = 'field_completion_date_value';
  $handler->display->display_options['sorts']['field_completion_date_value']['order'] = 'DESC';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'repository_item' => 'repository_item',
  );
  /* Filter criterion: Content: Access Restrictions (field_access_restrictions) */
  $handler->display->display_options['filters']['field_access_restrictions_value']['id'] = 'field_access_restrictions_value';
  $handler->display->display_options['filters']['field_access_restrictions_value']['table'] = 'field_data_field_access_restrictions';
  $handler->display->display_options['filters']['field_access_restrictions_value']['field'] = 'field_access_restrictions_value';
  $handler->display->display_options['filters']['field_access_restrictions_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['path'] = 'always-available';
  $handler->display->display_options['menu']['title'] = 'Recently Added';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Page - Browse by Collection */
  $handler = $view->new_display('page', 'Page - Browse by Collection', 'page_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'By Collection';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'browse-results';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'view-list-ul';
  $handler->display->display_options['style_options']['wrapper_class'] = 'view-list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: File Resource (field_file_resource) */
  $handler->display->display_options['relationships']['field_file_resource_value']['id'] = 'field_file_resource_value';
  $handler->display->display_options['relationships']['field_file_resource_value']['table'] = 'field_data_field_file_resource';
  $handler->display->display_options['relationships']['field_file_resource_value']['field'] = 'field_file_resource_value';
  $handler->display->display_options['relationships']['field_file_resource_value']['delta'] = '-1';
  /* Relationship: Content: DC Relation (field_dc_relation) */
  $handler->display->display_options['relationships']['field_dc_relation_value']['id'] = 'field_dc_relation_value';
  $handler->display->display_options['relationships']['field_dc_relation_value']['table'] = 'field_data_field_dc_relation';
  $handler->display->display_options['relationships']['field_dc_relation_value']['field'] = 'field_dc_relation_value';
  $handler->display->display_options['relationships']['field_dc_relation_value']['delta'] = '-1';
  /* Relationship: Field collection item: Entity with the DC Relation (field_dc_relation) */
  $handler->display->display_options['relationships']['field_dc_relation_node']['id'] = 'field_dc_relation_node';
  $handler->display->display_options['relationships']['field_dc_relation_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_dc_relation_node']['field'] = 'field_dc_relation_node';
  $handler->display->display_options['relationships']['field_dc_relation_node']['relationship'] = 'field_dc_relation_value';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Selected Jacket */
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['id'] = 'content_cafe_selected_jacket';
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['table'] = 'node';
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['field'] = 'content_cafe_selected_jacket';
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['label'] = '';
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['element_class'] = 'views-field-field-isbn';
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['empty'] = '<img src="/sites/default/modules/nnels_content_cafe/img/blank.gif" alt="" />';
  $handler->display->display_options['fields']['content_cafe_selected_jacket']['image_style'] = 'book_cover__50x75_';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Author(s) */
  $handler->display->display_options['fields']['field_dc_creator']['id'] = 'field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['table'] = 'field_data_field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['field'] = 'field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['label'] = 'Author';
  $handler->display->display_options['fields']['field_dc_creator']['delta_offset'] = '0';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Summary';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '240';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  /* Field: Content: Genre */
  $handler->display->display_options['fields']['field_genre']['id'] = 'field_genre';
  $handler->display->display_options['fields']['field_genre']['table'] = 'field_data_field_genre';
  $handler->display->display_options['fields']['field_genre']['field'] = 'field_genre';
  $handler->display->display_options['fields']['field_genre']['label'] = '';
  $handler->display->display_options['fields']['field_genre']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_genre']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_genre']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_genre']['delta_offset'] = '0';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_class'] = 'views-field-field-file-resource';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'field_collection_view_repo_files';
  $handler->display->display_options['fields']['view']['display'] = 'embed_6';
  $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';
  /* Field: Content: URLs External */
  $handler->display->display_options['fields']['field_urls_external']['id'] = 'field_urls_external';
  $handler->display->display_options['fields']['field_urls_external']['table'] = 'field_data_field_urls_external';
  $handler->display->display_options['fields']['field_urls_external']['field'] = 'field_urls_external';
  $handler->display->display_options['fields']['field_urls_external']['label'] = 'Resource URLs';
  $handler->display->display_options['fields']['field_urls_external']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_urls_external']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_urls_external']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_urls_external']['multi_type'] = 'ul';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field collection item: Value (term) (field_dc_relation_term_value) */
  $handler->display->display_options['arguments']['field_dc_relation_term_value_tid']['id'] = 'field_dc_relation_term_value_tid';
  $handler->display->display_options['arguments']['field_dc_relation_term_value_tid']['table'] = 'field_data_field_dc_relation_term_value';
  $handler->display->display_options['arguments']['field_dc_relation_term_value_tid']['field'] = 'field_dc_relation_term_value_tid';
  $handler->display->display_options['arguments']['field_dc_relation_term_value_tid']['relationship'] = 'field_dc_relation_value';
  $handler->display->display_options['arguments']['field_dc_relation_term_value_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_dc_relation_term_value_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_dc_relation_term_value_tid']['default_argument_options']['argument'] = '29992';
  $handler->display->display_options['arguments']['field_dc_relation_term_value_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_dc_relation_term_value_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_dc_relation_term_value_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'repository_item' => 'repository_item',
  );
  $handler->display->display_options['path'] = 'relations/%';
  $handler->display->display_options['menu']['title'] = 'Browse by Genre';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['repository_items_subject_list'] = $view;

  return $export;
}
