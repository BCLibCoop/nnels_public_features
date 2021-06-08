<?php

/**
 * @file
 * nnels_additional_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function nnels_additional_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'field_collection_view_commercially_available';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'field collection view commercially available';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'repo-item comercially-available';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '';
  $handler->display->display_options['pager']['options']['tags']['first'] = '';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '';
  $handler->display->display_options['pager']['options']['tags']['next'] = '';
  $handler->display->display_options['pager']['options']['tags']['last'] = '';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = TRUE;
  $handler->display->display_options['footer']['area']['content'] = '[nothing_2]';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<span class="no-file-avai-icon">No file available????</span>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Field collection item: Entity with the Commercial Sources (field_commercial_sources) */
  $handler->display->display_options['relationships']['field_commercial_sources_node']['id'] = 'field_commercial_sources_node';
  $handler->display->display_options['relationships']['field_commercial_sources_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_commercial_sources_node']['field'] = 'field_commercial_sources_node';
  $handler->display->display_options['relationships']['field_commercial_sources_node']['required'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Access Restrictions */
  $handler->display->display_options['fields']['field_access_restrictions']['id'] = 'field_access_restrictions';
  $handler->display->display_options['fields']['field_access_restrictions']['table'] = 'field_data_field_access_restrictions';
  $handler->display->display_options['fields']['field_access_restrictions']['field'] = 'field_access_restrictions';
  $handler->display->display_options['fields']['field_access_restrictions']['relationship'] = 'field_commercial_sources_node';
  $handler->display->display_options['fields']['field_access_restrictions']['label'] = 'ACCESS';
  $handler->display->display_options['fields']['field_access_restrictions']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_access_restrictions']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_access_restrictions']['type'] = 'list_key';
  /* Field: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['label'] = 'TMP';
  $handler->display->display_options['fields']['item_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['item_id']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['item_id']['separator'] = '';
  /* Field: Field collection item: Field path */
  $handler->display->display_options['fields']['field_path']['id'] = 'field_path';
  $handler->display->display_options['fields']['field_path']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['field_path']['field'] = 'field_path';
  $handler->display->display_options['fields']['field_path']['label'] = '';
  $handler->display->display_options['fields']['field_path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_path']['hide_alter_empty'] = FALSE;
  /* Field: Field collection item: Host Entity ID */
  $handler->display->display_options['fields']['host_entity_id']['id'] = 'host_entity_id';
  $handler->display->display_options['fields']['host_entity_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_id']['field'] = 'host_entity_id';
  $handler->display->display_options['fields']['host_entity_id']['label'] = '';
  $handler->display->display_options['fields']['host_entity_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_id']['hide_alter_empty'] = FALSE;
  /* Field: Field collection item: Host Entity Path */
  $handler->display->display_options['fields']['host_entity_path']['id'] = 'host_entity_path';
  $handler->display->display_options['fields']['host_entity_path']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_path']['field'] = 'host_entity_path';
  $handler->display->display_options['fields']['host_entity_path']['label'] = '';
  $handler->display->display_options['fields']['host_entity_path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_path']['hide_alter_empty'] = FALSE;
  /* Field: Field collection item: Host Entity Type */
  $handler->display->display_options['fields']['host_entity_type']['id'] = 'host_entity_type';
  $handler->display->display_options['fields']['host_entity_type']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_type']['field'] = 'host_entity_type';
  $handler->display->display_options['fields']['host_entity_type']['label'] = '';
  $handler->display->display_options['fields']['host_entity_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_type']['hide_alter_empty'] = FALSE;
  /* Field: Field: S3 File Upload */
  $handler->display->display_options['fields']['field_s3_file_upload_1']['id'] = 'field_s3_file_upload_1';
  $handler->display->display_options['fields']['field_s3_file_upload_1']['table'] = 'field_data_field_s3_file_upload';
  $handler->display->display_options['fields']['field_s3_file_upload_1']['field'] = 'field_s3_file_upload';
  $handler->display->display_options['fields']['field_s3_file_upload_1']['label'] = 'URL';
  $handler->display->display_options['fields']['field_s3_file_upload_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s3_file_upload_1']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['field_s3_file_upload_1']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_s3_file_upload_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s3_file_upload_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s3_file_upload_1']['type'] = 'file_url_plain';
  /* Field: Field: S3 File Upload */
  $handler->display->display_options['fields']['field_s3_file_upload']['id'] = 'field_s3_file_upload';
  $handler->display->display_options['fields']['field_s3_file_upload']['table'] = 'field_data_field_s3_file_upload';
  $handler->display->display_options['fields']['field_s3_file_upload']['field'] = 'field_s3_file_upload';
  $handler->display->display_options['fields']['field_s3_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_s3_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s3_file_upload']['empty'] = 'File not yet available';
  $handler->display->display_options['fields']['field_s3_file_upload']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_s3_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s3_file_upload']['type'] = 'file_url_plain';
  /* Field: Field collection item: Running Time */
  $handler->display->display_options['fields']['field_running_time']['id'] = 'field_running_time';
  $handler->display->display_options['fields']['field_running_time']['table'] = 'field_data_field_running_time';
  $handler->display->display_options['fields']['field_running_time']['field'] = 'field_running_time';
  $handler->display->display_options['fields']['field_running_time']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_running_time']['alter']['text'] = '[field_running_time]';
  $handler->display->display_options['fields']['field_running_time']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_running_time']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_running_time']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  $handler->display->display_options['fields']['field_running_time']['delta_offset'] = '0';
  /* Field: Field collection item: Narrator */
  $handler->display->display_options['fields']['field_performer']['id'] = 'field_performer';
  $handler->display->display_options['fields']['field_performer']['table'] = 'field_data_field_performer';
  $handler->display->display_options['fields']['field_performer']['field'] = 'field_performer';
  $handler->display->display_options['fields']['field_performer']['label'] = 'Performed / Narrated by';
  $handler->display->display_options['fields']['field_performer']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_performer']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_performer']['separator'] = '; ';
  /* Field: Field collection item: Availability / Status */
  $handler->display->display_options['fields']['field_availability_status']['id'] = 'field_availability_status';
  $handler->display->display_options['fields']['field_availability_status']['table'] = 'field_data_field_availability_status';
  $handler->display->display_options['fields']['field_availability_status']['field'] = 'field_availability_status';
  $handler->display->display_options['fields']['field_availability_status']['exclude'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '[field_path]/[item_id]/edit?destination=[host_entity_path]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Delete';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = '[field_path]/[item_id]/delete?destination=[host_entity_path]';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = 'Add a File Entry';
  $handler->display->display_options['fields']['nothing_2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['path'] = '[field_path]/add/[host_entity_type]/[host_entity_id]?destination=[host_entity_path]';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  /* Sort criterion: Field collection item: Field collection item ID */
  $handler->display->display_options['sorts']['item_id']['id'] = 'item_id';
  $handler->display->display_options['sorts']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['sorts']['item_id']['field'] = 'item_id';
  /* Contextual filter: Field collection item: Field collection item ID */
  $handler->display->display_options['arguments']['item_id']['id'] = 'item_id';
  $handler->display->display_options['arguments']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['arguments']['item_id']['field'] = 'item_id';
  $handler->display->display_options['arguments']['item_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['item_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['item_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['item_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['item_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['item_id']['break_phrase'] = TRUE;
  /* Filter criterion: Field collection item: Field collection item ID */
  $handler->display->display_options['filters']['item_id']['id'] = 'item_id';
  $handler->display->display_options['filters']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['filters']['item_id']['field'] = 'item_id';
  $handler->display->display_options['filters']['item_id']['operator'] = 'not empty';

  /* Display: Embed - Detail - Admin */
  $handler = $view->new_display('embed', 'Embed - Detail - Admin', 'embed_4');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'repo-item comercially-available';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'view-list-ul';
  $handler->display->display_options['style_options']['wrapper_class'] = 'view-list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<h2 class="block__title block-title">Commercially Available Resources:</h2>';
  $handler->display->display_options['header']['area']['format'] = 'block_text';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<span class="add-new-link">[nothing_2]</span>';
  $handler->display->display_options['footer']['area']['format'] = 'block_text';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Add Button */
  $handler->display->display_options['empty']['add_button']['id'] = 'add_button';
  $handler->display->display_options['empty']['add_button']['table'] = 'views';
  $handler->display->display_options['empty']['add_button']['field'] = 'add_button';
  $handler->display->display_options['empty']['add_button']['empty'] = TRUE;
  $handler->display->display_options['empty']['add_button']['path'] = 'field-collection/field-commercial-sources/add/node/';
  $handler->display->display_options['empty']['add_button']['text'] = 'Add New';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: S3 Path */
  $handler->display->display_options['fields']['field_s3_path']['id'] = 'field_s3_path';
  $handler->display->display_options['fields']['field_s3_path']['table'] = 'field_data_field_s3_path';
  $handler->display->display_options['fields']['field_s3_path']['field'] = 'field_s3_path';
  $handler->display->display_options['fields']['field_s3_path']['label'] = '';
  $handler->display->display_options['fields']['field_s3_path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s3_path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s3_path']['type'] = 'text_plain';
  /* Field: Field: File Format */
  $handler->display->display_options['fields']['field_file_format']['id'] = 'field_file_format';
  $handler->display->display_options['fields']['field_file_format']['table'] = 'field_data_field_file_format';
  $handler->display->display_options['fields']['field_file_format']['field'] = 'field_file_format';
  $handler->display->display_options['fields']['field_file_format']['label'] = '';
  $handler->display->display_options['fields']['field_file_format']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_format']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_format']['delta_offset'] = '0';
  /* Field: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['label'] = 'TMP';
  $handler->display->display_options['fields']['item_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['item_id']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['item_id']['separator'] = '';
  /* Field: Field collection item: Field path */
  $handler->display->display_options['fields']['field_path']['id'] = 'field_path';
  $handler->display->display_options['fields']['field_path']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['field_path']['field'] = 'field_path';
  $handler->display->display_options['fields']['field_path']['label'] = '';
  $handler->display->display_options['fields']['field_path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_path']['hide_alter_empty'] = FALSE;
  /* Field: Field collection item: Host Entity ID */
  $handler->display->display_options['fields']['host_entity_id']['id'] = 'host_entity_id';
  $handler->display->display_options['fields']['host_entity_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_id']['field'] = 'host_entity_id';
  $handler->display->display_options['fields']['host_entity_id']['label'] = '';
  $handler->display->display_options['fields']['host_entity_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_id']['hide_alter_empty'] = FALSE;
  /* Field: Field collection item: Host Entity Path */
  $handler->display->display_options['fields']['host_entity_path']['id'] = 'host_entity_path';
  $handler->display->display_options['fields']['host_entity_path']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_path']['field'] = 'host_entity_path';
  $handler->display->display_options['fields']['host_entity_path']['label'] = '';
  $handler->display->display_options['fields']['host_entity_path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_path']['hide_alter_empty'] = FALSE;
  /* Field: Field collection item: Host Entity Type */
  $handler->display->display_options['fields']['host_entity_type']['id'] = 'host_entity_type';
  $handler->display->display_options['fields']['host_entity_type']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_type']['field'] = 'host_entity_type';
  $handler->display->display_options['fields']['host_entity_type']['label'] = '';
  $handler->display->display_options['fields']['host_entity_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_type']['hide_alter_empty'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '[field_path]/[item_id]/edit?destination=[host_entity_path]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Delete';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = '[field_path]/[item_id]/delete?destination=[host_entity_path]';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = 'Add New';
  $handler->display->display_options['fields']['nothing_2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['path'] = '[field_path]/add/[host_entity_type]/[host_entity_id]?destination=[host_entity_path]';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  /* Field: Field: File Format */
  $handler->display->display_options['fields']['field_file_format_1']['id'] = 'field_file_format_1';
  $handler->display->display_options['fields']['field_file_format_1']['table'] = 'field_data_field_file_format';
  $handler->display->display_options['fields']['field_file_format_1']['field'] = 'field_file_format';
  $handler->display->display_options['fields']['field_file_format_1']['label'] = '';
  $handler->display->display_options['fields']['field_file_format_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_format_1']['element_label_colon'] = FALSE;
  /* Field: Field collection item: URL */
  $handler->display->display_options['fields']['field_url_external_1']['id'] = 'field_url_external_1';
  $handler->display->display_options['fields']['field_url_external_1']['table'] = 'field_data_field_url_external';
  $handler->display->display_options['fields']['field_url_external_1']['field'] = 'field_url_external';
  $handler->display->display_options['fields']['field_url_external_1']['label'] = '';
  $handler->display->display_options['fields']['field_url_external_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_url_external_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url_external_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_url_external_1']['type'] = 'link_title_plain';
  /* Field: Field collection item: URL */
  $handler->display->display_options['fields']['field_url_external']['id'] = 'field_url_external';
  $handler->display->display_options['fields']['field_url_external']['table'] = 'field_data_field_url_external';
  $handler->display->display_options['fields']['field_url_external']['field'] = 'field_url_external';
  $handler->display->display_options['fields']['field_url_external']['label'] = '';
  $handler->display->display_options['fields']['field_url_external']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_url_external']['alter']['text'] = '[field_file_format] at [field_url_external-title]';
  $handler->display->display_options['fields']['field_url_external']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_url_external']['alter']['path'] = '[field_url_external-url]';
  $handler->display->display_options['fields']['field_url_external']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url_external']['click_sort_column'] = 'url';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_commercial_sources_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Embed - Detail - Patron */
  $handler = $view->new_display('embed', 'Embed - Detail - Patron', 'embed_5');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'repo-item comercially-available public';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'view-list-ul';
  $handler->display->display_options['style_options']['wrapper_class'] = 'view-list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2 class="block__title block-title">Commercially Available Resources:</h2>
<p class="description">This title is available in NNELS. However, as it is commercially available, please consider purchasing yourself, or suggesting the title to your public library.</p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['label'] = 'TMP';
  $handler->display->display_options['fields']['item_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['item_id']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['item_id']['separator'] = '';
  /* Field: Field collection item: Field path */
  $handler->display->display_options['fields']['field_path']['id'] = 'field_path';
  $handler->display->display_options['fields']['field_path']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['field_path']['field'] = 'field_path';
  $handler->display->display_options['fields']['field_path']['label'] = '';
  $handler->display->display_options['fields']['field_path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_path']['hide_alter_empty'] = FALSE;
  /* Field: Field collection item: Host Entity ID */
  $handler->display->display_options['fields']['host_entity_id']['id'] = 'host_entity_id';
  $handler->display->display_options['fields']['host_entity_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_id']['field'] = 'host_entity_id';
  $handler->display->display_options['fields']['host_entity_id']['label'] = '';
  $handler->display->display_options['fields']['host_entity_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_id']['hide_alter_empty'] = FALSE;
  /* Field: Field collection item: Host Entity Path */
  $handler->display->display_options['fields']['host_entity_path']['id'] = 'host_entity_path';
  $handler->display->display_options['fields']['host_entity_path']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_path']['field'] = 'host_entity_path';
  $handler->display->display_options['fields']['host_entity_path']['label'] = '';
  $handler->display->display_options['fields']['host_entity_path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_path']['hide_alter_empty'] = FALSE;
  /* Field: Field collection item: Host Entity Type */
  $handler->display->display_options['fields']['host_entity_type']['id'] = 'host_entity_type';
  $handler->display->display_options['fields']['host_entity_type']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_type']['field'] = 'host_entity_type';
  $handler->display->display_options['fields']['host_entity_type']['label'] = '';
  $handler->display->display_options['fields']['host_entity_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_type']['hide_alter_empty'] = FALSE;
  /* Field: Field: File Format */
  $handler->display->display_options['fields']['field_file_format']['id'] = 'field_file_format';
  $handler->display->display_options['fields']['field_file_format']['table'] = 'field_data_field_file_format';
  $handler->display->display_options['fields']['field_file_format']['field'] = 'field_file_format';
  $handler->display->display_options['fields']['field_file_format']['label'] = '';
  $handler->display->display_options['fields']['field_file_format']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_format']['element_label_colon'] = FALSE;
  /* Field: Field collection item: URL */
  $handler->display->display_options['fields']['field_url_external']['id'] = 'field_url_external';
  $handler->display->display_options['fields']['field_url_external']['table'] = 'field_data_field_url_external';
  $handler->display->display_options['fields']['field_url_external']['field'] = 'field_url_external';
  $handler->display->display_options['fields']['field_url_external']['label'] = '';
  $handler->display->display_options['fields']['field_url_external']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_url_external']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url_external']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_url_external']['type'] = 'link_title_plain';
  /* Field: Field collection item: URL */
  $handler->display->display_options['fields']['field_url_external_1']['id'] = 'field_url_external_1';
  $handler->display->display_options['fields']['field_url_external_1']['table'] = 'field_data_field_url_external';
  $handler->display->display_options['fields']['field_url_external_1']['field'] = 'field_url_external';
  $handler->display->display_options['fields']['field_url_external_1']['label'] = '';
  $handler->display->display_options['fields']['field_url_external_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_url_external_1']['alter']['text'] = '[field_file_format] at [field_url_external_1-title]';
  $handler->display->display_options['fields']['field_url_external_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_url_external_1']['alter']['path'] = '[field_url_external_1-url]';
  $handler->display->display_options['fields']['field_url_external_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url_external_1']['click_sort_column'] = 'url';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'request this title';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'node/320';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_commercial_sources_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Field collection item: Field collection item ID */
  $handler->display->display_options['filters']['item_id']['id'] = 'item_id';
  $handler->display->display_options['filters']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['filters']['item_id']['field'] = 'item_id';
  $handler->display->display_options['filters']['item_id']['operator'] = 'not empty';
  $handler->display->display_options['filters']['item_id']['group'] = 1;
  $export['field_collection_view_commercially_available'] = $view;

  $view = new view();
  $view->name = 'field_collection_view_repo_files';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'field collection view repo files';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'repo-item available-formats';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = TRUE;
  $handler->display->display_options['footer']['area']['content'] = '[nothing_2]';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<span class="no-file-avai-icon">No file available</span>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Field collection item: Entity with the File Resource (field_file_resource) */
  $handler->display->display_options['relationships']['field_file_resource_node']['id'] = 'field_file_resource_node';
  $handler->display->display_options['relationships']['field_file_resource_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_file_resource_node']['field'] = 'field_file_resource_node';
  $handler->display->display_options['relationships']['field_file_resource_node']['required'] = TRUE;
  /* Relationship: Field: S3 File Upload (field_s3_file_upload:fid) */
  $handler->display->display_options['relationships']['field_s3_file_upload_fid']['id'] = 'field_s3_file_upload_fid';
  $handler->display->display_options['relationships']['field_s3_file_upload_fid']['table'] = 'field_data_field_s3_file_upload';
  $handler->display->display_options['relationships']['field_s3_file_upload_fid']['field'] = 'field_s3_file_upload_fid';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Access Restrictions */
  $handler->display->display_options['fields']['field_access_restrictions']['id'] = 'field_access_restrictions';
  $handler->display->display_options['fields']['field_access_restrictions']['table'] = 'field_data_field_access_restrictions';
  $handler->display->display_options['fields']['field_access_restrictions']['field'] = 'field_access_restrictions';
  $handler->display->display_options['fields']['field_access_restrictions']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['fields']['field_access_restrictions']['label'] = 'ACCESS';
  $handler->display->display_options['fields']['field_access_restrictions']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_access_restrictions']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_access_restrictions']['type'] = 'list_key';
  /* Field: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['label'] = 'TMP';
  $handler->display->display_options['fields']['item_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['item_id']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['item_id']['separator'] = '';
  /* Field: Field collection item: Field path */
  $handler->display->display_options['fields']['field_path']['id'] = 'field_path';
  $handler->display->display_options['fields']['field_path']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['field_path']['field'] = 'field_path';
  $handler->display->display_options['fields']['field_path']['label'] = '';
  $handler->display->display_options['fields']['field_path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_path']['hide_alter_empty'] = FALSE;
  /* Field: Field collection item: Host Entity ID */
  $handler->display->display_options['fields']['host_entity_id']['id'] = 'host_entity_id';
  $handler->display->display_options['fields']['host_entity_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_id']['field'] = 'host_entity_id';
  $handler->display->display_options['fields']['host_entity_id']['label'] = '';
  $handler->display->display_options['fields']['host_entity_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_id']['hide_alter_empty'] = FALSE;
  /* Field: File: File ID */
  $handler->display->display_options['fields']['fid']['id'] = 'fid';
  $handler->display->display_options['fields']['fid']['table'] = 'file_managed';
  $handler->display->display_options['fields']['fid']['field'] = 'fid';
  $handler->display->display_options['fields']['fid']['relationship'] = 'field_s3_file_upload_fid';
  $handler->display->display_options['fields']['fid']['exclude'] = TRUE;
  /* Field: Field collection item: Host Entity Path */
  $handler->display->display_options['fields']['host_entity_path']['id'] = 'host_entity_path';
  $handler->display->display_options['fields']['host_entity_path']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_path']['field'] = 'host_entity_path';
  $handler->display->display_options['fields']['host_entity_path']['label'] = '';
  $handler->display->display_options['fields']['host_entity_path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_path']['hide_alter_empty'] = FALSE;
  /* Field: Field collection item: Host Entity Type */
  $handler->display->display_options['fields']['host_entity_type']['id'] = 'host_entity_type';
  $handler->display->display_options['fields']['host_entity_type']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_type']['field'] = 'host_entity_type';
  $handler->display->display_options['fields']['host_entity_type']['label'] = '';
  $handler->display->display_options['fields']['host_entity_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_type']['hide_alter_empty'] = FALSE;
  /* Field: File: Size */
  $handler->display->display_options['fields']['filesize']['id'] = 'filesize';
  $handler->display->display_options['fields']['filesize']['table'] = 'file_managed';
  $handler->display->display_options['fields']['filesize']['field'] = 'filesize';
  $handler->display->display_options['fields']['filesize']['relationship'] = 'field_s3_file_upload_fid';
  $handler->display->display_options['fields']['filesize']['exclude'] = TRUE;
  $handler->display->display_options['fields']['filesize']['file_size_display'] = 'bytes';
  /* Field: Content: File Size Warning */
  $handler->display->display_options['fields']['file_size_warning']['id'] = 'file_size_warning';
  $handler->display->display_options['fields']['file_size_warning']['table'] = 'node';
  $handler->display->display_options['fields']['file_size_warning']['field'] = 'file_size_warning';
  $handler->display->display_options['fields']['file_size_warning']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['fields']['file_size_warning']['label'] = '';
  $handler->display->display_options['fields']['file_size_warning']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['file_size_warning']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['file_size_warning']['element_wrapper_class'] = 'file-size-warning-wrapper';
  $handler->display->display_options['fields']['file_size_warning']['element_default_classes'] = FALSE;
  /* Field: Field: S3 File Upload */
  $handler->display->display_options['fields']['field_s3_file_upload_1']['id'] = 'field_s3_file_upload_1';
  $handler->display->display_options['fields']['field_s3_file_upload_1']['table'] = 'field_data_field_s3_file_upload';
  $handler->display->display_options['fields']['field_s3_file_upload_1']['field'] = 'field_s3_file_upload';
  $handler->display->display_options['fields']['field_s3_file_upload_1']['label'] = 'URL';
  $handler->display->display_options['fields']['field_s3_file_upload_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s3_file_upload_1']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['field_s3_file_upload_1']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_s3_file_upload_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s3_file_upload_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s3_file_upload_1']['type'] = 'file_url_plain';
  /* Field: Field: S3 File Upload */
  $handler->display->display_options['fields']['field_s3_file_upload']['id'] = 'field_s3_file_upload';
  $handler->display->display_options['fields']['field_s3_file_upload']['table'] = 'field_data_field_s3_file_upload';
  $handler->display->display_options['fields']['field_s3_file_upload']['field'] = 'field_s3_file_upload';
  $handler->display->display_options['fields']['field_s3_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_s3_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s3_file_upload']['empty'] = 'File not yet available';
  $handler->display->display_options['fields']['field_s3_file_upload']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_s3_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s3_file_upload']['type'] = 'file_url_plain';
  /* Field: Field collection item: Running Time */
  $handler->display->display_options['fields']['field_running_time']['id'] = 'field_running_time';
  $handler->display->display_options['fields']['field_running_time']['table'] = 'field_data_field_running_time';
  $handler->display->display_options['fields']['field_running_time']['field'] = 'field_running_time';
  $handler->display->display_options['fields']['field_running_time']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_running_time']['alter']['text'] = '[field_running_time]';
  $handler->display->display_options['fields']['field_running_time']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_running_time']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_running_time']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  $handler->display->display_options['fields']['field_running_time']['delta_offset'] = '0';
  /* Field: Field collection item: Narrator */
  $handler->display->display_options['fields']['field_performer']['id'] = 'field_performer';
  $handler->display->display_options['fields']['field_performer']['table'] = 'field_data_field_performer';
  $handler->display->display_options['fields']['field_performer']['field'] = 'field_performer';
  $handler->display->display_options['fields']['field_performer']['label'] = 'Performed / Narrated by';
  $handler->display->display_options['fields']['field_performer']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_performer']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_performer']['separator'] = '; ';
  /* Field: Field collection item: Availability / Status */
  $handler->display->display_options['fields']['field_availability_status']['id'] = 'field_availability_status';
  $handler->display->display_options['fields']['field_availability_status']['table'] = 'field_data_field_availability_status';
  $handler->display->display_options['fields']['field_availability_status']['field'] = 'field_availability_status';
  $handler->display->display_options['fields']['field_availability_status']['exclude'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '[field_path]/[item_id]/edit?destination=[host_entity_path]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Delete';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = '[field_path]/[item_id]/delete?destination=[host_entity_path]';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = 'Add a File Entry';
  $handler->display->display_options['fields']['nothing_2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['path'] = '[field_path]/add/[host_entity_type]/[host_entity_id]?destination=[host_entity_path]';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  /* Field: Field: File Format */
  $handler->display->display_options['fields']['field_file_format']['id'] = 'field_file_format';
  $handler->display->display_options['fields']['field_file_format']['table'] = 'field_data_field_file_format';
  $handler->display->display_options['fields']['field_file_format']['field'] = 'field_file_format';
  /* Sort criterion: Field collection item: Field collection item ID */
  $handler->display->display_options['sorts']['item_id']['id'] = 'item_id';
  $handler->display->display_options['sorts']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['sorts']['item_id']['field'] = 'item_id';
  /* Contextual filter: Field collection item: Field collection item ID */
  $handler->display->display_options['arguments']['item_id']['id'] = 'item_id';
  $handler->display->display_options['arguments']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['arguments']['item_id']['field'] = 'item_id';
  $handler->display->display_options['arguments']['item_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['item_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['item_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['item_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['item_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['item_id']['break_phrase'] = TRUE;
  /* Filter criterion: Field collection item: Field collection item ID */
  $handler->display->display_options['filters']['item_id']['id'] = 'item_id';
  $handler->display->display_options['filters']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['filters']['item_id']['field'] = 'item_id';
  $handler->display->display_options['filters']['item_id']['operator'] = 'not empty';

  /* Display: Embed */
  $handler = $view->new_display('embed', 'Embed', 'embed_1');

  /* Display: Embed Front Page */
  $handler = $view->new_display('embed', 'Embed Front Page', 'embed_2');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'multi-file-embed';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'view-embed-list-ul';
  $handler->display->display_options['style_options']['wrapper_class'] = 'view-embed-list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: File: File ID */
  $handler->display->display_options['fields']['fid']['id'] = 'fid';
  $handler->display->display_options['fields']['fid']['table'] = 'file_managed';
  $handler->display->display_options['fields']['fid']['field'] = 'fid';
  $handler->display->display_options['fields']['fid']['relationship'] = 'field_s3_file_upload_fid';
  $handler->display->display_options['fields']['fid']['label'] = '';
  $handler->display->display_options['fields']['fid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['fid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['fid']['alter']['text'] = 'Download File';
  $handler->display->display_options['fields']['fid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['fid']['link_to_file'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  /* Field: Content: Access Restrictions */
  $handler->display->display_options['fields']['field_access_restrictions']['id'] = 'field_access_restrictions';
  $handler->display->display_options['fields']['field_access_restrictions']['table'] = 'field_data_field_access_restrictions';
  $handler->display->display_options['fields']['field_access_restrictions']['field'] = 'field_access_restrictions';
  $handler->display->display_options['fields']['field_access_restrictions']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['fields']['field_access_restrictions']['label'] = 'Access';
  $handler->display->display_options['fields']['field_access_restrictions']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_access_restrictions']['type'] = 'list_key';
  /* Field: Field collection item: Availability / Status */
  $handler->display->display_options['fields']['field_availability_status']['id'] = 'field_availability_status';
  $handler->display->display_options['fields']['field_availability_status']['table'] = 'field_data_field_availability_status';
  $handler->display->display_options['fields']['field_availability_status']['field'] = 'field_availability_status';
  $handler->display->display_options['fields']['field_availability_status']['exclude'] = TRUE;
  /* Field: Field collection item: Field path */
  $handler->display->display_options['fields']['field_path']['id'] = 'field_path';
  $handler->display->display_options['fields']['field_path']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['field_path']['field'] = 'field_path';
  $handler->display->display_options['fields']['field_path']['label'] = '';
  $handler->display->display_options['fields']['field_path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_path']['hide_alter_empty'] = FALSE;
  /* Field: Field collection item: Host Entity ID */
  $handler->display->display_options['fields']['host_entity_id']['id'] = 'host_entity_id';
  $handler->display->display_options['fields']['host_entity_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_id']['field'] = 'host_entity_id';
  $handler->display->display_options['fields']['host_entity_id']['label'] = '';
  $handler->display->display_options['fields']['host_entity_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_id']['hide_alter_empty'] = FALSE;
  /* Field: Field collection item: Host Entity Path */
  $handler->display->display_options['fields']['host_entity_path']['id'] = 'host_entity_path';
  $handler->display->display_options['fields']['host_entity_path']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_path']['field'] = 'host_entity_path';
  $handler->display->display_options['fields']['host_entity_path']['label'] = '';
  $handler->display->display_options['fields']['host_entity_path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_path']['hide_alter_empty'] = FALSE;
  /* Field: Field collection item: Host Entity Type */
  $handler->display->display_options['fields']['host_entity_type']['id'] = 'host_entity_type';
  $handler->display->display_options['fields']['host_entity_type']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_type']['field'] = 'host_entity_type';
  $handler->display->display_options['fields']['host_entity_type']['label'] = '';
  $handler->display->display_options['fields']['host_entity_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_type']['hide_alter_empty'] = FALSE;
  /* Field: Field: File Format */
  $handler->display->display_options['fields']['field_file_format']['id'] = 'field_file_format';
  $handler->display->display_options['fields']['field_file_format']['table'] = 'field_data_field_file_format';
  $handler->display->display_options['fields']['field_file_format']['field'] = 'field_file_format';
  $handler->display->display_options['fields']['field_file_format']['label'] = '';
  $handler->display->display_options['fields']['field_file_format']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_format']['element_label_colon'] = FALSE;
  /* Field: Field: S3 File Upload */
  $handler->display->display_options['fields']['field_s3_file_upload_1']['id'] = 'field_s3_file_upload_1';
  $handler->display->display_options['fields']['field_s3_file_upload_1']['table'] = 'field_data_field_s3_file_upload';
  $handler->display->display_options['fields']['field_s3_file_upload_1']['field'] = 'field_s3_file_upload';
  $handler->display->display_options['fields']['field_s3_file_upload_1']['label'] = 'TMP';
  $handler->display->display_options['fields']['field_s3_file_upload_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s3_file_upload_1']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['field_s3_file_upload_1']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_s3_file_upload_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s3_file_upload_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s3_file_upload_1']['type'] = 'file_url_plain';
  /* Field: Field: S3 File Upload */
  $handler->display->display_options['fields']['field_s3_file_upload']['id'] = 'field_s3_file_upload';
  $handler->display->display_options['fields']['field_s3_file_upload']['table'] = 'field_data_field_s3_file_upload';
  $handler->display->display_options['fields']['field_s3_file_upload']['field'] = 'field_s3_file_upload';
  $handler->display->display_options['fields']['field_s3_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_s3_file_upload']['alter']['text'] = 'Click to download';
  $handler->display->display_options['fields']['field_s3_file_upload']['alter']['path'] = '[host_entity_path]';
  $handler->display->display_options['fields']['field_s3_file_upload']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_s3_file_upload']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_s3_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s3_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s3_file_upload']['type'] = 'file_url_plain';
  /* Field: Field collection item: Running Time */
  $handler->display->display_options['fields']['field_running_time']['id'] = 'field_running_time';
  $handler->display->display_options['fields']['field_running_time']['table'] = 'field_data_field_running_time';
  $handler->display->display_options['fields']['field_running_time']['field'] = 'field_running_time';
  $handler->display->display_options['fields']['field_running_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_running_time']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_running_time']['alter']['text'] = '[field_running_time]';
  $handler->display->display_options['fields']['field_running_time']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_running_time']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_running_time']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  $handler->display->display_options['fields']['field_running_time']['delta_offset'] = '0';
  /* Field: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['label'] = 'tmp';
  $handler->display->display_options['fields']['item_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['item_id']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['item_id']['separator'] = '';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '[field_path]/[item_id]/edit?destination=[host_entity_path]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Delete';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = '[field_path]/[item_id]/delete?destination=[host_entity_path]';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = 'Add';
  $handler->display->display_options['fields']['nothing_2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['path'] = '[field_path]/add/[host_entity_type]/[host_entity_id]?destination=[host_entity_path]';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;

  /* Display: Embed search results - admin */
  $handler = $view->new_display('embed', 'Embed search results - admin', 'embed_3');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'multi-file-embed';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'view-embed-list-ul';
  $handler->display->display_options['style_options']['wrapper_class'] = 'view-embed-list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Access Restrictions */
  $handler->display->display_options['fields']['field_access_restrictions']['id'] = 'field_access_restrictions';
  $handler->display->display_options['fields']['field_access_restrictions']['table'] = 'field_data_field_access_restrictions';
  $handler->display->display_options['fields']['field_access_restrictions']['field'] = 'field_access_restrictions';
  $handler->display->display_options['fields']['field_access_restrictions']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['fields']['field_access_restrictions']['label'] = 'ACCESS';
  $handler->display->display_options['fields']['field_access_restrictions']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_access_restrictions']['type'] = 'list_key';
  /* Field: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['label'] = 'tmp';
  $handler->display->display_options['fields']['item_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['item_id']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['item_id']['separator'] = '';
  /* Field: Field collection item: Field path */
  $handler->display->display_options['fields']['field_path']['id'] = 'field_path';
  $handler->display->display_options['fields']['field_path']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['field_path']['field'] = 'field_path';
  $handler->display->display_options['fields']['field_path']['label'] = '';
  $handler->display->display_options['fields']['field_path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_path']['hide_alter_empty'] = FALSE;
  /* Field: Field collection item: Host Entity ID */
  $handler->display->display_options['fields']['host_entity_id']['id'] = 'host_entity_id';
  $handler->display->display_options['fields']['host_entity_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_id']['field'] = 'host_entity_id';
  $handler->display->display_options['fields']['host_entity_id']['label'] = '';
  $handler->display->display_options['fields']['host_entity_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_id']['hide_alter_empty'] = FALSE;
  /* Field: File: File ID */
  $handler->display->display_options['fields']['fid']['id'] = 'fid';
  $handler->display->display_options['fields']['fid']['table'] = 'file_managed';
  $handler->display->display_options['fields']['fid']['field'] = 'fid';
  $handler->display->display_options['fields']['fid']['relationship'] = 'field_s3_file_upload_fid';
  $handler->display->display_options['fields']['fid']['label'] = '';
  $handler->display->display_options['fields']['fid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['fid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['fid']['alter']['text'] = 'Download File';
  $handler->display->display_options['fields']['fid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['fid']['link_to_file'] = TRUE;
  /* Field: Field collection item: Host Entity Path */
  $handler->display->display_options['fields']['host_entity_path']['id'] = 'host_entity_path';
  $handler->display->display_options['fields']['host_entity_path']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_path']['field'] = 'host_entity_path';
  $handler->display->display_options['fields']['host_entity_path']['label'] = '';
  $handler->display->display_options['fields']['host_entity_path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_path']['hide_alter_empty'] = FALSE;
  /* Field: Field collection item: Host Entity Type */
  $handler->display->display_options['fields']['host_entity_type']['id'] = 'host_entity_type';
  $handler->display->display_options['fields']['host_entity_type']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_type']['field'] = 'host_entity_type';
  $handler->display->display_options['fields']['host_entity_type']['label'] = '';
  $handler->display->display_options['fields']['host_entity_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_type']['hide_alter_empty'] = FALSE;
  /* Field: Field: S3 File Upload */
  $handler->display->display_options['fields']['field_s3_file_upload_1']['id'] = 'field_s3_file_upload_1';
  $handler->display->display_options['fields']['field_s3_file_upload_1']['table'] = 'field_data_field_s3_file_upload';
  $handler->display->display_options['fields']['field_s3_file_upload_1']['field'] = 'field_s3_file_upload';
  $handler->display->display_options['fields']['field_s3_file_upload_1']['label'] = 'TMP';
  $handler->display->display_options['fields']['field_s3_file_upload_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s3_file_upload_1']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['field_s3_file_upload_1']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_s3_file_upload_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s3_file_upload_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s3_file_upload_1']['type'] = 'file_url_plain';
  /* Field: Field: S3 File Upload */
  $handler->display->display_options['fields']['field_s3_file_upload']['id'] = 'field_s3_file_upload';
  $handler->display->display_options['fields']['field_s3_file_upload']['table'] = 'field_data_field_s3_file_upload';
  $handler->display->display_options['fields']['field_s3_file_upload']['field'] = 'field_s3_file_upload';
  $handler->display->display_options['fields']['field_s3_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_s3_file_upload']['alter']['text'] = 'Click to download';
  $handler->display->display_options['fields']['field_s3_file_upload']['alter']['path'] = '[host_entity_path]';
  $handler->display->display_options['fields']['field_s3_file_upload']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_s3_file_upload']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_s3_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s3_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s3_file_upload']['type'] = 'file_url_plain';
  /* Field: Field collection item: Running Time */
  $handler->display->display_options['fields']['field_running_time']['id'] = 'field_running_time';
  $handler->display->display_options['fields']['field_running_time']['table'] = 'field_data_field_running_time';
  $handler->display->display_options['fields']['field_running_time']['field'] = 'field_running_time';
  $handler->display->display_options['fields']['field_running_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_running_time']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_running_time']['alter']['text'] = '[field_running_time]';
  $handler->display->display_options['fields']['field_running_time']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_running_time']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_running_time']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  $handler->display->display_options['fields']['field_running_time']['delta_offset'] = '0';
  /* Field: Field collection item: Narrator */
  $handler->display->display_options['fields']['field_performer']['id'] = 'field_performer';
  $handler->display->display_options['fields']['field_performer']['table'] = 'field_data_field_performer';
  $handler->display->display_options['fields']['field_performer']['field'] = 'field_performer';
  $handler->display->display_options['fields']['field_performer']['label'] = 'Performed / Narrated by';
  $handler->display->display_options['fields']['field_performer']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_performer']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_performer']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_performer']['separator'] = '; ';
  /* Field: Field collection item: Availability / Status */
  $handler->display->display_options['fields']['field_availability_status']['id'] = 'field_availability_status';
  $handler->display->display_options['fields']['field_availability_status']['table'] = 'field_data_field_availability_status';
  $handler->display->display_options['fields']['field_availability_status']['field'] = 'field_availability_status';
  $handler->display->display_options['fields']['field_availability_status']['exclude'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '[field_path]/[item_id]/edit?destination=[host_entity_path]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Delete';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = '[field_path]/[item_id]/delete?destination=[host_entity_path]';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = 'Add';
  $handler->display->display_options['fields']['nothing_2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['path'] = '[field_path]/add/[host_entity_type]/[host_entity_id]?destination=[host_entity_path]';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;

  /* Display: Embed - Detail - Admin */
  $handler = $view->new_display('embed', 'Embed - Detail - Admin', 'embed_4');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'repo-item available-formats';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    1 => '1',
    2 => '2',
    7 => '7',
    4 => '4',
    5 => '5',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'view-list-ul';
  $handler->display->display_options['style_options']['wrapper_class'] = 'view-list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<h2 class="block__title block-title available-format">Available Formats:</h2>';
  $handler->display->display_options['header']['area']['format'] = 'block_text';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '[nothing_2]';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Add Button */
  $handler->display->display_options['empty']['add_button']['id'] = 'add_button';
  $handler->display->display_options['empty']['add_button']['table'] = 'views';
  $handler->display->display_options['empty']['add_button']['field'] = 'add_button';
  $handler->display->display_options['empty']['add_button']['empty'] = TRUE;
  $handler->display->display_options['empty']['add_button']['path'] = 'field-collection/field-file-resource/add/node/';
  $handler->display->display_options['empty']['add_button']['text'] = 'Add Attachment';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Field collection item: Entity with the File Resource (field_file_resource) */
  $handler->display->display_options['relationships']['field_file_resource_node']['id'] = 'field_file_resource_node';
  $handler->display->display_options['relationships']['field_file_resource_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_file_resource_node']['field'] = 'field_file_resource_node';
  $handler->display->display_options['relationships']['field_file_resource_node']['required'] = TRUE;
  /* Relationship: Field: S3 File Upload (field_s3_file_upload:fid) */
  $handler->display->display_options['relationships']['field_s3_file_upload_fid']['id'] = 'field_s3_file_upload_fid';
  $handler->display->display_options['relationships']['field_s3_file_upload_fid']['table'] = 'field_data_field_s3_file_upload';
  $handler->display->display_options['relationships']['field_s3_file_upload_fid']['field'] = 'field_s3_file_upload_fid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Field: S3 Path */
  $handler->display->display_options['fields']['field_s3_path']['id'] = 'field_s3_path';
  $handler->display->display_options['fields']['field_s3_path']['table'] = 'field_data_field_s3_path';
  $handler->display->display_options['fields']['field_s3_path']['field'] = 'field_s3_path';
  $handler->display->display_options['fields']['field_s3_path']['label'] = '';
  $handler->display->display_options['fields']['field_s3_path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s3_path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s3_path']['type'] = 'text_plain';
  /* Field: Field: File Format */
  $handler->display->display_options['fields']['field_file_format']['id'] = 'field_file_format';
  $handler->display->display_options['fields']['field_file_format']['table'] = 'field_data_field_file_format';
  $handler->display->display_options['fields']['field_file_format']['field'] = 'field_file_format';
  $handler->display->display_options['fields']['field_file_format']['label'] = '';
  $handler->display->display_options['fields']['field_file_format']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_format']['element_label_colon'] = FALSE;
  /* Field: Content: Access Restrictions */
  $handler->display->display_options['fields']['field_access_restrictions']['id'] = 'field_access_restrictions';
  $handler->display->display_options['fields']['field_access_restrictions']['table'] = 'field_data_field_access_restrictions';
  $handler->display->display_options['fields']['field_access_restrictions']['field'] = 'field_access_restrictions';
  $handler->display->display_options['fields']['field_access_restrictions']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['fields']['field_access_restrictions']['label'] = 'ACCESS';
  $handler->display->display_options['fields']['field_access_restrictions']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_access_restrictions']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_access_restrictions']['type'] = 'list_key';
  /* Field: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['label'] = 'TMP';
  $handler->display->display_options['fields']['item_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['item_id']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['item_id']['separator'] = '';
  /* Field: Field collection item: Field path */
  $handler->display->display_options['fields']['field_path']['id'] = 'field_path';
  $handler->display->display_options['fields']['field_path']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['field_path']['field'] = 'field_path';
  $handler->display->display_options['fields']['field_path']['label'] = '';
  $handler->display->display_options['fields']['field_path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_path']['hide_alter_empty'] = FALSE;
  /* Field: Field collection item: Host Entity ID */
  $handler->display->display_options['fields']['host_entity_id']['id'] = 'host_entity_id';
  $handler->display->display_options['fields']['host_entity_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_id']['field'] = 'host_entity_id';
  $handler->display->display_options['fields']['host_entity_id']['label'] = '';
  $handler->display->display_options['fields']['host_entity_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_id']['hide_alter_empty'] = FALSE;
  /* Field: File: File ID */
  $handler->display->display_options['fields']['fid']['id'] = 'fid';
  $handler->display->display_options['fields']['fid']['table'] = 'file_managed';
  $handler->display->display_options['fields']['fid']['field'] = 'fid';
  $handler->display->display_options['fields']['fid']['relationship'] = 'field_s3_file_upload_fid';
  $handler->display->display_options['fields']['fid']['exclude'] = TRUE;
  /* Field: Field collection item: Host Entity Path */
  $handler->display->display_options['fields']['host_entity_path']['id'] = 'host_entity_path';
  $handler->display->display_options['fields']['host_entity_path']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_path']['field'] = 'host_entity_path';
  $handler->display->display_options['fields']['host_entity_path']['label'] = '';
  $handler->display->display_options['fields']['host_entity_path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_path']['hide_alter_empty'] = FALSE;
  /* Field: Field collection item: Host Entity Type */
  $handler->display->display_options['fields']['host_entity_type']['id'] = 'host_entity_type';
  $handler->display->display_options['fields']['host_entity_type']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_type']['field'] = 'host_entity_type';
  $handler->display->display_options['fields']['host_entity_type']['label'] = '';
  $handler->display->display_options['fields']['host_entity_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_type']['hide_alter_empty'] = FALSE;
  /* Field: File: Size */
  $handler->display->display_options['fields']['filesize']['id'] = 'filesize';
  $handler->display->display_options['fields']['filesize']['table'] = 'file_managed';
  $handler->display->display_options['fields']['filesize']['field'] = 'filesize';
  $handler->display->display_options['fields']['filesize']['relationship'] = 'field_s3_file_upload_fid';
  $handler->display->display_options['fields']['filesize']['exclude'] = TRUE;
  $handler->display->display_options['fields']['filesize']['file_size_display'] = 'bytes';
  /* Field: Content: File Size Warning */
  $handler->display->display_options['fields']['file_size_warning']['id'] = 'file_size_warning';
  $handler->display->display_options['fields']['file_size_warning']['table'] = 'node';
  $handler->display->display_options['fields']['file_size_warning']['field'] = 'file_size_warning';
  $handler->display->display_options['fields']['file_size_warning']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['fields']['file_size_warning']['label'] = '';
  $handler->display->display_options['fields']['file_size_warning']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['file_size_warning']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['file_size_warning']['element_wrapper_class'] = 'file-size-warning-wrapper';
  $handler->display->display_options['fields']['file_size_warning']['element_default_classes'] = FALSE;
  /* Field: Field: S3 File Upload */
  $handler->display->display_options['fields']['field_s3_file_upload_1']['id'] = 'field_s3_file_upload_1';
  $handler->display->display_options['fields']['field_s3_file_upload_1']['table'] = 'field_data_field_s3_file_upload';
  $handler->display->display_options['fields']['field_s3_file_upload_1']['field'] = 'field_s3_file_upload';
  $handler->display->display_options['fields']['field_s3_file_upload_1']['label'] = 'URL';
  $handler->display->display_options['fields']['field_s3_file_upload_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s3_file_upload_1']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['field_s3_file_upload_1']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_s3_file_upload_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s3_file_upload_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s3_file_upload_1']['type'] = 'file_url_plain';
  /* Field: Field: S3 File Upload */
  $handler->display->display_options['fields']['field_s3_file_upload']['id'] = 'field_s3_file_upload';
  $handler->display->display_options['fields']['field_s3_file_upload']['table'] = 'field_data_field_s3_file_upload';
  $handler->display->display_options['fields']['field_s3_file_upload']['field'] = 'field_s3_file_upload';
  $handler->display->display_options['fields']['field_s3_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_s3_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s3_file_upload']['empty'] = 'File not yet available';
  $handler->display->display_options['fields']['field_s3_file_upload']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_s3_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s3_file_upload']['type'] = 'file_url_plain';
  /* Field: Field collection item: Accessibility Tags */
  $handler->display->display_options['fields']['field_accessibility_tags']['id'] = 'field_accessibility_tags';
  $handler->display->display_options['fields']['field_accessibility_tags']['table'] = 'field_data_field_accessibility_tags';
  $handler->display->display_options['fields']['field_accessibility_tags']['field'] = 'field_accessibility_tags';
  $handler->display->display_options['fields']['field_accessibility_tags']['label'] = 'Accessibility';
  $handler->display->display_options['fields']['field_accessibility_tags']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_accessibility_tags']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_accessibility_tags']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_accessibility_tags']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_accessibility_tags']['settings'] = array(
    'view_mode' => 'default',
    'links' => 1,
    'use_content_language' => 1,
  );
  $handler->display->display_options['fields']['field_accessibility_tags']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_accessibility_tags']['multi_type'] = 'ul';
  $handler->display->display_options['fields']['field_accessibility_tags']['separator'] = '';
  /* Field: Field collection item: Running Time */
  $handler->display->display_options['fields']['field_running_time']['id'] = 'field_running_time';
  $handler->display->display_options['fields']['field_running_time']['table'] = 'field_data_field_running_time';
  $handler->display->display_options['fields']['field_running_time']['field'] = 'field_running_time';
  $handler->display->display_options['fields']['field_running_time']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_running_time']['alter']['text'] = '[field_running_time]';
  $handler->display->display_options['fields']['field_running_time']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_running_time']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_running_time']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_running_time']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  $handler->display->display_options['fields']['field_running_time']['delta_offset'] = '0';
  /* Field: Field collection item: Narrator */
  $handler->display->display_options['fields']['field_performer']['id'] = 'field_performer';
  $handler->display->display_options['fields']['field_performer']['table'] = 'field_data_field_performer';
  $handler->display->display_options['fields']['field_performer']['field'] = 'field_performer';
  $handler->display->display_options['fields']['field_performer']['label'] = 'Performed / Narrated by';
  $handler->display->display_options['fields']['field_performer']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_performer']['alter']['path'] = '/repository-search?search_api_views_fulltext_2=[field_performer-value]&f[]=field_file_resource:field_performer:[field_performer-value]';
  $handler->display->display_options['fields']['field_performer']['alter']['alt'] = '[field_performer-value]';
  $handler->display->display_options['fields']['field_performer']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_performer']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_performer']['delta_offset'] = '0';
  /* Field: FCI: Date Created */
  $handler->display->display_options['fields']['field_date_created']['id'] = 'field_date_created';
  $handler->display->display_options['fields']['field_date_created']['table'] = 'field_data_field_date_created';
  $handler->display->display_options['fields']['field_date_created']['field'] = 'field_date_created';
  $handler->display->display_options['fields']['field_date_created']['ui_name'] = 'FCI: Date Created';
  $handler->display->display_options['fields']['field_date_created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date_created']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_date_created']['alter']['text'] = ', [field_date_created]';
  $handler->display->display_options['fields']['field_date_created']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_date_created']['settings'] = array(
    'format_type' => 'search_api_facetapi_YEAR',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: FCI: Name of Publisher */
  $handler->display->display_options['fields']['field_publisher_format']['id'] = 'field_publisher_format';
  $handler->display->display_options['fields']['field_publisher_format']['table'] = 'field_data_field_publisher_format';
  $handler->display->display_options['fields']['field_publisher_format']['field'] = 'field_publisher_format';
  $handler->display->display_options['fields']['field_publisher_format']['ui_name'] = 'FCI: Name of Publisher';
  $handler->display->display_options['fields']['field_publisher_format']['label'] = 'Publisher';
  $handler->display->display_options['fields']['field_publisher_format']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_publisher_format']['alter']['text'] = '[field_publisher_format][field_date_created]';
  $handler->display->display_options['fields']['field_publisher_format']['hide_empty'] = TRUE;
  /* Field: Field collection item: Availability / Status */
  $handler->display->display_options['fields']['field_availability_status']['id'] = 'field_availability_status';
  $handler->display->display_options['fields']['field_availability_status']['table'] = 'field_data_field_availability_status';
  $handler->display->display_options['fields']['field_availability_status']['field'] = 'field_availability_status';
  $handler->display->display_options['fields']['field_availability_status']['label'] = 'Status';
  $handler->display->display_options['fields']['field_availability_status']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_availability_status']['element_label_type'] = 'span';
  /* Field: Field: Notes */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = 'Note';
  $handler->display->display_options['fields']['field_description']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_description']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_description']['hide_empty'] = TRUE;
  /* Field: Field collection item: Accrual Method */
  $handler->display->display_options['fields']['field_accrual_method']['id'] = 'field_accrual_method';
  $handler->display->display_options['fields']['field_accrual_method']['table'] = 'field_data_field_accrual_method';
  $handler->display->display_options['fields']['field_accrual_method']['field'] = 'field_accrual_method';
  $handler->display->display_options['fields']['field_accrual_method']['hide_empty'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '[field_path]/[item_id]/edit?destination=[host_entity_path]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Delete';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = '[field_path]/[item_id]/delete?destination=[host_entity_path]';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = 'Add a File Entry';
  $handler->display->display_options['fields']['nothing_2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['path'] = '[field_path]/add/[host_entity_type]/[host_entity_id]?destination=[host_entity_path]';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Embed - Detail - Patron */
  $handler = $view->new_display('embed', 'Embed - Detail - Patron', 'embed_5');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'view-list-ul';
  $handler->display->display_options['style_options']['wrapper_class'] = 'view-list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2 class="block__title block-title available-format">Available Formats:</h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Access Restrictions */
  $handler->display->display_options['fields']['field_access_restrictions']['id'] = 'field_access_restrictions';
  $handler->display->display_options['fields']['field_access_restrictions']['table'] = 'field_data_field_access_restrictions';
  $handler->display->display_options['fields']['field_access_restrictions']['field'] = 'field_access_restrictions';
  $handler->display->display_options['fields']['field_access_restrictions']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['fields']['field_access_restrictions']['label'] = 'ACCESS';
  $handler->display->display_options['fields']['field_access_restrictions']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_access_restrictions']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_access_restrictions']['type'] = 'list_key';
  /* Field: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['label'] = 'TMP';
  $handler->display->display_options['fields']['item_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['item_id']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['item_id']['separator'] = '';
  /* Field: Field collection item: Field path */
  $handler->display->display_options['fields']['field_path']['id'] = 'field_path';
  $handler->display->display_options['fields']['field_path']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['field_path']['field'] = 'field_path';
  $handler->display->display_options['fields']['field_path']['label'] = '';
  $handler->display->display_options['fields']['field_path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_path']['hide_alter_empty'] = FALSE;
  /* Field: Field collection item: Host Entity ID */
  $handler->display->display_options['fields']['host_entity_id']['id'] = 'host_entity_id';
  $handler->display->display_options['fields']['host_entity_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_id']['field'] = 'host_entity_id';
  $handler->display->display_options['fields']['host_entity_id']['label'] = '';
  $handler->display->display_options['fields']['host_entity_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_id']['hide_alter_empty'] = FALSE;
  /* Field: File: File ID */
  $handler->display->display_options['fields']['fid']['id'] = 'fid';
  $handler->display->display_options['fields']['fid']['table'] = 'file_managed';
  $handler->display->display_options['fields']['fid']['field'] = 'fid';
  $handler->display->display_options['fields']['fid']['relationship'] = 'field_s3_file_upload_fid';
  $handler->display->display_options['fields']['fid']['exclude'] = TRUE;
  /* Field: Field collection item: Host Entity Path */
  $handler->display->display_options['fields']['host_entity_path']['id'] = 'host_entity_path';
  $handler->display->display_options['fields']['host_entity_path']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_path']['field'] = 'host_entity_path';
  $handler->display->display_options['fields']['host_entity_path']['label'] = '';
  $handler->display->display_options['fields']['host_entity_path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_path']['hide_alter_empty'] = FALSE;
  /* Field: Field collection item: Host Entity Type */
  $handler->display->display_options['fields']['host_entity_type']['id'] = 'host_entity_type';
  $handler->display->display_options['fields']['host_entity_type']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_type']['field'] = 'host_entity_type';
  $handler->display->display_options['fields']['host_entity_type']['label'] = '';
  $handler->display->display_options['fields']['host_entity_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_type']['hide_alter_empty'] = FALSE;
  /* Field: Field: File Format */
  $handler->display->display_options['fields']['field_file_format']['id'] = 'field_file_format';
  $handler->display->display_options['fields']['field_file_format']['table'] = 'field_data_field_file_format';
  $handler->display->display_options['fields']['field_file_format']['field'] = 'field_file_format';
  $handler->display->display_options['fields']['field_file_format']['label'] = '';
  $handler->display->display_options['fields']['field_file_format']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_format']['element_label_colon'] = FALSE;
  /* Field: File: Size */
  $handler->display->display_options['fields']['filesize']['id'] = 'filesize';
  $handler->display->display_options['fields']['filesize']['table'] = 'file_managed';
  $handler->display->display_options['fields']['filesize']['field'] = 'filesize';
  $handler->display->display_options['fields']['filesize']['relationship'] = 'field_s3_file_upload_fid';
  $handler->display->display_options['fields']['filesize']['exclude'] = TRUE;
  $handler->display->display_options['fields']['filesize']['element_type'] = 'span';
  $handler->display->display_options['fields']['filesize']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['filesize']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['filesize']['empty_zero'] = TRUE;
  /* Field: Content: File Size Warning */
  $handler->display->display_options['fields']['file_size_warning']['id'] = 'file_size_warning';
  $handler->display->display_options['fields']['file_size_warning']['table'] = 'node';
  $handler->display->display_options['fields']['file_size_warning']['field'] = 'file_size_warning';
  $handler->display->display_options['fields']['file_size_warning']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['fields']['file_size_warning']['label'] = '';
  $handler->display->display_options['fields']['file_size_warning']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['file_size_warning']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['file_size_warning']['element_wrapper_class'] = 'file-size-warning-wrapper';
  $handler->display->display_options['fields']['file_size_warning']['element_default_classes'] = FALSE;
  /* Field: Field: S3 File Upload */
  $handler->display->display_options['fields']['field_s3_file_upload_1']['id'] = 'field_s3_file_upload_1';
  $handler->display->display_options['fields']['field_s3_file_upload_1']['table'] = 'field_data_field_s3_file_upload';
  $handler->display->display_options['fields']['field_s3_file_upload_1']['field'] = 'field_s3_file_upload';
  $handler->display->display_options['fields']['field_s3_file_upload_1']['label'] = 'URL';
  $handler->display->display_options['fields']['field_s3_file_upload_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s3_file_upload_1']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['field_s3_file_upload_1']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_s3_file_upload_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s3_file_upload_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s3_file_upload_1']['type'] = 'file_url_plain';
  /* Field: Field: S3 File Upload */
  $handler->display->display_options['fields']['field_s3_file_upload']['id'] = 'field_s3_file_upload';
  $handler->display->display_options['fields']['field_s3_file_upload']['table'] = 'field_data_field_s3_file_upload';
  $handler->display->display_options['fields']['field_s3_file_upload']['field'] = 'field_s3_file_upload';
  $handler->display->display_options['fields']['field_s3_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_s3_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s3_file_upload']['empty'] = 'File not yet available';
  $handler->display->display_options['fields']['field_s3_file_upload']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_s3_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s3_file_upload']['type'] = 'file_url_plain';
  /* Field: Field collection item: Accessibility Tags */
  $handler->display->display_options['fields']['field_accessibility_tags']['id'] = 'field_accessibility_tags';
  $handler->display->display_options['fields']['field_accessibility_tags']['table'] = 'field_data_field_accessibility_tags';
  $handler->display->display_options['fields']['field_accessibility_tags']['field'] = 'field_accessibility_tags';
  $handler->display->display_options['fields']['field_accessibility_tags']['label'] = 'Accessibility';
  $handler->display->display_options['fields']['field_accessibility_tags']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_accessibility_tags']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_accessibility_tags']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_accessibility_tags']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_accessibility_tags']['settings'] = array(
    'view_mode' => 'default',
    'links' => 1,
    'use_content_language' => 1,
  );
  $handler->display->display_options['fields']['field_accessibility_tags']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_accessibility_tags']['multi_type'] = 'ul';
  $handler->display->display_options['fields']['field_accessibility_tags']['separator'] = '';
  /* Field: Field collection item: Running Time */
  $handler->display->display_options['fields']['field_running_time']['id'] = 'field_running_time';
  $handler->display->display_options['fields']['field_running_time']['table'] = 'field_data_field_running_time';
  $handler->display->display_options['fields']['field_running_time']['field'] = 'field_running_time';
  $handler->display->display_options['fields']['field_running_time']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_running_time']['alter']['text'] = '[field_running_time]';
  $handler->display->display_options['fields']['field_running_time']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_running_time']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_running_time']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_running_time']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_running_time']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  $handler->display->display_options['fields']['field_running_time']['delta_offset'] = '0';
  /* Field: Field collection item: Narrator */
  $handler->display->display_options['fields']['field_performer']['id'] = 'field_performer';
  $handler->display->display_options['fields']['field_performer']['table'] = 'field_data_field_performer';
  $handler->display->display_options['fields']['field_performer']['field'] = 'field_performer';
  $handler->display->display_options['fields']['field_performer']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_performer']['alter']['path'] = '/repository-search?search_api_views_fulltext_2=[field_performer-value]&f[]=field_file_resource:field_performer:[field_performer-value]';
  $handler->display->display_options['fields']['field_performer']['alter']['alt'] = '[field_performer-value]';
  $handler->display->display_options['fields']['field_performer']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_performer']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_performer']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_performer']['delta_offset'] = '0';
  /* Field: FCI: Date Created */
  $handler->display->display_options['fields']['field_date_created']['id'] = 'field_date_created';
  $handler->display->display_options['fields']['field_date_created']['table'] = 'field_data_field_date_created';
  $handler->display->display_options['fields']['field_date_created']['field'] = 'field_date_created';
  $handler->display->display_options['fields']['field_date_created']['ui_name'] = 'FCI: Date Created';
  $handler->display->display_options['fields']['field_date_created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date_created']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_date_created']['alter']['text'] = ', [field_date_created]';
  $handler->display->display_options['fields']['field_date_created']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_date_created']['settings'] = array(
    'format_type' => 'search_api_facetapi_YEAR',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: FCI: Name of Publisher */
  $handler->display->display_options['fields']['field_publisher_format']['id'] = 'field_publisher_format';
  $handler->display->display_options['fields']['field_publisher_format']['table'] = 'field_data_field_publisher_format';
  $handler->display->display_options['fields']['field_publisher_format']['field'] = 'field_publisher_format';
  $handler->display->display_options['fields']['field_publisher_format']['ui_name'] = 'FCI: Name of Publisher';
  $handler->display->display_options['fields']['field_publisher_format']['label'] = 'Publisher';
  $handler->display->display_options['fields']['field_publisher_format']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_publisher_format']['alter']['text'] = '[field_publisher_format][field_date_created]';
  $handler->display->display_options['fields']['field_publisher_format']['hide_empty'] = TRUE;
  /* Field: Field collection item: Availability / Status */
  $handler->display->display_options['fields']['field_availability_status']['id'] = 'field_availability_status';
  $handler->display->display_options['fields']['field_availability_status']['table'] = 'field_data_field_availability_status';
  $handler->display->display_options['fields']['field_availability_status']['field'] = 'field_availability_status';
  $handler->display->display_options['fields']['field_availability_status']['exclude'] = TRUE;
  /* Field: Field: Notes */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = 'Note';
  $handler->display->display_options['fields']['field_description']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_description']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_description']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Field collection item: Field collection item ID */
  $handler->display->display_options['filters']['item_id']['id'] = 'item_id';
  $handler->display->display_options['filters']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['filters']['item_id']['field'] = 'item_id';
  $handler->display->display_options['filters']['item_id']['operator'] = 'not empty';
  /* Filter criterion: Field collection item: Availability / Status (field_availability_status) */
  $handler->display->display_options['filters']['field_availability_status_value']['id'] = 'field_availability_status_value';
  $handler->display->display_options['filters']['field_availability_status_value']['table'] = 'field_data_field_availability_status';
  $handler->display->display_options['filters']['field_availability_status_value']['field'] = 'field_availability_status_value';
  $handler->display->display_options['filters']['field_availability_status_value']['value'] = array(
    1 => '1',
  );

  /* Display: Embed Solr API Search */
  $handler = $view->new_display('embed', 'Embed Solr API Search', 'embed_6');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'multi-file-embed';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'view-embed-list-ul';
  $handler->display->display_options['style_options']['wrapper_class'] = 'view-embed-list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<span class="no-file-request-title"><a href="/request-production">Request this title</a></span>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: File: File ID */
  $handler->display->display_options['fields']['fid']['id'] = 'fid';
  $handler->display->display_options['fields']['fid']['table'] = 'file_managed';
  $handler->display->display_options['fields']['fid']['field'] = 'fid';
  $handler->display->display_options['fields']['fid']['relationship'] = 'field_s3_file_upload_fid';
  $handler->display->display_options['fields']['fid']['label'] = '';
  $handler->display->display_options['fields']['fid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['fid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['fid']['alter']['text'] = 'Download File';
  $handler->display->display_options['fields']['fid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['fid']['link_to_file'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  /* Field: Field: File Format */
  $handler->display->display_options['fields']['field_file_format']['id'] = 'field_file_format';
  $handler->display->display_options['fields']['field_file_format']['table'] = 'field_data_field_file_format';
  $handler->display->display_options['fields']['field_file_format']['field'] = 'field_file_format';
  $handler->display->display_options['fields']['field_file_format']['label'] = '';
  $handler->display->display_options['fields']['field_file_format']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_format']['element_label_colon'] = FALSE;
  /* Field: Content: Access Restrictions */
  $handler->display->display_options['fields']['field_access_restrictions']['id'] = 'field_access_restrictions';
  $handler->display->display_options['fields']['field_access_restrictions']['table'] = 'field_data_field_access_restrictions';
  $handler->display->display_options['fields']['field_access_restrictions']['field'] = 'field_access_restrictions';
  $handler->display->display_options['fields']['field_access_restrictions']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['fields']['field_access_restrictions']['label'] = 'Access';
  $handler->display->display_options['fields']['field_access_restrictions']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_access_restrictions']['type'] = 'list_key';
  /* Field: Field collection item: Availability / Status */
  $handler->display->display_options['fields']['field_availability_status']['id'] = 'field_availability_status';
  $handler->display->display_options['fields']['field_availability_status']['table'] = 'field_data_field_availability_status';
  $handler->display->display_options['fields']['field_availability_status']['field'] = 'field_availability_status';
  $handler->display->display_options['fields']['field_availability_status']['exclude'] = TRUE;
  /* Field: Field collection item: Field path */
  $handler->display->display_options['fields']['field_path']['id'] = 'field_path';
  $handler->display->display_options['fields']['field_path']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['field_path']['field'] = 'field_path';
  $handler->display->display_options['fields']['field_path']['label'] = '';
  $handler->display->display_options['fields']['field_path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_path']['hide_alter_empty'] = FALSE;
  /* Field: Field collection item: Host Entity ID */
  $handler->display->display_options['fields']['host_entity_id']['id'] = 'host_entity_id';
  $handler->display->display_options['fields']['host_entity_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_id']['field'] = 'host_entity_id';
  $handler->display->display_options['fields']['host_entity_id']['label'] = '';
  $handler->display->display_options['fields']['host_entity_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_id']['hide_alter_empty'] = FALSE;
  /* Field: Field collection item: Host Entity Path */
  $handler->display->display_options['fields']['host_entity_path']['id'] = 'host_entity_path';
  $handler->display->display_options['fields']['host_entity_path']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_path']['field'] = 'host_entity_path';
  $handler->display->display_options['fields']['host_entity_path']['label'] = '';
  $handler->display->display_options['fields']['host_entity_path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_path']['hide_alter_empty'] = FALSE;
  /* Field: Field collection item: Host Entity Type */
  $handler->display->display_options['fields']['host_entity_type']['id'] = 'host_entity_type';
  $handler->display->display_options['fields']['host_entity_type']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_type']['field'] = 'host_entity_type';
  $handler->display->display_options['fields']['host_entity_type']['label'] = '';
  $handler->display->display_options['fields']['host_entity_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_type']['hide_alter_empty'] = FALSE;
  /* Field: File: Size */
  $handler->display->display_options['fields']['filesize']['id'] = 'filesize';
  $handler->display->display_options['fields']['filesize']['table'] = 'file_managed';
  $handler->display->display_options['fields']['filesize']['field'] = 'filesize';
  $handler->display->display_options['fields']['filesize']['relationship'] = 'field_s3_file_upload_fid';
  $handler->display->display_options['fields']['filesize']['label'] = '';
  $handler->display->display_options['fields']['filesize']['exclude'] = TRUE;
  $handler->display->display_options['fields']['filesize']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['filesize']['file_size_display'] = 'bytes';
  /* Field: Content: File Size Warning */
  $handler->display->display_options['fields']['file_size_warning']['id'] = 'file_size_warning';
  $handler->display->display_options['fields']['file_size_warning']['table'] = 'node';
  $handler->display->display_options['fields']['file_size_warning']['field'] = 'file_size_warning';
  $handler->display->display_options['fields']['file_size_warning']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['fields']['file_size_warning']['label'] = '';
  $handler->display->display_options['fields']['file_size_warning']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['file_size_warning']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['file_size_warning']['element_wrapper_class'] = 'file-size-warning-wrapper';
  $handler->display->display_options['fields']['file_size_warning']['element_default_classes'] = FALSE;
  /* Field: Field: S3 File Upload */
  $handler->display->display_options['fields']['field_s3_file_upload_1']['id'] = 'field_s3_file_upload_1';
  $handler->display->display_options['fields']['field_s3_file_upload_1']['table'] = 'field_data_field_s3_file_upload';
  $handler->display->display_options['fields']['field_s3_file_upload_1']['field'] = 'field_s3_file_upload';
  $handler->display->display_options['fields']['field_s3_file_upload_1']['label'] = 'TMP';
  $handler->display->display_options['fields']['field_s3_file_upload_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s3_file_upload_1']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['field_s3_file_upload_1']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_s3_file_upload_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s3_file_upload_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s3_file_upload_1']['type'] = 'file_url_plain';
  /* Field: Field: S3 File Upload */
  $handler->display->display_options['fields']['field_s3_file_upload']['id'] = 'field_s3_file_upload';
  $handler->display->display_options['fields']['field_s3_file_upload']['table'] = 'field_data_field_s3_file_upload';
  $handler->display->display_options['fields']['field_s3_file_upload']['field'] = 'field_s3_file_upload';
  $handler->display->display_options['fields']['field_s3_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_s3_file_upload']['alter']['text'] = 'Click to download';
  $handler->display->display_options['fields']['field_s3_file_upload']['alter']['path'] = '[host_entity_path]';
  $handler->display->display_options['fields']['field_s3_file_upload']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_s3_file_upload']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_s3_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s3_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s3_file_upload']['type'] = 'file_url_plain';
  /* Field: Field collection item: Running Time */
  $handler->display->display_options['fields']['field_running_time']['id'] = 'field_running_time';
  $handler->display->display_options['fields']['field_running_time']['table'] = 'field_data_field_running_time';
  $handler->display->display_options['fields']['field_running_time']['field'] = 'field_running_time';
  $handler->display->display_options['fields']['field_running_time']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_running_time']['alter']['text'] = '[field_running_time]';
  $handler->display->display_options['fields']['field_running_time']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_running_time']['element_class'] = 'search-embed-running-time-content';
  $handler->display->display_options['fields']['field_running_time']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_running_time']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_running_time']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_running_time']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  $handler->display->display_options['fields']['field_running_time']['delta_offset'] = '0';
  /* Field: Field collection item: Narrator */
  $handler->display->display_options['fields']['field_performer']['id'] = 'field_performer';
  $handler->display->display_options['fields']['field_performer']['table'] = 'field_data_field_performer';
  $handler->display->display_options['fields']['field_performer']['field'] = 'field_performer';
  $handler->display->display_options['fields']['field_performer']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_performer']['alter']['path'] = '/repository-search?search_api_views_fulltext_2=[field_performer-value]&f[]=field_file_resource:field_performer:[field_performer-value]';
  $handler->display->display_options['fields']['field_performer']['alter']['alt'] = '[field_performer-value]';
  $handler->display->display_options['fields']['field_performer']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_performer']['element_class'] = 'search-embed-narrator-content';
  $handler->display->display_options['fields']['field_performer']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_performer']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_performer']['settings'] = array(
    'title_style' => '_none',
    'title_link' => '',
    'title_class' => '',
  );
  $handler->display->display_options['fields']['field_performer']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_performer']['separator'] = ';';
  /* Field: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['label'] = 'tmp';
  $handler->display->display_options['fields']['item_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['item_id']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['item_id']['separator'] = '';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '[field_path]/[item_id]/edit?destination=[host_entity_path]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Delete';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = '[field_path]/[item_id]/delete?destination=[host_entity_path]';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = 'Add';
  $handler->display->display_options['fields']['nothing_2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['path'] = '[field_path]/add/[host_entity_type]/[host_entity_id]?destination=[host_entity_path]';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $export['field_collection_view_repo_files'] = $view;

  $view = new view();
  $view->name = 'field_collection_view_s3_format_conversions';
  $view->description = 'Used to convert file formats, normalize performer values, etc.';
  $view->tag = 'File Attachments, Normalization';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'S3 File Attachment Normalization';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Performers';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    7 => '7',
    4 => '4',
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '300';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['total_pages'] = '20';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations_1' => 'views_bulk_operations_1',
    'item_id' => 'item_id',
    'field_path' => 'field_path',
    'host_entity_id' => 'host_entity_id',
    'host_entity_path' => 'host_entity_path',
    'host_entity_type' => 'host_entity_type',
    'field_s3_path' => 'field_s3_path',
    'title_field' => 'title_field',
    'field_s3_file_upload' => 'field_s3_file_upload',
    'field_file_format' => 'field_file_format',
    'field_record_set' => 'field_record_set',
    'nothing' => 'nothing',
    'nothing_1' => 'nothing_1',
    'nothing_2' => 'nothing_2',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'item_id' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'host_entity_id' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'host_entity_path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'host_entity_type' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_s3_path' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_field' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_s3_file_upload' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_file_format' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_record_set' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_2' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'NB: all text field searches are case-sensitive with auto-stemming turned on. Search "owboys" to return results with both "Cowboys" and "cowboys".';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Relationship: Field collection item: Entity with the File Resource (field_file_resource) */
  $handler->display->display_options['relationships']['field_file_resource_node']['id'] = 'field_file_resource_node';
  $handler->display->display_options['relationships']['field_file_resource_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_file_resource_node']['field'] = 'field_file_resource_node';
  $handler->display->display_options['relationships']['field_file_resource_node']['required'] = TRUE;
  /* Relationship: Content: Record Set (field_record_set) */
  $handler->display->display_options['relationships']['field_record_set_nid']['id'] = 'field_record_set_nid';
  $handler->display->display_options['relationships']['field_record_set_nid']['table'] = 'field_data_field_record_set';
  $handler->display->display_options['relationships']['field_record_set_nid']['field'] = 'field_record_set_nid';
  $handler->display->display_options['relationships']['field_record_set_nid']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['relationships']['field_record_set_nid']['delta'] = '-1';
  /* Relationship: Field: S3 File Upload (field_s3_file_upload:fid) */
  $handler->display->display_options['relationships']['field_s3_file_upload_fid']['id'] = 'field_s3_file_upload_fid';
  $handler->display->display_options['relationships']['field_s3_file_upload_fid']['table'] = 'field_data_field_s3_file_upload';
  $handler->display->display_options['relationships']['field_s3_file_upload_fid']['field'] = 'field_s3_file_upload_fid';
  /* Field: Bulk operations: Field collection item */
  $handler->display->display_options['fields']['views_bulk_operations_1']['id'] = 'views_bulk_operations_1';
  $handler->display->display_options['fields']['views_bulk_operations_1']['table'] = 'views_entity_field_collection_item';
  $handler->display->display_options['fields']['views_bulk_operations_1']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_operations'] = array(
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Update File Format',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'field_file_resource::field_file_format' => 'field_file_resource::field_file_format',
        ),
      ),
    ),
  );
  /* Field: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['label'] = 'ID';
  $handler->display->display_options['fields']['item_id']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['item_id']['separator'] = '';
  /* Field: Field collection item: Field path */
  $handler->display->display_options['fields']['field_path']['id'] = 'field_path';
  $handler->display->display_options['fields']['field_path']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['field_path']['field'] = 'field_path';
  $handler->display->display_options['fields']['field_path']['label'] = '';
  $handler->display->display_options['fields']['field_path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_path']['hide_alter_empty'] = FALSE;
  /* Field: Field collection item: Host Entity ID */
  $handler->display->display_options['fields']['host_entity_id']['id'] = 'host_entity_id';
  $handler->display->display_options['fields']['host_entity_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_id']['field'] = 'host_entity_id';
  $handler->display->display_options['fields']['host_entity_id']['label'] = '';
  $handler->display->display_options['fields']['host_entity_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_id']['hide_alter_empty'] = FALSE;
  /* Field: Field collection item: Host Entity Path */
  $handler->display->display_options['fields']['host_entity_path']['id'] = 'host_entity_path';
  $handler->display->display_options['fields']['host_entity_path']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_path']['field'] = 'host_entity_path';
  $handler->display->display_options['fields']['host_entity_path']['label'] = '';
  $handler->display->display_options['fields']['host_entity_path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_path']['hide_alter_empty'] = FALSE;
  /* Field: Field collection item: Host Entity Type */
  $handler->display->display_options['fields']['host_entity_type']['id'] = 'host_entity_type';
  $handler->display->display_options['fields']['host_entity_type']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_type']['field'] = 'host_entity_type';
  $handler->display->display_options['fields']['host_entity_type']['label'] = '';
  $handler->display->display_options['fields']['host_entity_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_type']['hide_alter_empty'] = FALSE;
  /* Field: Field: S3 Path */
  $handler->display->display_options['fields']['field_s3_path']['id'] = 'field_s3_path';
  $handler->display->display_options['fields']['field_s3_path']['table'] = 'field_data_field_s3_path';
  $handler->display->display_options['fields']['field_s3_path']['field'] = 'field_s3_path';
  $handler->display->display_options['fields']['field_s3_path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s3_path']['alter']['max_length'] = '20';
  $handler->display->display_options['fields']['field_s3_path']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_s3_path']['alter']['trim'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['fields']['title_field']['label'] = 'Repo Item';
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'title_style' => '_none',
    'title_link' => '',
    'title_class' => '',
  );
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Field: Field: S3 File Upload */
  $handler->display->display_options['fields']['field_s3_file_upload']['id'] = 'field_s3_file_upload';
  $handler->display->display_options['fields']['field_s3_file_upload']['table'] = 'field_data_field_s3_file_upload';
  $handler->display->display_options['fields']['field_s3_file_upload']['field'] = 'field_s3_file_upload';
  $handler->display->display_options['fields']['field_s3_file_upload']['click_sort_column'] = 'fid';
  /* Field: Field: File Format */
  $handler->display->display_options['fields']['field_file_format']['id'] = 'field_file_format';
  $handler->display->display_options['fields']['field_file_format']['table'] = 'field_data_field_file_format';
  $handler->display->display_options['fields']['field_file_format']['field'] = 'field_file_format';
  /* Field: Content: Record Set */
  $handler->display->display_options['fields']['field_record_set']['id'] = 'field_record_set';
  $handler->display->display_options['fields']['field_record_set']['table'] = 'field_data_field_record_set';
  $handler->display->display_options['fields']['field_record_set']['field'] = 'field_record_set';
  $handler->display->display_options['fields']['field_record_set']['relationship'] = 'field_file_resource_node';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '[field_path]/[item_id]/edit?destination=[host_entity_path]';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Delete';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Delete';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = '[field_path]/[item_id]/delete?destination=[host_entity_path]';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = 'Add';
  $handler->display->display_options['fields']['nothing_2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['path'] = '[field_path]/add/[host_entity_type]/[host_entity_id]?destination=[host_entity_path]';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  /* Sort criterion: Field collection item: Field collection item ID */
  $handler->display->display_options['sorts']['item_id']['id'] = 'item_id';
  $handler->display->display_options['sorts']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['sorts']['item_id']['field'] = 'item_id';
  $handler->display->display_options['sorts']['item_id']['order'] = 'DESC';
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  $handler->display->display_options['sorts']['nid']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['sorts']['nid']['order'] = 'DESC';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  /* Filter criterion: Field: S3 File Upload (field_s3_file_upload:fid) */
  $handler->display->display_options['filters']['field_s3_file_upload_fid']['id'] = 'field_s3_file_upload_fid';
  $handler->display->display_options['filters']['field_s3_file_upload_fid']['table'] = 'field_data_field_s3_file_upload';
  $handler->display->display_options['filters']['field_s3_file_upload_fid']['field'] = 'field_s3_file_upload_fid';
  $handler->display->display_options['filters']['field_s3_file_upload_fid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_s3_file_upload_fid']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
    8 => 0,
  );
  /* Filter criterion: Field: S3 Path (field_s3_path) */
  $handler->display->display_options['filters']['field_s3_path_value']['id'] = 'field_s3_path_value';
  $handler->display->display_options['filters']['field_s3_path_value']['table'] = 'field_data_field_s3_path';
  $handler->display->display_options['filters']['field_s3_path_value']['field'] = 'field_s3_path_value';
  $handler->display->display_options['filters']['field_s3_path_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_s3_path_value']['group'] = 1;
  $handler->display->display_options['filters']['field_s3_path_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_s3_path_value']['expose']['operator_id'] = 'field_s3_path_value_op';
  $handler->display->display_options['filters']['field_s3_path_value']['expose']['label'] = 'S3 Path';
  $handler->display->display_options['filters']['field_s3_path_value']['expose']['operator'] = 'field_s3_path_value_op';
  $handler->display->display_options['filters']['field_s3_path_value']['expose']['identifier'] = 'field_s3_path_value';
  $handler->display->display_options['filters']['field_s3_path_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
    8 => 0,
  );
  /* Filter criterion: Content: Record Set (field_record_set) */
  $handler->display->display_options['filters']['field_record_set_nid']['id'] = 'field_record_set_nid';
  $handler->display->display_options['filters']['field_record_set_nid']['table'] = 'field_data_field_record_set';
  $handler->display->display_options['filters']['field_record_set_nid']['field'] = 'field_record_set_nid';
  $handler->display->display_options['filters']['field_record_set_nid']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['filters']['field_record_set_nid']['group'] = 1;
  $handler->display->display_options['filters']['field_record_set_nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_record_set_nid']['expose']['operator_id'] = 'field_record_set_nid_op';
  $handler->display->display_options['filters']['field_record_set_nid']['expose']['label'] = 'Record Set';
  $handler->display->display_options['filters']['field_record_set_nid']['expose']['operator'] = 'field_record_set_nid_op';
  $handler->display->display_options['filters']['field_record_set_nid']['expose']['identifier'] = 'field_record_set_nid';
  $handler->display->display_options['filters']['field_record_set_nid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
    8 => 0,
  );
  /* Filter criterion: Field: System Control Number (field_system_control_number) */
  $handler->display->display_options['filters']['field_system_control_number_value']['id'] = 'field_system_control_number_value';
  $handler->display->display_options['filters']['field_system_control_number_value']['table'] = 'field_data_field_system_control_number';
  $handler->display->display_options['filters']['field_system_control_number_value']['field'] = 'field_system_control_number_value';
  $handler->display->display_options['filters']['field_system_control_number_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['operator_id'] = 'field_system_control_number_value_op';
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['label'] = 'System Control Number (field_system_control_number)';
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['operator'] = 'field_system_control_number_value_op';
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['identifier'] = 'field_system_control_number_value';

  /* Display: VBO - File Formats */
  $handler = $view->new_display('page', 'VBO - File Formats', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'File Format Update';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '90';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'counter' => 'counter',
    'views_bulk_operations_1' => 'views_bulk_operations_1',
    'item_id' => 'item_id',
    'field_path' => 'field_path',
    'host_entity_id' => 'host_entity_id',
    'host_entity_path' => 'host_entity_path',
    'host_entity_type' => 'host_entity_type',
    'field_s3_path' => 'field_s3_path',
    'title_field' => 'title_field',
    'field_system_control_number_1' => 'field_system_control_number_1',
    'field_file_format' => 'field_file_format',
    'field_accrual_method' => 'field_accrual_method',
    'field_performer' => 'field_performer',
    'field_dc_contributor' => 'field_dc_contributor',
    'field_s3_file_upload' => 'field_s3_file_upload',
    'field_publisher_format' => 'field_publisher_format',
    'field_record_set' => 'field_record_set',
    'status' => 'status',
    'field_partner_sharing' => 'field_partner_sharing',
    'nothing' => 'nothing',
    'nothing_1' => 'nothing_1',
    'nothing_2' => 'nothing_2',
  );
  $handler->display->display_options['style_options']['class'] = '';
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'counter' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'views_bulk_operations_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'item_id' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'host_entity_id' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'host_entity_path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'host_entity_type' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_s3_path' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_field' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_system_control_number_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_file_format' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_accrual_method' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_performer' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dc_contributor' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_s3_file_upload' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_publisher_format' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_record_set' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_partner_sharing' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_2' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  $handler->display->display_options['fields']['counter']['reverse'] = 0;
  /* Field: Bulk operations: Field collection item */
  $handler->display->display_options['fields']['views_bulk_operations_1']['id'] = 'views_bulk_operations_1';
  $handler->display->display_options['fields']['views_bulk_operations_1']['table'] = 'views_entity_field_collection_item';
  $handler->display->display_options['fields']['views_bulk_operations_1']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['entity_load_capacity'] = '50';
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 1,
      'label' => 'Delete File Resource',
      'settings' => array(
        'log' => 0,
      ),
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 1,
      'label' => 'Modify File Entity Values',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'field_file_resource::field_availability_status' => 'field_file_resource::field_availability_status',
          'field_file_resource::field_file_format' => 'field_file_resource::field_file_format',
          'field_file_resource::field_organization' => 'field_file_resource::field_organization',
          'field_file_resource::field_accrual_method' => 'field_file_resource::field_accrual_method',
          'field_file_resource::field_performer' => 'field_file_resource::field_performer',
          'field_file_resource::field_running_time' => 'field_file_resource::field_running_time',
          'field_file_resource::field_description' => 'field_file_resource::field_description',
          'field_file_resource::field_partner_sharing' => 'field_file_resource::field_partner_sharing',
        ),
      ),
    ),
  );
  /* Field: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['label'] = 'ID';
  $handler->display->display_options['fields']['item_id']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['item_id']['separator'] = '';
  /* Field: Field collection item: Field path */
  $handler->display->display_options['fields']['field_path']['id'] = 'field_path';
  $handler->display->display_options['fields']['field_path']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['field_path']['field'] = 'field_path';
  $handler->display->display_options['fields']['field_path']['label'] = '';
  $handler->display->display_options['fields']['field_path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_path']['hide_alter_empty'] = FALSE;
  /* Field: Field collection item: Host Entity ID */
  $handler->display->display_options['fields']['host_entity_id']['id'] = 'host_entity_id';
  $handler->display->display_options['fields']['host_entity_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_id']['field'] = 'host_entity_id';
  $handler->display->display_options['fields']['host_entity_id']['label'] = '';
  $handler->display->display_options['fields']['host_entity_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_id']['hide_alter_empty'] = FALSE;
  /* Field: Field collection item: Host Entity Path */
  $handler->display->display_options['fields']['host_entity_path']['id'] = 'host_entity_path';
  $handler->display->display_options['fields']['host_entity_path']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_path']['field'] = 'host_entity_path';
  $handler->display->display_options['fields']['host_entity_path']['label'] = '';
  $handler->display->display_options['fields']['host_entity_path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_path']['hide_alter_empty'] = FALSE;
  /* Field: Field collection item: Host Entity Type */
  $handler->display->display_options['fields']['host_entity_type']['id'] = 'host_entity_type';
  $handler->display->display_options['fields']['host_entity_type']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_type']['field'] = 'host_entity_type';
  $handler->display->display_options['fields']['host_entity_type']['label'] = '';
  $handler->display->display_options['fields']['host_entity_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_type']['hide_alter_empty'] = FALSE;
  /* Field: Field: S3 Path */
  $handler->display->display_options['fields']['field_s3_path']['id'] = 'field_s3_path';
  $handler->display->display_options['fields']['field_s3_path']['table'] = 'field_data_field_s3_path';
  $handler->display->display_options['fields']['field_s3_path']['field'] = 'field_s3_path';
  $handler->display->display_options['fields']['field_s3_path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s3_path']['alter']['max_length'] = '20';
  $handler->display->display_options['fields']['field_s3_path']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_s3_path']['alter']['trim'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['fields']['title_field']['label'] = 'Repo Item';
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'title_style' => '_none',
    'title_link' => '',
    'title_class' => '',
  );
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Field: Field: System Control Number */
  $handler->display->display_options['fields']['field_system_control_number_1']['id'] = 'field_system_control_number_1';
  $handler->display->display_options['fields']['field_system_control_number_1']['table'] = 'field_data_field_system_control_number';
  $handler->display->display_options['fields']['field_system_control_number_1']['field'] = 'field_system_control_number';
  $handler->display->display_options['fields']['field_system_control_number_1']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['fields']['field_system_control_number_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_system_control_number_1']['delta_offset'] = '0';
  /* Field: Field: File Format */
  $handler->display->display_options['fields']['field_file_format']['id'] = 'field_file_format';
  $handler->display->display_options['fields']['field_file_format']['table'] = 'field_data_field_file_format';
  $handler->display->display_options['fields']['field_file_format']['field'] = 'field_file_format';
  /* Field: Field collection item: Accrual Method */
  $handler->display->display_options['fields']['field_accrual_method']['id'] = 'field_accrual_method';
  $handler->display->display_options['fields']['field_accrual_method']['table'] = 'field_data_field_accrual_method';
  $handler->display->display_options['fields']['field_accrual_method']['field'] = 'field_accrual_method';
  /* Field: Field collection item: Narrator */
  $handler->display->display_options['fields']['field_performer']['id'] = 'field_performer';
  $handler->display->display_options['fields']['field_performer']['table'] = 'field_data_field_performer';
  $handler->display->display_options['fields']['field_performer']['field'] = 'field_performer';
  $handler->display->display_options['fields']['field_performer']['delta_offset'] = '0';
  /* Field: Content: DC Contributor */
  $handler->display->display_options['fields']['field_dc_contributor']['id'] = 'field_dc_contributor';
  $handler->display->display_options['fields']['field_dc_contributor']['table'] = 'field_data_field_dc_contributor';
  $handler->display->display_options['fields']['field_dc_contributor']['field'] = 'field_dc_contributor';
  $handler->display->display_options['fields']['field_dc_contributor']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['fields']['field_dc_contributor']['delta_offset'] = '0';
  /* Field: Field: S3 File Upload */
  $handler->display->display_options['fields']['field_s3_file_upload']['id'] = 'field_s3_file_upload';
  $handler->display->display_options['fields']['field_s3_file_upload']['table'] = 'field_data_field_s3_file_upload';
  $handler->display->display_options['fields']['field_s3_file_upload']['field'] = 'field_s3_file_upload';
  $handler->display->display_options['fields']['field_s3_file_upload']['click_sort_column'] = 'fid';
  /* Field: Field collection item: Name of Publisher */
  $handler->display->display_options['fields']['field_publisher_format']['id'] = 'field_publisher_format';
  $handler->display->display_options['fields']['field_publisher_format']['table'] = 'field_data_field_publisher_format';
  $handler->display->display_options['fields']['field_publisher_format']['field'] = 'field_publisher_format';
  /* Field: Content: Record Set */
  $handler->display->display_options['fields']['field_record_set']['id'] = 'field_record_set';
  $handler->display->display_options['fields']['field_record_set']['table'] = 'field_data_field_record_set';
  $handler->display->display_options['fields']['field_record_set']['field'] = 'field_record_set';
  $handler->display->display_options['fields']['field_record_set']['relationship'] = 'field_file_resource_node';
  /* Field: Content: Published status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['fields']['status']['label'] = 'Published';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Field collection item: Partner Share */
  $handler->display->display_options['fields']['field_partner_sharing']['id'] = 'field_partner_sharing';
  $handler->display->display_options['fields']['field_partner_sharing']['table'] = 'field_data_field_partner_sharing';
  $handler->display->display_options['fields']['field_partner_sharing']['field'] = 'field_partner_sharing';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '[field_path]/[item_id]/edit?destination=[host_entity_path]';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Delete';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Delete';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = '[field_path]/[item_id]/delete?destination=[host_entity_path]';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = 'Add';
  $handler->display->display_options['fields']['nothing_2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['path'] = '[field_path]/add/[host_entity_type]/[host_entity_id]?destination=[host_entity_path]';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Field: S3 File Upload (field_s3_file_upload:fid) */
  $handler->display->display_options['filters']['field_s3_file_upload_fid']['id'] = 'field_s3_file_upload_fid';
  $handler->display->display_options['filters']['field_s3_file_upload_fid']['table'] = 'field_data_field_s3_file_upload';
  $handler->display->display_options['filters']['field_s3_file_upload_fid']['field'] = 'field_s3_file_upload_fid';
  $handler->display->display_options['filters']['field_s3_file_upload_fid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_s3_file_upload_fid']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
    8 => 0,
  );
  /* Filter criterion: Field: S3 Path (field_s3_path) */
  $handler->display->display_options['filters']['field_s3_path_value']['id'] = 'field_s3_path_value';
  $handler->display->display_options['filters']['field_s3_path_value']['table'] = 'field_data_field_s3_path';
  $handler->display->display_options['filters']['field_s3_path_value']['field'] = 'field_s3_path_value';
  $handler->display->display_options['filters']['field_s3_path_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_s3_path_value']['group'] = 1;
  $handler->display->display_options['filters']['field_s3_path_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_s3_path_value']['expose']['operator_id'] = 'field_s3_path_value_op';
  $handler->display->display_options['filters']['field_s3_path_value']['expose']['label'] = 'S3 Path';
  $handler->display->display_options['filters']['field_s3_path_value']['expose']['operator'] = 'field_s3_path_value_op';
  $handler->display->display_options['filters']['field_s3_path_value']['expose']['identifier'] = 'field_s3_path_value';
  $handler->display->display_options['filters']['field_s3_path_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
    8 => 0,
  );
  /* Filter criterion: Content: Record Set (field_record_set) */
  $handler->display->display_options['filters']['field_record_set_nid']['id'] = 'field_record_set_nid';
  $handler->display->display_options['filters']['field_record_set_nid']['table'] = 'field_data_field_record_set';
  $handler->display->display_options['filters']['field_record_set_nid']['field'] = 'field_record_set_nid';
  $handler->display->display_options['filters']['field_record_set_nid']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['filters']['field_record_set_nid']['group'] = 1;
  $handler->display->display_options['filters']['field_record_set_nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_record_set_nid']['expose']['operator_id'] = 'field_record_set_nid_op';
  $handler->display->display_options['filters']['field_record_set_nid']['expose']['label'] = 'Record Set';
  $handler->display->display_options['filters']['field_record_set_nid']['expose']['operator'] = 'field_record_set_nid_op';
  $handler->display->display_options['filters']['field_record_set_nid']['expose']['identifier'] = 'field_record_set_nid';
  $handler->display->display_options['filters']['field_record_set_nid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
    8 => 0,
  );
  /* Filter criterion: Field: System Control Number (field_system_control_number) */
  $handler->display->display_options['filters']['field_system_control_number_value']['id'] = 'field_system_control_number_value';
  $handler->display->display_options['filters']['field_system_control_number_value']['table'] = 'field_data_field_system_control_number';
  $handler->display->display_options['filters']['field_system_control_number_value']['field'] = 'field_system_control_number_value';
  $handler->display->display_options['filters']['field_system_control_number_value']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['filters']['field_system_control_number_value']['operator'] = 'starts';
  $handler->display->display_options['filters']['field_system_control_number_value']['group'] = 1;
  $handler->display->display_options['filters']['field_system_control_number_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['operator_id'] = 'field_system_control_number_value_op';
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['label'] = 'System Control Number';
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['operator'] = 'field_system_control_number_value_op';
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['identifier'] = 'field_system_control_number_value';
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Field: File Format (field_file_format) */
  $handler->display->display_options['filters']['field_file_format_value']['id'] = 'field_file_format_value';
  $handler->display->display_options['filters']['field_file_format_value']['table'] = 'field_data_field_file_format';
  $handler->display->display_options['filters']['field_file_format_value']['field'] = 'field_file_format_value';
  $handler->display->display_options['filters']['field_file_format_value']['group'] = 1;
  $handler->display->display_options['filters']['field_file_format_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_file_format_value']['expose']['operator_id'] = 'field_file_format_value_op';
  $handler->display->display_options['filters']['field_file_format_value']['expose']['label'] = 'File Format';
  $handler->display->display_options['filters']['field_file_format_value']['expose']['operator'] = 'field_file_format_value_op';
  $handler->display->display_options['filters']['field_file_format_value']['expose']['identifier'] = 'field_file_format_value';
  $handler->display->display_options['filters']['field_file_format_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Field collection item: Accrual Method (field_accrual_method) */
  $handler->display->display_options['filters']['field_accrual_method_value']['id'] = 'field_accrual_method_value';
  $handler->display->display_options['filters']['field_accrual_method_value']['table'] = 'field_data_field_accrual_method';
  $handler->display->display_options['filters']['field_accrual_method_value']['field'] = 'field_accrual_method_value';
  $handler->display->display_options['filters']['field_accrual_method_value']['group'] = 1;
  $handler->display->display_options['filters']['field_accrual_method_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_accrual_method_value']['expose']['operator_id'] = 'field_accrual_method_value_op';
  $handler->display->display_options['filters']['field_accrual_method_value']['expose']['label'] = 'Accrual Method';
  $handler->display->display_options['filters']['field_accrual_method_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_accrual_method_value']['expose']['operator'] = 'field_accrual_method_value_op';
  $handler->display->display_options['filters']['field_accrual_method_value']['expose']['identifier'] = 'field_accrual_method_value';
  $handler->display->display_options['filters']['field_accrual_method_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['filters']['status']['value'] = 'All';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Field collection item: Availability / Status (field_availability_status) */
  $handler->display->display_options['filters']['field_availability_status_value']['id'] = 'field_availability_status_value';
  $handler->display->display_options['filters']['field_availability_status_value']['table'] = 'field_data_field_availability_status';
  $handler->display->display_options['filters']['field_availability_status_value']['field'] = 'field_availability_status_value';
  $handler->display->display_options['filters']['field_availability_status_value']['group'] = 1;
  $handler->display->display_options['filters']['field_availability_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_availability_status_value']['expose']['operator_id'] = 'field_availability_status_value_op';
  $handler->display->display_options['filters']['field_availability_status_value']['expose']['label'] = 'Availability / Status';
  $handler->display->display_options['filters']['field_availability_status_value']['expose']['operator'] = 'field_availability_status_value_op';
  $handler->display->display_options['filters']['field_availability_status_value']['expose']['identifier'] = 'field_availability_status_value';
  $handler->display->display_options['filters']['field_availability_status_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Field collection item: Name of Publisher (field_publisher_format) */
  $handler->display->display_options['filters']['field_publisher_format_value']['id'] = 'field_publisher_format_value';
  $handler->display->display_options['filters']['field_publisher_format_value']['table'] = 'field_data_field_publisher_format';
  $handler->display->display_options['filters']['field_publisher_format_value']['field'] = 'field_publisher_format_value';
  $handler->display->display_options['filters']['field_publisher_format_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_publisher_format_value']['group'] = 1;
  $handler->display->display_options['filters']['field_publisher_format_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_publisher_format_value']['expose']['operator_id'] = 'field_publisher_format_value_op';
  $handler->display->display_options['filters']['field_publisher_format_value']['expose']['label'] = 'Name of File Publisher';
  $handler->display->display_options['filters']['field_publisher_format_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_publisher_format_value']['expose']['operator'] = 'field_publisher_format_value_op';
  $handler->display->display_options['filters']['field_publisher_format_value']['expose']['identifier'] = 'field_publisher_format_value';
  $handler->display->display_options['filters']['field_publisher_format_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Field collection item: Narrator (field_performer) */
  $handler->display->display_options['filters']['field_performer_value']['id'] = 'field_performer_value';
  $handler->display->display_options['filters']['field_performer_value']['table'] = 'field_data_field_performer';
  $handler->display->display_options['filters']['field_performer_value']['field'] = 'field_performer_value';
  $handler->display->display_options['filters']['field_performer_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_performer_value']['group'] = 1;
  $handler->display->display_options['filters']['field_performer_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_performer_value']['expose']['operator_id'] = 'field_performer_value_op';
  $handler->display->display_options['filters']['field_performer_value']['expose']['label'] = 'Narrator';
  $handler->display->display_options['filters']['field_performer_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_performer_value']['expose']['operator'] = 'field_performer_value_op';
  $handler->display->display_options['filters']['field_performer_value']['expose']['identifier'] = 'field_performer_value';
  $handler->display->display_options['filters']['field_performer_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_performer_value']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_performer_value']['group_info']['label'] = 'Narrator Y/N?';
  $handler->display->display_options['filters']['field_performer_value']['group_info']['description'] = 'Not empty or empty';
  $handler->display->display_options['filters']['field_performer_value']['group_info']['identifier'] = 'field_performer_value';
  $handler->display->display_options['filters']['field_performer_value']['group_info']['default_group'] = '2';
  $handler->display->display_options['filters']['field_performer_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Is Not Empty',
      'operator' => 'not empty',
      'value' => '',
    ),
    2 => array(
      'title' => 'Is empty',
      'operator' => 'empty',
      'value' => '',
    ),
  );
  /* Filter criterion: Field collection item: Narrator (field_performer) */
  $handler->display->display_options['filters']['field_performer_value_1']['id'] = 'field_performer_value_1';
  $handler->display->display_options['filters']['field_performer_value_1']['table'] = 'field_data_field_performer';
  $handler->display->display_options['filters']['field_performer_value_1']['field'] = 'field_performer_value';
  $handler->display->display_options['filters']['field_performer_value_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_performer_value_1']['group'] = 1;
  $handler->display->display_options['filters']['field_performer_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_performer_value_1']['expose']['operator_id'] = 'field_performer_value_1_op';
  $handler->display->display_options['filters']['field_performer_value_1']['expose']['label'] = 'Narrator Search';
  $handler->display->display_options['filters']['field_performer_value_1']['expose']['operator'] = 'field_performer_value_1_op';
  $handler->display->display_options['filters']['field_performer_value_1']['expose']['identifier'] = 'field_performer_value_1';
  $handler->display->display_options['filters']['field_performer_value_1']['expose']['remember_roles'] = array(
    2 => '2',
  );
  /* Filter criterion: Content: DC Contributor (field_dc_contributor) */
  $handler->display->display_options['filters']['field_dc_contributor_value']['id'] = 'field_dc_contributor_value';
  $handler->display->display_options['filters']['field_dc_contributor_value']['table'] = 'field_data_field_dc_contributor';
  $handler->display->display_options['filters']['field_dc_contributor_value']['field'] = 'field_dc_contributor_value';
  $handler->display->display_options['filters']['field_dc_contributor_value']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['filters']['field_dc_contributor_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_dc_contributor_value']['group'] = 1;
  $handler->display->display_options['filters']['field_dc_contributor_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_dc_contributor_value']['expose']['operator_id'] = 'field_dc_contributor_value_op';
  $handler->display->display_options['filters']['field_dc_contributor_value']['expose']['label'] = 'DC Contributor';
  $handler->display->display_options['filters']['field_dc_contributor_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_dc_contributor_value']['expose']['operator'] = 'field_dc_contributor_value_op';
  $handler->display->display_options['filters']['field_dc_contributor_value']['expose']['identifier'] = 'field_dc_contributor_value';
  $handler->display->display_options['filters']['field_dc_contributor_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Field collection item: Partner Share (field_partner_sharing) */
  $handler->display->display_options['filters']['field_partner_sharing_value']['id'] = 'field_partner_sharing_value';
  $handler->display->display_options['filters']['field_partner_sharing_value']['table'] = 'field_data_field_partner_sharing';
  $handler->display->display_options['filters']['field_partner_sharing_value']['field'] = 'field_partner_sharing_value';
  $handler->display->display_options['filters']['field_partner_sharing_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_partner_sharing_value']['group'] = 1;
  $handler->display->display_options['filters']['field_partner_sharing_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_partner_sharing_value']['expose']['operator_id'] = 'field_partner_sharing_value_op';
  $handler->display->display_options['filters']['field_partner_sharing_value']['expose']['label'] = 'Partner Share';
  $handler->display->display_options['filters']['field_partner_sharing_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_partner_sharing_value']['expose']['operator'] = 'field_partner_sharing_value_op';
  $handler->display->display_options['filters']['field_partner_sharing_value']['expose']['identifier'] = 'field_partner_sharing_value';
  $handler->display->display_options['filters']['field_partner_sharing_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_partner_sharing_value']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['path'] = 'admin/content/cals/s3/format-conversions';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'File Format Conversions';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-nnels-admin';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: VBO - Performers */
  $handler = $view->new_display('page', 'VBO - Performers', 'page_2');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Term Warning */
  $handler->display->display_options['header']['term_warning']['id'] = 'term_warning';
  $handler->display->display_options['header']['term_warning']['table'] = 'views';
  $handler->display->display_options['header']['term_warning']['field'] = 'term_warning';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Field collection item */
  $handler->display->display_options['fields']['views_bulk_operations_1']['id'] = 'views_bulk_operations_1';
  $handler->display->display_options['fields']['views_bulk_operations_1']['table'] = 'views_entity_field_collection_item';
  $handler->display->display_options['fields']['views_bulk_operations_1']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_operations'] = array(
    'action::_cals_normalize_performer' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Normalize Performer Values',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Bulk Edit Narrator',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'field_file_resource::field_performer' => 'field_file_resource::field_performer',
        ),
      ),
    ),
  );
  /* Field: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['label'] = 'ID';
  $handler->display->display_options['fields']['item_id']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['item_id']['separator'] = '';
  /* Field: Field collection item: Field path */
  $handler->display->display_options['fields']['field_path']['id'] = 'field_path';
  $handler->display->display_options['fields']['field_path']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['field_path']['field'] = 'field_path';
  $handler->display->display_options['fields']['field_path']['label'] = '';
  $handler->display->display_options['fields']['field_path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_path']['hide_alter_empty'] = FALSE;
  /* Field: Field collection item: Host Entity ID */
  $handler->display->display_options['fields']['host_entity_id']['id'] = 'host_entity_id';
  $handler->display->display_options['fields']['host_entity_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_id']['field'] = 'host_entity_id';
  $handler->display->display_options['fields']['host_entity_id']['label'] = '';
  $handler->display->display_options['fields']['host_entity_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_id']['hide_alter_empty'] = FALSE;
  /* Field: Field collection item: Host Entity Path */
  $handler->display->display_options['fields']['host_entity_path']['id'] = 'host_entity_path';
  $handler->display->display_options['fields']['host_entity_path']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_path']['field'] = 'host_entity_path';
  $handler->display->display_options['fields']['host_entity_path']['label'] = '';
  $handler->display->display_options['fields']['host_entity_path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_path']['hide_alter_empty'] = FALSE;
  /* Field: Field collection item: Host Entity Type */
  $handler->display->display_options['fields']['host_entity_type']['id'] = 'host_entity_type';
  $handler->display->display_options['fields']['host_entity_type']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_type']['field'] = 'host_entity_type';
  $handler->display->display_options['fields']['host_entity_type']['label'] = '';
  $handler->display->display_options['fields']['host_entity_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_type']['hide_alter_empty'] = FALSE;
  /* Field: Field: S3 Path */
  $handler->display->display_options['fields']['field_s3_path']['id'] = 'field_s3_path';
  $handler->display->display_options['fields']['field_s3_path']['table'] = 'field_data_field_s3_path';
  $handler->display->display_options['fields']['field_s3_path']['field'] = 'field_s3_path';
  $handler->display->display_options['fields']['field_s3_path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s3_path']['alter']['max_length'] = '20';
  $handler->display->display_options['fields']['field_s3_path']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_s3_path']['alter']['trim'] = TRUE;
  /* Field: Field collection item: Narrator */
  $handler->display->display_options['fields']['field_performer']['id'] = 'field_performer';
  $handler->display->display_options['fields']['field_performer']['table'] = 'field_data_field_performer';
  $handler->display->display_options['fields']['field_performer']['field'] = 'field_performer';
  $handler->display->display_options['fields']['field_performer']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['fields']['title_field']['label'] = 'Repo Item';
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'title_style' => '_none',
    'title_link' => '',
    'title_class' => '',
  );
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Field: Content: Link to content */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'View Title';
  /* Field: Field: File Format */
  $handler->display->display_options['fields']['field_file_format']['id'] = 'field_file_format';
  $handler->display->display_options['fields']['field_file_format']['table'] = 'field_data_field_file_format';
  $handler->display->display_options['fields']['field_file_format']['field'] = 'field_file_format';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '[field_path]/[item_id]/edit?destination=[host_entity_path]';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Delete';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Delete';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = '[field_path]/[item_id]/delete?destination=[host_entity_path]';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = 'Add';
  $handler->display->display_options['fields']['nothing_2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['path'] = '[field_path]/add/[host_entity_type]/[host_entity_id]?destination=[host_entity_path]';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
    8 => 0,
  );
  /* Filter criterion: Field collection item: Narrator (field_performer) */
  $handler->display->display_options['filters']['field_performer_value']['id'] = 'field_performer_value';
  $handler->display->display_options['filters']['field_performer_value']['table'] = 'field_data_field_performer';
  $handler->display->display_options['filters']['field_performer_value']['field'] = 'field_performer_value';
  $handler->display->display_options['filters']['field_performer_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_performer_value']['group'] = 1;
  /* Filter criterion: Field collection item: Narrator (field_performer) */
  $handler->display->display_options['filters']['field_performer_value_1']['id'] = 'field_performer_value_1';
  $handler->display->display_options['filters']['field_performer_value_1']['table'] = 'field_data_field_performer';
  $handler->display->display_options['filters']['field_performer_value_1']['field'] = 'field_performer_value';
  $handler->display->display_options['filters']['field_performer_value_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_performer_value_1']['group'] = 1;
  $handler->display->display_options['filters']['field_performer_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_performer_value_1']['expose']['operator_id'] = 'field_performer_value_1_op';
  $handler->display->display_options['filters']['field_performer_value_1']['expose']['label'] = 'Performer';
  $handler->display->display_options['filters']['field_performer_value_1']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_performer_value_1']['expose']['operator'] = 'field_performer_value_1_op';
  $handler->display->display_options['filters']['field_performer_value_1']['expose']['identifier'] = 'field_performer_value_1';
  $handler->display->display_options['filters']['field_performer_value_1']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['path'] = 'admin/content/cals/repo-items/narrators-performers';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'File attachments: Narrators / Performers';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-nnels-admin';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: VBO - Performers (3+ word strings) */
  $handler = $view->new_display('page', 'VBO - Performers (3+ word strings)', 'page_3');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Term Warning */
  $handler->display->display_options['header']['term_warning']['id'] = 'term_warning';
  $handler->display->display_options['header']['term_warning']['table'] = 'views';
  $handler->display->display_options['header']['term_warning']['field'] = 'term_warning';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Field collection item */
  $handler->display->display_options['fields']['views_bulk_operations_1']['id'] = 'views_bulk_operations_1';
  $handler->display->display_options['fields']['views_bulk_operations_1']['table'] = 'views_entity_field_collection_item';
  $handler->display->display_options['fields']['views_bulk_operations_1']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_operations'] = array(
    'action::_cals_normalize_performer' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Normalize Performer Values',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Edit Narrator',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'field_file_resource::field_performer' => 'field_file_resource::field_performer',
        ),
      ),
    ),
  );
  /* Field: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['label'] = 'ID';
  $handler->display->display_options['fields']['item_id']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['item_id']['separator'] = '';
  /* Field: Field collection item: Field path */
  $handler->display->display_options['fields']['field_path']['id'] = 'field_path';
  $handler->display->display_options['fields']['field_path']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['field_path']['field'] = 'field_path';
  $handler->display->display_options['fields']['field_path']['label'] = '';
  $handler->display->display_options['fields']['field_path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_path']['hide_alter_empty'] = FALSE;
  /* Field: Field collection item: Host Entity ID */
  $handler->display->display_options['fields']['host_entity_id']['id'] = 'host_entity_id';
  $handler->display->display_options['fields']['host_entity_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_id']['field'] = 'host_entity_id';
  $handler->display->display_options['fields']['host_entity_id']['label'] = '';
  $handler->display->display_options['fields']['host_entity_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_id']['hide_alter_empty'] = FALSE;
  /* Field: Field collection item: Host Entity Path */
  $handler->display->display_options['fields']['host_entity_path']['id'] = 'host_entity_path';
  $handler->display->display_options['fields']['host_entity_path']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_path']['field'] = 'host_entity_path';
  $handler->display->display_options['fields']['host_entity_path']['label'] = '';
  $handler->display->display_options['fields']['host_entity_path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_path']['hide_alter_empty'] = FALSE;
  /* Field: Field collection item: Host Entity Type */
  $handler->display->display_options['fields']['host_entity_type']['id'] = 'host_entity_type';
  $handler->display->display_options['fields']['host_entity_type']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_type']['field'] = 'host_entity_type';
  $handler->display->display_options['fields']['host_entity_type']['label'] = '';
  $handler->display->display_options['fields']['host_entity_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_type']['hide_alter_empty'] = FALSE;
  /* Field: Field: S3 Path */
  $handler->display->display_options['fields']['field_s3_path']['id'] = 'field_s3_path';
  $handler->display->display_options['fields']['field_s3_path']['table'] = 'field_data_field_s3_path';
  $handler->display->display_options['fields']['field_s3_path']['field'] = 'field_s3_path';
  $handler->display->display_options['fields']['field_s3_path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s3_path']['alter']['max_length'] = '20';
  $handler->display->display_options['fields']['field_s3_path']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_s3_path']['alter']['trim'] = TRUE;
  /* Field: Field collection item: Narrator */
  $handler->display->display_options['fields']['field_performer']['id'] = 'field_performer';
  $handler->display->display_options['fields']['field_performer']['table'] = 'field_data_field_performer';
  $handler->display->display_options['fields']['field_performer']['field'] = 'field_performer';
  $handler->display->display_options['fields']['field_performer']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['fields']['title_field']['label'] = 'Repo Item';
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'title_style' => '_none',
    'title_link' => '',
    'title_class' => '',
  );
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Field: Content: Link to content */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'View Title';
  /* Field: Field: File Format */
  $handler->display->display_options['fields']['field_file_format']['id'] = 'field_file_format';
  $handler->display->display_options['fields']['field_file_format']['table'] = 'field_data_field_file_format';
  $handler->display->display_options['fields']['field_file_format']['field'] = 'field_file_format';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '[field_path]/[item_id]/edit?destination=[host_entity_path]';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Delete';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Delete';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = '[field_path]/[item_id]/delete?destination=[host_entity_path]';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = 'Add';
  $handler->display->display_options['fields']['nothing_2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['path'] = '[field_path]/add/[host_entity_type]/[host_entity_id]?destination=[host_entity_path]';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
    8 => 0,
  );
  /* Filter criterion: Field collection item: Narrator (field_performer) */
  $handler->display->display_options['filters']['field_performer_value']['id'] = 'field_performer_value';
  $handler->display->display_options['filters']['field_performer_value']['table'] = 'field_data_field_performer';
  $handler->display->display_options['filters']['field_performer_value']['field'] = 'field_performer_value';
  $handler->display->display_options['filters']['field_performer_value']['operator'] = 'regular_expression';
  $handler->display->display_options['filters']['field_performer_value']['value'] = '([\\S]+\\s+){2}[\\S\\s]+';
  $handler->display->display_options['filters']['field_performer_value']['group'] = 1;
  /* Filter criterion: Field collection item: Narrator (field_performer) */
  $handler->display->display_options['filters']['field_performer_value_1']['id'] = 'field_performer_value_1';
  $handler->display->display_options['filters']['field_performer_value_1']['table'] = 'field_data_field_performer';
  $handler->display->display_options['filters']['field_performer_value_1']['field'] = 'field_performer_value';
  $handler->display->display_options['filters']['field_performer_value_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_performer_value_1']['group'] = 1;
  $handler->display->display_options['filters']['field_performer_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_performer_value_1']['expose']['operator_id'] = 'field_performer_value_1_op';
  $handler->display->display_options['filters']['field_performer_value_1']['expose']['label'] = 'Performer';
  $handler->display->display_options['filters']['field_performer_value_1']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_performer_value_1']['expose']['operator'] = 'field_performer_value_1_op';
  $handler->display->display_options['filters']['field_performer_value_1']['expose']['identifier'] = 'field_performer_value_1';
  $handler->display->display_options['filters']['field_performer_value_1']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['path'] = 'admin/content/cals/repo-items/narrators-performers-threes';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'File attachments: Narrators / Performers';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-nnels-admin';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: VBO - File attachments - Empty narrator or empty Runtime */
  $handler = $view->new_display('page', 'VBO - File attachments - Empty narrator or empty Runtime', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Performers (Missing)';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations_1' => 'views_bulk_operations_1',
    'item_id' => 'item_id',
    'field_path' => 'field_path',
    'host_entity_id' => 'host_entity_id',
    'host_entity_path' => 'host_entity_path',
    'host_entity_type' => 'host_entity_type',
    'field_s3_path' => 'field_s3_path',
    'field_performer' => 'field_performer',
    'field_running_time' => 'field_running_time',
    'title_field' => 'title_field',
    'field_system_control_number' => 'field_system_control_number',
    'view_node' => 'view_node',
    'field_file_format' => 'field_file_format',
    'nothing' => 'nothing',
    'nothing_1' => 'nothing_1',
    'nothing_2' => 'nothing_2',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'item_id' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'host_entity_id' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'host_entity_path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'host_entity_type' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_s3_path' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_performer' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_running_time' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'title_field' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_system_control_number' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_file_format' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_2' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Field collection item */
  $handler->display->display_options['fields']['views_bulk_operations_1']['id'] = 'views_bulk_operations_1';
  $handler->display->display_options['fields']['views_bulk_operations_1']['table'] = 'views_entity_field_collection_item';
  $handler->display->display_options['fields']['views_bulk_operations_1']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_operations'] = array(
    'action::_cals_normalize_performer' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Normalize Performer Values',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Edit Narrator',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'field_file_resource::field_performer' => 'field_file_resource::field_performer',
        ),
      ),
    ),
  );
  /* Field: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['label'] = 'ID';
  $handler->display->display_options['fields']['item_id']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['item_id']['separator'] = '';
  /* Field: Field collection item: Field path */
  $handler->display->display_options['fields']['field_path']['id'] = 'field_path';
  $handler->display->display_options['fields']['field_path']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['field_path']['field'] = 'field_path';
  $handler->display->display_options['fields']['field_path']['label'] = '';
  $handler->display->display_options['fields']['field_path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_path']['hide_alter_empty'] = FALSE;
  /* Field: Field collection item: Host Entity ID */
  $handler->display->display_options['fields']['host_entity_id']['id'] = 'host_entity_id';
  $handler->display->display_options['fields']['host_entity_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_id']['field'] = 'host_entity_id';
  $handler->display->display_options['fields']['host_entity_id']['label'] = '';
  $handler->display->display_options['fields']['host_entity_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_id']['hide_alter_empty'] = FALSE;
  /* Field: Field collection item: Host Entity Path */
  $handler->display->display_options['fields']['host_entity_path']['id'] = 'host_entity_path';
  $handler->display->display_options['fields']['host_entity_path']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_path']['field'] = 'host_entity_path';
  $handler->display->display_options['fields']['host_entity_path']['label'] = '';
  $handler->display->display_options['fields']['host_entity_path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_path']['hide_alter_empty'] = FALSE;
  /* Field: Field collection item: Host Entity Type */
  $handler->display->display_options['fields']['host_entity_type']['id'] = 'host_entity_type';
  $handler->display->display_options['fields']['host_entity_type']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_type']['field'] = 'host_entity_type';
  $handler->display->display_options['fields']['host_entity_type']['label'] = '';
  $handler->display->display_options['fields']['host_entity_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_type']['hide_alter_empty'] = FALSE;
  /* Field: Field: S3 Path */
  $handler->display->display_options['fields']['field_s3_path']['id'] = 'field_s3_path';
  $handler->display->display_options['fields']['field_s3_path']['table'] = 'field_data_field_s3_path';
  $handler->display->display_options['fields']['field_s3_path']['field'] = 'field_s3_path';
  $handler->display->display_options['fields']['field_s3_path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s3_path']['alter']['max_length'] = '20';
  $handler->display->display_options['fields']['field_s3_path']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_s3_path']['alter']['trim'] = TRUE;
  /* Field: Field collection item: Narrator */
  $handler->display->display_options['fields']['field_performer']['id'] = 'field_performer';
  $handler->display->display_options['fields']['field_performer']['table'] = 'field_data_field_performer';
  $handler->display->display_options['fields']['field_performer']['field'] = 'field_performer';
  $handler->display->display_options['fields']['field_performer']['delta_offset'] = '0';
  /* Field: Field collection item: Running Time */
  $handler->display->display_options['fields']['field_running_time']['id'] = 'field_running_time';
  $handler->display->display_options['fields']['field_running_time']['table'] = 'field_data_field_running_time';
  $handler->display->display_options['fields']['field_running_time']['field'] = 'field_running_time';
  $handler->display->display_options['fields']['field_running_time']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['fields']['title_field']['label'] = 'Repo Item';
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'title_style' => '_none',
    'title_link' => '',
    'title_class' => '',
  );
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Field: Field: System Control Number */
  $handler->display->display_options['fields']['field_system_control_number']['id'] = 'field_system_control_number';
  $handler->display->display_options['fields']['field_system_control_number']['table'] = 'field_data_field_system_control_number';
  $handler->display->display_options['fields']['field_system_control_number']['field'] = 'field_system_control_number';
  $handler->display->display_options['fields']['field_system_control_number']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['fields']['field_system_control_number']['label'] = 'System Control';
  $handler->display->display_options['fields']['field_system_control_number']['delta_offset'] = '0';
  /* Field: Content: Link to content */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'View Title';
  /* Field: Field: File Format */
  $handler->display->display_options['fields']['field_file_format']['id'] = 'field_file_format';
  $handler->display->display_options['fields']['field_file_format']['table'] = 'field_data_field_file_format';
  $handler->display->display_options['fields']['field_file_format']['field'] = 'field_file_format';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '[field_path]/[item_id]/edit?destination=[host_entity_path]';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Delete';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Delete';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = '[field_path]/[item_id]/delete?destination=[host_entity_path]';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = 'Add';
  $handler->display->display_options['fields']['nothing_2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['path'] = '[field_path]/add/[host_entity_type]/[host_entity_id]?destination=[host_entity_path]';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Field: System Control Number (field_system_control_number) */
  $handler->display->display_options['sorts']['field_system_control_number_value_1']['id'] = 'field_system_control_number_value_1';
  $handler->display->display_options['sorts']['field_system_control_number_value_1']['table'] = 'field_data_field_system_control_number';
  $handler->display->display_options['sorts']['field_system_control_number_value_1']['field'] = 'field_system_control_number_value';
  $handler->display->display_options['sorts']['field_system_control_number_value_1']['relationship'] = 'field_file_resource_node';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  /* Sort criterion: Field collection item: Field collection item ID */
  $handler->display->display_options['sorts']['item_id']['id'] = 'item_id';
  $handler->display->display_options['sorts']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['sorts']['item_id']['field'] = 'item_id';
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  $handler->display->display_options['sorts']['nid']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['sorts']['nid']['order'] = 'DESC';
  /* Sort criterion: Field: File Format (field_file_format) */
  $handler->display->display_options['sorts']['field_file_format_value']['id'] = 'field_file_format_value';
  $handler->display->display_options['sorts']['field_file_format_value']['table'] = 'field_data_field_file_format';
  $handler->display->display_options['sorts']['field_file_format_value']['field'] = 'field_file_format_value';
  $handler->display->display_options['sorts']['field_file_format_value']['expose']['label'] = 'File Format';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
    8 => 0,
  );
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Field collection item: Narrator (field_performer) */
  $handler->display->display_options['filters']['field_performer_value_1']['id'] = 'field_performer_value_1';
  $handler->display->display_options['filters']['field_performer_value_1']['table'] = 'field_data_field_performer';
  $handler->display->display_options['filters']['field_performer_value_1']['field'] = 'field_performer_value';
  $handler->display->display_options['filters']['field_performer_value_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_performer_value_1']['group'] = 1;
  $handler->display->display_options['filters']['field_performer_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_performer_value_1']['expose']['operator_id'] = 'field_performer_value_1_op';
  $handler->display->display_options['filters']['field_performer_value_1']['expose']['label'] = 'Performer';
  $handler->display->display_options['filters']['field_performer_value_1']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_performer_value_1']['expose']['operator'] = 'field_performer_value_1_op';
  $handler->display->display_options['filters']['field_performer_value_1']['expose']['identifier'] = 'field_performer_value_1';
  $handler->display->display_options['filters']['field_performer_value_1']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Field collection item: Narrator (field_performer) */
  $handler->display->display_options['filters']['field_performer_value']['id'] = 'field_performer_value';
  $handler->display->display_options['filters']['field_performer_value']['table'] = 'field_data_field_performer';
  $handler->display->display_options['filters']['field_performer_value']['field'] = 'field_performer_value';
  $handler->display->display_options['filters']['field_performer_value']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_performer_value']['group'] = 2;
  /* Filter criterion: Field collection item: Running Time (field_running_time) */
  $handler->display->display_options['filters']['field_running_time_value']['id'] = 'field_running_time_value';
  $handler->display->display_options['filters']['field_running_time_value']['table'] = 'field_data_field_running_time';
  $handler->display->display_options['filters']['field_running_time_value']['field'] = 'field_running_time_value';
  $handler->display->display_options['filters']['field_running_time_value']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_running_time_value']['group'] = 2;
  $handler->display->display_options['filters']['field_running_time_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_running_time_value']['expose']['operator_id'] = 'field_running_time_value_op';
  $handler->display->display_options['filters']['field_running_time_value']['expose']['label'] = 'Running Time';
  $handler->display->display_options['filters']['field_running_time_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_running_time_value']['expose']['operator'] = 'field_running_time_value_op';
  $handler->display->display_options['filters']['field_running_time_value']['expose']['identifier'] = 'field_running_time_value';
  $handler->display->display_options['filters']['field_running_time_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Field: File Format (field_file_format) */
  $handler->display->display_options['filters']['field_file_format_value']['id'] = 'field_file_format_value';
  $handler->display->display_options['filters']['field_file_format_value']['table'] = 'field_data_field_file_format';
  $handler->display->display_options['filters']['field_file_format_value']['field'] = 'field_file_format_value';
  $handler->display->display_options['filters']['field_file_format_value']['value'] = array(
    4 => '4',
    11 => '11',
    13 => '13',
  );
  $handler->display->display_options['filters']['field_file_format_value']['expose']['operator_id'] = 'field_file_format_value_op';
  $handler->display->display_options['filters']['field_file_format_value']['expose']['label'] = 'File Format';
  $handler->display->display_options['filters']['field_file_format_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_file_format_value']['expose']['operator'] = 'field_file_format_value_op';
  $handler->display->display_options['filters']['field_file_format_value']['expose']['identifier'] = 'field_file_format_value';
  $handler->display->display_options['filters']['field_file_format_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_file_format_value']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_file_format_value']['expose']['reduce'] = TRUE;
  $handler->display->display_options['path'] = 'admin/content/cals/repo-items/empty-narrators-performers';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'File attachments: Missing Performers';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-nnels-admin';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = '1';
  $handler->display->display_options['style_options']['trim'] = 1;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'admin/content/cals/repo-items/empty-narrators-performers/export';
  $handler->display->display_options['displays'] = array(
    'page_4' => 'page_4',
    'default' => 0,
    'page_1' => 0,
    'page_2' => 0,
    'page_3' => 0,
  );

  /* Display: VBO - File Formats - Node Resave */
  $handler = $view->new_display('page', 'VBO - File Formats - Node Resave', 'page_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'File Format Update - Node Resave';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  $handler->display->display_options['fields']['counter']['reverse'] = 0;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_save_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'skip_permission_check' => 0,
      'override_label' => 1,
      'label' => 'Resave nodes',
    ),
  );
  /* Field: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['label'] = 'ID';
  $handler->display->display_options['fields']['item_id']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['item_id']['separator'] = '';
  /* Field: Field collection item: Field path */
  $handler->display->display_options['fields']['field_path']['id'] = 'field_path';
  $handler->display->display_options['fields']['field_path']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['field_path']['field'] = 'field_path';
  $handler->display->display_options['fields']['field_path']['label'] = '';
  $handler->display->display_options['fields']['field_path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_path']['hide_alter_empty'] = FALSE;
  /* Field: Field collection item: Host Entity ID */
  $handler->display->display_options['fields']['host_entity_id']['id'] = 'host_entity_id';
  $handler->display->display_options['fields']['host_entity_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_id']['field'] = 'host_entity_id';
  $handler->display->display_options['fields']['host_entity_id']['label'] = '';
  $handler->display->display_options['fields']['host_entity_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_id']['hide_alter_empty'] = FALSE;
  /* Field: Field collection item: Host Entity Path */
  $handler->display->display_options['fields']['host_entity_path']['id'] = 'host_entity_path';
  $handler->display->display_options['fields']['host_entity_path']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_path']['field'] = 'host_entity_path';
  $handler->display->display_options['fields']['host_entity_path']['label'] = '';
  $handler->display->display_options['fields']['host_entity_path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_path']['hide_alter_empty'] = FALSE;
  /* Field: Field collection item: Host Entity Type */
  $handler->display->display_options['fields']['host_entity_type']['id'] = 'host_entity_type';
  $handler->display->display_options['fields']['host_entity_type']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_type']['field'] = 'host_entity_type';
  $handler->display->display_options['fields']['host_entity_type']['label'] = '';
  $handler->display->display_options['fields']['host_entity_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_type']['hide_alter_empty'] = FALSE;
  /* Field: Field: S3 Path */
  $handler->display->display_options['fields']['field_s3_path']['id'] = 'field_s3_path';
  $handler->display->display_options['fields']['field_s3_path']['table'] = 'field_data_field_s3_path';
  $handler->display->display_options['fields']['field_s3_path']['field'] = 'field_s3_path';
  $handler->display->display_options['fields']['field_s3_path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s3_path']['alter']['max_length'] = '20';
  $handler->display->display_options['fields']['field_s3_path']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_s3_path']['alter']['trim'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['fields']['title_field']['label'] = 'Repo Item';
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'title_style' => '_none',
    'title_link' => '',
    'title_class' => '',
  );
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Field: Field: System Control Number */
  $handler->display->display_options['fields']['field_system_control_number_1']['id'] = 'field_system_control_number_1';
  $handler->display->display_options['fields']['field_system_control_number_1']['table'] = 'field_data_field_system_control_number';
  $handler->display->display_options['fields']['field_system_control_number_1']['field'] = 'field_system_control_number';
  $handler->display->display_options['fields']['field_system_control_number_1']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['fields']['field_system_control_number_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_system_control_number_1']['delta_offset'] = '0';
  /* Field: Field: File Format */
  $handler->display->display_options['fields']['field_file_format']['id'] = 'field_file_format';
  $handler->display->display_options['fields']['field_file_format']['table'] = 'field_data_field_file_format';
  $handler->display->display_options['fields']['field_file_format']['field'] = 'field_file_format';
  /* Field: Field collection item: Accrual Method */
  $handler->display->display_options['fields']['field_accrual_method']['id'] = 'field_accrual_method';
  $handler->display->display_options['fields']['field_accrual_method']['table'] = 'field_data_field_accrual_method';
  $handler->display->display_options['fields']['field_accrual_method']['field'] = 'field_accrual_method';
  /* Field: Field collection item: Narrator */
  $handler->display->display_options['fields']['field_performer']['id'] = 'field_performer';
  $handler->display->display_options['fields']['field_performer']['table'] = 'field_data_field_performer';
  $handler->display->display_options['fields']['field_performer']['field'] = 'field_performer';
  $handler->display->display_options['fields']['field_performer']['delta_offset'] = '0';
  /* Field: Content: DC Contributor */
  $handler->display->display_options['fields']['field_dc_contributor']['id'] = 'field_dc_contributor';
  $handler->display->display_options['fields']['field_dc_contributor']['table'] = 'field_data_field_dc_contributor';
  $handler->display->display_options['fields']['field_dc_contributor']['field'] = 'field_dc_contributor';
  $handler->display->display_options['fields']['field_dc_contributor']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['fields']['field_dc_contributor']['delta_offset'] = '0';
  /* Field: Field: S3 File Upload */
  $handler->display->display_options['fields']['field_s3_file_upload']['id'] = 'field_s3_file_upload';
  $handler->display->display_options['fields']['field_s3_file_upload']['table'] = 'field_data_field_s3_file_upload';
  $handler->display->display_options['fields']['field_s3_file_upload']['field'] = 'field_s3_file_upload';
  $handler->display->display_options['fields']['field_s3_file_upload']['click_sort_column'] = 'fid';
  /* Field: Field collection item: Name of Publisher */
  $handler->display->display_options['fields']['field_publisher_format']['id'] = 'field_publisher_format';
  $handler->display->display_options['fields']['field_publisher_format']['table'] = 'field_data_field_publisher_format';
  $handler->display->display_options['fields']['field_publisher_format']['field'] = 'field_publisher_format';
  /* Field: Content: Record Set */
  $handler->display->display_options['fields']['field_record_set']['id'] = 'field_record_set';
  $handler->display->display_options['fields']['field_record_set']['table'] = 'field_data_field_record_set';
  $handler->display->display_options['fields']['field_record_set']['field'] = 'field_record_set';
  $handler->display->display_options['fields']['field_record_set']['relationship'] = 'field_file_resource_node';
  /* Field: Content: Published status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['fields']['status']['label'] = 'Published';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Field collection item: Partner Share */
  $handler->display->display_options['fields']['field_partner_sharing']['id'] = 'field_partner_sharing';
  $handler->display->display_options['fields']['field_partner_sharing']['table'] = 'field_data_field_partner_sharing';
  $handler->display->display_options['fields']['field_partner_sharing']['field'] = 'field_partner_sharing';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '[field_path]/[item_id]/edit?destination=[host_entity_path]';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Delete';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Delete';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = '[field_path]/[item_id]/delete?destination=[host_entity_path]';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = 'Add';
  $handler->display->display_options['fields']['nothing_2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['path'] = '[field_path]/add/[host_entity_type]/[host_entity_id]?destination=[host_entity_path]';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Field: S3 File Upload (field_s3_file_upload:fid) */
  $handler->display->display_options['filters']['field_s3_file_upload_fid']['id'] = 'field_s3_file_upload_fid';
  $handler->display->display_options['filters']['field_s3_file_upload_fid']['table'] = 'field_data_field_s3_file_upload';
  $handler->display->display_options['filters']['field_s3_file_upload_fid']['field'] = 'field_s3_file_upload_fid';
  $handler->display->display_options['filters']['field_s3_file_upload_fid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_s3_file_upload_fid']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
    8 => 0,
  );
  /* Filter criterion: Field: S3 Path (field_s3_path) */
  $handler->display->display_options['filters']['field_s3_path_value']['id'] = 'field_s3_path_value';
  $handler->display->display_options['filters']['field_s3_path_value']['table'] = 'field_data_field_s3_path';
  $handler->display->display_options['filters']['field_s3_path_value']['field'] = 'field_s3_path_value';
  $handler->display->display_options['filters']['field_s3_path_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_s3_path_value']['group'] = 1;
  $handler->display->display_options['filters']['field_s3_path_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_s3_path_value']['expose']['operator_id'] = 'field_s3_path_value_op';
  $handler->display->display_options['filters']['field_s3_path_value']['expose']['label'] = 'S3 Path';
  $handler->display->display_options['filters']['field_s3_path_value']['expose']['operator'] = 'field_s3_path_value_op';
  $handler->display->display_options['filters']['field_s3_path_value']['expose']['identifier'] = 'field_s3_path_value';
  $handler->display->display_options['filters']['field_s3_path_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
    8 => 0,
  );
  /* Filter criterion: Content: Record Set (field_record_set) */
  $handler->display->display_options['filters']['field_record_set_nid']['id'] = 'field_record_set_nid';
  $handler->display->display_options['filters']['field_record_set_nid']['table'] = 'field_data_field_record_set';
  $handler->display->display_options['filters']['field_record_set_nid']['field'] = 'field_record_set_nid';
  $handler->display->display_options['filters']['field_record_set_nid']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['filters']['field_record_set_nid']['group'] = 1;
  $handler->display->display_options['filters']['field_record_set_nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_record_set_nid']['expose']['operator_id'] = 'field_record_set_nid_op';
  $handler->display->display_options['filters']['field_record_set_nid']['expose']['label'] = 'Record Set';
  $handler->display->display_options['filters']['field_record_set_nid']['expose']['operator'] = 'field_record_set_nid_op';
  $handler->display->display_options['filters']['field_record_set_nid']['expose']['identifier'] = 'field_record_set_nid';
  $handler->display->display_options['filters']['field_record_set_nid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
    8 => 0,
  );
  /* Filter criterion: Field: System Control Number (field_system_control_number) */
  $handler->display->display_options['filters']['field_system_control_number_value']['id'] = 'field_system_control_number_value';
  $handler->display->display_options['filters']['field_system_control_number_value']['table'] = 'field_data_field_system_control_number';
  $handler->display->display_options['filters']['field_system_control_number_value']['field'] = 'field_system_control_number_value';
  $handler->display->display_options['filters']['field_system_control_number_value']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['filters']['field_system_control_number_value']['operator'] = 'starts';
  $handler->display->display_options['filters']['field_system_control_number_value']['group'] = 1;
  $handler->display->display_options['filters']['field_system_control_number_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['operator_id'] = 'field_system_control_number_value_op';
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['label'] = 'System Control Number';
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['operator'] = 'field_system_control_number_value_op';
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['identifier'] = 'field_system_control_number_value';
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Field: File Format (field_file_format) */
  $handler->display->display_options['filters']['field_file_format_value']['id'] = 'field_file_format_value';
  $handler->display->display_options['filters']['field_file_format_value']['table'] = 'field_data_field_file_format';
  $handler->display->display_options['filters']['field_file_format_value']['field'] = 'field_file_format_value';
  $handler->display->display_options['filters']['field_file_format_value']['group'] = 1;
  $handler->display->display_options['filters']['field_file_format_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_file_format_value']['expose']['operator_id'] = 'field_file_format_value_op';
  $handler->display->display_options['filters']['field_file_format_value']['expose']['label'] = 'File Format';
  $handler->display->display_options['filters']['field_file_format_value']['expose']['operator'] = 'field_file_format_value_op';
  $handler->display->display_options['filters']['field_file_format_value']['expose']['identifier'] = 'field_file_format_value';
  $handler->display->display_options['filters']['field_file_format_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Field collection item: Accrual Method (field_accrual_method) */
  $handler->display->display_options['filters']['field_accrual_method_value']['id'] = 'field_accrual_method_value';
  $handler->display->display_options['filters']['field_accrual_method_value']['table'] = 'field_data_field_accrual_method';
  $handler->display->display_options['filters']['field_accrual_method_value']['field'] = 'field_accrual_method_value';
  $handler->display->display_options['filters']['field_accrual_method_value']['group'] = 1;
  $handler->display->display_options['filters']['field_accrual_method_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_accrual_method_value']['expose']['operator_id'] = 'field_accrual_method_value_op';
  $handler->display->display_options['filters']['field_accrual_method_value']['expose']['label'] = 'Accrual Method';
  $handler->display->display_options['filters']['field_accrual_method_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_accrual_method_value']['expose']['operator'] = 'field_accrual_method_value_op';
  $handler->display->display_options['filters']['field_accrual_method_value']['expose']['identifier'] = 'field_accrual_method_value';
  $handler->display->display_options['filters']['field_accrual_method_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['filters']['status']['value'] = 'All';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Field collection item: Availability / Status (field_availability_status) */
  $handler->display->display_options['filters']['field_availability_status_value']['id'] = 'field_availability_status_value';
  $handler->display->display_options['filters']['field_availability_status_value']['table'] = 'field_data_field_availability_status';
  $handler->display->display_options['filters']['field_availability_status_value']['field'] = 'field_availability_status_value';
  $handler->display->display_options['filters']['field_availability_status_value']['group'] = 1;
  $handler->display->display_options['filters']['field_availability_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_availability_status_value']['expose']['operator_id'] = 'field_availability_status_value_op';
  $handler->display->display_options['filters']['field_availability_status_value']['expose']['label'] = 'Availability / Status';
  $handler->display->display_options['filters']['field_availability_status_value']['expose']['operator'] = 'field_availability_status_value_op';
  $handler->display->display_options['filters']['field_availability_status_value']['expose']['identifier'] = 'field_availability_status_value';
  $handler->display->display_options['filters']['field_availability_status_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Field collection item: Name of Publisher (field_publisher_format) */
  $handler->display->display_options['filters']['field_publisher_format_value']['id'] = 'field_publisher_format_value';
  $handler->display->display_options['filters']['field_publisher_format_value']['table'] = 'field_data_field_publisher_format';
  $handler->display->display_options['filters']['field_publisher_format_value']['field'] = 'field_publisher_format_value';
  $handler->display->display_options['filters']['field_publisher_format_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_publisher_format_value']['group'] = 1;
  $handler->display->display_options['filters']['field_publisher_format_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_publisher_format_value']['expose']['operator_id'] = 'field_publisher_format_value_op';
  $handler->display->display_options['filters']['field_publisher_format_value']['expose']['label'] = 'Name of File Publisher';
  $handler->display->display_options['filters']['field_publisher_format_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_publisher_format_value']['expose']['operator'] = 'field_publisher_format_value_op';
  $handler->display->display_options['filters']['field_publisher_format_value']['expose']['identifier'] = 'field_publisher_format_value';
  $handler->display->display_options['filters']['field_publisher_format_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Field collection item: Narrator (field_performer) */
  $handler->display->display_options['filters']['field_performer_value']['id'] = 'field_performer_value';
  $handler->display->display_options['filters']['field_performer_value']['table'] = 'field_data_field_performer';
  $handler->display->display_options['filters']['field_performer_value']['field'] = 'field_performer_value';
  $handler->display->display_options['filters']['field_performer_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_performer_value']['group'] = 1;
  $handler->display->display_options['filters']['field_performer_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_performer_value']['expose']['operator_id'] = 'field_performer_value_op';
  $handler->display->display_options['filters']['field_performer_value']['expose']['label'] = 'Narrator';
  $handler->display->display_options['filters']['field_performer_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_performer_value']['expose']['operator'] = 'field_performer_value_op';
  $handler->display->display_options['filters']['field_performer_value']['expose']['identifier'] = 'field_performer_value';
  $handler->display->display_options['filters']['field_performer_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: DC Contributor (field_dc_contributor) */
  $handler->display->display_options['filters']['field_dc_contributor_value']['id'] = 'field_dc_contributor_value';
  $handler->display->display_options['filters']['field_dc_contributor_value']['table'] = 'field_data_field_dc_contributor';
  $handler->display->display_options['filters']['field_dc_contributor_value']['field'] = 'field_dc_contributor_value';
  $handler->display->display_options['filters']['field_dc_contributor_value']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['filters']['field_dc_contributor_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_dc_contributor_value']['group'] = 1;
  $handler->display->display_options['filters']['field_dc_contributor_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_dc_contributor_value']['expose']['operator_id'] = 'field_dc_contributor_value_op';
  $handler->display->display_options['filters']['field_dc_contributor_value']['expose']['label'] = 'DC Contributor';
  $handler->display->display_options['filters']['field_dc_contributor_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_dc_contributor_value']['expose']['operator'] = 'field_dc_contributor_value_op';
  $handler->display->display_options['filters']['field_dc_contributor_value']['expose']['identifier'] = 'field_dc_contributor_value';
  $handler->display->display_options['filters']['field_dc_contributor_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Field collection item: Partner Share (field_partner_sharing) */
  $handler->display->display_options['filters']['field_partner_sharing_value']['id'] = 'field_partner_sharing_value';
  $handler->display->display_options['filters']['field_partner_sharing_value']['table'] = 'field_data_field_partner_sharing';
  $handler->display->display_options['filters']['field_partner_sharing_value']['field'] = 'field_partner_sharing_value';
  $handler->display->display_options['filters']['field_partner_sharing_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_partner_sharing_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_partner_sharing_value']['expose']['operator_id'] = 'field_partner_sharing_value_op';
  $handler->display->display_options['filters']['field_partner_sharing_value']['expose']['label'] = 'Partner Share';
  $handler->display->display_options['filters']['field_partner_sharing_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_partner_sharing_value']['expose']['operator'] = 'field_partner_sharing_value_op';
  $handler->display->display_options['filters']['field_partner_sharing_value']['expose']['identifier'] = 'field_partner_sharing_value';
  $handler->display->display_options['filters']['field_partner_sharing_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_partner_sharing_value']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['path'] = 'admin/content/cals/s3/resave-nodes';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'File Format Conversions';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-nnels-admin';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['field_collection_view_s3_format_conversions'] = $view;

  $view = new view();
  $view->name = 'library_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_organization_search';
  $view->human_name = 'Library Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Search for your local library';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'input_required';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['text_input_required'] = '';
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '';
  $handler->display->display_options['pager']['options']['tags']['first'] = '';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '';
  $handler->display->display_options['pager']['options']['tags']['next'] = '';
  $handler->display->display_options['pager']['options']['tags']['last'] = '';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Search Message */
  $handler->display->display_options['header']['search_message']['id'] = 'search_message';
  $handler->display->display_options['header']['search_message']['table'] = 'views';
  $handler->display->display_options['header']['search_message']['field'] = 'search_message';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'We didn\'t find your library? Get in touch at support@nnels.ca. More information about libraries joining on the <a href="https://nnels.ca/about">About NNELS</a> page.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_organization_search';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_organization_search';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Address: Locality (i.e. City) (indexed) */
  $handler->display->display_options['fields']['field_address_locality']['id'] = 'field_address_locality';
  $handler->display->display_options['fields']['field_address_locality']['table'] = 'search_api_index_organization_search';
  $handler->display->display_options['fields']['field_address_locality']['field'] = 'field_address_locality';
  $handler->display->display_options['fields']['field_address_locality']['label'] = '';
  $handler->display->display_options['fields']['field_address_locality']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address_locality']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_locality']['link_to_entity'] = 0;
  /* Field: Address: Administrative area (i.e. State / Province) (indexed) */
  $handler->display->display_options['fields']['field_address_administrative_area']['id'] = 'field_address_administrative_area';
  $handler->display->display_options['fields']['field_address_administrative_area']['table'] = 'search_api_index_organization_search';
  $handler->display->display_options['fields']['field_address_administrative_area']['field'] = 'field_address_administrative_area';
  $handler->display->display_options['fields']['field_address_administrative_area']['label'] = '';
  $handler->display->display_options['fields']['field_address_administrative_area']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address_administrative_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_administrative_area']['link_to_entity'] = 0;
  /* Field: Address: Thoroughfare (i.e. Street address) (indexed) */
  $handler->display->display_options['fields']['field_address_thoroughfare']['id'] = 'field_address_thoroughfare';
  $handler->display->display_options['fields']['field_address_thoroughfare']['table'] = 'search_api_index_organization_search';
  $handler->display->display_options['fields']['field_address_thoroughfare']['field'] = 'field_address_thoroughfare';
  $handler->display->display_options['fields']['field_address_thoroughfare']['label'] = '';
  $handler->display->display_options['fields']['field_address_thoroughfare']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address_thoroughfare']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_thoroughfare']['link_to_entity'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_address_locality], [field_address_administrative_area] ';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Partner Library? */
  $handler->display->display_options['fields']['field_partner_library_']['id'] = 'field_partner_library_';
  $handler->display->display_options['fields']['field_partner_library_']['table'] = 'search_api_index_organization_search';
  $handler->display->display_options['fields']['field_partner_library_']['field'] = 'field_partner_library_';
  $handler->display->display_options['fields']['field_partner_library_']['label'] = 'Status';
  $handler->display->display_options['fields']['field_partner_library_']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_partner_library_']['alter']['path'] = 'node/[nid]';
  /* Field: Authentication Target: Node ID (indexed) */
  $handler->display->display_options['fields']['field_authentication_target_nid']['id'] = 'field_authentication_target_nid';
  $handler->display->display_options['fields']['field_authentication_target_nid']['table'] = 'search_api_index_organization_search';
  $handler->display->display_options['fields']['field_authentication_target_nid']['field'] = 'field_authentication_target_nid';
  $handler->display->display_options['fields']['field_authentication_target_nid']['label'] = '';
  $handler->display->display_options['fields']['field_authentication_target_nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_authentication_target_nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_authentication_target_nid']['alter']['text'] = 'Login via this Partner Library....';
  $handler->display->display_options['fields']['field_authentication_target_nid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_authentication_target_nid']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_authentication_target_nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_authentication_target_nid']['empty'] = 'LINK TO REQUEST PARTICIPATION FORM????';
  $handler->display->display_options['fields']['field_authentication_target_nid']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_authentication_target_nid']['separator'] = '';
  $handler->display->display_options['fields']['field_authentication_target_nid']['link_to_entity'] = 0;
  /* Field: Indexed Node: Library home page */
  $handler->display->display_options['fields']['field_url_library']['id'] = 'field_url_library';
  $handler->display->display_options['fields']['field_url_library']['table'] = 'search_api_index_organization_search';
  $handler->display->display_options['fields']['field_url_library']['field'] = 'field_url_library';
  $handler->display->display_options['fields']['field_url_library']['label'] = 'Library Home Page';
  $handler->display->display_options['fields']['field_url_library']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_url_library']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_url_library']['settings'] = array(
    'custom_title' => '',
  );
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit Organization';
  /* Sort criterion: Search: Relevance */
  $handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_index_organization_search';
  $handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['order'] = 'DESC';
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_organization_search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['group'] = 1;
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Enter the name of your library branch, your library system, or your city/town';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
  );
  /* Filter criterion: Indexed Node: Library Type */
  $handler->display->display_options['filters']['field_library_type']['id'] = 'field_library_type';
  $handler->display->display_options['filters']['field_library_type']['table'] = 'search_api_index_organization_search';
  $handler->display->display_options['filters']['field_library_type']['field'] = 'field_library_type';
  $handler->display->display_options['filters']['field_library_type']['operator'] = '<>';
  $handler->display->display_options['filters']['field_library_type']['value'] = array(
    20 => '20',
  );
  /* Filter criterion: Indexed Node: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_organization_search';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['operator'] = '<>';
  $handler->display->display_options['filters']['status']['value'] = array(
    0 => '0',
  );

  /* Display: Page - Library Search */
  $handler = $view->new_display('page', 'Page - Library Search', 'page');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'library-search page';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'view-list-ul';
  $handler->display->display_options['style_options']['wrapper_class'] = 'view-list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_organization_search';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_organization_search';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Headquarters */
  $handler->display->display_options['fields']['field_headquarters']['id'] = 'field_headquarters';
  $handler->display->display_options['fields']['field_headquarters']['table'] = 'search_api_index_organization_search';
  $handler->display->display_options['fields']['field_headquarters']['field'] = 'field_headquarters';
  $handler->display->display_options['fields']['field_headquarters']['label'] = '';
  $handler->display->display_options['fields']['field_headquarters']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_headquarters']['alter']['text'] = '[title] - [field_headquarters]';
  $handler->display->display_options['fields']['field_headquarters']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_headquarters']['empty'] = '[title]';
  $handler->display->display_options['fields']['field_headquarters']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_headquarters']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_headquarters']['bypass_access'] = 0;
  /* Field: Address: Locality (i.e. City) (indexed) */
  $handler->display->display_options['fields']['field_address_locality']['id'] = 'field_address_locality';
  $handler->display->display_options['fields']['field_address_locality']['table'] = 'search_api_index_organization_search';
  $handler->display->display_options['fields']['field_address_locality']['field'] = 'field_address_locality';
  $handler->display->display_options['fields']['field_address_locality']['label'] = '';
  $handler->display->display_options['fields']['field_address_locality']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address_locality']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_locality']['link_to_entity'] = 0;
  /* Field: Address: Administrative area (i.e. State / Province) (indexed) */
  $handler->display->display_options['fields']['field_address_administrative_area']['id'] = 'field_address_administrative_area';
  $handler->display->display_options['fields']['field_address_administrative_area']['table'] = 'search_api_index_organization_search';
  $handler->display->display_options['fields']['field_address_administrative_area']['field'] = 'field_address_administrative_area';
  $handler->display->display_options['fields']['field_address_administrative_area']['label'] = '';
  $handler->display->display_options['fields']['field_address_administrative_area']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address_administrative_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_administrative_area']['link_to_entity'] = 0;
  /* Field: Address: Thoroughfare (i.e. Street address) (indexed) */
  $handler->display->display_options['fields']['field_address_thoroughfare']['id'] = 'field_address_thoroughfare';
  $handler->display->display_options['fields']['field_address_thoroughfare']['table'] = 'search_api_index_organization_search';
  $handler->display->display_options['fields']['field_address_thoroughfare']['field'] = 'field_address_thoroughfare';
  $handler->display->display_options['fields']['field_address_thoroughfare']['label'] = '';
  $handler->display->display_options['fields']['field_address_thoroughfare']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address_thoroughfare']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_thoroughfare']['link_to_entity'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Address';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_address_thoroughfare], [field_address_locality], [field_address_administrative_area] ';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'span';
  $handler->display->display_options['fields']['nothing']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['nothing']['hide_empty'] = TRUE;
  /* Field: Indexed Node: Partner Library? */
  $handler->display->display_options['fields']['field_partner_library_']['id'] = 'field_partner_library_';
  $handler->display->display_options['fields']['field_partner_library_']['table'] = 'search_api_index_organization_search';
  $handler->display->display_options['fields']['field_partner_library_']['field'] = 'field_partner_library_';
  $handler->display->display_options['fields']['field_partner_library_']['label'] = 'Status';
  $handler->display->display_options['fields']['field_partner_library_']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_partner_library_']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_partner_library_']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_partner_library_']['empty_zero'] = TRUE;
  /* Field: Indexed Node: Consortial Partner */
  $handler->display->display_options['fields']['field_consortial_partner']['id'] = 'field_consortial_partner';
  $handler->display->display_options['fields']['field_consortial_partner']['table'] = 'search_api_index_organization_search';
  $handler->display->display_options['fields']['field_consortial_partner']['field'] = 'field_consortial_partner';
  $handler->display->display_options['fields']['field_consortial_partner']['label'] = '';
  $handler->display->display_options['fields']['field_consortial_partner']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_consortial_partner']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_consortial_partner']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_consortial_partner']['bypass_access'] = 0;
  /* Field: Global: Library Login */
  $handler->display->display_options['fields']['library_login']['id'] = 'library_login';
  $handler->display->display_options['fields']['library_login']['table'] = 'views';
  $handler->display->display_options['fields']['library_login']['field'] = 'library_login';
  $handler->display->display_options['fields']['library_login']['label'] = '';
  $handler->display->display_options['fields']['library_login']['element_label_colon'] = FALSE;
  /* Field: Authentication Target: Node ID (indexed) */
  $handler->display->display_options['fields']['field_authentication_target_nid']['id'] = 'field_authentication_target_nid';
  $handler->display->display_options['fields']['field_authentication_target_nid']['table'] = 'search_api_index_organization_search';
  $handler->display->display_options['fields']['field_authentication_target_nid']['field'] = 'field_authentication_target_nid';
  $handler->display->display_options['fields']['field_authentication_target_nid']['label'] = '';
  $handler->display->display_options['fields']['field_authentication_target_nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_authentication_target_nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_authentication_target_nid']['alter']['text'] = 'Login via this Partner Library....';
  $handler->display->display_options['fields']['field_authentication_target_nid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_authentication_target_nid']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_authentication_target_nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_authentication_target_nid']['empty'] = 'LINK TO REQUEST PARTICIPATION FORM????';
  $handler->display->display_options['fields']['field_authentication_target_nid']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_authentication_target_nid']['separator'] = '';
  $handler->display->display_options['fields']['field_authentication_target_nid']['link_to_entity'] = 0;
  /* Field: Indexed Node: Library home page */
  $handler->display->display_options['fields']['field_url_library']['id'] = 'field_url_library';
  $handler->display->display_options['fields']['field_url_library']['table'] = 'search_api_index_organization_search';
  $handler->display->display_options['fields']['field_url_library']['field'] = 'field_url_library';
  $handler->display->display_options['fields']['field_url_library']['label'] = 'Library Home Page';
  $handler->display->display_options['fields']['field_url_library']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_url_library']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_url_library']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_url_library']['settings'] = array(
    'custom_title' => '',
  );
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit Organization';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Partnership Status Sort */
  $handler->display->display_options['sorts']['php']['id'] = 'php';
  $handler->display->display_options['sorts']['php']['table'] = 'views';
  $handler->display->display_options['sorts']['php']['field'] = 'php';
  $handler->display->display_options['sorts']['php']['ui_name'] = 'Partnership Status Sort';
  $handler->display->display_options['sorts']['php']['order'] = 'DESC';
  $handler->display->display_options['sorts']['php']['use_php_setup'] = 0;
  $handler->display->display_options['sorts']['php']['php_sort'] = '(int) $a = $row1->_entity_properties[\'entity object\']->field_partner_library_[\'und\'][0][\'value\'];
(int) $b = $row2->_entity_properties[\'entity object\']->field_partner_library_[\'und\'][0][\'value\'];

if ( $a == 2 ) { //participation pending
	return 1; //bump down
}
elseif ( $a == $b ) { //not comparable
	return 0; //stay
}
$return =  ($a > $b ? -1 : 1 ); //1 vs 0, bump; 0 vs 1, demote
return $return;';
  /* Sort criterion: Search: Relevance */
  $handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_index_organization_search';
  $handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['order'] = 'DESC';
  $handler->display->display_options['path'] = 'organizations/search';
  $export['library_search'] = $view;

  $view = new view();
  $view->name = 'repository_item_detail_page';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Repository Item Detail Page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    1 => '1',
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Alternate Title */
  $handler->display->display_options['fields']['field_title_alternate']['id'] = 'field_title_alternate';
  $handler->display->display_options['fields']['field_title_alternate']['table'] = 'field_data_field_title_alternate';
  $handler->display->display_options['fields']['field_title_alternate']['field'] = 'field_title_alternate';
  $handler->display->display_options['fields']['field_title_alternate']['hide_empty'] = TRUE;
  /* Field: Content: Author(s) */
  $handler->display->display_options['fields']['field_dc_creator']['id'] = 'field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['table'] = 'field_data_field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['field'] = 'field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['delta_offset'] = '0';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_date']['delta_offset'] = '0';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Sommaire';
  /* Field: Content: Genre */
  $handler->display->display_options['fields']['field_genre']['id'] = 'field_genre';
  $handler->display->display_options['fields']['field_genre']['table'] = 'field_data_field_genre';
  $handler->display->display_options['fields']['field_genre']['field'] = 'field_genre';
  $handler->display->display_options['fields']['field_genre']['type'] = 'taxonomy_term_reference_link';
  $handler->display->display_options['fields']['field_genre']['delta_offset'] = '0';
  /* Field: Content: Publisher (obsolete) */
  $handler->display->display_options['fields']['field_publisher']['id'] = 'field_publisher';
  $handler->display->display_options['fields']['field_publisher']['table'] = 'field_data_field_publisher';
  $handler->display->display_options['fields']['field_publisher']['field'] = 'field_publisher';
  $handler->display->display_options['fields']['field_publisher']['delta_offset'] = '0';
  /* Field: Content: URI */
  $handler->display->display_options['fields']['field_uri']['id'] = 'field_uri';
  $handler->display->display_options['fields']['field_uri']['table'] = 'field_data_field_uri';
  $handler->display->display_options['fields']['field_uri']['field'] = 'field_uri';
  $handler->display->display_options['fields']['field_uri']['label'] = 'File URL';
  $handler->display->display_options['fields']['field_uri']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_uri']['settings'] = array(
    'title_style' => '_none',
    'title_link' => '',
    'title_class' => '',
  );
  $handler->display->display_options['fields']['field_uri']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_uri']['multi_type'] = 'ul';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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

  /* Display: Block - Main Detail List */
  $handler = $view->new_display('block', 'Block - Main Detail List', 'block');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'repo-item detail';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['field_dc_subject_value']['id'] = 'field_dc_subject_value';
  $handler->display->display_options['relationships']['field_dc_subject_value']['table'] = 'field_data_field_dc_subject';
  $handler->display->display_options['relationships']['field_dc_subject_value']['field'] = 'field_dc_subject_value';
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['field_dc_subject_value_tid']['id'] = 'field_dc_subject_value_tid';
  $handler->display->display_options['relationships']['field_dc_subject_value_tid']['table'] = 'field_data_field_dc_subject_value';
  $handler->display->display_options['relationships']['field_dc_subject_value_tid']['field'] = 'field_dc_subject_value_tid';
  $handler->display->display_options['relationships']['field_dc_subject_value_tid']['relationship'] = 'field_dc_subject_value';
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
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Alternate Title */
  $handler->display->display_options['fields']['field_title_alternate']['id'] = 'field_title_alternate';
  $handler->display->display_options['fields']['field_title_alternate']['table'] = 'field_data_field_title_alternate';
  $handler->display->display_options['fields']['field_title_alternate']['field'] = 'field_title_alternate';
  $handler->display->display_options['fields']['field_title_alternate']['hide_empty'] = TRUE;
  /* Field: Content: Access Rights */
  $handler->display->display_options['fields']['field_access_rights']['id'] = 'field_access_rights';
  $handler->display->display_options['fields']['field_access_rights']['table'] = 'field_data_field_access_rights';
  $handler->display->display_options['fields']['field_access_rights']['field'] = 'field_access_rights';
  $handler->display->display_options['fields']['field_access_rights']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_access_rights']['separator'] = ' ';
  /* Field: Content: Rights Holder */
  $handler->display->display_options['fields']['field_rights_holder']['id'] = 'field_rights_holder';
  $handler->display->display_options['fields']['field_rights_holder']['table'] = 'field_data_field_rights_holder';
  $handler->display->display_options['fields']['field_rights_holder']['field'] = 'field_rights_holder';
  $handler->display->display_options['fields']['field_rights_holder']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_rights_holder']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_rights_holder']['separator'] = ';';
  /* Field: Content: Author(s) */
  $handler->display->display_options['fields']['field_dc_creator']['id'] = 'field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['table'] = 'field_data_field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['field'] = 'field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_dc_creator']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_dc_creator']['delta_offset'] = '0';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_date']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_date']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_date']['separator'] = ',&nbsp;';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Sommaire';
  /* Field: Content: Genre */
  $handler->display->display_options['fields']['field_genre']['id'] = 'field_genre';
  $handler->display->display_options['fields']['field_genre']['table'] = 'field_data_field_genre';
  $handler->display->display_options['fields']['field_genre']['field'] = 'field_genre';
  $handler->display->display_options['fields']['field_genre']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_genre']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_genre']['type'] = 'taxonomy_term_reference_link';
  $handler->display->display_options['fields']['field_genre']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_genre']['separator'] = ',&nbsp;';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_dc_subject']['id'] = 'field_dc_subject';
  $handler->display->display_options['fields']['field_dc_subject']['table'] = 'field_data_field_dc_subject';
  $handler->display->display_options['fields']['field_dc_subject']['field'] = 'field_dc_subject';
  $handler->display->display_options['fields']['field_dc_subject']['label'] = 'Sujets';
  $handler->display->display_options['fields']['field_dc_subject']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_dc_subject']['alter']['text'] = '[field_dc_subject]';
  $handler->display->display_options['fields']['field_dc_subject']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_dc_subject']['alter']['path'] = 'subject/[field_dc_subject-revision_id]';
  $handler->display->display_options['fields']['field_dc_subject']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_dc_subject']['element_label_type'] = 'span';
  /* Field: Content: Publisher (obsolete) */
  $handler->display->display_options['fields']['field_publisher']['id'] = 'field_publisher';
  $handler->display->display_options['fields']['field_publisher']['table'] = 'field_data_field_publisher';
  $handler->display->display_options['fields']['field_publisher']['field'] = 'field_publisher';
  $handler->display->display_options['fields']['field_publisher']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_publisher']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_publisher']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_publisher']['separator'] = ',&nbsp;';
  /* Field: Content: URI */
  $handler->display->display_options['fields']['field_uri']['id'] = 'field_uri';
  $handler->display->display_options['fields']['field_uri']['table'] = 'field_data_field_uri';
  $handler->display->display_options['fields']['field_uri']['field'] = 'field_uri';
  $handler->display->display_options['fields']['field_uri']['label'] = 'File URL';
  $handler->display->display_options['fields']['field_uri']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_uri']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_uri']['settings'] = array(
    'title_style' => '_none',
    'title_link' => '',
    'title_class' => '',
  );
  $handler->display->display_options['fields']['field_uri']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_uri']['separator'] = '<br>';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_keyword_index']['id'] = 'field_keyword_index';
  $handler->display->display_options['fields']['field_keyword_index']['table'] = 'field_data_field_keyword_index';
  $handler->display->display_options['fields']['field_keyword_index']['field'] = 'field_keyword_index';
  $handler->display->display_options['fields']['field_keyword_index']['label'] = '';
  $handler->display->display_options['fields']['field_keyword_index']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_keyword_index']['element_label_colon'] = FALSE;
  /* Field: Content: Language (Item) */
  $handler->display->display_options['fields']['field_iso_language']['id'] = 'field_iso_language';
  $handler->display->display_options['fields']['field_iso_language']['table'] = 'field_data_field_iso_language';
  $handler->display->display_options['fields']['field_iso_language']['field'] = 'field_iso_language';
  $handler->display->display_options['fields']['field_iso_language']['label'] = 'Language(s)';
  $handler->display->display_options['fields']['field_iso_language']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_iso_language']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_iso_language']['empty'] = 'English';
  $handler->display->display_options['fields']['field_iso_language']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_iso_language']['separator'] = ',&nbsp;';
  $handler->display->display_options['block_description'] = 'Block - Bibliographic details';

  /* Display: Marc File */
  $handler = $view->new_display('block', 'Marc File', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'repo-item marc-file';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_marc_file']['id'] = 'field_marc_file';
  $handler->display->display_options['fields']['field_marc_file']['table'] = 'field_data_field_marc_file';
  $handler->display->display_options['fields']['field_marc_file']['field'] = 'field_marc_file';
  $handler->display->display_options['block_description'] = 'Repo Item - Marc File';

  /* Display: Block - Daisy File URL */
  $handler = $view->new_display('block', 'Block - Daisy File URL', 'block_2');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'repo-item daisy-url';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['block_description'] = 'Block - Files / Daisy';

  /* Display: Block - MARC XML */
  $handler = $view->new_display('block', 'Block - MARC XML', 'block_3');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'repo-item marc-xml';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: XML String */
  $handler->display->display_options['fields']['field_xml_string']['id'] = 'field_xml_string';
  $handler->display->display_options['fields']['field_xml_string']['table'] = 'field_data_field_xml_string';
  $handler->display->display_options['fields']['field_xml_string']['field'] = 'field_xml_string';
  $handler->display->display_options['fields']['field_xml_string']['label'] = '';
  $handler->display->display_options['fields']['field_xml_string']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_xml_string']['empty'] = 'No MARC XML data available for this item.';
  $handler->display->display_options['fields']['field_xml_string']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['block_description'] = 'Block - MARC XML';
  $export['repository_item_detail_page'] = $view;

  $view = new view();
  $view->name = 'repository_item_detail_page_embedded';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Repository Item Detail Page Embedded';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    7 => '7',
    4 => '4',
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: DC Relation (field_dc_relation) */
  $handler->display->display_options['relationships']['field_dc_relation_value']['id'] = 'field_dc_relation_value';
  $handler->display->display_options['relationships']['field_dc_relation_value']['table'] = 'field_data_field_dc_relation';
  $handler->display->display_options['relationships']['field_dc_relation_value']['field'] = 'field_dc_relation_value';
  $handler->display->display_options['relationships']['field_dc_relation_value']['relationship'] = 'field_dc_relation_node';
  $handler->display->display_options['relationships']['field_dc_relation_value']['delta'] = '-1';
  /* Relationship: Field collection item: Entity with the DC Relation (field_dc_relation) */
  $handler->display->display_options['relationships']['field_dc_relation_node']['id'] = 'field_dc_relation_node';
  $handler->display->display_options['relationships']['field_dc_relation_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_dc_relation_node']['field'] = 'field_dc_relation_node';
  $handler->display->display_options['relationships']['field_dc_relation_node']['relationship'] = 'field_dc_relation_value';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Alternate Title */
  $handler->display->display_options['fields']['field_title_alternate']['id'] = 'field_title_alternate';
  $handler->display->display_options['fields']['field_title_alternate']['table'] = 'field_data_field_title_alternate';
  $handler->display->display_options['fields']['field_title_alternate']['field'] = 'field_title_alternate';
  $handler->display->display_options['fields']['field_title_alternate']['hide_empty'] = TRUE;
  /* Field: Content: Author(s) */
  $handler->display->display_options['fields']['field_dc_creator']['id'] = 'field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['table'] = 'field_data_field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['field'] = 'field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['delta_offset'] = '0';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_date']['delta_offset'] = '0';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Summary';
  /* Field: Content: Genre */
  $handler->display->display_options['fields']['field_genre']['id'] = 'field_genre';
  $handler->display->display_options['fields']['field_genre']['table'] = 'field_data_field_genre';
  $handler->display->display_options['fields']['field_genre']['field'] = 'field_genre';
  $handler->display->display_options['fields']['field_genre']['type'] = 'taxonomy_term_reference_link';
  $handler->display->display_options['fields']['field_genre']['delta_offset'] = '0';
  /* Field: Content: Publisher (obsolete) */
  $handler->display->display_options['fields']['field_publisher']['id'] = 'field_publisher';
  $handler->display->display_options['fields']['field_publisher']['table'] = 'field_data_field_publisher';
  $handler->display->display_options['fields']['field_publisher']['field'] = 'field_publisher';
  $handler->display->display_options['fields']['field_publisher']['delta_offset'] = '0';
  /* Field: Content: URI */
  $handler->display->display_options['fields']['field_uri']['id'] = 'field_uri';
  $handler->display->display_options['fields']['field_uri']['table'] = 'field_data_field_uri';
  $handler->display->display_options['fields']['field_uri']['field'] = 'field_uri';
  $handler->display->display_options['fields']['field_uri']['label'] = 'File URL';
  $handler->display->display_options['fields']['field_uri']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_uri']['settings'] = array(
    'title_style' => '_none',
    'title_link' => '',
    'title_class' => '',
  );
  $handler->display->display_options['fields']['field_uri']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_uri']['multi_type'] = 'ul';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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

  /* Display: Block: Main Detail */
  $handler = $view->new_display('block', 'Block: Main Detail', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Block: Main Detail';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'repo-item detail';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Alternate Title */
  $handler->display->display_options['fields']['field_title_alternate']['id'] = 'field_title_alternate';
  $handler->display->display_options['fields']['field_title_alternate']['table'] = 'field_data_field_title_alternate';
  $handler->display->display_options['fields']['field_title_alternate']['field'] = 'field_title_alternate';
  $handler->display->display_options['fields']['field_title_alternate']['hide_empty'] = TRUE;
  /* Field: Content: Author(s) */
  $handler->display->display_options['fields']['field_dc_creator']['id'] = 'field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['table'] = 'field_data_field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['field'] = 'field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_dc_creator']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_dc_creator']['delta_offset'] = '0';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_date']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_date']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_date']['separator'] = ',&nbsp;';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Summary';
  /* Field: Content: Genre */
  $handler->display->display_options['fields']['field_genre']['id'] = 'field_genre';
  $handler->display->display_options['fields']['field_genre']['table'] = 'field_data_field_genre';
  $handler->display->display_options['fields']['field_genre']['field'] = 'field_genre';
  $handler->display->display_options['fields']['field_genre']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_genre']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_genre']['type'] = 'taxonomy_term_reference_link';
  $handler->display->display_options['fields']['field_genre']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_genre']['separator'] = ',&nbsp;';
  /* Field: Content: Publisher (obsolete) */
  $handler->display->display_options['fields']['field_publisher']['id'] = 'field_publisher';
  $handler->display->display_options['fields']['field_publisher']['table'] = 'field_data_field_publisher';
  $handler->display->display_options['fields']['field_publisher']['field'] = 'field_publisher';
  $handler->display->display_options['fields']['field_publisher']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_publisher']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_publisher']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_publisher']['separator'] = ',&nbsp;';
  /* Field: Content: URI */
  $handler->display->display_options['fields']['field_uri']['id'] = 'field_uri';
  $handler->display->display_options['fields']['field_uri']['table'] = 'field_data_field_uri';
  $handler->display->display_options['fields']['field_uri']['field'] = 'field_uri';
  $handler->display->display_options['fields']['field_uri']['label'] = 'File URL(s)';
  $handler->display->display_options['fields']['field_uri']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_uri']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_uri']['settings'] = array(
    'title_style' => '_none',
    'title_link' => '',
    'title_class' => '',
  );
  $handler->display->display_options['fields']['field_uri']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_uri']['separator'] = '<br>';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_keyword_index']['id'] = 'field_keyword_index';
  $handler->display->display_options['fields']['field_keyword_index']['table'] = 'field_data_field_keyword_index';
  $handler->display->display_options['fields']['field_keyword_index']['field'] = 'field_keyword_index';
  $handler->display->display_options['fields']['field_keyword_index']['label'] = '';
  $handler->display->display_options['fields']['field_keyword_index']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_keyword_index']['element_label_colon'] = FALSE;
  /* Field: Content: Language (Item) */
  $handler->display->display_options['fields']['field_iso_language']['id'] = 'field_iso_language';
  $handler->display->display_options['fields']['field_iso_language']['table'] = 'field_data_field_iso_language';
  $handler->display->display_options['fields']['field_iso_language']['field'] = 'field_iso_language';
  $handler->display->display_options['fields']['field_iso_language']['label'] = 'Language(s)';
  $handler->display->display_options['fields']['field_iso_language']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_iso_language']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_iso_language']['empty'] = 'English';
  $handler->display->display_options['fields']['field_iso_language']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_iso_language']['separator'] = ',&nbsp;';
  $handler->display->display_options['block_description'] = 'Repo Item: Main Details';

  /* Display: Embed: Main Detail */
  $handler = $view->new_display('embed', 'Embed: Main Detail', 'embed_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Embed: Main Detail';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'repo-item detail';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'view-list-ul';
  $handler->display->display_options['style_options']['wrapper_class'] = 'view-list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2 class="block__title block-title">Details:</h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: URLs External */
  $handler->display->display_options['fields']['field_urls_external']['id'] = 'field_urls_external';
  $handler->display->display_options['fields']['field_urls_external']['table'] = 'field_data_field_urls_external';
  $handler->display->display_options['fields']['field_urls_external']['field'] = 'field_urls_external';
  $handler->display->display_options['fields']['field_urls_external']['label'] = 'Resource Links';
  $handler->display->display_options['fields']['field_urls_external']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_urls_external']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_urls_external']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_urls_external']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_urls_external']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_urls_external']['multi_type'] = 'ul';
  /* Field: Content: Author(s) */
  $handler->display->display_options['fields']['field_dc_creator']['id'] = 'field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['table'] = 'field_data_field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['field'] = 'field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['label'] = 'Author';
  $handler->display->display_options['fields']['field_dc_creator']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_dc_creator']['alter']['path'] = '/repository-search?search_api_views_fulltext_2=&f[]=field_dc_creator:[field_dc_creator-value]';
  $handler->display->display_options['fields']['field_dc_creator']['alter']['alt'] = '[field_dc_creator-value]';
  $handler->display->display_options['fields']['field_dc_creator']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_dc_creator']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_dc_creator']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_dc_creator']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_dc_creator']['separator'] = '; ';
  /* Field: Content: DC Contributor */
  $handler->display->display_options['fields']['field_dc_contributor']['id'] = 'field_dc_contributor';
  $handler->display->display_options['fields']['field_dc_contributor']['table'] = 'field_data_field_dc_contributor';
  $handler->display->display_options['fields']['field_dc_contributor']['field'] = 'field_dc_contributor';
  $handler->display->display_options['fields']['field_dc_contributor']['label'] = 'Contributor';
  $handler->display->display_options['fields']['field_dc_contributor']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_dc_contributor']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_dc_contributor']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_dc_contributor']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_dc_contributor']['separator'] = '; ';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'field_collection_view_edition_statement';
  $handler->display->display_options['fields']['view']['display'] = 'embed_2';
  $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_date']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_date']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_date']['delta_offset'] = '0';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Summary';
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  /* Field: Content: Contents */
  $handler->display->display_options['fields']['field_contents']['id'] = 'field_contents';
  $handler->display->display_options['fields']['field_contents']['table'] = 'field_data_field_contents';
  $handler->display->display_options['fields']['field_contents']['field'] = 'field_contents';
  $handler->display->display_options['fields']['field_contents']['hide_empty'] = TRUE;
  /* Field: Content: Genre */
  $handler->display->display_options['fields']['field_genre']['id'] = 'field_genre';
  $handler->display->display_options['fields']['field_genre']['table'] = 'field_data_field_genre';
  $handler->display->display_options['fields']['field_genre']['field'] = 'field_genre';
  $handler->display->display_options['fields']['field_genre']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_genre']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_genre']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_genre']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_genre']['type'] = 'taxonomy_term_reference_link';
  $handler->display->display_options['fields']['field_genre']['delta_offset'] = '0';
  /* Field: Genre Harmonized */
  $handler->display->display_options['fields']['field_genre_harmonized']['id'] = 'field_genre_harmonized';
  $handler->display->display_options['fields']['field_genre_harmonized']['table'] = 'field_data_field_genre_harmonized';
  $handler->display->display_options['fields']['field_genre_harmonized']['field'] = 'field_genre_harmonized';
  $handler->display->display_options['fields']['field_genre_harmonized']['ui_name'] = 'Genre Harmonized';
  $handler->display->display_options['fields']['field_genre_harmonized']['label'] = 'Genre';
  $handler->display->display_options['fields']['field_genre_harmonized']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_genre_harmonized']['delta_offset'] = '0';
  /* Field: Content: Subject */
  $handler->display->display_options['fields']['field_subject']['id'] = 'field_subject';
  $handler->display->display_options['fields']['field_subject']['table'] = 'field_data_field_subject';
  $handler->display->display_options['fields']['field_subject']['field'] = 'field_subject';
  $handler->display->display_options['fields']['field_subject']['label'] = 'Subject(s)';
  $handler->display->display_options['fields']['field_subject']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_subject']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_subject']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_subject']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_subject']['separator'] = ' | ';
  /* Field: Content: Publisher (obsolete) */
  $handler->display->display_options['fields']['field_publisher']['id'] = 'field_publisher';
  $handler->display->display_options['fields']['field_publisher']['table'] = 'field_data_field_publisher';
  $handler->display->display_options['fields']['field_publisher']['field'] = 'field_publisher';
  $handler->display->display_options['fields']['field_publisher']['label'] = 'Publisher';
  $handler->display->display_options['fields']['field_publisher']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_publisher']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_publisher']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_publisher']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_publisher']['delta_offset'] = '0';
  /* Field: Content: Publisher (Source) */
  $handler->display->display_options['fields']['field_publisher_source']['id'] = 'field_publisher_source';
  $handler->display->display_options['fields']['field_publisher_source']['table'] = 'field_data_field_publisher_source';
  $handler->display->display_options['fields']['field_publisher_source']['field'] = 'field_publisher_source';
  $handler->display->display_options['fields']['field_publisher_source']['label'] = 'Original Publisher';
  $handler->display->display_options['fields']['field_publisher_source']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_publisher_source']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_publisher_source']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_publisher_source']['delta_offset'] = '0';
  /* Field: Content: Language (Item) */
  $handler->display->display_options['fields']['field_iso_language']['id'] = 'field_iso_language';
  $handler->display->display_options['fields']['field_iso_language']['table'] = 'field_data_field_iso_language';
  $handler->display->display_options['fields']['field_iso_language']['field'] = 'field_iso_language';
  $handler->display->display_options['fields']['field_iso_language']['label'] = 'Language(s)';
  $handler->display->display_options['fields']['field_iso_language']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_iso_language']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_iso_language']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_iso_language']['delta_offset'] = '0';
  /* Field: Content: ISBN (Audio) */
  $handler->display->display_options['fields']['field_isbn_audio']['id'] = 'field_isbn_audio';
  $handler->display->display_options['fields']['field_isbn_audio']['table'] = 'field_data_field_isbn_audio';
  $handler->display->display_options['fields']['field_isbn_audio']['field'] = 'field_isbn_audio';
  $handler->display->display_options['fields']['field_isbn_audio']['label'] = 'ISBN';
  $handler->display->display_options['fields']['field_isbn_audio']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_isbn_audio']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_isbn_audio']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_isbn_audio']['delta_offset'] = '0';
  /* Field: Content: DC Relation */
  $handler->display->display_options['fields']['field_dc_relation']['id'] = 'field_dc_relation';
  $handler->display->display_options['fields']['field_dc_relation']['table'] = 'field_data_field_dc_relation';
  $handler->display->display_options['fields']['field_dc_relation']['field'] = 'field_dc_relation';
  $handler->display->display_options['fields']['field_dc_relation']['label'] = 'Collection(s)/Series';
  $handler->display->display_options['fields']['field_dc_relation']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_dc_relation']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_dc_relation']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_dc_relation']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_dc_relation']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_dc_relation']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;

  /* Display: Block: MARC XML */
  $handler = $view->new_display('block', 'Block: MARC XML', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Block: MARC XML';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'repo-item marc-xml';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: XML String */
  $handler->display->display_options['fields']['field_xml_string']['id'] = 'field_xml_string';
  $handler->display->display_options['fields']['field_xml_string']['table'] = 'field_data_field_xml_string';
  $handler->display->display_options['fields']['field_xml_string']['field'] = 'field_xml_string';
  $handler->display->display_options['fields']['field_xml_string']['label'] = '';
  $handler->display->display_options['fields']['field_xml_string']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_xml_string']['empty'] = 'No MARC XML data available for this item.';
  $handler->display->display_options['fields']['field_xml_string']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['block_description'] = 'Repo Item: MARC XML';

  /* Display: Block: Daisy File URL */
  $handler = $view->new_display('block', 'Block: Daisy File URL', 'block_2');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'repo-item daisy-url';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['block_description'] = 'Repo Item: Files / Daisy';

  /* Display: Block: Marc File */
  $handler = $view->new_display('block', 'Block: Marc File', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Block: Marc File';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'repo-item marc-file';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_marc_file']['id'] = 'field_marc_file';
  $handler->display->display_options['fields']['field_marc_file']['table'] = 'field_data_field_marc_file';
  $handler->display->display_options['fields']['field_marc_file']['field'] = 'field_marc_file';
  $handler->display->display_options['block_description'] = 'Repo Item: Marc File';

  /* Display: Embed: Main Detail, Public */
  $handler = $view->new_display('embed', 'Embed: Main Detail, Public', 'embed_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Embed: Main Detail, Public';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'repo-item detail public';
  $handler->display->display_options['display_description'] = 'Main Repo listing - publisher, URI and Language(s)';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Publisher (obsolete) */
  $handler->display->display_options['fields']['field_publisher']['id'] = 'field_publisher';
  $handler->display->display_options['fields']['field_publisher']['table'] = 'field_data_field_publisher';
  $handler->display->display_options['fields']['field_publisher']['field'] = 'field_publisher';
  $handler->display->display_options['fields']['field_publisher']['delta_offset'] = '0';
  /* Field: Content: URI */
  $handler->display->display_options['fields']['field_uri']['id'] = 'field_uri';
  $handler->display->display_options['fields']['field_uri']['table'] = 'field_data_field_uri';
  $handler->display->display_options['fields']['field_uri']['field'] = 'field_uri';
  $handler->display->display_options['fields']['field_uri']['label'] = 'File URL';
  $handler->display->display_options['fields']['field_uri']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_uri']['settings'] = array(
    'title_style' => '_none',
    'title_link' => '',
    'title_class' => '',
  );
  $handler->display->display_options['fields']['field_uri']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_uri']['multi_type'] = 'ul';
  /* Field: Content: Language (Item) */
  $handler->display->display_options['fields']['field_iso_language']['id'] = 'field_iso_language';
  $handler->display->display_options['fields']['field_iso_language']['table'] = 'field_data_field_iso_language';
  $handler->display->display_options['fields']['field_iso_language']['field'] = 'field_iso_language';
  $handler->display->display_options['fields']['field_iso_language']['label'] = 'Language(s)';
  $handler->display->display_options['fields']['field_iso_language']['delta_offset'] = '0';

  /* Display: Embed: Main Detail, Subjects */
  $handler = $view->new_display('embed', 'Embed: Main Detail, Subjects', 'embed_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Embed: Main Detail, Subjects';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'repo-item detail subjects';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['reverse_field_dc_subject_value_field_collection_item']['id'] = 'reverse_field_dc_subject_value_field_collection_item';
  $handler->display->display_options['relationships']['reverse_field_dc_subject_value_field_collection_item']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_dc_subject_value_field_collection_item']['field'] = 'reverse_field_dc_subject_value_field_collection_item';
  $handler->display->display_options['relationships']['reverse_field_dc_subject_value_field_collection_item']['relationship'] = 'term_node_tid';
  $handler->display->display_options['relationships']['reverse_field_dc_subject_value_field_collection_item']['required'] = TRUE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'term_node_tid';

  /* Display: Embed: MARC XML Data */
  $handler = $view->new_display('embed', 'Embed: MARC XML Data', 'embed_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Embed: MARC XML Data';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'repo-item marc-xml';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'view-list-ul';
  $handler->display->display_options['style_options']['wrapper_class'] = 'view-list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2 class="block__title block-title">MARC XML Data:</h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: XML String */
  $handler->display->display_options['fields']['field_xml_string']['id'] = 'field_xml_string';
  $handler->display->display_options['fields']['field_xml_string']['table'] = 'field_data_field_xml_string';
  $handler->display->display_options['fields']['field_xml_string']['field'] = 'field_xml_string';
  $handler->display->display_options['fields']['field_xml_string']['label'] = '';
  $handler->display->display_options['fields']['field_xml_string']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'repository_item' => 'repository_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Block: Access Rights */
  $handler = $view->new_display('block', 'Block: Access Rights', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Access Rights';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'repo-item detail';
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Access Restrictions */
  $handler->display->display_options['fields']['field_access_restrictions']['id'] = 'field_access_restrictions';
  $handler->display->display_options['fields']['field_access_restrictions']['table'] = 'field_data_field_access_restrictions';
  $handler->display->display_options['fields']['field_access_restrictions']['field'] = 'field_access_restrictions';
  $handler->display->display_options['fields']['field_access_restrictions']['hide_empty'] = TRUE;
  /* Field: Content: Access Rights */
  $handler->display->display_options['fields']['field_access_rights']['id'] = 'field_access_rights';
  $handler->display->display_options['fields']['field_access_rights']['table'] = 'field_data_field_access_rights';
  $handler->display->display_options['fields']['field_access_rights']['field'] = 'field_access_rights';
  $handler->display->display_options['fields']['field_access_rights']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_access_rights']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_access_rights']['multi_type'] = 'ul';
  /* Field: Content: Rights Holder */
  $handler->display->display_options['fields']['field_rights_holder']['id'] = 'field_rights_holder';
  $handler->display->display_options['fields']['field_rights_holder']['table'] = 'field_data_field_rights_holder';
  $handler->display->display_options['fields']['field_rights_holder']['field'] = 'field_rights_holder';
  $handler->display->display_options['fields']['field_rights_holder']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_rights_holder']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_rights_holder']['multi_type'] = 'ul';
  $handler->display->display_options['fields']['field_rights_holder']['separator'] = '; ';
  $handler->display->display_options['block_description'] = 'Repo Item: Access Rights';
  $export['repository_item_detail_page_embedded'] = $view;

  $view = new view();
  $view->name = 'repository_items_with_field_collections';
  $view->description = 'Temporary Admin view to populate the new Multi-File Field Attachment with S3 Paths.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Repository Items with Field Collections';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Title Dedupe';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer nodes';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '< précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant >';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::_cals_importer_update_repository_items' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Published status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: System Control Number */
  $handler->display->display_options['fields']['field_system_control_number']['id'] = 'field_system_control_number';
  $handler->display->display_options['fields']['field_system_control_number']['table'] = 'field_data_field_system_control_number';
  $handler->display->display_options['fields']['field_system_control_number']['field'] = 'field_system_control_number';
  $handler->display->display_options['fields']['field_system_control_number']['delta_offset'] = '0';
  /* Field: Content: Link to delete content */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  $handler->display->display_options['sorts']['nid']['order'] = 'DESC';
  $handler->display->display_options['sorts']['nid']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['nid']['expose']['label'] = 'Nid';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Post date';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'repository_item' => 'repository_item',
  );
  /* Filter criterion: Content: Post date */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'node';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['exposed'] = TRUE;
  $handler->display->display_options['filters']['created']['expose']['operator_id'] = 'created_op';
  $handler->display->display_options['filters']['created']['expose']['label'] = 'Post date';
  $handler->display->display_options['filters']['created']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['created']['expose']['operator'] = 'created_op';
  $handler->display->display_options['filters']['created']['expose']['identifier'] = 'created';
  $handler->display->display_options['filters']['created']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
    8 => 0,
  );
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
    8 => 0,
  );

  /* Display: Duplicate S3 Paths - Filtered */
  $handler = $view->new_display('page', 'Duplicate S3 Paths - Filtered', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Repo Items - File Resource Collections';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
    5 => '5',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '< précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant >';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'nid' => 'nid',
    'status' => 'status',
    'title' => 'title',
    'php_1' => 'php_1',
    'type' => 'type',
    'field_nnels_856_tag' => 'field_nnels_856_tag',
    'field_duplicate_managed_file' => 'field_duplicate_managed_file',
    'field_s3_file_upload' => 'field_s3_file_upload',
    'field_s3_path' => 'field_s3_path',
    'php' => 'php',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_nnels_856_tag' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_duplicate_managed_file' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_s3_file_upload' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_s3_path' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Description';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'Records below have no file attachments but which may have S3 paths already in the Files Managed Table. Are these duplicates?';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: File Resource (field_file_resource) */
  $handler->display->display_options['relationships']['field_file_resource_value']['id'] = 'field_file_resource_value';
  $handler->display->display_options['relationships']['field_file_resource_value']['table'] = 'field_data_field_file_resource';
  $handler->display->display_options['relationships']['field_file_resource_value']['field'] = 'field_file_resource_value';
  $handler->display->display_options['relationships']['field_file_resource_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '3';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Published status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Duplicate S3? */
  $handler->display->display_options['fields']['duplicate_s3']['id'] = 'duplicate_s3';
  $handler->display->display_options['fields']['duplicate_s3']['table'] = 'node';
  $handler->display->display_options['fields']['duplicate_s3']['field'] = 'duplicate_s3';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: Content: NNELS 856 tag */
  $handler->display->display_options['fields']['field_nnels_856_tag']['id'] = 'field_nnels_856_tag';
  $handler->display->display_options['fields']['field_nnels_856_tag']['table'] = 'field_data_field_nnels_856_tag';
  $handler->display->display_options['fields']['field_nnels_856_tag']['field'] = 'field_nnels_856_tag';
  $handler->display->display_options['fields']['field_nnels_856_tag']['label'] = 'NNELS 856 tag?';
  /* Field: Content: Duplicate Managed File */
  $handler->display->display_options['fields']['field_duplicate_managed_file']['id'] = 'field_duplicate_managed_file';
  $handler->display->display_options['fields']['field_duplicate_managed_file']['table'] = 'field_data_field_duplicate_managed_file';
  $handler->display->display_options['fields']['field_duplicate_managed_file']['field'] = 'field_duplicate_managed_file';
  /* Field: Field: S3 File Upload */
  $handler->display->display_options['fields']['field_s3_file_upload']['id'] = 'field_s3_file_upload';
  $handler->display->display_options['fields']['field_s3_file_upload']['table'] = 'field_data_field_s3_file_upload';
  $handler->display->display_options['fields']['field_s3_file_upload']['field'] = 'field_s3_file_upload';
  $handler->display->display_options['fields']['field_s3_file_upload']['relationship'] = 'field_file_resource_value';
  $handler->display->display_options['fields']['field_s3_file_upload']['click_sort_column'] = 'fid';
  /* Field: Field: S3 Path */
  $handler->display->display_options['fields']['field_s3_path']['id'] = 'field_s3_path';
  $handler->display->display_options['fields']['field_s3_path']['table'] = 'field_data_field_s3_path';
  $handler->display->display_options['fields']['field_s3_path']['field'] = 'field_s3_path';
  $handler->display->display_options['fields']['field_s3_path']['exclude'] = TRUE;
  /* Field: Content: S3 Path */
  $handler->display->display_options['fields']['s3_path']['id'] = 's3_path';
  $handler->display->display_options['fields']['s3_path']['table'] = 'node';
  $handler->display->display_options['fields']['s3_path']['field'] = 's3_path';
  $handler->display->display_options['fields']['s3_path']['label'] = 'S3';
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Field: S3 Path (field_s3_path) */
  $handler->display->display_options['sorts']['field_s3_path_value']['id'] = 'field_s3_path_value';
  $handler->display->display_options['sorts']['field_s3_path_value']['table'] = 'field_data_field_s3_path';
  $handler->display->display_options['sorts']['field_s3_path_value']['field'] = 'field_s3_path_value';
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  /* Filter criterion: Field: S3 Path (field_s3_path) */
  $handler->display->display_options['filters']['field_s3_path_value']['id'] = 'field_s3_path_value';
  $handler->display->display_options['filters']['field_s3_path_value']['table'] = 'field_data_field_s3_path';
  $handler->display->display_options['filters']['field_s3_path_value']['field'] = 'field_s3_path_value';
  $handler->display->display_options['filters']['field_s3_path_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_s3_path_value']['group'] = 1;
  /* Filter criterion: Content: NNELS 856 tag (field_nnels_856_tag) */
  $handler->display->display_options['filters']['field_nnels_856_tag_value']['id'] = 'field_nnels_856_tag_value';
  $handler->display->display_options['filters']['field_nnels_856_tag_value']['table'] = 'field_data_field_nnels_856_tag';
  $handler->display->display_options['filters']['field_nnels_856_tag_value']['field'] = 'field_nnels_856_tag_value';
  $handler->display->display_options['filters']['field_nnels_856_tag_value']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_nnels_856_tag_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['filters']['field_nnels_856_tag_value']['group'] = 1;
  /* Filter criterion: Content: XML String (field_xml_string) */
  $handler->display->display_options['filters']['field_xml_string_value']['id'] = 'field_xml_string_value';
  $handler->display->display_options['filters']['field_xml_string_value']['table'] = 'field_data_field_xml_string';
  $handler->display->display_options['filters']['field_xml_string_value']['field'] = 'field_xml_string_value';
  $handler->display->display_options['filters']['field_xml_string_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_xml_string_value']['group'] = 1;
  /* Filter criterion: Content: Duplicate Managed File (field_duplicate_managed_file) */
  $handler->display->display_options['filters']['field_duplicate_managed_file_value']['id'] = 'field_duplicate_managed_file_value';
  $handler->display->display_options['filters']['field_duplicate_managed_file_value']['table'] = 'field_data_field_duplicate_managed_file';
  $handler->display->display_options['filters']['field_duplicate_managed_file_value']['field'] = 'field_duplicate_managed_file_value';
  $handler->display->display_options['filters']['field_duplicate_managed_file_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_duplicate_managed_file_value']['expose']['operator_id'] = 'field_duplicate_managed_file_value_op';
  $handler->display->display_options['filters']['field_duplicate_managed_file_value']['expose']['label'] = 'Duplicate Managed File';
  $handler->display->display_options['filters']['field_duplicate_managed_file_value']['expose']['operator'] = 'field_duplicate_managed_file_value_op';
  $handler->display->display_options['filters']['field_duplicate_managed_file_value']['expose']['identifier'] = 'field_duplicate_managed_file_value';
  $handler->display->display_options['filters']['field_duplicate_managed_file_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
    8 => 0,
  );
  /* Filter criterion: Content: Published status or admin user */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['path'] = 'admin/content/cals/repo-items/multi-files/duplicate-s3-paths-refs';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Repository Items - Duplicate S3 paths (filtered)';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-nnels-admin';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['title'] = 'Repo Items - All';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'management';

  /* Display: Duplicate URIs? */
  $handler = $view->new_display('page', 'Duplicate URIs?', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Repo Items - File Resource Collections';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
    5 => '5',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '< précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant >';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'nid' => 'nid',
    'status' => 'status',
    'title' => 'title',
    'body' => 'body',
    'field_daisy_2_file' => 'field_daisy_2_file',
    'field_uri' => 'field_uri',
    'nothing' => 'nothing',
    'delete_node' => 'delete_node',
    'edit_node' => 'edit_node',
    'nid_1' => 'nid_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_daisy_2_file' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_uri' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Description';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'Records below have no file attachments but which may have S3 paths already in the Files Managed Table. Are these duplicates?';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: File Resource (field_file_resource) */
  $handler->display->display_options['relationships']['field_file_resource_value']['id'] = 'field_file_resource_value';
  $handler->display->display_options['relationships']['field_file_resource_value']['table'] = 'field_data_field_file_resource';
  $handler->display->display_options['relationships']['field_file_resource_value']['field'] = 'field_file_resource_value';
  $handler->display->display_options['relationships']['field_file_resource_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '3';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::_cals_importer_generate_marc_xml_856' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Generate 856 Strings',
    ),
    'action::_cals_run_batch_update_field_collection_s3_path' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Copy S3 paths -> Field Collections',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Published status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: NNELS 856 tag */
  $handler->display->display_options['fields']['field_nnels_856_tag']['id'] = 'field_nnels_856_tag';
  $handler->display->display_options['fields']['field_nnels_856_tag']['table'] = 'field_data_field_nnels_856_tag';
  $handler->display->display_options['fields']['field_nnels_856_tag']['field'] = 'field_nnels_856_tag';
  $handler->display->display_options['fields']['field_nnels_856_tag']['label'] = 'NNELS 856 tag?';
  /* Field: Content: Duplicate Managed File */
  $handler->display->display_options['fields']['field_duplicate_managed_file']['id'] = 'field_duplicate_managed_file';
  $handler->display->display_options['fields']['field_duplicate_managed_file']['table'] = 'field_data_field_duplicate_managed_file';
  $handler->display->display_options['fields']['field_duplicate_managed_file']['field'] = 'field_duplicate_managed_file';
  /* Field: Field: S3 Path */
  $handler->display->display_options['fields']['field_s3_path']['id'] = 'field_s3_path';
  $handler->display->display_options['fields']['field_s3_path']['table'] = 'field_data_field_s3_path';
  $handler->display->display_options['fields']['field_s3_path']['field'] = 'field_s3_path';
  /* Field: Field: S3 File Upload */
  $handler->display->display_options['fields']['field_s3_file_upload']['id'] = 'field_s3_file_upload';
  $handler->display->display_options['fields']['field_s3_file_upload']['table'] = 'field_data_field_s3_file_upload';
  $handler->display->display_options['fields']['field_s3_file_upload']['field'] = 'field_s3_file_upload';
  $handler->display->display_options['fields']['field_s3_file_upload']['relationship'] = 'field_file_resource_value';
  $handler->display->display_options['fields']['field_s3_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s3_file_upload']['type'] = 'file_table';
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'repository_item' => 'repository_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  /* Filter criterion: Field: S3 Path (field_s3_path) */
  $handler->display->display_options['filters']['field_s3_path_value']['id'] = 'field_s3_path_value';
  $handler->display->display_options['filters']['field_s3_path_value']['table'] = 'field_data_field_s3_path';
  $handler->display->display_options['filters']['field_s3_path_value']['field'] = 'field_s3_path_value';
  $handler->display->display_options['filters']['field_s3_path_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_s3_path_value']['group'] = 1;
  /* Filter criterion: Content: NNELS 856 tag (field_nnels_856_tag) */
  $handler->display->display_options['filters']['field_nnels_856_tag_value']['id'] = 'field_nnels_856_tag_value';
  $handler->display->display_options['filters']['field_nnels_856_tag_value']['table'] = 'field_data_field_nnels_856_tag';
  $handler->display->display_options['filters']['field_nnels_856_tag_value']['field'] = 'field_nnels_856_tag_value';
  $handler->display->display_options['filters']['field_nnels_856_tag_value']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_nnels_856_tag_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['filters']['field_nnels_856_tag_value']['group'] = 1;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  $handler->display->display_options['filters']['status_1']['group'] = 1;
  /* Filter criterion: Content: XML String (field_xml_string) */
  $handler->display->display_options['filters']['field_xml_string_value']['id'] = 'field_xml_string_value';
  $handler->display->display_options['filters']['field_xml_string_value']['table'] = 'field_data_field_xml_string';
  $handler->display->display_options['filters']['field_xml_string_value']['field'] = 'field_xml_string_value';
  $handler->display->display_options['filters']['field_xml_string_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_xml_string_value']['group'] = 1;
  /* Filter criterion: Field: S3 File Upload (field_s3_file_upload:fid) */
  $handler->display->display_options['filters']['field_s3_file_upload_fid']['id'] = 'field_s3_file_upload_fid';
  $handler->display->display_options['filters']['field_s3_file_upload_fid']['table'] = 'field_data_field_s3_file_upload';
  $handler->display->display_options['filters']['field_s3_file_upload_fid']['field'] = 'field_s3_file_upload_fid';
  $handler->display->display_options['filters']['field_s3_file_upload_fid']['relationship'] = 'field_file_resource_value';
  $handler->display->display_options['filters']['field_s3_file_upload_fid']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_s3_file_upload_fid']['group'] = 1;
  $handler->display->display_options['path'] = 'admin/content/cals/repo-items/multi-files/duplicate-uris';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Repository Items - Duplicate URIs';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-nnels-admin';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['title'] = 'Repo Items - All';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'management';

  /* Display: Repo Items - Files */
  $handler = $view->new_display('page', 'Repo Items - Files', 'page_14');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Repo Items - File Resource Collections';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
    5 => '5',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '< précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant >';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'nid' => 'nid',
    'status' => 'status',
    'title' => 'title',
    'body' => 'body',
    'field_daisy_2_file' => 'field_daisy_2_file',
    'field_uri' => 'field_uri',
    'nothing' => 'nothing',
    'delete_node' => 'delete_node',
    'edit_node' => 'edit_node',
    'nid_1' => 'nid_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_daisy_2_file' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_uri' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: File Resource (field_file_resource) */
  $handler->display->display_options['relationships']['field_file_resource_value']['id'] = 'field_file_resource_value';
  $handler->display->display_options['relationships']['field_file_resource_value']['table'] = 'field_data_field_file_resource';
  $handler->display->display_options['relationships']['field_file_resource_value']['field'] = 'field_file_resource_value';
  $handler->display->display_options['relationships']['field_file_resource_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::_cals_importer_generate_marc_xml_856' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Generate 856 Strings',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Published status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'reverse_field_parsed_nodes_node';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  /* Field: Content: NNELS 856 tag */
  $handler->display->display_options['fields']['field_nnels_856_tag']['id'] = 'field_nnels_856_tag';
  $handler->display->display_options['fields']['field_nnels_856_tag']['table'] = 'field_data_field_nnels_856_tag';
  $handler->display->display_options['fields']['field_nnels_856_tag']['field'] = 'field_nnels_856_tag';
  $handler->display->display_options['fields']['field_nnels_856_tag']['label'] = 'NNELS 856 tag?';
  /* Field: Field: S3 File Upload */
  $handler->display->display_options['fields']['field_s3_file_upload']['id'] = 'field_s3_file_upload';
  $handler->display->display_options['fields']['field_s3_file_upload']['table'] = 'field_data_field_s3_file_upload';
  $handler->display->display_options['fields']['field_s3_file_upload']['field'] = 'field_s3_file_upload';
  $handler->display->display_options['fields']['field_s3_file_upload']['relationship'] = 'field_file_resource_value';
  $handler->display->display_options['fields']['field_s3_file_upload']['click_sort_column'] = 'fid';
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Field: S3 File Upload (field_s3_file_upload:display) */
  $handler->display->display_options['sorts']['field_s3_file_upload_display']['id'] = 'field_s3_file_upload_display';
  $handler->display->display_options['sorts']['field_s3_file_upload_display']['table'] = 'field_data_field_s3_file_upload';
  $handler->display->display_options['sorts']['field_s3_file_upload_display']['field'] = 'field_s3_file_upload_display';
  $handler->display->display_options['sorts']['field_s3_file_upload_display']['relationship'] = 'field_file_resource_value';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Content: Author(s) (field_dc_creator:delta) */
  $handler->display->display_options['sorts']['delta']['id'] = 'delta';
  $handler->display->display_options['sorts']['delta']['table'] = 'field_data_field_dc_creator';
  $handler->display->display_options['sorts']['delta']['field'] = 'delta';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'repository_item' => 'repository_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 'All';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  /* Filter criterion: Content: File Resource (field_file_resource) */
  $handler->display->display_options['filters']['field_file_resource_value']['id'] = 'field_file_resource_value';
  $handler->display->display_options['filters']['field_file_resource_value']['table'] = 'field_data_field_file_resource';
  $handler->display->display_options['filters']['field_file_resource_value']['field'] = 'field_file_resource_value';
  $handler->display->display_options['filters']['field_file_resource_value']['operator'] = 'not empty';
  $handler->display->display_options['path'] = 'admin/content/cals/repo-items/multi-files';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Repository Items Multiple Files';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-nnels-admin';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['title'] = 'Repo Items - All';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'management';

  /* Display: OCLC Numbers */
  $handler = $view->new_display('page', 'OCLC Numbers', 'page_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Repo Items - Bad OCLC numbers';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
    5 => '5',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '< précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant >';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'nid' => 'nid',
    'status' => 'status',
    'title' => 'title',
    'body' => 'body',
    'field_daisy_2_file' => 'field_daisy_2_file',
    'field_uri' => 'field_uri',
    'nothing' => 'nothing',
    'delete_node' => 'delete_node',
    'edit_node' => 'edit_node',
    'nid_1' => 'nid_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_daisy_2_file' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_uri' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Description';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'Records listed here have OCLC numbers improperly mapped to the system control field. We need to fix this!';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: File Resource (field_file_resource) */
  $handler->display->display_options['relationships']['field_file_resource_value']['id'] = 'field_file_resource_value';
  $handler->display->display_options['relationships']['field_file_resource_value']['table'] = 'field_data_field_file_resource';
  $handler->display->display_options['relationships']['field_file_resource_value']['field'] = 'field_file_resource_value';
  $handler->display->display_options['relationships']['field_file_resource_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '3';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::_cals_importer_fix_oclc_numbers_batch' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Published status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: OCLC Number */
  $handler->display->display_options['fields']['field_oclc_number']['id'] = 'field_oclc_number';
  $handler->display->display_options['fields']['field_oclc_number']['table'] = 'field_data_field_oclc_number';
  $handler->display->display_options['fields']['field_oclc_number']['field'] = 'field_oclc_number';
  /* Field: Field: System Control Number */
  $handler->display->display_options['fields']['field_system_control_number']['id'] = 'field_system_control_number';
  $handler->display->display_options['fields']['field_system_control_number']['table'] = 'field_data_field_system_control_number';
  $handler->display->display_options['fields']['field_system_control_number']['field'] = 'field_system_control_number';
  $handler->display->display_options['fields']['field_system_control_number']['delta_offset'] = '0';
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: Content: Published status */
  $handler->display->display_options['sorts']['status']['id'] = 'status';
  $handler->display->display_options['sorts']['status']['table'] = 'node';
  $handler->display->display_options['sorts']['status']['field'] = 'status';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Content: Author(s) (field_dc_creator:delta) */
  $handler->display->display_options['sorts']['delta']['id'] = 'delta';
  $handler->display->display_options['sorts']['delta']['table'] = 'field_data_field_dc_creator';
  $handler->display->display_options['sorts']['delta']['field'] = 'delta';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'repository_item' => 'repository_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  /* Filter criterion: Content: XML String (field_xml_string) */
  $handler->display->display_options['filters']['field_xml_string_value']['id'] = 'field_xml_string_value';
  $handler->display->display_options['filters']['field_xml_string_value']['table'] = 'field_data_field_xml_string';
  $handler->display->display_options['filters']['field_xml_string_value']['field'] = 'field_xml_string_value';
  $handler->display->display_options['filters']['field_xml_string_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_xml_string_value']['group'] = 1;
  /* Filter criterion: Field: System Control Number (field_system_control_number) */
  $handler->display->display_options['filters']['field_system_control_number_value']['id'] = 'field_system_control_number_value';
  $handler->display->display_options['filters']['field_system_control_number_value']['table'] = 'field_data_field_system_control_number';
  $handler->display->display_options['filters']['field_system_control_number_value']['field'] = 'field_system_control_number_value';
  $handler->display->display_options['filters']['field_system_control_number_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_system_control_number_value']['value'] = 'OCoLC';
  $handler->display->display_options['filters']['field_system_control_number_value']['group'] = 1;
  $handler->display->display_options['path'] = 'admin/content/cals/repo-items/oclc-numbers';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Repository Items - OCLC numbers (sys control)';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-nnels-admin';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['title'] = 'Repo Items - All';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'management';

  /* Display: Repo Items - No Files */
  $handler = $view->new_display('page', 'Repo Items - No Files', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Repo Items - File Resource Collections';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
    5 => '5',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '< précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant >';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'nid' => 'nid',
    'status' => 'status',
    'title' => 'title',
    'body' => 'body',
    'field_daisy_2_file' => 'field_daisy_2_file',
    'field_uri' => 'field_uri',
    'nothing' => 'nothing',
    'delete_node' => 'delete_node',
    'edit_node' => 'edit_node',
    'nid_1' => 'nid_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_daisy_2_file' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_uri' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Description';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'Records below have an S3 path but no file attachments. Please run the Copy batch operation.';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: File Resource (field_file_resource) */
  $handler->display->display_options['relationships']['field_file_resource_value']['id'] = 'field_file_resource_value';
  $handler->display->display_options['relationships']['field_file_resource_value']['table'] = 'field_data_field_file_resource';
  $handler->display->display_options['relationships']['field_file_resource_value']['field'] = 'field_file_resource_value';
  $handler->display->display_options['relationships']['field_file_resource_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '3';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::_cals_importer_generate_marc_xml_856' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Generate 856 Strings',
    ),
    'action::_cals_run_batch_update_field_collection_s3_path' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Copy S3 paths -> Field Collections',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Published status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: NNELS 856 tag */
  $handler->display->display_options['fields']['field_nnels_856_tag']['id'] = 'field_nnels_856_tag';
  $handler->display->display_options['fields']['field_nnels_856_tag']['table'] = 'field_data_field_nnels_856_tag';
  $handler->display->display_options['fields']['field_nnels_856_tag']['field'] = 'field_nnels_856_tag';
  $handler->display->display_options['fields']['field_nnels_856_tag']['label'] = 'NNELS 856 tag?';
  /* Field: Field: S3 Path */
  $handler->display->display_options['fields']['field_s3_path']['id'] = 'field_s3_path';
  $handler->display->display_options['fields']['field_s3_path']['table'] = 'field_data_field_s3_path';
  $handler->display->display_options['fields']['field_s3_path']['field'] = 'field_s3_path';
  /* Field: Field: S3 File Upload */
  $handler->display->display_options['fields']['field_s3_file_upload']['id'] = 'field_s3_file_upload';
  $handler->display->display_options['fields']['field_s3_file_upload']['table'] = 'field_data_field_s3_file_upload';
  $handler->display->display_options['fields']['field_s3_file_upload']['field'] = 'field_s3_file_upload';
  $handler->display->display_options['fields']['field_s3_file_upload']['relationship'] = 'field_file_resource_value';
  $handler->display->display_options['fields']['field_s3_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s3_file_upload']['type'] = 'file_table';
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: Content: Published status */
  $handler->display->display_options['sorts']['status']['id'] = 'status';
  $handler->display->display_options['sorts']['status']['table'] = 'node';
  $handler->display->display_options['sorts']['status']['field'] = 'status';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Content: Author(s) (field_dc_creator:delta) */
  $handler->display->display_options['sorts']['delta']['id'] = 'delta';
  $handler->display->display_options['sorts']['delta']['table'] = 'field_data_field_dc_creator';
  $handler->display->display_options['sorts']['delta']['field'] = 'delta';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'repository_item' => 'repository_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  /* Filter criterion: Field: S3 Path (field_s3_path) */
  $handler->display->display_options['filters']['field_s3_path_value_1']['id'] = 'field_s3_path_value_1';
  $handler->display->display_options['filters']['field_s3_path_value_1']['table'] = 'field_data_field_s3_path';
  $handler->display->display_options['filters']['field_s3_path_value_1']['field'] = 'field_s3_path_value';
  $handler->display->display_options['filters']['field_s3_path_value_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_s3_path_value_1']['group'] = 1;
  $handler->display->display_options['filters']['field_s3_path_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_s3_path_value_1']['expose']['operator_id'] = 'field_s3_path_value_1_op';
  $handler->display->display_options['filters']['field_s3_path_value_1']['expose']['label'] = 'S3 Path';
  $handler->display->display_options['filters']['field_s3_path_value_1']['expose']['operator'] = 'field_s3_path_value_1_op';
  $handler->display->display_options['filters']['field_s3_path_value_1']['expose']['identifier'] = 'field_s3_path_value_1';
  $handler->display->display_options['filters']['field_s3_path_value_1']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: File Resource (field_file_resource) */
  $handler->display->display_options['filters']['field_file_resource_value']['id'] = 'field_file_resource_value';
  $handler->display->display_options['filters']['field_file_resource_value']['table'] = 'field_data_field_file_resource';
  $handler->display->display_options['filters']['field_file_resource_value']['field'] = 'field_file_resource_value';
  $handler->display->display_options['filters']['field_file_resource_value']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_file_resource_value']['group'] = 1;
  $handler->display->display_options['filters']['field_file_resource_value']['expose']['operator_id'] = 'field_file_resource_value_op';
  $handler->display->display_options['filters']['field_file_resource_value']['expose']['label'] = 'File Resource';
  $handler->display->display_options['filters']['field_file_resource_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_file_resource_value']['expose']['operator'] = 'field_file_resource_value_op';
  $handler->display->display_options['filters']['field_file_resource_value']['expose']['identifier'] = 'field_file_resource_value';
  $handler->display->display_options['filters']['field_file_resource_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Field: S3 Path (field_s3_path) */
  $handler->display->display_options['filters']['field_s3_path_value']['id'] = 'field_s3_path_value';
  $handler->display->display_options['filters']['field_s3_path_value']['table'] = 'field_data_field_s3_path';
  $handler->display->display_options['filters']['field_s3_path_value']['field'] = 'field_s3_path_value';
  $handler->display->display_options['filters']['field_s3_path_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_s3_path_value']['group'] = 1;
  $handler->display->display_options['filters']['field_s3_path_value']['expose']['operator_id'] = 'field_s3_path_value_op';
  $handler->display->display_options['filters']['field_s3_path_value']['expose']['label'] = 'S3 Path';
  $handler->display->display_options['filters']['field_s3_path_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_s3_path_value']['expose']['operator'] = 'field_s3_path_value_op';
  $handler->display->display_options['filters']['field_s3_path_value']['expose']['identifier'] = 'field_s3_path_value';
  $handler->display->display_options['filters']['field_s3_path_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 'All';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: Duplicate Managed File (field_duplicate_managed_file) */
  $handler->display->display_options['filters']['field_duplicate_managed_file_value']['id'] = 'field_duplicate_managed_file_value';
  $handler->display->display_options['filters']['field_duplicate_managed_file_value']['table'] = 'field_data_field_duplicate_managed_file';
  $handler->display->display_options['filters']['field_duplicate_managed_file_value']['field'] = 'field_duplicate_managed_file_value';
  $handler->display->display_options['filters']['field_duplicate_managed_file_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_duplicate_managed_file_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Field: System Control Number (field_system_control_number) */
  $handler->display->display_options['filters']['field_system_control_number_value']['id'] = 'field_system_control_number_value';
  $handler->display->display_options['filters']['field_system_control_number_value']['table'] = 'field_data_field_system_control_number';
  $handler->display->display_options['filters']['field_system_control_number_value']['field'] = 'field_system_control_number_value';
  $handler->display->display_options['filters']['field_system_control_number_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['operator_id'] = 'field_system_control_number_value_op';
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['label'] = 'System Control Number';
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['operator'] = 'field_system_control_number_value_op';
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['identifier'] = 'field_system_control_number_value';
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['path'] = 'admin/content/cals/repo-items/multi-files/null';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Repository Items - No Files';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-nnels-admin';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['title'] = 'Repo Items - All';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'management';
  $export['repository_items_with_field_collections'] = $view;

  $view = new view();
  $view->name = 'working_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'working-view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Repository Items';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    7 => '7',
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '< précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant >';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'counter' => 'counter',
    'nid' => 'nid',
    'title' => 'title',
    'field_dc_creator' => 'field_dc_creator',
    'field_s3_path' => 'field_s3_path',
    'field_system_control_number' => 'field_system_control_number',
    'field_access_restrictions' => 'field_access_restrictions',
    'status' => 'status',
    'created' => 'created',
    'uid' => 'uid',
    'edit_node' => 'edit_node',
    'field_bibid' => 'field_bibid',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'counter' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_dc_creator' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_s3_path' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_system_control_number' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_access_restrictions' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'uid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_bibid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  /* Relationship: Content: File Resource (field_file_resource) */
  $handler->display->display_options['relationships']['field_file_resource_value']['id'] = 'field_file_resource_value';
  $handler->display->display_options['relationships']['field_file_resource_value']['table'] = 'field_data_field_file_resource';
  $handler->display->display_options['relationships']['field_file_resource_value']['field'] = 'field_file_resource_value';
  $handler->display->display_options['relationships']['field_file_resource_value']['delta'] = '-1';
  /* Relationship: Content: Content author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::_cals_importer_update_licensed_access' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::_cals_importer_update_system_control_numbers' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '80';
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['empty'] = 'No title';
  /* Field: Field: S3 Path */
  $handler->display->display_options['fields']['field_s3_path']['id'] = 'field_s3_path';
  $handler->display->display_options['fields']['field_s3_path']['table'] = 'field_data_field_s3_path';
  $handler->display->display_options['fields']['field_s3_path']['field'] = 'field_s3_path';
  $handler->display->display_options['fields']['field_s3_path']['label'] = 'S3';
  $handler->display->display_options['fields']['field_s3_path']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_s3_path']['empty'] = 'Not yet linked.';
  $handler->display->display_options['fields']['field_s3_path']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_s3_path']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  $handler->display->display_options['fields']['field_s3_path']['delta_offset'] = '0';
  /* Field: Field: System Control Number */
  $handler->display->display_options['fields']['field_system_control_number']['id'] = 'field_system_control_number';
  $handler->display->display_options['fields']['field_system_control_number']['table'] = 'field_data_field_system_control_number';
  $handler->display->display_options['fields']['field_system_control_number']['field'] = 'field_system_control_number';
  $handler->display->display_options['fields']['field_system_control_number']['label'] = 'SysCtrl';
  $handler->display->display_options['fields']['field_system_control_number']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_system_control_number']['settings'] = array(
    'title_style' => '_none',
    'title_link' => '',
    'title_class' => '',
  );
  $handler->display->display_options['fields']['field_system_control_number']['delta_offset'] = '0';
  /* Field: Content: Access Restrictions */
  $handler->display->display_options['fields']['field_access_restrictions']['id'] = 'field_access_restrictions';
  $handler->display->display_options['fields']['field_access_restrictions']['table'] = 'field_data_field_access_restrictions';
  $handler->display->display_options['fields']['field_access_restrictions']['field'] = 'field_access_restrictions';
  $handler->display->display_options['fields']['field_access_restrictions']['label'] = 'Access';
  /* Field: Content: Published status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Pub';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Post date';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  /* Sort criterion: Field: System Control Number (field_system_control_number:format) */
  $handler->display->display_options['sorts']['field_system_control_number_format']['id'] = 'field_system_control_number_format';
  $handler->display->display_options['sorts']['field_system_control_number_format']['table'] = 'field_data_field_system_control_number';
  $handler->display->display_options['sorts']['field_system_control_number_format']['field'] = 'field_system_control_number_format';
  $handler->display->display_options['sorts']['field_system_control_number_format']['order'] = 'DESC';
  $handler->display->display_options['sorts']['field_system_control_number_format']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_system_control_number_format']['expose']['label'] = 'SysCtrl Format';
  /* Sort criterion: Field: System Control Number (field_system_control_number) */
  $handler->display->display_options['sorts']['field_system_control_number_value']['id'] = 'field_system_control_number_value';
  $handler->display->display_options['sorts']['field_system_control_number_value']['table'] = 'field_data_field_system_control_number';
  $handler->display->display_options['sorts']['field_system_control_number_value']['field'] = 'field_system_control_number_value';
  $handler->display->display_options['sorts']['field_system_control_number_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_system_control_number_value']['expose']['label'] = 'SysCtrl';
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  $handler->display->display_options['sorts']['nid']['order'] = 'DESC';
  $handler->display->display_options['sorts']['nid']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['nid']['expose']['label'] = 'Nid';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'repository_item' => 'repository_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Access Restrictions (field_access_restrictions) */
  $handler->display->display_options['filters']['field_access_restrictions_value']['id'] = 'field_access_restrictions_value';
  $handler->display->display_options['filters']['field_access_restrictions_value']['table'] = 'field_data_field_access_restrictions';
  $handler->display->display_options['filters']['field_access_restrictions_value']['field'] = 'field_access_restrictions_value';
  $handler->display->display_options['filters']['field_access_restrictions_value']['value'] = array(
    0 => '0',
    1 => '1',
  );
  $handler->display->display_options['filters']['field_access_restrictions_value']['group'] = 1;
  $handler->display->display_options['filters']['field_access_restrictions_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_access_restrictions_value']['expose']['operator_id'] = 'field_access_restrictions_value_op';
  $handler->display->display_options['filters']['field_access_restrictions_value']['expose']['label'] = 'Access Restrictions';
  $handler->display->display_options['filters']['field_access_restrictions_value']['expose']['operator'] = 'field_access_restrictions_value_op';
  $handler->display->display_options['filters']['field_access_restrictions_value']['expose']['identifier'] = 'field_access_restrictions_value';
  $handler->display->display_options['filters']['field_access_restrictions_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_access_restrictions_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_access_restrictions_value']['expose']['remember_roles'] = array(
    2 => '2',
    5 => '5',
    3 => '3',
    1 => 0,
    6 => 0,
    7 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Recherche';
  $handler->display->display_options['filters']['title']['expose']['description'] = 'Search for Title string';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  /* Filter criterion: Field: System Control Number (field_system_control_number) */
  $handler->display->display_options['filters']['field_system_control_number_value']['id'] = 'field_system_control_number_value';
  $handler->display->display_options['filters']['field_system_control_number_value']['table'] = 'field_data_field_system_control_number';
  $handler->display->display_options['filters']['field_system_control_number_value']['field'] = 'field_system_control_number_value';
  $handler->display->display_options['filters']['field_system_control_number_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_system_control_number_value']['group'] = 1;
  $handler->display->display_options['filters']['field_system_control_number_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['operator_id'] = 'field_system_control_number_value_op';
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['label'] = 'System Control Number';
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['operator'] = 'field_system_control_number_value_op';
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['identifier'] = 'field_system_control_number_value';
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Field: S3 Path (field_s3_path) */
  $handler->display->display_options['filters']['field_s3_path_value']['id'] = 'field_s3_path_value';
  $handler->display->display_options['filters']['field_s3_path_value']['table'] = 'field_data_field_s3_path';
  $handler->display->display_options['filters']['field_s3_path_value']['field'] = 'field_s3_path_value';
  $handler->display->display_options['filters']['field_s3_path_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_s3_path_value']['expose']['operator_id'] = 'field_s3_path_value_op';
  $handler->display->display_options['filters']['field_s3_path_value']['expose']['label'] = 'S3 Path (field_s3_path)';
  $handler->display->display_options['filters']['field_s3_path_value']['expose']['operator'] = 'field_s3_path_value_op';
  $handler->display->display_options['filters']['field_s3_path_value']['expose']['identifier'] = 'field_s3_path_value';
  $handler->display->display_options['filters']['field_s3_path_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_s3_path_value']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_s3_path_value']['group_info']['label'] = 'S3 Path';
  $handler->display->display_options['filters']['field_s3_path_value']['group_info']['identifier'] = 'field_s3_path_value';
  $handler->display->display_options['filters']['field_s3_path_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Not Empty',
      'operator' => 'not empty',
      'value' => 'not null',
    ),
    2 => array(
      'title' => 'Empty',
      'operator' => 'empty',
      'value' => 'null',
    ),
  );
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 'All';
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
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

  /* Display: Repository Items */
  $handler = $view->new_display('page', 'Repository Items', 'page_1');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'counter' => 'counter',
    'nid' => 'nid',
    'title' => 'title',
    'field_dc_creator' => 'field_dc_creator',
    'field_s3_path' => 'field_s3_path',
    'field_system_control_number' => 'field_system_control_number',
    'field_access_restrictions' => 'field_access_restrictions',
    'status' => 'status',
    'created' => 'created',
    'uid' => 'uid',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'counter' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_dc_creator' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_s3_path' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_system_control_number' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_access_restrictions' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'uid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = FALSE;
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::_cals_importer_update_licensed_access' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::_cals_importer_update_system_control_numbers' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'repository_item::field_access_restrictions' => 'repository_item::field_access_restrictions',
          'repository_item::title_field' => 'repository_item::title_field',
          'repository_item::field_title_alternate' => 'repository_item::field_title_alternate',
          'repository_item::field_dc_type' => 'repository_item::field_dc_type',
          'repository_item::field_date' => 'repository_item::field_date',
          'repository_item::field_literary_format' => 'repository_item::field_literary_format',
          'repository_item::field_genre' => 'repository_item::field_genre',
          'repository_item::field_isbn' => 'repository_item::field_isbn',
          'repository_item::field_oclc_number' => 'repository_item::field_oclc_number',
          'repository_item::field_dc_contributor' => 'repository_item::field_dc_contributor',
          'repository_item::field_dc_creator' => 'repository_item::field_dc_creator',
          'repository_item::field_dc_relation' => 'repository_item::field_dc_relation',
          'repository_item::field_iso_language' => 'repository_item::field_iso_language',
          'repository_item::field_dc_description' => 'repository_item::field_dc_description',
          'repository_item::field_dc_coverage' => 'repository_item::field_dc_coverage',
          'repository_item::field_publisher' => 'repository_item::field_publisher',
          'repository_item::field_source' => 'repository_item::field_source',
          'repository_item::field_audience' => 'repository_item::field_audience',
          'repository_item::body' => 'repository_item::body',
          'repository_item::field_system_control_number' => 'repository_item::field_system_control_number',
          'repository_item::field_uri' => 'repository_item::field_uri',
          'repository_item::field_access_rights' => 'repository_item::field_access_rights',
          'repository_item::field_rights_holder' => 'repository_item::field_rights_holder',
          'repository_item::field_s3_path' => 'repository_item::field_s3_path',
          'repository_item::field_bibid' => 'repository_item::field_bibid',
          'repository_item::field_file_resource' => 'repository_item::field_file_resource',
          'repository_item::field_subject' => 'repository_item::field_subject',
          'repository_item::field_completion_date' => 'repository_item::field_completion_date',
          'repository_item::field_uniform_title' => 'repository_item::field_uniform_title',
        ),
      ),
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '80';
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['empty'] = 'No title';
  /* Field: Content: Author(s) */
  $handler->display->display_options['fields']['field_dc_creator']['id'] = 'field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['table'] = 'field_data_field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['field'] = 'field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['delta_offset'] = '0';
  /* Field: Field: S3 Path */
  $handler->display->display_options['fields']['field_s3_path']['id'] = 'field_s3_path';
  $handler->display->display_options['fields']['field_s3_path']['table'] = 'field_data_field_s3_path';
  $handler->display->display_options['fields']['field_s3_path']['field'] = 'field_s3_path';
  $handler->display->display_options['fields']['field_s3_path']['label'] = 'S3';
  $handler->display->display_options['fields']['field_s3_path']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_s3_path']['empty'] = 'Not yet linked.';
  $handler->display->display_options['fields']['field_s3_path']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_s3_path']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  $handler->display->display_options['fields']['field_s3_path']['delta_offset'] = '0';
  /* Field: Field: System Control Number */
  $handler->display->display_options['fields']['field_system_control_number']['id'] = 'field_system_control_number';
  $handler->display->display_options['fields']['field_system_control_number']['table'] = 'field_data_field_system_control_number';
  $handler->display->display_options['fields']['field_system_control_number']['field'] = 'field_system_control_number';
  $handler->display->display_options['fields']['field_system_control_number']['label'] = 'SysCtrl';
  $handler->display->display_options['fields']['field_system_control_number']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_system_control_number']['settings'] = array(
    'title_style' => '_none',
    'title_link' => '',
    'title_class' => '',
  );
  $handler->display->display_options['fields']['field_system_control_number']['delta_offset'] = '0';
  /* Field: Content: Access Restrictions */
  $handler->display->display_options['fields']['field_access_restrictions']['id'] = 'field_access_restrictions';
  $handler->display->display_options['fields']['field_access_restrictions']['table'] = 'field_data_field_access_restrictions';
  $handler->display->display_options['fields']['field_access_restrictions']['field'] = 'field_access_restrictions';
  $handler->display->display_options['fields']['field_access_restrictions']['label'] = 'Access';
  /* Field: Content: Published status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Pub';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = 'User';
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Post date';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  /* Sort criterion: Content: Author(s) (field_dc_creator) */
  $handler->display->display_options['sorts']['field_dc_creator_value']['id'] = 'field_dc_creator_value';
  $handler->display->display_options['sorts']['field_dc_creator_value']['table'] = 'field_data_field_dc_creator';
  $handler->display->display_options['sorts']['field_dc_creator_value']['field'] = 'field_dc_creator_value';
  $handler->display->display_options['sorts']['field_dc_creator_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_dc_creator_value']['expose']['label'] = 'Creator';
  /* Sort criterion: Field: System Control Number (field_system_control_number) */
  $handler->display->display_options['sorts']['field_system_control_number_value']['id'] = 'field_system_control_number_value';
  $handler->display->display_options['sorts']['field_system_control_number_value']['table'] = 'field_data_field_system_control_number';
  $handler->display->display_options['sorts']['field_system_control_number_value']['field'] = 'field_system_control_number_value';
  $handler->display->display_options['sorts']['field_system_control_number_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_system_control_number_value']['expose']['label'] = 'SysCtrl';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'repository_item' => 'repository_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 'All';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: Access Restrictions (field_access_restrictions) */
  $handler->display->display_options['filters']['field_access_restrictions_value']['id'] = 'field_access_restrictions_value';
  $handler->display->display_options['filters']['field_access_restrictions_value']['table'] = 'field_data_field_access_restrictions';
  $handler->display->display_options['filters']['field_access_restrictions_value']['field'] = 'field_access_restrictions_value';
  $handler->display->display_options['filters']['field_access_restrictions_value']['value'] = array(
    0 => '0',
    1 => '1',
  );
  $handler->display->display_options['filters']['field_access_restrictions_value']['group'] = 1;
  $handler->display->display_options['filters']['field_access_restrictions_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_access_restrictions_value']['expose']['operator_id'] = 'field_access_restrictions_value_op';
  $handler->display->display_options['filters']['field_access_restrictions_value']['expose']['label'] = 'Access Restrictions';
  $handler->display->display_options['filters']['field_access_restrictions_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_access_restrictions_value']['expose']['operator'] = 'field_access_restrictions_value_op';
  $handler->display->display_options['filters']['field_access_restrictions_value']['expose']['identifier'] = 'field_access_restrictions_value';
  $handler->display->display_options['filters']['field_access_restrictions_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_access_restrictions_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_access_restrictions_value']['expose']['remember_roles'] = array(
    2 => '2',
    5 => '5',
    3 => '3',
    1 => 0,
    6 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    11 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Recherche';
  $handler->display->display_options['filters']['title']['expose']['description'] = 'Search for Title string';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: Author(s) (field_dc_creator) */
  $handler->display->display_options['filters']['field_dc_creator_value']['id'] = 'field_dc_creator_value';
  $handler->display->display_options['filters']['field_dc_creator_value']['table'] = 'field_data_field_dc_creator';
  $handler->display->display_options['filters']['field_dc_creator_value']['field'] = 'field_dc_creator_value';
  $handler->display->display_options['filters']['field_dc_creator_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_dc_creator_value']['group'] = 1;
  $handler->display->display_options['filters']['field_dc_creator_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_dc_creator_value']['expose']['operator_id'] = 'field_dc_creator_value_op';
  $handler->display->display_options['filters']['field_dc_creator_value']['expose']['label'] = 'Creator';
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
    8 => 0,
    11 => 0,
  );
  /* Filter criterion: Field: System Control Number (field_system_control_number) */
  $handler->display->display_options['filters']['field_system_control_number_value']['id'] = 'field_system_control_number_value';
  $handler->display->display_options['filters']['field_system_control_number_value']['table'] = 'field_data_field_system_control_number';
  $handler->display->display_options['filters']['field_system_control_number_value']['field'] = 'field_system_control_number_value';
  $handler->display->display_options['filters']['field_system_control_number_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_system_control_number_value']['group'] = 1;
  $handler->display->display_options['filters']['field_system_control_number_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['operator_id'] = 'field_system_control_number_value_op';
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['label'] = 'System Control Number';
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['operator'] = 'field_system_control_number_value_op';
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['identifier'] = 'field_system_control_number_value';
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Field: S3 Path (field_s3_path) */
  $handler->display->display_options['filters']['field_s3_path_value']['id'] = 'field_s3_path_value';
  $handler->display->display_options['filters']['field_s3_path_value']['table'] = 'field_data_field_s3_path';
  $handler->display->display_options['filters']['field_s3_path_value']['field'] = 'field_s3_path_value';
  $handler->display->display_options['filters']['field_s3_path_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_s3_path_value']['group'] = 1;
  $handler->display->display_options['filters']['field_s3_path_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_s3_path_value']['expose']['operator_id'] = 'field_s3_path_value_op';
  $handler->display->display_options['filters']['field_s3_path_value']['expose']['label'] = 'S3 Path';
  $handler->display->display_options['filters']['field_s3_path_value']['expose']['operator'] = 'field_s3_path_value_op';
  $handler->display->display_options['filters']['field_s3_path_value']['expose']['identifier'] = 'field_s3_path_value';
  $handler->display->display_options['filters']['field_s3_path_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Field: File Format (field_file_format) */
  $handler->display->display_options['filters']['field_file_format_value']['id'] = 'field_file_format_value';
  $handler->display->display_options['filters']['field_file_format_value']['table'] = 'field_data_field_file_format';
  $handler->display->display_options['filters']['field_file_format_value']['field'] = 'field_file_format_value';
  $handler->display->display_options['filters']['field_file_format_value']['relationship'] = 'field_file_resource_value';
  $handler->display->display_options['filters']['field_file_format_value']['group'] = 1;
  $handler->display->display_options['filters']['field_file_format_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_file_format_value']['expose']['operator_id'] = 'field_file_format_value_op';
  $handler->display->display_options['filters']['field_file_format_value']['expose']['label'] = 'File Format';
  $handler->display->display_options['filters']['field_file_format_value']['expose']['operator'] = 'field_file_format_value_op';
  $handler->display->display_options['filters']['field_file_format_value']['expose']['identifier'] = 'field_file_format_value';
  $handler->display->display_options['filters']['field_file_format_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_file_format_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: Language (Item) (field_iso_language) */
  $handler->display->display_options['filters']['field_iso_language_value']['id'] = 'field_iso_language_value';
  $handler->display->display_options['filters']['field_iso_language_value']['table'] = 'field_data_field_iso_language';
  $handler->display->display_options['filters']['field_iso_language_value']['field'] = 'field_iso_language_value';
  $handler->display->display_options['filters']['field_iso_language_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_iso_language_value']['expose']['operator_id'] = 'field_iso_language_value_op';
  $handler->display->display_options['filters']['field_iso_language_value']['expose']['label'] = 'Language';
  $handler->display->display_options['filters']['field_iso_language_value']['expose']['operator'] = 'field_iso_language_value_op';
  $handler->display->display_options['filters']['field_iso_language_value']['expose']['identifier'] = 'field_iso_language_value';
  $handler->display->display_options['filters']['field_iso_language_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['path'] = 'admin/content/cals/streamlined-repo';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '80';
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['empty'] = 'No title';
  /* Field: Content: Author(s) */
  $handler->display->display_options['fields']['field_dc_creator']['id'] = 'field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['table'] = 'field_data_field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['field'] = 'field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['delta_offset'] = '0';
  /* Field: Field: S3 Path */
  $handler->display->display_options['fields']['field_s3_path']['id'] = 'field_s3_path';
  $handler->display->display_options['fields']['field_s3_path']['table'] = 'field_data_field_s3_path';
  $handler->display->display_options['fields']['field_s3_path']['field'] = 'field_s3_path';
  $handler->display->display_options['fields']['field_s3_path']['label'] = 'S3';
  $handler->display->display_options['fields']['field_s3_path']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_s3_path']['empty'] = 'Not yet linked.';
  $handler->display->display_options['fields']['field_s3_path']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_s3_path']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  $handler->display->display_options['fields']['field_s3_path']['delta_offset'] = '0';
  /* Field: Field: System Control Number */
  $handler->display->display_options['fields']['field_system_control_number']['id'] = 'field_system_control_number';
  $handler->display->display_options['fields']['field_system_control_number']['table'] = 'field_data_field_system_control_number';
  $handler->display->display_options['fields']['field_system_control_number']['field'] = 'field_system_control_number';
  $handler->display->display_options['fields']['field_system_control_number']['label'] = 'SysCtrl';
  $handler->display->display_options['fields']['field_system_control_number']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_system_control_number']['settings'] = array(
    'title_style' => '_none',
    'title_link' => '',
    'title_class' => '',
  );
  $handler->display->display_options['fields']['field_system_control_number']['delta_offset'] = '0';
  /* Field: Content: Access Restrictions */
  $handler->display->display_options['fields']['field_access_restrictions']['id'] = 'field_access_restrictions';
  $handler->display->display_options['fields']['field_access_restrictions']['table'] = 'field_data_field_access_restrictions';
  $handler->display->display_options['fields']['field_access_restrictions']['field'] = 'field_access_restrictions';
  $handler->display->display_options['fields']['field_access_restrictions']['label'] = 'Access';
  /* Field: Content: Published status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Pub';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = 'User';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'repository_item' => 'repository_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Access Restrictions (field_access_restrictions) */
  $handler->display->display_options['filters']['field_access_restrictions_value']['id'] = 'field_access_restrictions_value';
  $handler->display->display_options['filters']['field_access_restrictions_value']['table'] = 'field_data_field_access_restrictions';
  $handler->display->display_options['filters']['field_access_restrictions_value']['field'] = 'field_access_restrictions_value';
  $handler->display->display_options['filters']['field_access_restrictions_value']['value'] = array(
    0 => '0',
    1 => '1',
  );
  $handler->display->display_options['filters']['field_access_restrictions_value']['group'] = 1;
  $handler->display->display_options['filters']['field_access_restrictions_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_access_restrictions_value']['expose']['operator_id'] = 'field_access_restrictions_value_op';
  $handler->display->display_options['filters']['field_access_restrictions_value']['expose']['label'] = 'Access Restrictions';
  $handler->display->display_options['filters']['field_access_restrictions_value']['expose']['operator'] = 'field_access_restrictions_value_op';
  $handler->display->display_options['filters']['field_access_restrictions_value']['expose']['identifier'] = 'field_access_restrictions_value';
  $handler->display->display_options['filters']['field_access_restrictions_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_access_restrictions_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_access_restrictions_value']['expose']['remember_roles'] = array(
    2 => '2',
    5 => '5',
    3 => '3',
    1 => 0,
    6 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    11 => 0,
  );
  $handler->display->display_options['filters']['field_access_restrictions_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Recherche';
  $handler->display->display_options['filters']['title']['expose']['description'] = 'Search for Title string';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Author(s) (field_dc_creator) */
  $handler->display->display_options['filters']['field_dc_creator_value']['id'] = 'field_dc_creator_value';
  $handler->display->display_options['filters']['field_dc_creator_value']['table'] = 'field_data_field_dc_creator';
  $handler->display->display_options['filters']['field_dc_creator_value']['field'] = 'field_dc_creator_value';
  $handler->display->display_options['filters']['field_dc_creator_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_dc_creator_value']['group'] = 1;
  $handler->display->display_options['filters']['field_dc_creator_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_dc_creator_value']['expose']['operator_id'] = 'field_dc_creator_value_op';
  $handler->display->display_options['filters']['field_dc_creator_value']['expose']['label'] = 'Creator';
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
    8 => 0,
    11 => 0,
  );
  /* Filter criterion: Field: System Control Number (field_system_control_number) */
  $handler->display->display_options['filters']['field_system_control_number_value']['id'] = 'field_system_control_number_value';
  $handler->display->display_options['filters']['field_system_control_number_value']['table'] = 'field_data_field_system_control_number';
  $handler->display->display_options['filters']['field_system_control_number_value']['field'] = 'field_system_control_number_value';
  $handler->display->display_options['filters']['field_system_control_number_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_system_control_number_value']['group'] = 1;
  $handler->display->display_options['filters']['field_system_control_number_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['operator_id'] = 'field_system_control_number_value_op';
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['label'] = 'SysCtrl=';
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['operator'] = 'field_system_control_number_value_op';
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['identifier'] = 'field_system_control_number_value';
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  /* Filter criterion: Field: File Format (field_file_format) */
  $handler->display->display_options['filters']['field_file_format_value']['id'] = 'field_file_format_value';
  $handler->display->display_options['filters']['field_file_format_value']['table'] = 'field_data_field_file_format';
  $handler->display->display_options['filters']['field_file_format_value']['field'] = 'field_file_format_value';
  $handler->display->display_options['filters']['field_file_format_value']['relationship'] = 'field_file_resource_value';
  $handler->display->display_options['filters']['field_file_format_value']['group'] = 1;
  $handler->display->display_options['filters']['field_file_format_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_file_format_value']['expose']['operator_id'] = 'field_file_format_value_op';
  $handler->display->display_options['filters']['field_file_format_value']['expose']['label'] = 'File Format';
  $handler->display->display_options['filters']['field_file_format_value']['expose']['operator'] = 'field_file_format_value_op';
  $handler->display->display_options['filters']['field_file_format_value']['expose']['identifier'] = 'field_file_format_value';
  $handler->display->display_options['filters']['field_file_format_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_file_format_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_file_format_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Publisher (obsolete) (field_publisher) */
  $handler->display->display_options['filters']['field_publisher_value']['id'] = 'field_publisher_value';
  $handler->display->display_options['filters']['field_publisher_value']['table'] = 'field_data_field_publisher';
  $handler->display->display_options['filters']['field_publisher_value']['field'] = 'field_publisher_value';
  $handler->display->display_options['filters']['field_publisher_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_publisher_value']['group'] = 1;
  $handler->display->display_options['filters']['field_publisher_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_publisher_value']['expose']['operator_id'] = 'field_publisher_value_op';
  $handler->display->display_options['filters']['field_publisher_value']['expose']['label'] = 'Publisher';
  $handler->display->display_options['filters']['field_publisher_value']['expose']['operator'] = 'field_publisher_value_op';
  $handler->display->display_options['filters']['field_publisher_value']['expose']['identifier'] = 'field_publisher_value';
  $handler->display->display_options['filters']['field_publisher_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['path'] = 'admin/content/cals/streamlined-repo/export';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'page_2' => 0,
    'page_3' => 0,
    'page_4' => 0,
  );

  /* Display: Repos Items - Contributors list */
  $handler = $view->new_display('page', 'Repos Items - Contributors list', 'page_2');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'title' => 'title',
    'field_dc_creator' => 'field_dc_creator',
    'field_system_control_number' => 'field_system_control_number',
    'field_access_restrictions' => 'field_access_restrictions',
    'status' => 'status',
    'field_xml_string' => 'field_xml_string',
    'created' => 'created',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['class'] = '';
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_dc_creator' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_system_control_number' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_access_restrictions' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_xml_string' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '80';
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['empty'] = 'No title';
  /* Field: Content: Author(s) */
  $handler->display->display_options['fields']['field_dc_creator']['id'] = 'field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['table'] = 'field_data_field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['field'] = 'field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['delta_offset'] = '0';
  /* Field: Field: System Control Number */
  $handler->display->display_options['fields']['field_system_control_number']['id'] = 'field_system_control_number';
  $handler->display->display_options['fields']['field_system_control_number']['table'] = 'field_data_field_system_control_number';
  $handler->display->display_options['fields']['field_system_control_number']['field'] = 'field_system_control_number';
  $handler->display->display_options['fields']['field_system_control_number']['label'] = 'SysCtrl';
  $handler->display->display_options['fields']['field_system_control_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_system_control_number']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_system_control_number']['settings'] = array(
    'title_style' => '_none',
    'title_link' => '',
    'title_class' => '',
  );
  $handler->display->display_options['fields']['field_system_control_number']['delta_offset'] = '0';
  /* Field: Content: Access Restrictions */
  $handler->display->display_options['fields']['field_access_restrictions']['id'] = 'field_access_restrictions';
  $handler->display->display_options['fields']['field_access_restrictions']['table'] = 'field_data_field_access_restrictions';
  $handler->display->display_options['fields']['field_access_restrictions']['field'] = 'field_access_restrictions';
  $handler->display->display_options['fields']['field_access_restrictions']['label'] = 'Access';
  /* Field: Content: Published status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Pub';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: XML String */
  $handler->display->display_options['fields']['field_xml_string']['id'] = 'field_xml_string';
  $handler->display->display_options['fields']['field_xml_string']['table'] = 'field_data_field_xml_string';
  $handler->display->display_options['fields']['field_xml_string']['field'] = 'field_xml_string';
  $handler->display->display_options['fields']['field_xml_string']['exclude'] = TRUE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['timezone'] = 'UTC';
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Post date';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'repository_item' => 'repository_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Access Restrictions (field_access_restrictions) */
  $handler->display->display_options['filters']['field_access_restrictions_value']['id'] = 'field_access_restrictions_value';
  $handler->display->display_options['filters']['field_access_restrictions_value']['table'] = 'field_data_field_access_restrictions';
  $handler->display->display_options['filters']['field_access_restrictions_value']['field'] = 'field_access_restrictions_value';
  $handler->display->display_options['filters']['field_access_restrictions_value']['value'] = array(
    0 => '0',
    1 => '1',
  );
  $handler->display->display_options['filters']['field_access_restrictions_value']['group'] = 1;
  $handler->display->display_options['filters']['field_access_restrictions_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_access_restrictions_value']['expose']['operator_id'] = 'field_access_restrictions_value_op';
  $handler->display->display_options['filters']['field_access_restrictions_value']['expose']['label'] = 'Access Restrictions';
  $handler->display->display_options['filters']['field_access_restrictions_value']['expose']['operator'] = 'field_access_restrictions_value_op';
  $handler->display->display_options['filters']['field_access_restrictions_value']['expose']['identifier'] = 'field_access_restrictions_value';
  $handler->display->display_options['filters']['field_access_restrictions_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_access_restrictions_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_access_restrictions_value']['expose']['remember_roles'] = array(
    2 => '2',
    5 => '5',
    3 => '3',
    1 => 0,
    6 => 0,
    7 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Recherche';
  $handler->display->display_options['filters']['title']['expose']['description'] = 'Search for Title string';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  /* Filter criterion: Field: System Control Number (field_system_control_number) */
  $handler->display->display_options['filters']['field_system_control_number_value']['id'] = 'field_system_control_number_value';
  $handler->display->display_options['filters']['field_system_control_number_value']['table'] = 'field_data_field_system_control_number';
  $handler->display->display_options['filters']['field_system_control_number_value']['field'] = 'field_system_control_number_value';
  $handler->display->display_options['filters']['field_system_control_number_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_system_control_number_value']['group'] = 1;
  $handler->display->display_options['filters']['field_system_control_number_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['operator_id'] = 'field_system_control_number_value_op';
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['label'] = 'System Control Number';
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['operator'] = 'field_system_control_number_value_op';
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['identifier'] = 'field_system_control_number_value';
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: Author(s) (field_dc_creator) */
  $handler->display->display_options['filters']['field_dc_creator_value']['id'] = 'field_dc_creator_value';
  $handler->display->display_options['filters']['field_dc_creator_value']['table'] = 'field_data_field_dc_creator';
  $handler->display->display_options['filters']['field_dc_creator_value']['field'] = 'field_dc_creator_value';
  $handler->display->display_options['filters']['field_dc_creator_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_dc_creator_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_dc_creator_value']['expose']['operator_id'] = 'field_dc_creator_value_op';
  $handler->display->display_options['filters']['field_dc_creator_value']['expose']['label'] = 'Creator';
  $handler->display->display_options['filters']['field_dc_creator_value']['expose']['use_operator'] = TRUE;
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
    8 => 0,
    11 => 0,
  );
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 'All';
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['path'] = 'admin/content/cals/repo-items/contributors-list';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Repo Items - Contributors List';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-nnels-admin';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Stats */
  $handler = $view->new_display('page', 'Stats', 'page_3');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::pathauto_node_update_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '#';
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '80';
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['empty'] = 'No title';
  /* Field: Content: Access Restrictions */
  $handler->display->display_options['fields']['field_access_restrictions']['id'] = 'field_access_restrictions';
  $handler->display->display_options['fields']['field_access_restrictions']['table'] = 'field_data_field_access_restrictions';
  $handler->display->display_options['fields']['field_access_restrictions']['field'] = 'field_access_restrictions';
  $handler->display->display_options['fields']['field_access_restrictions']['label'] = 'Access';
  /* Field: Content: Published status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Pub';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['timezone'] = 'UTC';
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  $handler->display->display_options['sorts']['nid']['order'] = 'DESC';
  $handler->display->display_options['sorts']['nid']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['nid']['expose']['label'] = 'Nid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'repository_item' => 'repository_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 'All';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
    8 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Recherche';
  $handler->display->display_options['filters']['title']['expose']['description'] = 'Search for Title string';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'admin/content/cals/number-of-titles';

  /* Display: Repo-Items subset */
  $handler = $view->new_display('page', 'Repo-Items subset', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Repo-Items subset';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '< précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant >';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'nid' => 'nid',
    'title' => 'title',
    'field_dc_creator' => 'field_dc_creator',
    'field_publisher' => 'field_publisher',
    'field_s3_path' => 'field_s3_path',
    'field_system_control_number' => 'field_system_control_number',
    'field_access_restrictions' => 'field_access_restrictions',
    'status' => 'status',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'field_access_restrictions';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'desc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_dc_creator' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_publisher' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_s3_path' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_system_control_number' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_access_restrictions' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = FALSE;
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: File Resource (field_file_resource) */
  $handler->display->display_options['relationships']['field_file_resource_value']['id'] = 'field_file_resource_value';
  $handler->display->display_options['relationships']['field_file_resource_value']['table'] = 'field_data_field_file_resource';
  $handler->display->display_options['relationships']['field_file_resource_value']['field'] = 'field_file_resource_value';
  $handler->display->display_options['relationships']['field_file_resource_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::_cals_importer_update_licensed_access' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::_cals_importer_update_system_control_numbers' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '80';
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['empty'] = 'No title';
  /* Field: Content: Author(s) */
  $handler->display->display_options['fields']['field_dc_creator']['id'] = 'field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['table'] = 'field_data_field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['field'] = 'field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['delta_offset'] = '0';
  /* Field: Content: Publisher (obsolete) */
  $handler->display->display_options['fields']['field_publisher']['id'] = 'field_publisher';
  $handler->display->display_options['fields']['field_publisher']['table'] = 'field_data_field_publisher';
  $handler->display->display_options['fields']['field_publisher']['field'] = 'field_publisher';
  $handler->display->display_options['fields']['field_publisher']['delta_offset'] = '0';
  /* Field: Field: S3 Path */
  $handler->display->display_options['fields']['field_s3_path']['id'] = 'field_s3_path';
  $handler->display->display_options['fields']['field_s3_path']['table'] = 'field_data_field_s3_path';
  $handler->display->display_options['fields']['field_s3_path']['field'] = 'field_s3_path';
  $handler->display->display_options['fields']['field_s3_path']['label'] = 'S3';
  $handler->display->display_options['fields']['field_s3_path']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_s3_path']['empty'] = 'Not yet linked.';
  $handler->display->display_options['fields']['field_s3_path']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_s3_path']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  $handler->display->display_options['fields']['field_s3_path']['delta_offset'] = '0';
  /* Field: Field: System Control Number */
  $handler->display->display_options['fields']['field_system_control_number']['id'] = 'field_system_control_number';
  $handler->display->display_options['fields']['field_system_control_number']['table'] = 'field_data_field_system_control_number';
  $handler->display->display_options['fields']['field_system_control_number']['field'] = 'field_system_control_number';
  $handler->display->display_options['fields']['field_system_control_number']['label'] = 'SysCtrl';
  $handler->display->display_options['fields']['field_system_control_number']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_system_control_number']['settings'] = array(
    'title_style' => '_none',
    'title_link' => '',
    'title_class' => '',
  );
  $handler->display->display_options['fields']['field_system_control_number']['delta_offset'] = '0';
  /* Field: Content: Access Restrictions */
  $handler->display->display_options['fields']['field_access_restrictions']['id'] = 'field_access_restrictions';
  $handler->display->display_options['fields']['field_access_restrictions']['table'] = 'field_data_field_access_restrictions';
  $handler->display->display_options['fields']['field_access_restrictions']['field'] = 'field_access_restrictions';
  $handler->display->display_options['fields']['field_access_restrictions']['label'] = 'Access';
  /* Field: Content: Published status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Pub';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Author(s) (field_dc_creator) */
  $handler->display->display_options['sorts']['field_dc_creator_value']['id'] = 'field_dc_creator_value';
  $handler->display->display_options['sorts']['field_dc_creator_value']['table'] = 'field_data_field_dc_creator';
  $handler->display->display_options['sorts']['field_dc_creator_value']['field'] = 'field_dc_creator_value';
  $handler->display->display_options['sorts']['field_dc_creator_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_dc_creator_value']['expose']['label'] = 'Creator';
  /* Sort criterion: Content: Title (title_field) */
  $handler->display->display_options['sorts']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['sorts']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['sorts']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['sorts']['title_field_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title_field_value']['expose']['label'] = 'Title';
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  $handler->display->display_options['sorts']['nid']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['nid']['expose']['label'] = 'Nid';
  /* Sort criterion: Field: System Control Number (field_system_control_number) */
  $handler->display->display_options['sorts']['field_system_control_number_value']['id'] = 'field_system_control_number_value';
  $handler->display->display_options['sorts']['field_system_control_number_value']['table'] = 'field_data_field_system_control_number';
  $handler->display->display_options['sorts']['field_system_control_number_value']['field'] = 'field_system_control_number_value';
  $handler->display->display_options['sorts']['field_system_control_number_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_system_control_number_value']['expose']['label'] = 'SysCtrl';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Post date';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'repository_item' => 'repository_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Access Restrictions (field_access_restrictions) */
  $handler->display->display_options['filters']['field_access_restrictions_value']['id'] = 'field_access_restrictions_value';
  $handler->display->display_options['filters']['field_access_restrictions_value']['table'] = 'field_data_field_access_restrictions';
  $handler->display->display_options['filters']['field_access_restrictions_value']['field'] = 'field_access_restrictions_value';
  $handler->display->display_options['filters']['field_access_restrictions_value']['value'] = array(
    0 => '0',
    1 => '1',
  );
  $handler->display->display_options['filters']['field_access_restrictions_value']['group'] = 1;
  $handler->display->display_options['filters']['field_access_restrictions_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_access_restrictions_value']['expose']['operator_id'] = 'field_access_restrictions_value_op';
  $handler->display->display_options['filters']['field_access_restrictions_value']['expose']['label'] = 'Access Restrictions';
  $handler->display->display_options['filters']['field_access_restrictions_value']['expose']['operator'] = 'field_access_restrictions_value_op';
  $handler->display->display_options['filters']['field_access_restrictions_value']['expose']['identifier'] = 'field_access_restrictions_value';
  $handler->display->display_options['filters']['field_access_restrictions_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_access_restrictions_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_access_restrictions_value']['expose']['remember_roles'] = array(
    2 => '2',
    5 => '5',
    3 => '3',
    1 => 0,
    6 => 0,
    7 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Recherche';
  $handler->display->display_options['filters']['title']['expose']['description'] = 'Search for Title string';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['title']['group_info']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['group_info']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['title']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  /* Filter criterion: Content: Author(s) (field_dc_creator) */
  $handler->display->display_options['filters']['field_dc_creator_value']['id'] = 'field_dc_creator_value';
  $handler->display->display_options['filters']['field_dc_creator_value']['table'] = 'field_data_field_dc_creator';
  $handler->display->display_options['filters']['field_dc_creator_value']['field'] = 'field_dc_creator_value';
  $handler->display->display_options['filters']['field_dc_creator_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_dc_creator_value']['group'] = 1;
  $handler->display->display_options['filters']['field_dc_creator_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_dc_creator_value']['expose']['operator_id'] = 'field_dc_creator_value_op';
  $handler->display->display_options['filters']['field_dc_creator_value']['expose']['label'] = 'Search Creator';
  $handler->display->display_options['filters']['field_dc_creator_value']['expose']['description'] = 'Search for Creator string';
  $handler->display->display_options['filters']['field_dc_creator_value']['expose']['operator'] = 'field_dc_creator_value_op';
  $handler->display->display_options['filters']['field_dc_creator_value']['expose']['identifier'] = 'field_dc_creator_value';
  $handler->display->display_options['filters']['field_dc_creator_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_dc_creator_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: Publisher (obsolete) (field_publisher) */
  $handler->display->display_options['filters']['field_publisher_value']['id'] = 'field_publisher_value';
  $handler->display->display_options['filters']['field_publisher_value']['table'] = 'field_data_field_publisher';
  $handler->display->display_options['filters']['field_publisher_value']['field'] = 'field_publisher_value';
  $handler->display->display_options['filters']['field_publisher_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_publisher_value']['group'] = 1;
  $handler->display->display_options['filters']['field_publisher_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_publisher_value']['expose']['operator_id'] = 'field_publisher_value_op';
  $handler->display->display_options['filters']['field_publisher_value']['expose']['label'] = 'Publisher';
  $handler->display->display_options['filters']['field_publisher_value']['expose']['operator_label'] = 'Publisher';
  $handler->display->display_options['filters']['field_publisher_value']['expose']['operator'] = 'field_publisher_value_op';
  $handler->display->display_options['filters']['field_publisher_value']['expose']['identifier'] = 'field_publisher_value';
  $handler->display->display_options['filters']['field_publisher_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_publisher_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Field: S3 Path (field_s3_path) */
  $handler->display->display_options['filters']['field_s3_path_value']['id'] = 'field_s3_path_value';
  $handler->display->display_options['filters']['field_s3_path_value']['table'] = 'field_data_field_s3_path';
  $handler->display->display_options['filters']['field_s3_path_value']['field'] = 'field_s3_path_value';
  $handler->display->display_options['filters']['field_s3_path_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_s3_path_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_s3_path_value']['expose']['operator_id'] = 'field_s3_path_value_op';
  $handler->display->display_options['filters']['field_s3_path_value']['expose']['label'] = 'S3 Path';
  $handler->display->display_options['filters']['field_s3_path_value']['expose']['operator'] = 'field_s3_path_value_op';
  $handler->display->display_options['filters']['field_s3_path_value']['expose']['identifier'] = 'field_s3_path_value';
  $handler->display->display_options['filters']['field_s3_path_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['path'] = 'admin/content/cals/repo-items-subset';

  /* Display: Subset Export */
  $handler = $view->new_display('views_data_export', 'Subset Export', 'views_data_export_2');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = '1';
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: File Resource (field_file_resource) */
  $handler->display->display_options['relationships']['field_file_resource_value']['id'] = 'field_file_resource_value';
  $handler->display->display_options['relationships']['field_file_resource_value']['table'] = 'field_data_field_file_resource';
  $handler->display->display_options['relationships']['field_file_resource_value']['field'] = 'field_file_resource_value';
  $handler->display->display_options['relationships']['field_file_resource_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '80';
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['empty'] = 'No title';
  /* Field: Content: Author(s) */
  $handler->display->display_options['fields']['field_dc_creator']['id'] = 'field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['table'] = 'field_data_field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['field'] = 'field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['delta_offset'] = '0';
  /* Field: Content: Publisher (obsolete) */
  $handler->display->display_options['fields']['field_publisher']['id'] = 'field_publisher';
  $handler->display->display_options['fields']['field_publisher']['table'] = 'field_data_field_publisher';
  $handler->display->display_options['fields']['field_publisher']['field'] = 'field_publisher';
  $handler->display->display_options['fields']['field_publisher']['delta_offset'] = '0';
  /* Field: Field: S3 Path */
  $handler->display->display_options['fields']['field_s3_path']['id'] = 'field_s3_path';
  $handler->display->display_options['fields']['field_s3_path']['table'] = 'field_data_field_s3_path';
  $handler->display->display_options['fields']['field_s3_path']['field'] = 'field_s3_path';
  $handler->display->display_options['fields']['field_s3_path']['label'] = 'S3';
  $handler->display->display_options['fields']['field_s3_path']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_s3_path']['empty'] = 'Not yet linked.';
  $handler->display->display_options['fields']['field_s3_path']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_s3_path']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  $handler->display->display_options['fields']['field_s3_path']['delta_offset'] = '0';
  /* Field: Field: System Control Number */
  $handler->display->display_options['fields']['field_system_control_number']['id'] = 'field_system_control_number';
  $handler->display->display_options['fields']['field_system_control_number']['table'] = 'field_data_field_system_control_number';
  $handler->display->display_options['fields']['field_system_control_number']['field'] = 'field_system_control_number';
  $handler->display->display_options['fields']['field_system_control_number']['label'] = 'SysCtrl';
  $handler->display->display_options['fields']['field_system_control_number']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_system_control_number']['settings'] = array(
    'title_style' => '_none',
    'title_link' => '',
    'title_class' => '',
  );
  $handler->display->display_options['fields']['field_system_control_number']['delta_offset'] = '0';
  /* Field: Content: Access Restrictions */
  $handler->display->display_options['fields']['field_access_restrictions']['id'] = 'field_access_restrictions';
  $handler->display->display_options['fields']['field_access_restrictions']['table'] = 'field_data_field_access_restrictions';
  $handler->display->display_options['fields']['field_access_restrictions']['field'] = 'field_access_restrictions';
  $handler->display->display_options['fields']['field_access_restrictions']['label'] = 'Access';
  /* Field: Content: Published status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Pub';
  $handler->display->display_options['fields']['status']['not'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Post date';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  /* Sort criterion: Field: System Control Number (field_system_control_number:format) */
  $handler->display->display_options['sorts']['field_system_control_number_format']['id'] = 'field_system_control_number_format';
  $handler->display->display_options['sorts']['field_system_control_number_format']['table'] = 'field_data_field_system_control_number';
  $handler->display->display_options['sorts']['field_system_control_number_format']['field'] = 'field_system_control_number_format';
  $handler->display->display_options['sorts']['field_system_control_number_format']['order'] = 'DESC';
  $handler->display->display_options['sorts']['field_system_control_number_format']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_system_control_number_format']['expose']['label'] = 'SysCtrl Format';
  /* Sort criterion: Field: System Control Number (field_system_control_number) */
  $handler->display->display_options['sorts']['field_system_control_number_value']['id'] = 'field_system_control_number_value';
  $handler->display->display_options['sorts']['field_system_control_number_value']['table'] = 'field_data_field_system_control_number';
  $handler->display->display_options['sorts']['field_system_control_number_value']['field'] = 'field_system_control_number_value';
  $handler->display->display_options['sorts']['field_system_control_number_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_system_control_number_value']['expose']['label'] = 'SysCtrl';
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  $handler->display->display_options['sorts']['nid']['order'] = 'DESC';
  $handler->display->display_options['sorts']['nid']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['nid']['expose']['label'] = 'Nid';
  /* Sort criterion: Content: Author(s) (field_dc_creator) */
  $handler->display->display_options['sorts']['field_dc_creator_value']['id'] = 'field_dc_creator_value';
  $handler->display->display_options['sorts']['field_dc_creator_value']['table'] = 'field_data_field_dc_creator';
  $handler->display->display_options['sorts']['field_dc_creator_value']['field'] = 'field_dc_creator_value';
  $handler->display->display_options['sorts']['field_dc_creator_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_dc_creator_value']['expose']['label'] = 'Creator';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'repository_item' => 'repository_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Access Restrictions (field_access_restrictions) */
  $handler->display->display_options['filters']['field_access_restrictions_value']['id'] = 'field_access_restrictions_value';
  $handler->display->display_options['filters']['field_access_restrictions_value']['table'] = 'field_data_field_access_restrictions';
  $handler->display->display_options['filters']['field_access_restrictions_value']['field'] = 'field_access_restrictions_value';
  $handler->display->display_options['filters']['field_access_restrictions_value']['value'] = array(
    0 => '0',
    1 => '1',
  );
  $handler->display->display_options['filters']['field_access_restrictions_value']['group'] = 1;
  $handler->display->display_options['filters']['field_access_restrictions_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_access_restrictions_value']['expose']['operator_id'] = 'field_access_restrictions_value_op';
  $handler->display->display_options['filters']['field_access_restrictions_value']['expose']['label'] = 'Access Restrictions';
  $handler->display->display_options['filters']['field_access_restrictions_value']['expose']['operator'] = 'field_access_restrictions_value_op';
  $handler->display->display_options['filters']['field_access_restrictions_value']['expose']['identifier'] = 'field_access_restrictions_value';
  $handler->display->display_options['filters']['field_access_restrictions_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_access_restrictions_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_access_restrictions_value']['expose']['remember_roles'] = array(
    2 => '2',
    5 => '5',
    3 => '3',
    1 => 0,
    6 => 0,
    7 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Recherche';
  $handler->display->display_options['filters']['title']['expose']['description'] = 'Search for Title string';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  /* Filter criterion: Field: System Control Number (field_system_control_number) */
  $handler->display->display_options['filters']['field_system_control_number_value']['id'] = 'field_system_control_number_value';
  $handler->display->display_options['filters']['field_system_control_number_value']['table'] = 'field_data_field_system_control_number';
  $handler->display->display_options['filters']['field_system_control_number_value']['field'] = 'field_system_control_number_value';
  $handler->display->display_options['filters']['field_system_control_number_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_system_control_number_value']['group'] = 1;
  $handler->display->display_options['filters']['field_system_control_number_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['operator_id'] = 'field_system_control_number_value_op';
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['label'] = 'SysCtrl=';
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['operator'] = 'field_system_control_number_value_op';
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['identifier'] = 'field_system_control_number_value';
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Author(s) (field_dc_creator) */
  $handler->display->display_options['filters']['field_dc_creator_value']['id'] = 'field_dc_creator_value';
  $handler->display->display_options['filters']['field_dc_creator_value']['table'] = 'field_data_field_dc_creator';
  $handler->display->display_options['filters']['field_dc_creator_value']['field'] = 'field_dc_creator_value';
  $handler->display->display_options['filters']['field_dc_creator_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_dc_creator_value']['expose']['operator_id'] = 'field_dc_creator_value_op';
  $handler->display->display_options['filters']['field_dc_creator_value']['expose']['label'] = 'Creator (field_dc_creator)';
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
    8 => 0,
    11 => 0,
  );
  /* Filter criterion: Content: Publisher (obsolete) (field_publisher) */
  $handler->display->display_options['filters']['field_publisher_value']['id'] = 'field_publisher_value';
  $handler->display->display_options['filters']['field_publisher_value']['table'] = 'field_data_field_publisher';
  $handler->display->display_options['filters']['field_publisher_value']['field'] = 'field_publisher_value';
  $handler->display->display_options['filters']['field_publisher_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_publisher_value']['expose']['operator_id'] = 'field_publisher_value_op';
  $handler->display->display_options['filters']['field_publisher_value']['expose']['label'] = 'Publisher (field_publisher)';
  $handler->display->display_options['filters']['field_publisher_value']['expose']['operator'] = 'field_publisher_value_op';
  $handler->display->display_options['filters']['field_publisher_value']['expose']['identifier'] = 'field_publisher_value';
  $handler->display->display_options['filters']['field_publisher_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['path'] = 'admin/content/cals/repo-items-subset/export';
  $handler->display->display_options['displays'] = array(
    'page_4' => 'page_4',
    'default' => 0,
    'page_1' => 0,
    'page_2' => 0,
    'page_3' => 0,
  );

  /* Display: Repo Items - DC Types */
  $handler = $view->new_display('page', 'Repo Items - DC Types', 'page_5');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::_cals_importer_update_licensed_access' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::_cals_importer_update_system_control_numbers' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '80';
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['empty'] = 'No title';
  /* Field: Content: Author(s) */
  $handler->display->display_options['fields']['field_dc_creator']['id'] = 'field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['table'] = 'field_data_field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['field'] = 'field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['delta_offset'] = '0';
  /* Field: Field: S3 Path */
  $handler->display->display_options['fields']['field_s3_path']['id'] = 'field_s3_path';
  $handler->display->display_options['fields']['field_s3_path']['table'] = 'field_data_field_s3_path';
  $handler->display->display_options['fields']['field_s3_path']['field'] = 'field_s3_path';
  $handler->display->display_options['fields']['field_s3_path']['label'] = 'S3';
  $handler->display->display_options['fields']['field_s3_path']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_s3_path']['empty'] = 'Not yet linked.';
  $handler->display->display_options['fields']['field_s3_path']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_s3_path']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  $handler->display->display_options['fields']['field_s3_path']['delta_offset'] = '0';
  /* Field: Field: System Control Number */
  $handler->display->display_options['fields']['field_system_control_number']['id'] = 'field_system_control_number';
  $handler->display->display_options['fields']['field_system_control_number']['table'] = 'field_data_field_system_control_number';
  $handler->display->display_options['fields']['field_system_control_number']['field'] = 'field_system_control_number';
  $handler->display->display_options['fields']['field_system_control_number']['label'] = 'SysCtrl';
  $handler->display->display_options['fields']['field_system_control_number']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_system_control_number']['settings'] = array(
    'title_style' => '_none',
    'title_link' => '',
    'title_class' => '',
  );
  $handler->display->display_options['fields']['field_system_control_number']['delta_offset'] = '0';
  /* Field: Content: Access Restrictions */
  $handler->display->display_options['fields']['field_access_restrictions']['id'] = 'field_access_restrictions';
  $handler->display->display_options['fields']['field_access_restrictions']['table'] = 'field_data_field_access_restrictions';
  $handler->display->display_options['fields']['field_access_restrictions']['field'] = 'field_access_restrictions';
  $handler->display->display_options['fields']['field_access_restrictions']['label'] = 'Access';
  /* Field: Content: Published status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Pub';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = 'User';
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Post date';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  /* Sort criterion: Field: System Control Number (field_system_control_number:format) */
  $handler->display->display_options['sorts']['field_system_control_number_format']['id'] = 'field_system_control_number_format';
  $handler->display->display_options['sorts']['field_system_control_number_format']['table'] = 'field_data_field_system_control_number';
  $handler->display->display_options['sorts']['field_system_control_number_format']['field'] = 'field_system_control_number_format';
  $handler->display->display_options['sorts']['field_system_control_number_format']['order'] = 'DESC';
  $handler->display->display_options['sorts']['field_system_control_number_format']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_system_control_number_format']['expose']['label'] = 'SysCtrl Format';
  /* Sort criterion: Field: System Control Number (field_system_control_number) */
  $handler->display->display_options['sorts']['field_system_control_number_value']['id'] = 'field_system_control_number_value';
  $handler->display->display_options['sorts']['field_system_control_number_value']['table'] = 'field_data_field_system_control_number';
  $handler->display->display_options['sorts']['field_system_control_number_value']['field'] = 'field_system_control_number_value';
  $handler->display->display_options['sorts']['field_system_control_number_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_system_control_number_value']['expose']['label'] = 'SysCtrl';
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  $handler->display->display_options['sorts']['nid']['order'] = 'DESC';
  $handler->display->display_options['sorts']['nid']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['nid']['expose']['label'] = 'Nid';
  /* Sort criterion: Content: Author(s) (field_dc_creator) */
  $handler->display->display_options['sorts']['field_dc_creator_value']['id'] = 'field_dc_creator_value';
  $handler->display->display_options['sorts']['field_dc_creator_value']['table'] = 'field_data_field_dc_creator';
  $handler->display->display_options['sorts']['field_dc_creator_value']['field'] = 'field_dc_creator_value';
  $handler->display->display_options['sorts']['field_dc_creator_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_dc_creator_value']['expose']['label'] = 'Creator';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'repository_item' => 'repository_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 'All';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: Access Restrictions (field_access_restrictions) */
  $handler->display->display_options['filters']['field_access_restrictions_value']['id'] = 'field_access_restrictions_value';
  $handler->display->display_options['filters']['field_access_restrictions_value']['table'] = 'field_data_field_access_restrictions';
  $handler->display->display_options['filters']['field_access_restrictions_value']['field'] = 'field_access_restrictions_value';
  $handler->display->display_options['filters']['field_access_restrictions_value']['value'] = array(
    0 => '0',
    1 => '1',
  );
  $handler->display->display_options['filters']['field_access_restrictions_value']['group'] = 1;
  $handler->display->display_options['filters']['field_access_restrictions_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_access_restrictions_value']['expose']['operator_id'] = 'field_access_restrictions_value_op';
  $handler->display->display_options['filters']['field_access_restrictions_value']['expose']['label'] = 'Access Restrictions';
  $handler->display->display_options['filters']['field_access_restrictions_value']['expose']['operator'] = 'field_access_restrictions_value_op';
  $handler->display->display_options['filters']['field_access_restrictions_value']['expose']['identifier'] = 'field_access_restrictions_value';
  $handler->display->display_options['filters']['field_access_restrictions_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_access_restrictions_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_access_restrictions_value']['expose']['remember_roles'] = array(
    2 => '2',
    7 => '7',
    4 => '4',
    5 => '5',
    3 => '3',
    1 => 0,
    6 => 0,
    8 => 0,
    11 => 0,
  );
  $handler->display->display_options['filters']['field_access_restrictions_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Recherche';
  $handler->display->display_options['filters']['title']['expose']['description'] = 'Search for Title string';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['title']['group_info']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['group_info']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['title']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  /* Filter criterion: Content: Author(s) (field_dc_creator) */
  $handler->display->display_options['filters']['field_dc_creator_value']['id'] = 'field_dc_creator_value';
  $handler->display->display_options['filters']['field_dc_creator_value']['table'] = 'field_data_field_dc_creator';
  $handler->display->display_options['filters']['field_dc_creator_value']['field'] = 'field_dc_creator_value';
  $handler->display->display_options['filters']['field_dc_creator_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_dc_creator_value']['group'] = 1;
  $handler->display->display_options['filters']['field_dc_creator_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_dc_creator_value']['expose']['operator_id'] = 'field_dc_creator_value_op';
  $handler->display->display_options['filters']['field_dc_creator_value']['expose']['label'] = 'Search Creator';
  $handler->display->display_options['filters']['field_dc_creator_value']['expose']['description'] = 'Search for Creator string';
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
    8 => 0,
  );
  /* Filter criterion: Field: System Control Number (field_system_control_number) */
  $handler->display->display_options['filters']['field_system_control_number_value']['id'] = 'field_system_control_number_value';
  $handler->display->display_options['filters']['field_system_control_number_value']['table'] = 'field_data_field_system_control_number';
  $handler->display->display_options['filters']['field_system_control_number_value']['field'] = 'field_system_control_number_value';
  $handler->display->display_options['filters']['field_system_control_number_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_system_control_number_value']['group'] = 1;
  $handler->display->display_options['filters']['field_system_control_number_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['operator_id'] = 'field_system_control_number_value_op';
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['label'] = 'SysCtrl=';
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['operator'] = 'field_system_control_number_value_op';
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['identifier'] = 'field_system_control_number_value';
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  /* Filter criterion: Field: File Format (field_file_format) */
  $handler->display->display_options['filters']['field_file_format_value']['id'] = 'field_file_format_value';
  $handler->display->display_options['filters']['field_file_format_value']['table'] = 'field_data_field_file_format';
  $handler->display->display_options['filters']['field_file_format_value']['field'] = 'field_file_format_value';
  $handler->display->display_options['filters']['field_file_format_value']['relationship'] = 'field_file_resource_value';
  $handler->display->display_options['filters']['field_file_format_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_file_format_value']['expose']['operator_id'] = 'field_file_format_value_op';
  $handler->display->display_options['filters']['field_file_format_value']['expose']['label'] = 'File Format';
  $handler->display->display_options['filters']['field_file_format_value']['expose']['operator'] = 'field_file_format_value_op';
  $handler->display->display_options['filters']['field_file_format_value']['expose']['identifier'] = 'field_file_format_value';
  $handler->display->display_options['filters']['field_file_format_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_file_format_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_file_format_value']['expose']['remember_roles'] = array(
    2 => '2',
    7 => '7',
    4 => '4',
    5 => '5',
    3 => '3',
    1 => 0,
    6 => 0,
    8 => 0,
    11 => 0,
  );
  $handler->display->display_options['filters']['field_file_format_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Publisher (obsolete) (field_publisher) */
  $handler->display->display_options['filters']['field_publisher_value']['id'] = 'field_publisher_value';
  $handler->display->display_options['filters']['field_publisher_value']['table'] = 'field_data_field_publisher';
  $handler->display->display_options['filters']['field_publisher_value']['field'] = 'field_publisher_value';
  $handler->display->display_options['filters']['field_publisher_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_publisher_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_publisher_value']['expose']['operator_id'] = 'field_publisher_value_op';
  $handler->display->display_options['filters']['field_publisher_value']['expose']['label'] = 'Publisher';
  $handler->display->display_options['filters']['field_publisher_value']['expose']['operator_label'] = 'Publisher';
  $handler->display->display_options['filters']['field_publisher_value']['expose']['operator'] = 'field_publisher_value_op';
  $handler->display->display_options['filters']['field_publisher_value']['expose']['identifier'] = 'field_publisher_value';
  $handler->display->display_options['filters']['field_publisher_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['path'] = 'admin/content/cals/streamlined-repo/dctypes';

  /* Display: Repo Items - Bulk Edit */
  $handler = $view->new_display('page', 'Repo Items - Bulk Edit', 'page_6');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'counter' => 'counter',
    'nid' => 'nid',
    'title' => 'title',
    'field_iso_language' => 'field_iso_language',
    'field_s3_path' => 'field_s3_path',
    'field_system_control_number' => 'field_system_control_number',
    'status' => 'status',
    'created' => 'created',
    'uid' => 'uid',
    'edit_node' => 'edit_node',
    'field_bibid' => 'field_bibid',
  );
  $handler->display->display_options['style_options']['default'] = 'nid';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'counter' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_iso_language' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_s3_path' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_system_control_number' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'uid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_bibid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::_cals_reparse_record_details' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'skip_permission_check' => 0,
      'override_label' => 1,
      'label' => 'Re-parse Selected Fields',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'log' => 0,
      ),
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 1,
      'label' => 'Batch edit',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'repository_item::field_iso_language' => 'repository_item::field_iso_language',
        ),
      ),
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '80';
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['empty'] = 'No title';
  /* Field: Content: Author(s) */
  $handler->display->display_options['fields']['field_dc_creator']['id'] = 'field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['table'] = 'field_data_field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['field'] = 'field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dc_creator']['delta_offset'] = '0';
  /* Field: Content: Language (Item) */
  $handler->display->display_options['fields']['field_iso_language']['id'] = 'field_iso_language';
  $handler->display->display_options['fields']['field_iso_language']['table'] = 'field_data_field_iso_language';
  $handler->display->display_options['fields']['field_iso_language']['field'] = 'field_iso_language';
  $handler->display->display_options['fields']['field_iso_language']['delta_offset'] = '0';
  /* Field: Field: S3 Path */
  $handler->display->display_options['fields']['field_s3_path']['id'] = 'field_s3_path';
  $handler->display->display_options['fields']['field_s3_path']['table'] = 'field_data_field_s3_path';
  $handler->display->display_options['fields']['field_s3_path']['field'] = 'field_s3_path';
  $handler->display->display_options['fields']['field_s3_path']['label'] = 'S3';
  $handler->display->display_options['fields']['field_s3_path']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_s3_path']['empty'] = 'Not yet linked.';
  $handler->display->display_options['fields']['field_s3_path']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_s3_path']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  $handler->display->display_options['fields']['field_s3_path']['delta_offset'] = '0';
  /* Field: Field: System Control Number */
  $handler->display->display_options['fields']['field_system_control_number']['id'] = 'field_system_control_number';
  $handler->display->display_options['fields']['field_system_control_number']['table'] = 'field_data_field_system_control_number';
  $handler->display->display_options['fields']['field_system_control_number']['field'] = 'field_system_control_number';
  $handler->display->display_options['fields']['field_system_control_number']['label'] = 'SysCtrl';
  $handler->display->display_options['fields']['field_system_control_number']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_system_control_number']['settings'] = array(
    'title_style' => '_none',
    'title_link' => '',
    'title_class' => '',
  );
  $handler->display->display_options['fields']['field_system_control_number']['delta_offset'] = '0';
  /* Field: Content: Published status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Pub';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Post date';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  /* Sort criterion: Field: System Control Number (field_system_control_number:format) */
  $handler->display->display_options['sorts']['field_system_control_number_format']['id'] = 'field_system_control_number_format';
  $handler->display->display_options['sorts']['field_system_control_number_format']['table'] = 'field_data_field_system_control_number';
  $handler->display->display_options['sorts']['field_system_control_number_format']['field'] = 'field_system_control_number_format';
  $handler->display->display_options['sorts']['field_system_control_number_format']['order'] = 'DESC';
  $handler->display->display_options['sorts']['field_system_control_number_format']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_system_control_number_format']['expose']['label'] = 'SysCtrl Format';
  /* Sort criterion: Field: System Control Number (field_system_control_number) */
  $handler->display->display_options['sorts']['field_system_control_number_value']['id'] = 'field_system_control_number_value';
  $handler->display->display_options['sorts']['field_system_control_number_value']['table'] = 'field_data_field_system_control_number';
  $handler->display->display_options['sorts']['field_system_control_number_value']['field'] = 'field_system_control_number_value';
  $handler->display->display_options['sorts']['field_system_control_number_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_system_control_number_value']['expose']['label'] = 'SysCtrl';
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  $handler->display->display_options['sorts']['nid']['order'] = 'DESC';
  $handler->display->display_options['sorts']['nid']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['nid']['expose']['label'] = 'Nid';
  /* Sort criterion: Content: Language (Item) (field_iso_language) */
  $handler->display->display_options['sorts']['field_iso_language_value']['id'] = 'field_iso_language_value';
  $handler->display->display_options['sorts']['field_iso_language_value']['table'] = 'field_data_field_iso_language';
  $handler->display->display_options['sorts']['field_iso_language_value']['field'] = 'field_iso_language_value';
  $handler->display->display_options['sorts']['field_iso_language_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_iso_language_value']['expose']['label'] = 'Language';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Language (Item) (field_iso_language) */
  $handler->display->display_options['filters']['field_iso_language_value']['id'] = 'field_iso_language_value';
  $handler->display->display_options['filters']['field_iso_language_value']['table'] = 'field_data_field_iso_language';
  $handler->display->display_options['filters']['field_iso_language_value']['field'] = 'field_iso_language_value';
  $handler->display->display_options['filters']['field_iso_language_value']['group'] = 1;
  $handler->display->display_options['filters']['field_iso_language_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_iso_language_value']['expose']['operator_id'] = 'field_iso_language_value_op';
  $handler->display->display_options['filters']['field_iso_language_value']['expose']['label'] = 'Language';
  $handler->display->display_options['filters']['field_iso_language_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_iso_language_value']['expose']['operator'] = 'field_iso_language_value_op';
  $handler->display->display_options['filters']['field_iso_language_value']['expose']['identifier'] = 'field_iso_language_value';
  $handler->display->display_options['filters']['field_iso_language_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_iso_language_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'repository_item' => 'repository_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 'All';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: Author(s) (field_dc_creator) */
  $handler->display->display_options['filters']['field_dc_creator_value']['id'] = 'field_dc_creator_value';
  $handler->display->display_options['filters']['field_dc_creator_value']['table'] = 'field_data_field_dc_creator';
  $handler->display->display_options['filters']['field_dc_creator_value']['field'] = 'field_dc_creator_value';
  $handler->display->display_options['filters']['field_dc_creator_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_dc_creator_value']['group'] = 1;
  $handler->display->display_options['filters']['field_dc_creator_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_dc_creator_value']['expose']['operator_id'] = 'field_dc_creator_value_op';
  $handler->display->display_options['filters']['field_dc_creator_value']['expose']['label'] = 'Creator';
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
    8 => 0,
    11 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Recherche';
  $handler->display->display_options['filters']['title']['expose']['description'] = 'Search for Title string';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['title']['group_info']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['group_info']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['title']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  /* Filter criterion: Field: System Control Number (field_system_control_number) */
  $handler->display->display_options['filters']['field_system_control_number_value']['id'] = 'field_system_control_number_value';
  $handler->display->display_options['filters']['field_system_control_number_value']['table'] = 'field_data_field_system_control_number';
  $handler->display->display_options['filters']['field_system_control_number_value']['field'] = 'field_system_control_number_value';
  $handler->display->display_options['filters']['field_system_control_number_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_system_control_number_value']['group'] = 1;
  $handler->display->display_options['filters']['field_system_control_number_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['operator_id'] = 'field_system_control_number_value_op';
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['label'] = 'SysCtrl=';
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['operator'] = 'field_system_control_number_value_op';
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['identifier'] = 'field_system_control_number_value';
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  /* Filter criterion: Field: S3 Path (field_s3_path) */
  $handler->display->display_options['filters']['field_s3_path_value']['id'] = 'field_s3_path_value';
  $handler->display->display_options['filters']['field_s3_path_value']['table'] = 'field_data_field_s3_path';
  $handler->display->display_options['filters']['field_s3_path_value']['field'] = 'field_s3_path_value';
  $handler->display->display_options['filters']['field_s3_path_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_s3_path_value']['group'] = 1;
  $handler->display->display_options['filters']['field_s3_path_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_s3_path_value']['expose']['operator_id'] = 'field_s3_path_value_op';
  $handler->display->display_options['filters']['field_s3_path_value']['expose']['label'] = 'S3 Path';
  $handler->display->display_options['filters']['field_s3_path_value']['expose']['operator'] = 'field_s3_path_value_op';
  $handler->display->display_options['filters']['field_s3_path_value']['expose']['identifier'] = 'field_s3_path_value';
  $handler->display->display_options['filters']['field_s3_path_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: Publisher (obsolete) (field_publisher) */
  $handler->display->display_options['filters']['field_publisher_value']['id'] = 'field_publisher_value';
  $handler->display->display_options['filters']['field_publisher_value']['table'] = 'field_data_field_publisher';
  $handler->display->display_options['filters']['field_publisher_value']['field'] = 'field_publisher_value';
  $handler->display->display_options['filters']['field_publisher_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_publisher_value']['expose']['operator_id'] = 'field_publisher_value_op';
  $handler->display->display_options['filters']['field_publisher_value']['expose']['label'] = 'Publisher';
  $handler->display->display_options['filters']['field_publisher_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_publisher_value']['expose']['operator'] = 'field_publisher_value_op';
  $handler->display->display_options['filters']['field_publisher_value']['expose']['identifier'] = 'field_publisher_value';
  $handler->display->display_options['filters']['field_publisher_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: Record Set (field_record_set) */
  $handler->display->display_options['filters']['field_record_set_nid']['id'] = 'field_record_set_nid';
  $handler->display->display_options['filters']['field_record_set_nid']['table'] = 'field_data_field_record_set';
  $handler->display->display_options['filters']['field_record_set_nid']['field'] = 'field_record_set_nid';
  $handler->display->display_options['filters']['field_record_set_nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_record_set_nid']['expose']['operator_id'] = 'field_record_set_nid_op';
  $handler->display->display_options['filters']['field_record_set_nid']['expose']['label'] = 'Record Set';
  $handler->display->display_options['filters']['field_record_set_nid']['expose']['operator'] = 'field_record_set_nid_op';
  $handler->display->display_options['filters']['field_record_set_nid']['expose']['identifier'] = 'field_record_set_nid';
  $handler->display->display_options['filters']['field_record_set_nid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_record_set_nid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['path'] = 'admin/content/cals/streamlined-repo/language';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Repo Items - Bulk Edit';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-nnels-admin';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Repository Items -- Relations */
  $handler = $view->new_display('page', 'Repository Items -- Relations', 'page_7');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'nid' => 'nid',
    'title' => 'title',
    'field_dc_creator' => 'field_dc_creator',
    'field_system_control_number' => 'field_system_control_number',
    'field_access_restrictions' => 'field_access_restrictions',
    'status' => 'status',
    'field_dc_relation' => 'field_dc_relation',
    'field_dc_relation_qualifiers' => 'field_dc_relation_qualifiers',
    'field_dc_relation_value' => 'field_dc_relation_value',
    'field_dc_relation_term_value' => 'field_dc_relation_term_value',
    'created' => 'created',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'nid';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_dc_creator' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_system_control_number' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_access_restrictions' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dc_relation' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dc_relation_qualifiers' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dc_relation_value' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dc_relation_term_value' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
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
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Modify DC Relation',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'repository_item::field_dc_relation' => 'repository_item::field_dc_relation',
        ),
      ),
    ),
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '80';
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['empty'] = 'No title';
  /* Field: Content: Author(s) */
  $handler->display->display_options['fields']['field_dc_creator']['id'] = 'field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['table'] = 'field_data_field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['field'] = 'field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['delta_offset'] = '0';
  /* Field: Field: System Control Number */
  $handler->display->display_options['fields']['field_system_control_number']['id'] = 'field_system_control_number';
  $handler->display->display_options['fields']['field_system_control_number']['table'] = 'field_data_field_system_control_number';
  $handler->display->display_options['fields']['field_system_control_number']['field'] = 'field_system_control_number';
  $handler->display->display_options['fields']['field_system_control_number']['label'] = 'SysCtrl';
  $handler->display->display_options['fields']['field_system_control_number']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_system_control_number']['settings'] = array(
    'title_style' => '_none',
    'title_link' => '',
    'title_class' => '',
  );
  $handler->display->display_options['fields']['field_system_control_number']['delta_offset'] = '0';
  /* Field: Content: Access Restrictions */
  $handler->display->display_options['fields']['field_access_restrictions']['id'] = 'field_access_restrictions';
  $handler->display->display_options['fields']['field_access_restrictions']['table'] = 'field_data_field_access_restrictions';
  $handler->display->display_options['fields']['field_access_restrictions']['field'] = 'field_access_restrictions';
  $handler->display->display_options['fields']['field_access_restrictions']['label'] = 'Access';
  /* Field: Content: Published status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Pub';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: DC Relation */
  $handler->display->display_options['fields']['field_dc_relation']['id'] = 'field_dc_relation';
  $handler->display->display_options['fields']['field_dc_relation']['table'] = 'field_data_field_dc_relation';
  $handler->display->display_options['fields']['field_dc_relation']['field'] = 'field_dc_relation';
  $handler->display->display_options['fields']['field_dc_relation']['relationship'] = 'field_dc_relation_node';
  $handler->display->display_options['fields']['field_dc_relation']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_dc_relation']['type'] = 'field_collection_views_view';
  $handler->display->display_options['fields']['field_dc_relation']['settings'] = array(
    'name' => 'field_collection_view',
    'display_id' => 'default',
    'add' => 'Add',
  );
  $handler->display->display_options['fields']['field_dc_relation']['delta_offset'] = '0';
  /* Field: Field collection item: DC Relation Qualifiers */
  $handler->display->display_options['fields']['field_dc_relation_qualifiers']['id'] = 'field_dc_relation_qualifiers';
  $handler->display->display_options['fields']['field_dc_relation_qualifiers']['table'] = 'field_data_field_dc_relation_qualifiers';
  $handler->display->display_options['fields']['field_dc_relation_qualifiers']['field'] = 'field_dc_relation_qualifiers';
  $handler->display->display_options['fields']['field_dc_relation_qualifiers']['relationship'] = 'field_dc_relation_value';
  /* Field: Field collection item: Value */
  $handler->display->display_options['fields']['field_dc_relation_value']['id'] = 'field_dc_relation_value';
  $handler->display->display_options['fields']['field_dc_relation_value']['table'] = 'field_data_field_dc_relation_value';
  $handler->display->display_options['fields']['field_dc_relation_value']['field'] = 'field_dc_relation_value';
  $handler->display->display_options['fields']['field_dc_relation_value']['relationship'] = 'field_dc_relation_value';
  /* Field: Field collection item: Value (term) */
  $handler->display->display_options['fields']['field_dc_relation_term_value']['id'] = 'field_dc_relation_term_value';
  $handler->display->display_options['fields']['field_dc_relation_term_value']['table'] = 'field_data_field_dc_relation_term_value';
  $handler->display->display_options['fields']['field_dc_relation_term_value']['field'] = 'field_dc_relation_term_value';
  $handler->display->display_options['fields']['field_dc_relation_term_value']['relationship'] = 'field_dc_relation_value';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'repository_item' => 'repository_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Access Restrictions (field_access_restrictions) */
  $handler->display->display_options['filters']['field_access_restrictions_value']['id'] = 'field_access_restrictions_value';
  $handler->display->display_options['filters']['field_access_restrictions_value']['table'] = 'field_data_field_access_restrictions';
  $handler->display->display_options['filters']['field_access_restrictions_value']['field'] = 'field_access_restrictions_value';
  $handler->display->display_options['filters']['field_access_restrictions_value']['value'] = array(
    0 => '0',
    1 => '1',
  );
  $handler->display->display_options['filters']['field_access_restrictions_value']['group'] = 1;
  $handler->display->display_options['filters']['field_access_restrictions_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_access_restrictions_value']['expose']['operator_id'] = 'field_access_restrictions_value_op';
  $handler->display->display_options['filters']['field_access_restrictions_value']['expose']['label'] = 'Access Restrictions';
  $handler->display->display_options['filters']['field_access_restrictions_value']['expose']['operator'] = 'field_access_restrictions_value_op';
  $handler->display->display_options['filters']['field_access_restrictions_value']['expose']['identifier'] = 'field_access_restrictions_value';
  $handler->display->display_options['filters']['field_access_restrictions_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_access_restrictions_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_access_restrictions_value']['expose']['remember_roles'] = array(
    2 => '2',
    5 => '5',
    3 => '3',
    1 => 0,
    6 => 0,
    7 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Recherche';
  $handler->display->display_options['filters']['title']['expose']['description'] = 'Search for Title string';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  /* Filter criterion: Field: System Control Number (field_system_control_number) */
  $handler->display->display_options['filters']['field_system_control_number_value']['id'] = 'field_system_control_number_value';
  $handler->display->display_options['filters']['field_system_control_number_value']['table'] = 'field_data_field_system_control_number';
  $handler->display->display_options['filters']['field_system_control_number_value']['field'] = 'field_system_control_number_value';
  $handler->display->display_options['filters']['field_system_control_number_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_system_control_number_value']['group'] = 1;
  $handler->display->display_options['filters']['field_system_control_number_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['operator_id'] = 'field_system_control_number_value_op';
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['label'] = 'SysCtrl=';
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['operator'] = 'field_system_control_number_value_op';
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['identifier'] = 'field_system_control_number_value';
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Author(s) (field_dc_creator) */
  $handler->display->display_options['filters']['field_dc_creator_value']['id'] = 'field_dc_creator_value';
  $handler->display->display_options['filters']['field_dc_creator_value']['table'] = 'field_data_field_dc_creator';
  $handler->display->display_options['filters']['field_dc_creator_value']['field'] = 'field_dc_creator_value';
  $handler->display->display_options['filters']['field_dc_creator_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_dc_creator_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_dc_creator_value']['expose']['operator_id'] = 'field_dc_creator_value_op';
  $handler->display->display_options['filters']['field_dc_creator_value']['expose']['label'] = 'Creator';
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
    8 => 0,
    11 => 0,
  );
  /* Filter criterion: Field collection item: DC Relation Qualifiers (field_dc_relation_qualifiers) */
  $handler->display->display_options['filters']['field_dc_relation_qualifiers_value']['id'] = 'field_dc_relation_qualifiers_value';
  $handler->display->display_options['filters']['field_dc_relation_qualifiers_value']['table'] = 'field_data_field_dc_relation_qualifiers';
  $handler->display->display_options['filters']['field_dc_relation_qualifiers_value']['field'] = 'field_dc_relation_qualifiers_value';
  $handler->display->display_options['filters']['field_dc_relation_qualifiers_value']['relationship'] = 'field_dc_relation_value';
  $handler->display->display_options['filters']['field_dc_relation_qualifiers_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_dc_relation_qualifiers_value']['expose']['operator_id'] = 'field_dc_relation_qualifiers_value_op';
  $handler->display->display_options['filters']['field_dc_relation_qualifiers_value']['expose']['label'] = 'DC Relation Qualifiers';
  $handler->display->display_options['filters']['field_dc_relation_qualifiers_value']['expose']['operator'] = 'field_dc_relation_qualifiers_value_op';
  $handler->display->display_options['filters']['field_dc_relation_qualifiers_value']['expose']['identifier'] = 'field_dc_relation_qualifiers_value';
  $handler->display->display_options['filters']['field_dc_relation_qualifiers_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_dc_relation_qualifiers_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Field collection item: Value (field_dc_relation_value) */
  $handler->display->display_options['filters']['field_dc_relation_value_value']['id'] = 'field_dc_relation_value_value';
  $handler->display->display_options['filters']['field_dc_relation_value_value']['table'] = 'field_data_field_dc_relation_value';
  $handler->display->display_options['filters']['field_dc_relation_value_value']['field'] = 'field_dc_relation_value_value';
  $handler->display->display_options['filters']['field_dc_relation_value_value']['relationship'] = 'field_dc_relation_value';
  $handler->display->display_options['filters']['field_dc_relation_value_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_dc_relation_value_value']['expose']['operator_id'] = 'field_dc_relation_value_value_op';
  $handler->display->display_options['filters']['field_dc_relation_value_value']['expose']['label'] = 'Value (field_dc_relation_value)';
  $handler->display->display_options['filters']['field_dc_relation_value_value']['expose']['operator'] = 'field_dc_relation_value_value_op';
  $handler->display->display_options['filters']['field_dc_relation_value_value']['expose']['identifier'] = 'field_dc_relation_value_value';
  $handler->display->display_options['filters']['field_dc_relation_value_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Field collection item: Value (term) (field_dc_relation_term_value) */
  $handler->display->display_options['filters']['field_dc_relation_term_value_tid']['id'] = 'field_dc_relation_term_value_tid';
  $handler->display->display_options['filters']['field_dc_relation_term_value_tid']['table'] = 'field_data_field_dc_relation_term_value';
  $handler->display->display_options['filters']['field_dc_relation_term_value_tid']['field'] = 'field_dc_relation_term_value_tid';
  $handler->display->display_options['filters']['field_dc_relation_term_value_tid']['relationship'] = 'field_dc_relation_value';
  $handler->display->display_options['filters']['field_dc_relation_term_value_tid']['value'] = '';
  $handler->display->display_options['filters']['field_dc_relation_term_value_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_dc_relation_term_value_tid']['expose']['operator_id'] = 'field_dc_relation_term_value_tid_op';
  $handler->display->display_options['filters']['field_dc_relation_term_value_tid']['expose']['label'] = 'Value (term) (field_dc_relation_term_value)';
  $handler->display->display_options['filters']['field_dc_relation_term_value_tid']['expose']['operator'] = 'field_dc_relation_term_value_tid_op';
  $handler->display->display_options['filters']['field_dc_relation_term_value_tid']['expose']['identifier'] = 'field_dc_relation_term_value_tid';
  $handler->display->display_options['filters']['field_dc_relation_term_value_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_dc_relation_term_value_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_dc_relation_term_value_tid']['vocabulary'] = 'relations';
  $handler->display->display_options['path'] = 'admin/content/cals/streamlined-repo/relations';

  /* Display: Repos Items - Publisher File Only */
  $handler = $view->new_display('page', 'Repos Items - Publisher File Only', 'page_8');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Publisher Files Only';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'Results display titles that do not have e-text or audio file formats.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '80';
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['empty'] = 'No title';
  /* Field: Content: Author(s) */
  $handler->display->display_options['fields']['field_dc_creator']['id'] = 'field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['table'] = 'field_data_field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['field'] = 'field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['delta_offset'] = '0';
  /* Field: Field: System Control Number */
  $handler->display->display_options['fields']['field_system_control_number']['id'] = 'field_system_control_number';
  $handler->display->display_options['fields']['field_system_control_number']['table'] = 'field_data_field_system_control_number';
  $handler->display->display_options['fields']['field_system_control_number']['field'] = 'field_system_control_number';
  $handler->display->display_options['fields']['field_system_control_number']['label'] = 'SysCtrl';
  $handler->display->display_options['fields']['field_system_control_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_system_control_number']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_system_control_number']['settings'] = array(
    'title_style' => '_none',
    'title_link' => '',
    'title_class' => '',
  );
  $handler->display->display_options['fields']['field_system_control_number']['delta_offset'] = '0';
  /* Field: Content: XML String */
  $handler->display->display_options['fields']['field_xml_string']['id'] = 'field_xml_string';
  $handler->display->display_options['fields']['field_xml_string']['table'] = 'field_data_field_xml_string';
  $handler->display->display_options['fields']['field_xml_string']['field'] = 'field_xml_string';
  $handler->display->display_options['fields']['field_xml_string']['exclude'] = TRUE;
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = 'File(s)';
  $handler->display->display_options['fields']['view']['view'] = 'field_collection_view_repo_files_admin_report';
  $handler->display->display_options['fields']['view']['display'] = 'embed_4';
  $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Post date';
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  $handler->display->display_options['sorts']['nid']['expose']['label'] = 'Nid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'repository_item' => 'repository_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  /* Filter criterion: Field: File Format (field_file_format) */
  $handler->display->display_options['filters']['field_file_format_value_2']['id'] = 'field_file_format_value_2';
  $handler->display->display_options['filters']['field_file_format_value_2']['table'] = 'field_data_field_file_format';
  $handler->display->display_options['filters']['field_file_format_value_2']['field'] = 'field_file_format_value';
  $handler->display->display_options['filters']['field_file_format_value_2']['relationship'] = 'field_file_resource_value';
  $handler->display->display_options['filters']['field_file_format_value_2']['value'] = array(
    6 => '6',
    7 => '7',
    8 => '8',
    9 => '9',
  );
  $handler->display->display_options['filters']['field_file_format_value_2']['group'] = 1;
  /* Filter criterion: Field: File Format (field_file_format) */
  $handler->display->display_options['filters']['field_file_format_value_1']['id'] = 'field_file_format_value_1';
  $handler->display->display_options['filters']['field_file_format_value_1']['table'] = 'field_data_field_file_format';
  $handler->display->display_options['filters']['field_file_format_value_1']['field'] = 'field_file_format_value';
  $handler->display->display_options['filters']['field_file_format_value_1']['relationship'] = 'field_file_resource_value';
  $handler->display->display_options['filters']['field_file_format_value_1']['operator'] = 'not';
  $handler->display->display_options['filters']['field_file_format_value_1']['value'] = array(
    1 => '1',
    2 => '2',
    4 => '4',
  );
  $handler->display->display_options['filters']['field_file_format_value_1']['group'] = 1;
  $handler->display->display_options['filters']['field_file_format_value_1']['expose']['operator_id'] = 'field_file_format_value_1_op';
  $handler->display->display_options['filters']['field_file_format_value_1']['expose']['label'] = 'File Format (field_file_format)';
  $handler->display->display_options['filters']['field_file_format_value_1']['expose']['operator'] = 'field_file_format_value_1_op';
  $handler->display->display_options['filters']['field_file_format_value_1']['expose']['identifier'] = 'field_file_format_value_1';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'allwords';
  $handler->display->display_options['filters']['title']['group'] = 2;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Recherche';
  $handler->display->display_options['filters']['title']['expose']['description'] = 'Search for Title string';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: Author(s) (field_dc_creator) */
  $handler->display->display_options['filters']['field_dc_creator_value']['id'] = 'field_dc_creator_value';
  $handler->display->display_options['filters']['field_dc_creator_value']['table'] = 'field_data_field_dc_creator';
  $handler->display->display_options['filters']['field_dc_creator_value']['field'] = 'field_dc_creator_value';
  $handler->display->display_options['filters']['field_dc_creator_value']['operator'] = 'allwords';
  $handler->display->display_options['filters']['field_dc_creator_value']['group'] = 2;
  $handler->display->display_options['filters']['field_dc_creator_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_dc_creator_value']['expose']['operator_id'] = 'field_dc_creator_value_op';
  $handler->display->display_options['filters']['field_dc_creator_value']['expose']['label'] = 'Creator';
  $handler->display->display_options['filters']['field_dc_creator_value']['expose']['description'] = 'Do not use punctuation.';
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
    8 => 0,
    11 => 0,
  );
  /* Filter criterion: Field: System Control Number (field_system_control_number) */
  $handler->display->display_options['filters']['field_system_control_number_value']['id'] = 'field_system_control_number_value';
  $handler->display->display_options['filters']['field_system_control_number_value']['table'] = 'field_data_field_system_control_number';
  $handler->display->display_options['filters']['field_system_control_number_value']['field'] = 'field_system_control_number_value';
  $handler->display->display_options['filters']['field_system_control_number_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_system_control_number_value']['group'] = 2;
  $handler->display->display_options['filters']['field_system_control_number_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['operator_id'] = 'field_system_control_number_value_op';
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['label'] = 'System Control Number';
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['operator'] = 'field_system_control_number_value_op';
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['identifier'] = 'field_system_control_number_value';
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['path'] = 'admin/content/cals/repo-items/publisher-only-titles';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Repo Items - Publisher File Only';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-nnels-admin';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Repo Items - Genre/Subject Bulk Edit */
  $handler = $view->new_display('page', 'Repo Items - Genre/Subject Bulk Edit', 'page_9');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'nid' => 'nid',
    'title' => 'title',
    'field_dc_creator' => 'field_dc_creator',
    'field_iso_language' => 'field_iso_language',
    'field_literary_format' => 'field_literary_format',
    'field_genre' => 'field_genre',
    'field_subject' => 'field_subject',
    'status' => 'status',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'nid';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_dc_creator' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_iso_language' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_literary_format' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_genre' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_subject' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::_cals_reparse_record_details' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Re-parse Selected Fields',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Batch edit',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'repository_item::field_literary_format' => 'repository_item::field_literary_format',
          'repository_item::field_genre' => 'repository_item::field_genre',
          'repository_item::field_subject' => 'repository_item::field_subject',
        ),
      ),
    ),
  );
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
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '80';
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['empty'] = 'No title';
  /* Field: Content: Author(s) */
  $handler->display->display_options['fields']['field_dc_creator']['id'] = 'field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['table'] = 'field_data_field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['field'] = 'field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dc_creator']['delta_offset'] = '0';
  /* Field: Content: Literary Format */
  $handler->display->display_options['fields']['field_literary_format']['id'] = 'field_literary_format';
  $handler->display->display_options['fields']['field_literary_format']['table'] = 'field_data_field_literary_format';
  $handler->display->display_options['fields']['field_literary_format']['field'] = 'field_literary_format';
  /* Field: Genre Defunct */
  $handler->display->display_options['fields']['field_genre']['id'] = 'field_genre';
  $handler->display->display_options['fields']['field_genre']['table'] = 'field_data_field_genre';
  $handler->display->display_options['fields']['field_genre']['field'] = 'field_genre';
  $handler->display->display_options['fields']['field_genre']['ui_name'] = 'Genre Defunct';
  $handler->display->display_options['fields']['field_genre']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_genre']['delta_offset'] = '0';
  /* Field: Genre Harmonized */
  $handler->display->display_options['fields']['field_genre_harmonized']['id'] = 'field_genre_harmonized';
  $handler->display->display_options['fields']['field_genre_harmonized']['table'] = 'field_data_field_genre_harmonized';
  $handler->display->display_options['fields']['field_genre_harmonized']['field'] = 'field_genre_harmonized';
  $handler->display->display_options['fields']['field_genre_harmonized']['ui_name'] = 'Genre Harmonized';
  $handler->display->display_options['fields']['field_genre_harmonized']['label'] = 'Genre';
  $handler->display->display_options['fields']['field_genre_harmonized']['delta_offset'] = '0';
  /* Field: Content: Subject */
  $handler->display->display_options['fields']['field_subject']['id'] = 'field_subject';
  $handler->display->display_options['fields']['field_subject']['table'] = 'field_data_field_subject';
  $handler->display->display_options['fields']['field_subject']['field'] = 'field_subject';
  $handler->display->display_options['fields']['field_subject']['delta_offset'] = '0';
  /* Field: Content: Language (Item) */
  $handler->display->display_options['fields']['field_iso_language']['id'] = 'field_iso_language';
  $handler->display->display_options['fields']['field_iso_language']['table'] = 'field_data_field_iso_language';
  $handler->display->display_options['fields']['field_iso_language']['field'] = 'field_iso_language';
  $handler->display->display_options['fields']['field_iso_language']['label'] = 'Language';
  $handler->display->display_options['fields']['field_iso_language']['delta_offset'] = '0';
  /* Field: Content: Record Set */
  $handler->display->display_options['fields']['field_record_set']['id'] = 'field_record_set';
  $handler->display->display_options['fields']['field_record_set']['table'] = 'field_data_field_record_set';
  $handler->display->display_options['fields']['field_record_set']['field'] = 'field_record_set';
  /* Field: Content: Published status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Pub';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Post date';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  /* Sort criterion: Field: System Control Number (field_system_control_number:format) */
  $handler->display->display_options['sorts']['field_system_control_number_format']['id'] = 'field_system_control_number_format';
  $handler->display->display_options['sorts']['field_system_control_number_format']['table'] = 'field_data_field_system_control_number';
  $handler->display->display_options['sorts']['field_system_control_number_format']['field'] = 'field_system_control_number_format';
  $handler->display->display_options['sorts']['field_system_control_number_format']['order'] = 'DESC';
  $handler->display->display_options['sorts']['field_system_control_number_format']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_system_control_number_format']['expose']['label'] = 'SysCtrl Format';
  /* Sort criterion: Field: System Control Number (field_system_control_number) */
  $handler->display->display_options['sorts']['field_system_control_number_value']['id'] = 'field_system_control_number_value';
  $handler->display->display_options['sorts']['field_system_control_number_value']['table'] = 'field_data_field_system_control_number';
  $handler->display->display_options['sorts']['field_system_control_number_value']['field'] = 'field_system_control_number_value';
  $handler->display->display_options['sorts']['field_system_control_number_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_system_control_number_value']['expose']['label'] = 'SysCtrl';
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  $handler->display->display_options['sorts']['nid']['order'] = 'DESC';
  $handler->display->display_options['sorts']['nid']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['nid']['expose']['label'] = 'Nid';
  /* Sort criterion: Content: Language (Item) (field_iso_language) */
  $handler->display->display_options['sorts']['field_iso_language_value']['id'] = 'field_iso_language_value';
  $handler->display->display_options['sorts']['field_iso_language_value']['table'] = 'field_data_field_iso_language';
  $handler->display->display_options['sorts']['field_iso_language_value']['field'] = 'field_iso_language_value';
  $handler->display->display_options['sorts']['field_iso_language_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_iso_language_value']['expose']['label'] = 'Language';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'repository_item' => 'repository_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 'All';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Recherche';
  $handler->display->display_options['filters']['title']['expose']['description'] = 'Search for Title string';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['title']['group_info']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['group_info']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['title']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  /* Filter criterion: Content: Author(s) (field_dc_creator) */
  $handler->display->display_options['filters']['field_dc_creator_value']['id'] = 'field_dc_creator_value';
  $handler->display->display_options['filters']['field_dc_creator_value']['table'] = 'field_data_field_dc_creator';
  $handler->display->display_options['filters']['field_dc_creator_value']['field'] = 'field_dc_creator_value';
  $handler->display->display_options['filters']['field_dc_creator_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_dc_creator_value']['group'] = 1;
  $handler->display->display_options['filters']['field_dc_creator_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_dc_creator_value']['expose']['operator_id'] = 'field_dc_creator_value_op';
  $handler->display->display_options['filters']['field_dc_creator_value']['expose']['label'] = 'Creator';
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
    8 => 0,
    11 => 0,
  );
  /* Filter criterion: Content: Literary Format (field_literary_format) */
  $handler->display->display_options['filters']['field_literary_format_value']['id'] = 'field_literary_format_value';
  $handler->display->display_options['filters']['field_literary_format_value']['table'] = 'field_data_field_literary_format';
  $handler->display->display_options['filters']['field_literary_format_value']['field'] = 'field_literary_format_value';
  $handler->display->display_options['filters']['field_literary_format_value']['group'] = 1;
  $handler->display->display_options['filters']['field_literary_format_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_literary_format_value']['expose']['operator_id'] = 'field_literary_format_value_op';
  $handler->display->display_options['filters']['field_literary_format_value']['expose']['label'] = 'Literary Format';
  $handler->display->display_options['filters']['field_literary_format_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_literary_format_value']['expose']['operator'] = 'field_literary_format_value_op';
  $handler->display->display_options['filters']['field_literary_format_value']['expose']['identifier'] = 'field_literary_format_value';
  $handler->display->display_options['filters']['field_literary_format_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_literary_format_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Genre Harmonized */
  $handler->display->display_options['filters']['field_genre_harmonized_tid']['id'] = 'field_genre_harmonized_tid';
  $handler->display->display_options['filters']['field_genre_harmonized_tid']['table'] = 'field_data_field_genre_harmonized';
  $handler->display->display_options['filters']['field_genre_harmonized_tid']['field'] = 'field_genre_harmonized_tid';
  $handler->display->display_options['filters']['field_genre_harmonized_tid']['ui_name'] = 'Genre Harmonized';
  $handler->display->display_options['filters']['field_genre_harmonized_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_genre_harmonized_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_genre_harmonized_tid']['expose']['operator_id'] = 'field_genre_harmonized_tid_op';
  $handler->display->display_options['filters']['field_genre_harmonized_tid']['expose']['label'] = 'Genre';
  $handler->display->display_options['filters']['field_genre_harmonized_tid']['expose']['operator'] = 'field_genre_harmonized_tid_op';
  $handler->display->display_options['filters']['field_genre_harmonized_tid']['expose']['identifier'] = 'field_genre_harmonized_tid';
  $handler->display->display_options['filters']['field_genre_harmonized_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_genre_harmonized_tid']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_genre_harmonized_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_genre_harmonized_tid']['vocabulary'] = 'genre_harmonized';
  /* Filter criterion: Content: Subject (field_subject) */
  $handler->display->display_options['filters']['field_subject_tid']['id'] = 'field_subject_tid';
  $handler->display->display_options['filters']['field_subject_tid']['table'] = 'field_data_field_subject';
  $handler->display->display_options['filters']['field_subject_tid']['field'] = 'field_subject_tid';
  $handler->display->display_options['filters']['field_subject_tid']['value'] = '';
  $handler->display->display_options['filters']['field_subject_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_subject_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_subject_tid']['expose']['operator_id'] = 'field_subject_tid_op';
  $handler->display->display_options['filters']['field_subject_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_subject_tid']['expose']['operator'] = 'field_subject_tid_op';
  $handler->display->display_options['filters']['field_subject_tid']['expose']['identifier'] = 'field_subject_tid';
  $handler->display->display_options['filters']['field_subject_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_subject_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_subject_tid']['vocabulary'] = 'subject';
  $handler->display->display_options['filters']['field_subject_tid']['error_message'] = FALSE;
  /* Filter criterion: Content: Language (Item) (field_iso_language) */
  $handler->display->display_options['filters']['field_iso_language_value']['id'] = 'field_iso_language_value';
  $handler->display->display_options['filters']['field_iso_language_value']['table'] = 'field_data_field_iso_language';
  $handler->display->display_options['filters']['field_iso_language_value']['field'] = 'field_iso_language_value';
  $handler->display->display_options['filters']['field_iso_language_value']['group'] = 1;
  $handler->display->display_options['filters']['field_iso_language_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_iso_language_value']['expose']['operator_id'] = 'field_iso_language_value_op';
  $handler->display->display_options['filters']['field_iso_language_value']['expose']['label'] = 'Language';
  $handler->display->display_options['filters']['field_iso_language_value']['expose']['operator'] = 'field_iso_language_value_op';
  $handler->display->display_options['filters']['field_iso_language_value']['expose']['identifier'] = 'field_iso_language_value';
  $handler->display->display_options['filters']['field_iso_language_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_iso_language_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_iso_language_value']['group_info']['label'] = 'Language (field_iso_language)';
  $handler->display->display_options['filters']['field_iso_language_value']['group_info']['identifier'] = 'field_iso_language_value';
  $handler->display->display_options['filters']['field_iso_language_value']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_iso_language_value']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
    4 => array(),
  );
  /* Filter criterion: Content: Record Set (field_record_set) */
  $handler->display->display_options['filters']['field_record_set_nid']['id'] = 'field_record_set_nid';
  $handler->display->display_options['filters']['field_record_set_nid']['table'] = 'field_data_field_record_set';
  $handler->display->display_options['filters']['field_record_set_nid']['field'] = 'field_record_set_nid';
  $handler->display->display_options['filters']['field_record_set_nid']['group'] = 1;
  $handler->display->display_options['filters']['field_record_set_nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_record_set_nid']['expose']['operator_id'] = 'field_record_set_nid_op';
  $handler->display->display_options['filters']['field_record_set_nid']['expose']['label'] = 'Record Set';
  $handler->display->display_options['filters']['field_record_set_nid']['expose']['operator'] = 'field_record_set_nid_op';
  $handler->display->display_options['filters']['field_record_set_nid']['expose']['identifier'] = 'field_record_set_nid';
  $handler->display->display_options['filters']['field_record_set_nid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_record_set_nid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['path'] = 'admin/content/cals/streamlined-repo/genre';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Repo Items - Genre/Subject Edit';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-nnels-admin';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Repo Items - Genre/Subject + Provider Path */
  $handler = $view->new_display('page', 'Repo Items - Genre/Subject + Provider Path', 'page_10');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1000';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '< précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant >';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'nid' => 'nid',
    'title' => 'title',
    'field_dc_creator' => 'field_dc_creator',
    'field_iso_language' => 'field_iso_language',
    'field_literary_format' => 'field_literary_format',
    'field_genre' => 'field_genre',
    'field_subject' => 'field_subject',
    'status' => 'status',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'nid';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_dc_creator' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_iso_language' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_literary_format' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_genre' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_subject' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Batch edit',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'repository_item::field_literary_format' => 'repository_item::field_literary_format',
          'repository_item::field_genre' => 'repository_item::field_genre',
          'repository_item::field_subject' => 'repository_item::field_subject',
        ),
      ),
    ),
  );
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = 'Result #';
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  $handler->display->display_options['fields']['counter']['reverse'] = 1;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'NID';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '80';
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['empty'] = 'No title';
  /* Field: Content: Author(s) */
  $handler->display->display_options['fields']['field_dc_creator']['id'] = 'field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['table'] = 'field_data_field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['field'] = 'field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dc_creator']['delta_offset'] = '0';
  /* Field: Field: S3 Path */
  $handler->display->display_options['fields']['field_s3_path']['id'] = 'field_s3_path';
  $handler->display->display_options['fields']['field_s3_path']['table'] = 'field_data_field_s3_path';
  $handler->display->display_options['fields']['field_s3_path']['field'] = 'field_s3_path';
  $handler->display->display_options['fields']['field_s3_path']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_s3_path']['settings'] = array(
    'title_style' => '_none',
    'title_link' => '',
    'title_class' => '',
  );
  /* Field: Content: Literary Format */
  $handler->display->display_options['fields']['field_literary_format']['id'] = 'field_literary_format';
  $handler->display->display_options['fields']['field_literary_format']['table'] = 'field_data_field_literary_format';
  $handler->display->display_options['fields']['field_literary_format']['field'] = 'field_literary_format';
  /* Field: Genre Defunct */
  $handler->display->display_options['fields']['field_genre']['id'] = 'field_genre';
  $handler->display->display_options['fields']['field_genre']['table'] = 'field_data_field_genre';
  $handler->display->display_options['fields']['field_genre']['field'] = 'field_genre';
  $handler->display->display_options['fields']['field_genre']['ui_name'] = 'Genre Defunct';
  $handler->display->display_options['fields']['field_genre']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_genre']['delta_offset'] = '0';
  /* Field: Field: Genre Harmonized */
  $handler->display->display_options['fields']['field_genre_harmonized']['id'] = 'field_genre_harmonized';
  $handler->display->display_options['fields']['field_genre_harmonized']['table'] = 'field_data_field_genre_harmonized';
  $handler->display->display_options['fields']['field_genre_harmonized']['field'] = 'field_genre_harmonized';
  $handler->display->display_options['fields']['field_genre_harmonized']['label'] = 'Genre';
  $handler->display->display_options['fields']['field_genre_harmonized']['delta_offset'] = '0';
  /* Field: Content: Published status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Pub';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  /* Field: Content: Audience */
  $handler->display->display_options['fields']['field_audience']['id'] = 'field_audience';
  $handler->display->display_options['fields']['field_audience']['table'] = 'field_data_field_audience';
  $handler->display->display_options['fields']['field_audience']['field'] = 'field_audience';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Post date';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  /* Sort criterion: Field: System Control Number (field_system_control_number:format) */
  $handler->display->display_options['sorts']['field_system_control_number_format']['id'] = 'field_system_control_number_format';
  $handler->display->display_options['sorts']['field_system_control_number_format']['table'] = 'field_data_field_system_control_number';
  $handler->display->display_options['sorts']['field_system_control_number_format']['field'] = 'field_system_control_number_format';
  $handler->display->display_options['sorts']['field_system_control_number_format']['order'] = 'DESC';
  $handler->display->display_options['sorts']['field_system_control_number_format']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_system_control_number_format']['expose']['label'] = 'SysCtrl Format';
  /* Sort criterion: Field: System Control Number (field_system_control_number) */
  $handler->display->display_options['sorts']['field_system_control_number_value']['id'] = 'field_system_control_number_value';
  $handler->display->display_options['sorts']['field_system_control_number_value']['table'] = 'field_data_field_system_control_number';
  $handler->display->display_options['sorts']['field_system_control_number_value']['field'] = 'field_system_control_number_value';
  $handler->display->display_options['sorts']['field_system_control_number_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_system_control_number_value']['expose']['label'] = 'SysCtrl';
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  $handler->display->display_options['sorts']['nid']['order'] = 'DESC';
  $handler->display->display_options['sorts']['nid']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['nid']['expose']['label'] = 'Nid';
  /* Sort criterion: Content: Language (Item) (field_iso_language) */
  $handler->display->display_options['sorts']['field_iso_language_value']['id'] = 'field_iso_language_value';
  $handler->display->display_options['sorts']['field_iso_language_value']['table'] = 'field_data_field_iso_language';
  $handler->display->display_options['sorts']['field_iso_language_value']['field'] = 'field_iso_language_value';
  $handler->display->display_options['sorts']['field_iso_language_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_iso_language_value']['expose']['label'] = 'Language';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'repository_item' => 'repository_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 'All';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Recherche';
  $handler->display->display_options['filters']['title']['expose']['description'] = 'Search for Title string';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['title']['group_info']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['group_info']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['title']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  /* Filter criterion: Content: Author(s) (field_dc_creator) */
  $handler->display->display_options['filters']['field_dc_creator_value']['id'] = 'field_dc_creator_value';
  $handler->display->display_options['filters']['field_dc_creator_value']['table'] = 'field_data_field_dc_creator';
  $handler->display->display_options['filters']['field_dc_creator_value']['field'] = 'field_dc_creator_value';
  $handler->display->display_options['filters']['field_dc_creator_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_dc_creator_value']['group'] = 1;
  $handler->display->display_options['filters']['field_dc_creator_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_dc_creator_value']['expose']['operator_id'] = 'field_dc_creator_value_op';
  $handler->display->display_options['filters']['field_dc_creator_value']['expose']['label'] = 'Creator';
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
    8 => 0,
    11 => 0,
  );
  /* Filter criterion: Content: Literary Format (field_literary_format) */
  $handler->display->display_options['filters']['field_literary_format_value']['id'] = 'field_literary_format_value';
  $handler->display->display_options['filters']['field_literary_format_value']['table'] = 'field_data_field_literary_format';
  $handler->display->display_options['filters']['field_literary_format_value']['field'] = 'field_literary_format_value';
  $handler->display->display_options['filters']['field_literary_format_value']['group'] = 1;
  $handler->display->display_options['filters']['field_literary_format_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_literary_format_value']['expose']['operator_id'] = 'field_literary_format_value_op';
  $handler->display->display_options['filters']['field_literary_format_value']['expose']['label'] = 'Literary Format';
  $handler->display->display_options['filters']['field_literary_format_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_literary_format_value']['expose']['operator'] = 'field_literary_format_value_op';
  $handler->display->display_options['filters']['field_literary_format_value']['expose']['identifier'] = 'field_literary_format_value';
  $handler->display->display_options['filters']['field_literary_format_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_literary_format_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Genre Harmonized */
  $handler->display->display_options['filters']['field_genre_harmonized_tid']['id'] = 'field_genre_harmonized_tid';
  $handler->display->display_options['filters']['field_genre_harmonized_tid']['table'] = 'field_data_field_genre_harmonized';
  $handler->display->display_options['filters']['field_genre_harmonized_tid']['field'] = 'field_genre_harmonized_tid';
  $handler->display->display_options['filters']['field_genre_harmonized_tid']['ui_name'] = 'Genre Harmonized';
  $handler->display->display_options['filters']['field_genre_harmonized_tid']['value'] = '';
  $handler->display->display_options['filters']['field_genre_harmonized_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_genre_harmonized_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_genre_harmonized_tid']['expose']['operator_id'] = 'field_genre_harmonized_tid_op';
  $handler->display->display_options['filters']['field_genre_harmonized_tid']['expose']['label'] = 'Genre';
  $handler->display->display_options['filters']['field_genre_harmonized_tid']['expose']['operator'] = 'field_genre_harmonized_tid_op';
  $handler->display->display_options['filters']['field_genre_harmonized_tid']['expose']['identifier'] = 'field_genre_harmonized_tid';
  $handler->display->display_options['filters']['field_genre_harmonized_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_genre_harmonized_tid']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_genre_harmonized_tid']['vocabulary'] = 'genre_harmonized';
  /* Filter criterion: Content: Subject (field_subject) */
  $handler->display->display_options['filters']['field_subject_tid']['id'] = 'field_subject_tid';
  $handler->display->display_options['filters']['field_subject_tid']['table'] = 'field_data_field_subject';
  $handler->display->display_options['filters']['field_subject_tid']['field'] = 'field_subject_tid';
  $handler->display->display_options['filters']['field_subject_tid']['value'] = '';
  $handler->display->display_options['filters']['field_subject_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_subject_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_subject_tid']['expose']['operator_id'] = 'field_subject_tid_op';
  $handler->display->display_options['filters']['field_subject_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_subject_tid']['expose']['operator'] = 'field_subject_tid_op';
  $handler->display->display_options['filters']['field_subject_tid']['expose']['identifier'] = 'field_subject_tid';
  $handler->display->display_options['filters']['field_subject_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_subject_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_subject_tid']['vocabulary'] = 'subject';
  $handler->display->display_options['filters']['field_subject_tid']['error_message'] = FALSE;
  /* Filter criterion: Field: S3 Path (field_s3_path) */
  $handler->display->display_options['filters']['field_s3_path_value']['id'] = 'field_s3_path_value';
  $handler->display->display_options['filters']['field_s3_path_value']['table'] = 'field_data_field_s3_path';
  $handler->display->display_options['filters']['field_s3_path_value']['field'] = 'field_s3_path_value';
  $handler->display->display_options['filters']['field_s3_path_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_s3_path_value']['group'] = 1;
  $handler->display->display_options['filters']['field_s3_path_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_s3_path_value']['expose']['operator_id'] = 'field_s3_path_value_op';
  $handler->display->display_options['filters']['field_s3_path_value']['expose']['label'] = 'S3 Path';
  $handler->display->display_options['filters']['field_s3_path_value']['expose']['operator'] = 'field_s3_path_value_op';
  $handler->display->display_options['filters']['field_s3_path_value']['expose']['identifier'] = 'field_s3_path_value';
  $handler->display->display_options['filters']['field_s3_path_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: S3 Path */
  $handler->display->display_options['filters']['s3_path']['id'] = 's3_path';
  $handler->display->display_options['filters']['s3_path']['table'] = 'node';
  $handler->display->display_options['filters']['s3_path']['field'] = 's3_path';
  $handler->display->display_options['filters']['s3_path']['group'] = 1;
  $handler->display->display_options['filters']['s3_path']['pattern'] = 'DND|\\/CA\\/QC|publisher|pre-production|(\\/CA)\\/BC\\/(BVAUCC|BBGVL)|\\/CA\\/NNELS\\/(PHP|RBdigital|PD|CBC)';
  /* Filter criterion: Field: File Format (field_file_format) */
  $handler->display->display_options['filters']['field_file_format_value']['id'] = 'field_file_format_value';
  $handler->display->display_options['filters']['field_file_format_value']['table'] = 'field_data_field_file_format';
  $handler->display->display_options['filters']['field_file_format_value']['field'] = 'field_file_format_value';
  $handler->display->display_options['filters']['field_file_format_value']['group'] = 1;
  $handler->display->display_options['filters']['field_file_format_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_file_format_value']['expose']['operator_id'] = 'field_file_format_value_op';
  $handler->display->display_options['filters']['field_file_format_value']['expose']['label'] = 'File Format';
  $handler->display->display_options['filters']['field_file_format_value']['expose']['operator'] = 'field_file_format_value_op';
  $handler->display->display_options['filters']['field_file_format_value']['expose']['identifier'] = 'field_file_format_value';
  $handler->display->display_options['filters']['field_file_format_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_file_format_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: Publisher (obsolete) (field_publisher) */
  $handler->display->display_options['filters']['field_publisher_value']['id'] = 'field_publisher_value';
  $handler->display->display_options['filters']['field_publisher_value']['table'] = 'field_data_field_publisher';
  $handler->display->display_options['filters']['field_publisher_value']['field'] = 'field_publisher_value';
  $handler->display->display_options['filters']['field_publisher_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_publisher_value']['group'] = 1;
  $handler->display->display_options['filters']['field_publisher_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_publisher_value']['expose']['operator_id'] = 'field_publisher_value_op';
  $handler->display->display_options['filters']['field_publisher_value']['expose']['label'] = 'Publisher (field_publisher)';
  $handler->display->display_options['filters']['field_publisher_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_publisher_value']['expose']['operator'] = 'field_publisher_value_op';
  $handler->display->display_options['filters']['field_publisher_value']['expose']['identifier'] = 'field_publisher_value';
  $handler->display->display_options['filters']['field_publisher_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: Audience (field_audience) */
  $handler->display->display_options['filters']['field_audience_value']['id'] = 'field_audience_value';
  $handler->display->display_options['filters']['field_audience_value']['table'] = 'field_data_field_audience';
  $handler->display->display_options['filters']['field_audience_value']['field'] = 'field_audience_value';
  $handler->display->display_options['filters']['field_audience_value']['group'] = 1;
  $handler->display->display_options['filters']['field_audience_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_audience_value']['expose']['operator_id'] = 'field_audience_value_op';
  $handler->display->display_options['filters']['field_audience_value']['expose']['label'] = 'Audience (field_audience)';
  $handler->display->display_options['filters']['field_audience_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_audience_value']['expose']['operator'] = 'field_audience_value_op';
  $handler->display->display_options['filters']['field_audience_value']['expose']['identifier'] = 'field_audience_value';
  $handler->display->display_options['filters']['field_audience_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_audience_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Field: S3 Path (field_s3_path) */
  $handler->display->display_options['filters']['field_s3_path_value_1']['id'] = 'field_s3_path_value_1';
  $handler->display->display_options['filters']['field_s3_path_value_1']['table'] = 'field_data_field_s3_path';
  $handler->display->display_options['filters']['field_s3_path_value_1']['field'] = 'field_s3_path_value';
  $handler->display->display_options['filters']['field_s3_path_value_1']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_s3_path_value_1']['group'] = 1;
  $handler->display->display_options['path'] = 'admin/content/cals/streamlined-repo/terms-s3path';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Repo Items - Genre/Subject Edit';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-nnels-admin';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Fix Missing Summaries */
  $handler = $view->new_display('page', 'Fix Missing Summaries', 'page_11');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    7 => '7',
    5 => '5',
  );
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'field_system_control_number' => 'field_system_control_number',
    'nid' => 'nid',
    'title' => 'title',
    'body' => 'body',
    'field_subject' => 'field_subject',
    'field_literary_format' => 'field_literary_format',
    'field_genre' => 'field_genre',
    'field_audience' => 'field_audience',
    'field_record_set' => 'field_record_set',
    'status' => 'status',
    'edit_node' => 'edit_node',
    'created' => 'created',
  );
  $handler->display->display_options['style_options']['default'] = 'created';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_system_control_number' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 1,
    ),
    'body' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_subject' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_literary_format' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_genre' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_audience' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_record_set' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'log' => 0,
      ),
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 1,
      'label' => 'Edit Selected Node(s)',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
          'repository_item::field_literary_format' => 'repository_item::field_literary_format',
          'repository_item::field_genre' => 'repository_item::field_genre',
          'repository_item::field_audience' => 'repository_item::field_audience',
          'repository_item::body' => 'repository_item::body',
        ),
      ),
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Field: System Control Number */
  $handler->display->display_options['fields']['field_system_control_number']['id'] = 'field_system_control_number';
  $handler->display->display_options['fields']['field_system_control_number']['table'] = 'field_data_field_system_control_number';
  $handler->display->display_options['fields']['field_system_control_number']['field'] = 'field_system_control_number';
  $handler->display->display_options['fields']['field_system_control_number']['label'] = 'SysCtrl';
  $handler->display->display_options['fields']['field_system_control_number']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_system_control_number']['settings'] = array(
    'title_style' => '_none',
    'title_link' => '',
    'title_class' => '',
  );
  $handler->display->display_options['fields']['field_system_control_number']['delta_offset'] = '0';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '80';
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['empty'] = 'No title';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Summary';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  /* Field: Content: Subject */
  $handler->display->display_options['fields']['field_subject']['id'] = 'field_subject';
  $handler->display->display_options['fields']['field_subject']['table'] = 'field_data_field_subject';
  $handler->display->display_options['fields']['field_subject']['field'] = 'field_subject';
  $handler->display->display_options['fields']['field_subject']['label'] = 'Subject(s)';
  $handler->display->display_options['fields']['field_subject']['delta_offset'] = '0';
  /* Field: Content: Literary Format */
  $handler->display->display_options['fields']['field_literary_format']['id'] = 'field_literary_format';
  $handler->display->display_options['fields']['field_literary_format']['table'] = 'field_data_field_literary_format';
  $handler->display->display_options['fields']['field_literary_format']['field'] = 'field_literary_format';
  $handler->display->display_options['fields']['field_literary_format']['label'] = 'LitFormat';
  /* Field: Content: Genre */
  $handler->display->display_options['fields']['field_genre']['id'] = 'field_genre';
  $handler->display->display_options['fields']['field_genre']['table'] = 'field_data_field_genre';
  $handler->display->display_options['fields']['field_genre']['field'] = 'field_genre';
  $handler->display->display_options['fields']['field_genre']['label'] = 'Genre (to be migrated)';
  $handler->display->display_options['fields']['field_genre']['delta_offset'] = '0';
  /* Field: Field: Genre Harmonized */
  $handler->display->display_options['fields']['field_genre_harmonized']['id'] = 'field_genre_harmonized';
  $handler->display->display_options['fields']['field_genre_harmonized']['table'] = 'field_data_field_genre_harmonized';
  $handler->display->display_options['fields']['field_genre_harmonized']['field'] = 'field_genre_harmonized';
  $handler->display->display_options['fields']['field_genre_harmonized']['label'] = 'NNELS Genre Terms (genre_harmonized)';
  $handler->display->display_options['fields']['field_genre_harmonized']['delta_offset'] = '0';
  /* Field: Content: Audience */
  $handler->display->display_options['fields']['field_audience']['id'] = 'field_audience';
  $handler->display->display_options['fields']['field_audience']['table'] = 'field_data_field_audience';
  $handler->display->display_options['fields']['field_audience']['field'] = 'field_audience';
  /* Field: Content: Published status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Published';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Record Set */
  $handler->display->display_options['fields']['field_record_set']['id'] = 'field_record_set';
  $handler->display->display_options['fields']['field_record_set']['table'] = 'field_data_field_record_set';
  $handler->display->display_options['fields']['field_record_set']['field'] = 'field_record_set';
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['date_format'] = 'search_api_facetapi_YEAR';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'search_api_facetapi_YEAR';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  /* Sort criterion: Field: System Control Number (field_system_control_number:format) */
  $handler->display->display_options['sorts']['field_system_control_number_format']['id'] = 'field_system_control_number_format';
  $handler->display->display_options['sorts']['field_system_control_number_format']['table'] = 'field_data_field_system_control_number';
  $handler->display->display_options['sorts']['field_system_control_number_format']['field'] = 'field_system_control_number_format';
  $handler->display->display_options['sorts']['field_system_control_number_format']['order'] = 'DESC';
  $handler->display->display_options['sorts']['field_system_control_number_format']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_system_control_number_format']['expose']['label'] = 'SysCtrl Format';
  /* Sort criterion: Field: System Control Number (field_system_control_number) */
  $handler->display->display_options['sorts']['field_system_control_number_value']['id'] = 'field_system_control_number_value';
  $handler->display->display_options['sorts']['field_system_control_number_value']['table'] = 'field_data_field_system_control_number';
  $handler->display->display_options['sorts']['field_system_control_number_value']['field'] = 'field_system_control_number_value';
  $handler->display->display_options['sorts']['field_system_control_number_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_system_control_number_value']['expose']['label'] = 'SysCtrl';
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  $handler->display->display_options['sorts']['nid']['order'] = 'DESC';
  $handler->display->display_options['sorts']['nid']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['nid']['expose']['label'] = 'Nid';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    4 => 'AND',
    3 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'repository_item' => 'repository_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Recherche';
  $handler->display->display_options['filters']['title']['expose']['description'] = 'Search for Title string';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  /* Filter criterion: Field: System Control Number (field_system_control_number) */
  $handler->display->display_options['filters']['field_system_control_number_value']['id'] = 'field_system_control_number_value';
  $handler->display->display_options['filters']['field_system_control_number_value']['table'] = 'field_data_field_system_control_number';
  $handler->display->display_options['filters']['field_system_control_number_value']['field'] = 'field_system_control_number_value';
  $handler->display->display_options['filters']['field_system_control_number_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_system_control_number_value']['group'] = 1;
  $handler->display->display_options['filters']['field_system_control_number_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['operator_id'] = 'field_system_control_number_value_op';
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['label'] = 'System Control Number';
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['operator'] = 'field_system_control_number_value_op';
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['identifier'] = 'field_system_control_number_value';
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Field: S3 Path (field_s3_path) */
  $handler->display->display_options['filters']['field_s3_path_value']['id'] = 'field_s3_path_value';
  $handler->display->display_options['filters']['field_s3_path_value']['table'] = 'field_data_field_s3_path';
  $handler->display->display_options['filters']['field_s3_path_value']['field'] = 'field_s3_path_value';
  $handler->display->display_options['filters']['field_s3_path_value']['group'] = 1;
  $handler->display->display_options['filters']['field_s3_path_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_s3_path_value']['expose']['operator_id'] = 'field_s3_path_value_op';
  $handler->display->display_options['filters']['field_s3_path_value']['expose']['label'] = 'S3 Path (field_s3_path)';
  $handler->display->display_options['filters']['field_s3_path_value']['expose']['operator'] = 'field_s3_path_value_op';
  $handler->display->display_options['filters']['field_s3_path_value']['expose']['identifier'] = 'field_s3_path_value';
  $handler->display->display_options['filters']['field_s3_path_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_s3_path_value']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_s3_path_value']['group_info']['label'] = 'S3 Path';
  $handler->display->display_options['filters']['field_s3_path_value']['group_info']['identifier'] = 'field_s3_path_value';
  $handler->display->display_options['filters']['field_s3_path_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Not Empty',
      'operator' => 'not empty',
      'value' => 'not null',
    ),
    2 => array(
      'title' => 'Empty',
      'operator' => 'empty',
      'value' => 'null',
    ),
  );
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published status';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
  );
  /* Filter criterion: Content: Subject (field_subject) */
  $handler->display->display_options['filters']['field_subject_tid']['id'] = 'field_subject_tid';
  $handler->display->display_options['filters']['field_subject_tid']['table'] = 'field_data_field_subject';
  $handler->display->display_options['filters']['field_subject_tid']['field'] = 'field_subject_tid';
  $handler->display->display_options['filters']['field_subject_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_subject_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_subject_tid']['expose']['operator_id'] = 'field_subject_tid_op';
  $handler->display->display_options['filters']['field_subject_tid']['expose']['label'] = 'Subject (field_subject)';
  $handler->display->display_options['filters']['field_subject_tid']['expose']['operator'] = 'field_subject_tid_op';
  $handler->display->display_options['filters']['field_subject_tid']['expose']['identifier'] = 'field_subject_tid';
  $handler->display->display_options['filters']['field_subject_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_subject_tid']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_subject_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_subject_tid']['vocabulary'] = 'subject';
  /* Filter criterion: Content: Record Set (field_record_set) */
  $handler->display->display_options['filters']['field_record_set_nid_1']['id'] = 'field_record_set_nid_1';
  $handler->display->display_options['filters']['field_record_set_nid_1']['table'] = 'field_data_field_record_set';
  $handler->display->display_options['filters']['field_record_set_nid_1']['field'] = 'field_record_set_nid';
  $handler->display->display_options['filters']['field_record_set_nid_1']['group'] = 4;
  $handler->display->display_options['filters']['field_record_set_nid_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_record_set_nid_1']['expose']['operator_id'] = 'field_record_set_nid_1_op';
  $handler->display->display_options['filters']['field_record_set_nid_1']['expose']['label'] = 'Record Set (field_record_set)';
  $handler->display->display_options['filters']['field_record_set_nid_1']['expose']['operator'] = 'field_record_set_nid_1_op';
  $handler->display->display_options['filters']['field_record_set_nid_1']['expose']['identifier'] = 'field_record_set_nid_1';
  $handler->display->display_options['filters']['field_record_set_nid_1']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_record_set_nid_1']['group_info']['label'] = 'Record Set Boolean';
  $handler->display->display_options['filters']['field_record_set_nid_1']['group_info']['identifier'] = 'field_record_set_nid_1';
  $handler->display->display_options['filters']['field_record_set_nid_1']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Empty',
      'operator' => 'empty',
      'value' => array(
        'all' => 0,
        77457 => 0,
        15138 => 0,
        7005 => 0,
        6745 => 0,
        19958 => 0,
        15134 => 0,
        5700 => 0,
        11737 => 0,
        11917 => 0,
        12077 => 0,
        13579 => 0,
        14080 => 0,
        14581 => 0,
        15082 => 0,
        13078 => 0,
        9954 => 0,
        8464 => 0,
        9477 => 0,
        10495 => 0,
        9969 => 0,
        10232 => 0,
        19691 => 0,
        19819 => 0,
        19825 => 0,
        10878 => 0,
        10496 => 0,
        7861 => 0,
        7213 => 0,
        7011 => 0,
        42707 => 0,
        19900 => 0,
        19937 => 0,
        19955 => 0,
        20466 => 0,
        20494 => 0,
        42396 => 0,
        42429 => 0,
        63016 => 0,
        51779 => 0,
        65605 => 0,
        66229 => 0,
        65883 => 0,
        62776 => 0,
        66337 => 0,
        66577 => 0,
        66601 => 0,
        66655 => 0,
        66664 => 0,
        67603 => 0,
        67396 => 0,
        67627 => 0,
        67924 => 0,
        67975 => 0,
        68096 => 0,
        68063 => 0,
        68145 => 0,
        68226 => 0,
        68199 => 0,
        68466 => 0,
        68493 => 0,
        68520 => 0,
        68553 => 0,
        68592 => 0,
        68700 => 0,
        68631 => 0,
        68982 => 0,
        68973 => 0,
        69174 => 0,
        69276 => 0,
        69357 => 0,
        69333 => 0,
        69594 => 0,
        69750 => 0,
        74997 => 0,
        75033 => 0,
        69375 => 0,
        69450 => 0,
        74940 => 0,
        65194 => 0,
        5447 => 0,
        5448 => 0,
        5699 => 0,
        6724 => 0,
        71595 => 0,
        75804 => 0,
        76053 => 0,
        69066 => 0,
        79718 => 0,
        67231 => 0,
        67513 => 0,
        67585 => 0,
        65617 => 0,
        74964 => 0,
        75162 => 0,
        79569 => 0,
        77124 => 0,
        81035 => 0,
        69483 => 0,
        69579 => 0,
        6882 => 0,
        51698 => 0,
        68072 => 0,
        51955 => 0,
        54958 => 0,
        56461 => 0,
        57964 => 0,
        59467 => 0,
        60970 => 0,
        62473 => 0,
        63802 => 0,
        63343 => 0,
        41900 => 0,
        75516 => 0,
        65922 => 0,
        77427 => 0,
        77217 => 0,
        77784 => 0,
        65706 => 0,
        79107 => 0,
        65977 => 0,
        77241 => 0,
        76317 => 0,
        77808 => 0,
        78618 => 0,
        69294 => 0,
        79287 => 0,
        79521 => 0,
        79536 => 0,
        81275 => 0,
        47063 => 0,
        66790 => 0,
        75789 => 0,
        77058 => 0,
        69321 => 0,
        65832 => 0,
        51892 => 0,
        15682 => 0,
        65796 => 0,
        51749 => 0,
        62764 => 0,
        65690 => 0,
        65497 => 0,
        77133 => 0,
        77190 => 0,
        19890 => 0,
        16425 => 0,
        16365 => 0,
        75546 => 0,
        76434 => 0,
        76419 => 0,
        71508 => 0,
        77517 => 0,
        74907 => 0,
        67651 => 0,
        46997 => 0,
        75561 => 0,
        69570 => 0,
        5441 => 0,
        76653 => 0,
        67465 => 0,
        42755 => 0,
        42836 => 0,
        42839 => 0,
        42842 => 0,
        20516 => 0,
        51871 => 0,
        75348 => 0,
        19986 => 0,
        77013 => 0,
        79584 => 0,
        81392 => 0,
        81425 => 0,
        80999 => 0,
        81059 => 0,
        76146 => 0,
        75765 => 0,
        75459 => 0,
        79173 => 0,
        77817 => 0,
        78597 => 0,
        77472 => 0,
        41660 => 0,
        66688 => 0,
        66433 => 0,
        66721 => 0,
        67402 => 0,
        68026 => 0,
        65710 => 0,
        75081 => 0,
        66274 => 0,
        66541 => 0,
        68002 => 0,
        47045 => 0,
        65641 => 0,
        65452 => 0,
        65596 => 0,
        51848 => 0,
        15276 => 0,
        42219 => 0,
        42054 => 0,
        65844 => 0,
        67288 => 0,
        67471 => 0,
        67351 => 0,
        67543 => 0,
        81215 => 0,
        66421 => 0,
        79146 => 0,
        69468 => 0,
        76923 => 0,
        77001 => 0,
        74949 => 0,
        77676 => 0,
        77760 => 0,
        20017 => 0,
        75750 => 0,
        69804 => 0,
      ),
    ),
    2 => array(
      'title' => 'Not Empty',
      'operator' => 'not empty',
      'value' => array(
        'all' => 0,
        77457 => 0,
        15138 => 0,
        7005 => 0,
        6745 => 0,
        19958 => 0,
        15134 => 0,
        5700 => 0,
        11737 => 0,
        11917 => 0,
        12077 => 0,
        13579 => 0,
        14080 => 0,
        14581 => 0,
        15082 => 0,
        13078 => 0,
        9954 => 0,
        8464 => 0,
        9477 => 0,
        10495 => 0,
        9969 => 0,
        10232 => 0,
        19691 => 0,
        19819 => 0,
        19825 => 0,
        10878 => 0,
        10496 => 0,
        7861 => 0,
        7213 => 0,
        7011 => 0,
        42707 => 0,
        19900 => 0,
        19937 => 0,
        19955 => 0,
        20466 => 0,
        20494 => 0,
        42396 => 0,
        42429 => 0,
        63016 => 0,
        51779 => 0,
        65605 => 0,
        66229 => 0,
        65883 => 0,
        62776 => 0,
        66337 => 0,
        66577 => 0,
        66601 => 0,
        66655 => 0,
        66664 => 0,
        67603 => 0,
        67396 => 0,
        67627 => 0,
        67924 => 0,
        67975 => 0,
        68096 => 0,
        68063 => 0,
        68145 => 0,
        68226 => 0,
        68199 => 0,
        68466 => 0,
        68493 => 0,
        68520 => 0,
        68553 => 0,
        68592 => 0,
        68700 => 0,
        68631 => 0,
        68982 => 0,
        68973 => 0,
        69174 => 0,
        69276 => 0,
        69357 => 0,
        69333 => 0,
        69594 => 0,
        69750 => 0,
        74997 => 0,
        75033 => 0,
        69375 => 0,
        69450 => 0,
        74940 => 0,
        65194 => 0,
        5447 => 0,
        5448 => 0,
        5699 => 0,
        6724 => 0,
        71595 => 0,
        75804 => 0,
        76053 => 0,
        69066 => 0,
        79718 => 0,
        67231 => 0,
        67513 => 0,
        67585 => 0,
        65617 => 0,
        74964 => 0,
        75162 => 0,
        79569 => 0,
        77124 => 0,
        81035 => 0,
        69483 => 0,
        69579 => 0,
        6882 => 0,
        51698 => 0,
        68072 => 0,
        51955 => 0,
        54958 => 0,
        56461 => 0,
        57964 => 0,
        59467 => 0,
        60970 => 0,
        62473 => 0,
        63802 => 0,
        63343 => 0,
        41900 => 0,
        75516 => 0,
        65922 => 0,
        77427 => 0,
        77217 => 0,
        77784 => 0,
        65706 => 0,
        79107 => 0,
        65977 => 0,
        77241 => 0,
        76317 => 0,
        77808 => 0,
        78618 => 0,
        69294 => 0,
        79287 => 0,
        79521 => 0,
        79536 => 0,
        81275 => 0,
        47063 => 0,
        66790 => 0,
        75789 => 0,
        77058 => 0,
        69321 => 0,
        65832 => 0,
        51892 => 0,
        15682 => 0,
        65796 => 0,
        51749 => 0,
        62764 => 0,
        65690 => 0,
        65497 => 0,
        77133 => 0,
        77190 => 0,
        19890 => 0,
        16425 => 0,
        16365 => 0,
        75546 => 0,
        76434 => 0,
        76419 => 0,
        71508 => 0,
        77517 => 0,
        74907 => 0,
        67651 => 0,
        46997 => 0,
        75561 => 0,
        69570 => 0,
        5441 => 0,
        76653 => 0,
        67465 => 0,
        42755 => 0,
        42836 => 0,
        42839 => 0,
        42842 => 0,
        20516 => 0,
        51871 => 0,
        75348 => 0,
        19986 => 0,
        77013 => 0,
        79584 => 0,
        81392 => 0,
        81425 => 0,
        80999 => 0,
        81059 => 0,
        76146 => 0,
        75765 => 0,
        75459 => 0,
        79173 => 0,
        77817 => 0,
        78597 => 0,
        77472 => 0,
        41660 => 0,
        66688 => 0,
        66433 => 0,
        66721 => 0,
        67402 => 0,
        68026 => 0,
        65710 => 0,
        75081 => 0,
        66274 => 0,
        66541 => 0,
        68002 => 0,
        47045 => 0,
        65641 => 0,
        65452 => 0,
        65596 => 0,
        51848 => 0,
        15276 => 0,
        42219 => 0,
        42054 => 0,
        65844 => 0,
        67288 => 0,
        67471 => 0,
        67351 => 0,
        67543 => 0,
        81215 => 0,
        66421 => 0,
        79146 => 0,
        69468 => 0,
        76923 => 0,
        77001 => 0,
        74949 => 0,
        77676 => 0,
        77760 => 0,
        20017 => 0,
        75750 => 0,
        69804 => 0,
      ),
    ),
  );
  /* Filter criterion: Content: Record Set (field_record_set) */
  $handler->display->display_options['filters']['field_record_set_nid']['id'] = 'field_record_set_nid';
  $handler->display->display_options['filters']['field_record_set_nid']['table'] = 'field_data_field_record_set';
  $handler->display->display_options['filters']['field_record_set_nid']['field'] = 'field_record_set_nid';
  $handler->display->display_options['filters']['field_record_set_nid']['group'] = 4;
  $handler->display->display_options['filters']['field_record_set_nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_record_set_nid']['expose']['operator_id'] = 'field_record_set_nid_op';
  $handler->display->display_options['filters']['field_record_set_nid']['expose']['label'] = 'Record Set';
  $handler->display->display_options['filters']['field_record_set_nid']['expose']['operator'] = 'field_record_set_nid_op';
  $handler->display->display_options['filters']['field_record_set_nid']['expose']['identifier'] = 'field_record_set_nid';
  $handler->display->display_options['filters']['field_record_set_nid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_record_set_nid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_record_set_nid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_record_set_nid']['group_info']['label'] = 'Record Set (field_record_set)';
  $handler->display->display_options['filters']['field_record_set_nid']['group_info']['identifier'] = 'field_record_set_nid';
  $handler->display->display_options['filters']['field_record_set_nid']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'None',
      'operator' => 'empty',
      'value' => array(
        'all' => 0,
        77457 => 0,
        15138 => 0,
        7005 => 0,
        6745 => 0,
        19958 => 0,
        15134 => 0,
        5700 => 0,
        11737 => 0,
        11917 => 0,
        12077 => 0,
        13579 => 0,
        14080 => 0,
        14581 => 0,
        15082 => 0,
        13078 => 0,
        9954 => 0,
        8464 => 0,
        9477 => 0,
        10495 => 0,
        9969 => 0,
        10232 => 0,
        19691 => 0,
        19819 => 0,
        19825 => 0,
        10878 => 0,
        10496 => 0,
        7861 => 0,
        7213 => 0,
        7011 => 0,
        42707 => 0,
        19900 => 0,
        19937 => 0,
        19955 => 0,
        20466 => 0,
        20494 => 0,
        42396 => 0,
        42429 => 0,
        63016 => 0,
        51779 => 0,
        65605 => 0,
        66229 => 0,
        65883 => 0,
        62776 => 0,
        66337 => 0,
        66577 => 0,
        66601 => 0,
        66655 => 0,
        66664 => 0,
        67603 => 0,
        67396 => 0,
        67627 => 0,
        67924 => 0,
        67975 => 0,
        68096 => 0,
        68063 => 0,
        68145 => 0,
        68226 => 0,
        68199 => 0,
        68466 => 0,
        68493 => 0,
        68520 => 0,
        68553 => 0,
        68592 => 0,
        68700 => 0,
        68631 => 0,
        68982 => 0,
        68973 => 0,
        69174 => 0,
        69276 => 0,
        69357 => 0,
        69333 => 0,
        69594 => 0,
        69750 => 0,
        74997 => 0,
        75033 => 0,
        69375 => 0,
        69450 => 0,
        74940 => 0,
        65194 => 0,
        5447 => 0,
        5448 => 0,
        5699 => 0,
        6724 => 0,
        71595 => 0,
        75804 => 0,
        76053 => 0,
        69066 => 0,
        79718 => 0,
        67231 => 0,
        67513 => 0,
        67585 => 0,
        65617 => 0,
        74964 => 0,
        75162 => 0,
        79569 => 0,
        77124 => 0,
        81035 => 0,
        69483 => 0,
        69579 => 0,
        6882 => 0,
        51698 => 0,
        68072 => 0,
        51955 => 0,
        54958 => 0,
        56461 => 0,
        57964 => 0,
        59467 => 0,
        60970 => 0,
        62473 => 0,
        63802 => 0,
        63343 => 0,
        41900 => 0,
        75516 => 0,
        65922 => 0,
        77427 => 0,
        77217 => 0,
        77784 => 0,
        65706 => 0,
        79107 => 0,
        65977 => 0,
        77241 => 0,
        76317 => 0,
        77808 => 0,
        78618 => 0,
        69294 => 0,
        79287 => 0,
        79521 => 0,
        79536 => 0,
        81275 => 0,
        47063 => 0,
        66790 => 0,
        75789 => 0,
        77058 => 0,
        69321 => 0,
        65832 => 0,
        51892 => 0,
        15682 => 0,
        65796 => 0,
        51749 => 0,
        62764 => 0,
        65690 => 0,
        65497 => 0,
        77133 => 0,
        77190 => 0,
        19890 => 0,
        16425 => 0,
        16365 => 0,
        75546 => 0,
        76434 => 0,
        76419 => 0,
        71508 => 0,
        77517 => 0,
        74907 => 0,
        67651 => 0,
        46997 => 0,
        75561 => 0,
        69570 => 0,
        5441 => 0,
        76653 => 0,
        67465 => 0,
        42755 => 0,
        42836 => 0,
        42839 => 0,
        42842 => 0,
        20516 => 0,
        51871 => 0,
        75348 => 0,
        19986 => 0,
        77013 => 0,
        79584 => 0,
        81392 => 0,
        81425 => 0,
        80999 => 0,
        81059 => 0,
        76146 => 0,
        75765 => 0,
        75459 => 0,
        79173 => 0,
        77817 => 0,
        78597 => 0,
        77472 => 0,
        41660 => 0,
        66688 => 0,
        66433 => 0,
        66721 => 0,
        67402 => 0,
        68026 => 0,
        65710 => 0,
        75081 => 0,
        66274 => 0,
        66541 => 0,
        68002 => 0,
        47045 => 0,
        65641 => 0,
        65452 => 0,
        65596 => 0,
        51848 => 0,
        15276 => 0,
        42219 => 0,
        42054 => 0,
        65844 => 0,
        67288 => 0,
        67471 => 0,
        67351 => 0,
        67543 => 0,
        81215 => 0,
        66421 => 0,
        79146 => 0,
        69468 => 0,
        76923 => 0,
        77001 => 0,
        74949 => 0,
        77676 => 0,
        77760 => 0,
        20017 => 0,
        75750 => 0,
        69804 => 0,
      ),
    ),
  );
  /* Filter criterion: Content: Genre (field_genre:delta) */
  $handler->display->display_options['filters']['delta_1']['id'] = 'delta_1';
  $handler->display->display_options['filters']['delta_1']['table'] = 'field_data_field_genre';
  $handler->display->display_options['filters']['delta_1']['field'] = 'delta';
  $handler->display->display_options['filters']['delta_1']['group'] = 3;
  $handler->display->display_options['filters']['delta_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['delta_1']['expose']['operator_id'] = 'delta_1_op';
  $handler->display->display_options['filters']['delta_1']['expose']['label'] = 'Genre (field_genre:delta)';
  $handler->display->display_options['filters']['delta_1']['expose']['operator'] = 'delta_1_op';
  $handler->display->display_options['filters']['delta_1']['expose']['identifier'] = 'delta_1';
  $handler->display->display_options['filters']['delta_1']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['delta_1']['group_info']['label'] = 'Genre (to be migrated)';
  $handler->display->display_options['filters']['delta_1']['group_info']['description'] = 'Please ignore-relevant terms will be migrated to field_genre_harmonized';
  $handler->display->display_options['filters']['delta_1']['group_info']['identifier'] = 'delta_1';
  $handler->display->display_options['filters']['delta_1']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Missing genre',
      'operator' => 'empty',
      'value' => array(
        'value' => 'Test',
        'min' => '',
        'max' => '',
      ),
    ),
    2 => array(
      'title' => 'Genre present',
      'operator' => 'not empty',
      'value' => array(
        'value' => 'Test',
        'min' => '',
        'max' => '',
      ),
    ),
  );
  /* Filter criterion: Field: Genre Harmonized (field_genre_harmonized) */
  $handler->display->display_options['filters']['field_genre_harmonized_tid']['id'] = 'field_genre_harmonized_tid';
  $handler->display->display_options['filters']['field_genre_harmonized_tid']['table'] = 'field_data_field_genre_harmonized';
  $handler->display->display_options['filters']['field_genre_harmonized_tid']['field'] = 'field_genre_harmonized_tid';
  $handler->display->display_options['filters']['field_genre_harmonized_tid']['group'] = 3;
  $handler->display->display_options['filters']['field_genre_harmonized_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_genre_harmonized_tid']['expose']['operator_id'] = 'field_genre_harmonized_tid_op';
  $handler->display->display_options['filters']['field_genre_harmonized_tid']['expose']['label'] = 'Genre Harmonized (field_genre_harmonized)';
  $handler->display->display_options['filters']['field_genre_harmonized_tid']['expose']['operator'] = 'field_genre_harmonized_tid_op';
  $handler->display->display_options['filters']['field_genre_harmonized_tid']['expose']['identifier'] = 'field_genre_harmonized_tid';
  $handler->display->display_options['filters']['field_genre_harmonized_tid']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_genre_harmonized_tid']['group_info']['label'] = 'NNELS Genre Terms (field_genre_harmonized)';
  $handler->display->display_options['filters']['field_genre_harmonized_tid']['group_info']['description'] = 'This field is displayed to the public. It contains NNELS genre taxonomy terms only.';
  $handler->display->display_options['filters']['field_genre_harmonized_tid']['group_info']['identifier'] = 'field_genre_harmonized_tid';
  $handler->display->display_options['filters']['field_genre_harmonized_tid']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Missing genre',
      'operator' => 'empty',
      'value' => array(),
    ),
    2 => array(
      'title' => 'Genre present',
      'operator' => 'not empty',
      'value' => array(),
    ),
  );
  $handler->display->display_options['filters']['field_genre_harmonized_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_genre_harmonized_tid']['vocabulary'] = 'genre_harmonized';
  $handler->display->display_options['filters']['field_genre_harmonized_tid']['optgroups'] = 1;
  /* Filter criterion: Content: Subject (field_subject:delta) */
  $handler->display->display_options['filters']['delta']['id'] = 'delta';
  $handler->display->display_options['filters']['delta']['table'] = 'field_data_field_subject';
  $handler->display->display_options['filters']['delta']['field'] = 'delta';
  $handler->display->display_options['filters']['delta']['group'] = 3;
  $handler->display->display_options['filters']['delta']['exposed'] = TRUE;
  $handler->display->display_options['filters']['delta']['expose']['operator_id'] = 'delta_op';
  $handler->display->display_options['filters']['delta']['expose']['label'] = 'Subject (field_subject:delta)';
  $handler->display->display_options['filters']['delta']['expose']['operator'] = 'delta_op';
  $handler->display->display_options['filters']['delta']['expose']['identifier'] = 'delta';
  $handler->display->display_options['filters']['delta']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['delta']['group_info']['label'] = 'Subject';
  $handler->display->display_options['filters']['delta']['group_info']['identifier'] = 'delta';
  $handler->display->display_options['filters']['delta']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Missing subjects',
      'operator' => 'empty',
      'value' => array(
        'value' => 'Whatev',
        'min' => '',
        'max' => '',
      ),
    ),
    2 => array(
      'title' => 'Subject(s) present',
      'operator' => 'not empty',
      'value' => array(
        'value' => 'Yo',
        'min' => '',
        'max' => '',
      ),
    ),
  );
  /* Filter criterion: Content: Body (body) */
  $handler->display->display_options['filters']['body_value']['id'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['table'] = 'field_data_body';
  $handler->display->display_options['filters']['body_value']['field'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['group'] = 3;
  $handler->display->display_options['filters']['body_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['body_value']['expose']['operator_id'] = 'body_value_op';
  $handler->display->display_options['filters']['body_value']['expose']['label'] = 'Body (body)';
  $handler->display->display_options['filters']['body_value']['expose']['operator'] = 'body_value_op';
  $handler->display->display_options['filters']['body_value']['expose']['identifier'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['body_value']['group_info']['label'] = 'Summary';
  $handler->display->display_options['filters']['body_value']['group_info']['identifier'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Missing summary',
      'operator' => 'empty',
      'value' => 'G',
    ),
    2 => array(
      'title' => 'Summary present',
      'operator' => 'not empty',
      'value' => 'G',
    ),
  );
  /* Filter criterion: Content: Access Restrictions (field_access_restrictions) */
  $handler->display->display_options['filters']['field_access_restrictions_value']['id'] = 'field_access_restrictions_value';
  $handler->display->display_options['filters']['field_access_restrictions_value']['table'] = 'field_data_field_access_restrictions';
  $handler->display->display_options['filters']['field_access_restrictions_value']['field'] = 'field_access_restrictions_value';
  $handler->display->display_options['filters']['field_access_restrictions_value']['value'] = array(
    0 => '0',
    1 => '1',
  );
  $handler->display->display_options['filters']['field_access_restrictions_value']['group'] = 2;
  $handler->display->display_options['filters']['field_access_restrictions_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_access_restrictions_value']['expose']['operator_id'] = 'field_access_restrictions_value_op';
  $handler->display->display_options['filters']['field_access_restrictions_value']['expose']['label'] = 'Access Restrictions';
  $handler->display->display_options['filters']['field_access_restrictions_value']['expose']['operator'] = 'field_access_restrictions_value_op';
  $handler->display->display_options['filters']['field_access_restrictions_value']['expose']['identifier'] = 'field_access_restrictions_value';
  $handler->display->display_options['filters']['field_access_restrictions_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_access_restrictions_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_access_restrictions_value']['expose']['remember_roles'] = array(
    2 => '2',
    5 => '5',
    3 => '3',
    1 => 0,
    6 => 0,
    7 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Audience (field_audience) */
  $handler->display->display_options['filters']['field_audience_value']['id'] = 'field_audience_value';
  $handler->display->display_options['filters']['field_audience_value']['table'] = 'field_data_field_audience';
  $handler->display->display_options['filters']['field_audience_value']['field'] = 'field_audience_value';
  $handler->display->display_options['filters']['field_audience_value']['group'] = 2;
  $handler->display->display_options['filters']['field_audience_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_audience_value']['expose']['operator_id'] = 'field_audience_value_op';
  $handler->display->display_options['filters']['field_audience_value']['expose']['label'] = 'Audience';
  $handler->display->display_options['filters']['field_audience_value']['expose']['operator'] = 'field_audience_value_op';
  $handler->display->display_options['filters']['field_audience_value']['expose']['identifier'] = 'field_audience_value';
  $handler->display->display_options['filters']['field_audience_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_audience_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_audience_value']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_audience_value']['group_info']['label'] = 'Audience';
  $handler->display->display_options['filters']['field_audience_value']['group_info']['identifier'] = 'field_audience_value';
  $handler->display->display_options['filters']['field_audience_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'None',
      'operator' => 'empty',
      'value' => array(),
    ),
    2 => array(
      'title' => 'Preschool**',
      'operator' => 'or',
      'value' => array(
        'a' => 'a',
      ),
    ),
    3 => array(
      'title' => 'Primary',
      'operator' => 'or',
      'value' => array(
        'b' => 'b',
      ),
    ),
    4 => array(
      'title' => 'Pre-adolescent',
      'operator' => 'or',
      'value' => array(
        'c' => 'c',
      ),
    ),
    5 => array(
      'title' => 'Adolescent',
      'operator' => 'or',
      'value' => array(
        'd' => 'd',
      ),
    ),
    6 => array(
      'title' => 'Adult**',
      'operator' => 'or',
      'value' => array(
        'e' => 'e',
      ),
    ),
    7 => array(
      'title' => 'Specialized**',
      'operator' => 'or',
      'value' => array(
        'f' => 'f',
      ),
    ),
    8 => array(
      'title' => 'General',
      'operator' => 'or',
      'value' => array(
        'g' => 'g',
      ),
    ),
    9 => array(
      'title' => 'Juvenile**',
      'operator' => 'or',
      'value' => array(
        'j' => 'j',
      ),
    ),
  );
  /* Filter criterion: Content: Literary Format (field_literary_format) */
  $handler->display->display_options['filters']['field_literary_format_value']['id'] = 'field_literary_format_value';
  $handler->display->display_options['filters']['field_literary_format_value']['table'] = 'field_data_field_literary_format';
  $handler->display->display_options['filters']['field_literary_format_value']['field'] = 'field_literary_format_value';
  $handler->display->display_options['filters']['field_literary_format_value']['group'] = 2;
  $handler->display->display_options['filters']['field_literary_format_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_literary_format_value']['expose']['operator_id'] = 'field_literary_format_value_op';
  $handler->display->display_options['filters']['field_literary_format_value']['expose']['label'] = 'Literary Format';
  $handler->display->display_options['filters']['field_literary_format_value']['expose']['operator'] = 'field_literary_format_value_op';
  $handler->display->display_options['filters']['field_literary_format_value']['expose']['identifier'] = 'field_literary_format_value';
  $handler->display->display_options['filters']['field_literary_format_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_literary_format_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_literary_format_value']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_literary_format_value']['group_info']['label'] = 'Literary Format';
  $handler->display->display_options['filters']['field_literary_format_value']['group_info']['identifier'] = 'field_literary_format_value';
  $handler->display->display_options['filters']['field_literary_format_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'None',
      'operator' => 'empty',
      'value' => array(
        1 => '1',
      ),
    ),
    2 => array(
      'title' => 'Short story',
      'operator' => 'or',
      'value' => array(
        'j' => 'j',
      ),
    ),
    3 => array(
      'title' => 'Letters.',
      'operator' => 'or',
      'value' => array(
        'i' => 'i',
      ),
    ),
    4 => array(
      'title' => 'Mixed forms',
      'operator' => 'or',
      'value' => array(
        'm' => 'm',
      ),
    ),
    5 => array(
      'title' => 'Speeches',
      'operator' => 'or',
      'value' => array(
        's' => 's',
      ),
    ),
    6 => array(
      'title' => 'Poetry',
      'operator' => 'or',
      'value' => array(
        'p' => 'p',
      ),
    ),
    7 => array(
      'title' => 'Unknown',
      'operator' => 'or',
      'value' => array(
        'u' => 'u',
      ),
    ),
    8 => array(
      'title' => 'Non-fiction',
      'operator' => 'or',
      'value' => array(
        0 => '0',
      ),
    ),
    9 => array(
      'title' => 'Fiction',
      'operator' => 'or',
      'value' => array(
        1 => '1',
      ),
    ),
    10 => array(
      'title' => 'Comic strip',
      'operator' => 'or',
      'value' => array(
        6 => '6',
      ),
    ),
    11 => array(
      'title' => 'Drama',
      'operator' => 'or',
      'value' => array(
        'd' => 'd',
      ),
    ),
    12 => array(
      'title' => 'Essay',
      'operator' => 'or',
      'value' => array(
        'e' => 'e',
      ),
    ),
    13 => array(
      'title' => 'Novel',
      'operator' => 'or',
      'value' => array(
        'f' => 'f',
      ),
    ),
    14 => array(
      'title' => 'Humor, satires, etc.',
      'operator' => 'or',
      'value' => array(
        'h' => 'h',
      ),
    ),
  );
  $handler->display->display_options['path'] = 'admin/content/repo-items/summary-fixer';

  /* Display: Titles Inventory */
  $handler = $view->new_display('page', 'Titles Inventory', 'page_12');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'nid' => 'nid',
    'title' => 'title',
    'field_dc_creator' => 'field_dc_creator',
    'field_isbn' => 'field_isbn',
    'field_isbn_audio' => 'field_isbn_audio',
    'view' => 'view',
    'field_dc_date' => 'field_dc_date',
    'field_qualifier_date' => 'field_qualifier_date',
    'field_publisher' => 'field_publisher',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'nid';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_dc_creator' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_isbn' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_isbn_audio' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dc_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_qualifier_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_publisher' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: File Resource (field_file_resource) */
  $handler->display->display_options['relationships']['field_file_resource_value']['id'] = 'field_file_resource_value';
  $handler->display->display_options['relationships']['field_file_resource_value']['table'] = 'field_data_field_file_resource';
  $handler->display->display_options['relationships']['field_file_resource_value']['field'] = 'field_file_resource_value';
  $handler->display->display_options['relationships']['field_file_resource_value']['delta'] = '-1';
  /* Relationship: Content: Date (field_date) */
  $handler->display->display_options['relationships']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['relationships']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['relationships']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['relationships']['field_date_value']['delta'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '80';
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['empty'] = 'No title';
  /* Field: Content: Author(s) */
  $handler->display->display_options['fields']['field_dc_creator']['id'] = 'field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['table'] = 'field_data_field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['field'] = 'field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['delta_offset'] = '0';
  /* Field: Content: ISBN */
  $handler->display->display_options['fields']['field_isbn']['id'] = 'field_isbn';
  $handler->display->display_options['fields']['field_isbn']['table'] = 'field_data_field_isbn';
  $handler->display->display_options['fields']['field_isbn']['field'] = 'field_isbn';
  $handler->display->display_options['fields']['field_isbn']['delta_offset'] = '0';
  /* Field: Content: ISBN (Audio) */
  $handler->display->display_options['fields']['field_isbn_audio']['id'] = 'field_isbn_audio';
  $handler->display->display_options['fields']['field_isbn_audio']['table'] = 'field_data_field_isbn_audio';
  $handler->display->display_options['fields']['field_isbn_audio']['field'] = 'field_isbn_audio';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = 'Format(s)';
  $handler->display->display_options['fields']['view']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'field_collection_view_repo_files_admin_report';
  $handler->display->display_options['fields']['view']['display'] = 'embed_2';
  $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';
  /* Field: Field collection item: DC Date */
  $handler->display->display_options['fields']['field_dc_date']['id'] = 'field_dc_date';
  $handler->display->display_options['fields']['field_dc_date']['table'] = 'field_data_field_dc_date';
  $handler->display->display_options['fields']['field_dc_date']['field'] = 'field_dc_date';
  $handler->display->display_options['fields']['field_dc_date']['relationship'] = 'field_date_value';
  /* Field: Field collection item: Qualifier Date */
  $handler->display->display_options['fields']['field_qualifier_date']['id'] = 'field_qualifier_date';
  $handler->display->display_options['fields']['field_qualifier_date']['table'] = 'field_data_field_qualifier_date';
  $handler->display->display_options['fields']['field_qualifier_date']['field'] = 'field_qualifier_date';
  $handler->display->display_options['fields']['field_qualifier_date']['relationship'] = 'field_date_value';
  /* Field: Content: Publisher (obsolete) */
  $handler->display->display_options['fields']['field_publisher']['id'] = 'field_publisher';
  $handler->display->display_options['fields']['field_publisher']['table'] = 'field_data_field_publisher';
  $handler->display->display_options['fields']['field_publisher']['field'] = 'field_publisher';
  $handler->display->display_options['fields']['field_publisher']['label'] = 'Publisher (Title)';
  $handler->display->display_options['fields']['field_publisher']['delta_offset'] = '0';
  /* Field: Field collection item: Name of Publisher */
  $handler->display->display_options['fields']['field_publisher_format']['id'] = 'field_publisher_format';
  $handler->display->display_options['fields']['field_publisher_format']['table'] = 'field_data_field_publisher_format';
  $handler->display->display_options['fields']['field_publisher_format']['field'] = 'field_publisher_format';
  $handler->display->display_options['fields']['field_publisher_format']['relationship'] = 'field_file_resource_value';
  $handler->display->display_options['fields']['field_publisher_format']['label'] = 'Publisher (File)';
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  $handler->display->display_options['sorts']['nid']['expose']['label'] = 'Nid';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Post date';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'repository_item' => 'repository_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: ISBN (Audio) (field_isbn_audio) */
  $handler->display->display_options['filters']['field_isbn_audio_value']['id'] = 'field_isbn_audio_value';
  $handler->display->display_options['filters']['field_isbn_audio_value']['table'] = 'field_data_field_isbn_audio';
  $handler->display->display_options['filters']['field_isbn_audio_value']['field'] = 'field_isbn_audio_value';
  $handler->display->display_options['filters']['field_isbn_audio_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_isbn_audio_value']['expose']['operator_id'] = 'field_isbn_audio_value_op';
  $handler->display->display_options['filters']['field_isbn_audio_value']['expose']['label'] = 'ISBN (Audio) (field_isbn_audio)';
  $handler->display->display_options['filters']['field_isbn_audio_value']['expose']['operator'] = 'field_isbn_audio_value_op';
  $handler->display->display_options['filters']['field_isbn_audio_value']['expose']['identifier'] = 'field_isbn_audio_value';
  $handler->display->display_options['filters']['field_isbn_audio_value']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_isbn_audio_value']['group_info']['label'] = 'ISBN (Audio)';
  $handler->display->display_options['filters']['field_isbn_audio_value']['group_info']['identifier'] = 'field_isbn_audio_value';
  $handler->display->display_options['filters']['field_isbn_audio_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Not Empty',
      'operator' => 'not empty',
      'value' => '0',
    ),
    2 => array(
      'title' => 'Empty',
      'operator' => 'empty',
      'value' => '0',
    ),
  );
  /* Filter criterion: Content: ISBN (field_isbn) */
  $handler->display->display_options['filters']['field_isbn_value']['id'] = 'field_isbn_value';
  $handler->display->display_options['filters']['field_isbn_value']['table'] = 'field_data_field_isbn';
  $handler->display->display_options['filters']['field_isbn_value']['field'] = 'field_isbn_value';
  $handler->display->display_options['filters']['field_isbn_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_isbn_value']['expose']['operator_id'] = 'field_isbn_value_op';
  $handler->display->display_options['filters']['field_isbn_value']['expose']['label'] = 'ISBN (field_isbn)';
  $handler->display->display_options['filters']['field_isbn_value']['expose']['operator'] = 'field_isbn_value_op';
  $handler->display->display_options['filters']['field_isbn_value']['expose']['identifier'] = 'field_isbn_value';
  $handler->display->display_options['filters']['field_isbn_value']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_isbn_value']['group_info']['label'] = 'ISBN';
  $handler->display->display_options['filters']['field_isbn_value']['group_info']['identifier'] = 'field_isbn_value';
  $handler->display->display_options['filters']['field_isbn_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Not Empty',
      'operator' => 'not empty',
      'value' => '0',
    ),
    2 => array(
      'title' => 'Empty',
      'operator' => 'empty',
      'value' => '0',
    ),
  );
  /* Filter criterion: Field collection item: Name of Publisher (field_publisher_format) */
  $handler->display->display_options['filters']['field_publisher_format_value']['id'] = 'field_publisher_format_value';
  $handler->display->display_options['filters']['field_publisher_format_value']['table'] = 'field_data_field_publisher_format';
  $handler->display->display_options['filters']['field_publisher_format_value']['field'] = 'field_publisher_format_value';
  $handler->display->display_options['filters']['field_publisher_format_value']['relationship'] = 'field_file_resource_value';
  $handler->display->display_options['filters']['field_publisher_format_value']['operator'] = 'regular_expression';
  $handler->display->display_options['filters']['field_publisher_format_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_publisher_format_value']['expose']['operator_id'] = 'field_publisher_format_value_op';
  $handler->display->display_options['filters']['field_publisher_format_value']['expose']['label'] = 'Name of Publisher';
  $handler->display->display_options['filters']['field_publisher_format_value']['expose']['description'] = 'field_publisher_format';
  $handler->display->display_options['filters']['field_publisher_format_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_publisher_format_value']['expose']['operator'] = 'field_publisher_format_value_op';
  $handler->display->display_options['filters']['field_publisher_format_value']['expose']['identifier'] = 'field_publisher_format_value';
  $handler->display->display_options['filters']['field_publisher_format_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['path'] = 'admin/content/cals/titles-inventory';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_3');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%view-%timestamp-yyyy-%timestamp-mmm-%timestamp-dd.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = '1';
  $handler->display->display_options['style_options']['trim'] = 1;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: File Resource (field_file_resource) */
  $handler->display->display_options['relationships']['field_file_resource_value']['id'] = 'field_file_resource_value';
  $handler->display->display_options['relationships']['field_file_resource_value']['table'] = 'field_data_field_file_resource';
  $handler->display->display_options['relationships']['field_file_resource_value']['field'] = 'field_file_resource_value';
  $handler->display->display_options['relationships']['field_file_resource_value']['delta'] = '-1';
  /* Relationship: Content: Date (field_date) */
  $handler->display->display_options['relationships']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['relationships']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['relationships']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['relationships']['field_date_value']['delta'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '80';
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['empty'] = 'No title';
  /* Field: Content: Author(s) */
  $handler->display->display_options['fields']['field_dc_creator']['id'] = 'field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['table'] = 'field_data_field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['field'] = 'field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['delta_offset'] = '0';
  /* Field: Content: ISBN */
  $handler->display->display_options['fields']['field_isbn']['id'] = 'field_isbn';
  $handler->display->display_options['fields']['field_isbn']['table'] = 'field_data_field_isbn';
  $handler->display->display_options['fields']['field_isbn']['field'] = 'field_isbn';
  $handler->display->display_options['fields']['field_isbn']['delta_offset'] = '0';
  /* Field: Content: ISBN (Audio) */
  $handler->display->display_options['fields']['field_isbn_audio']['id'] = 'field_isbn_audio';
  $handler->display->display_options['fields']['field_isbn_audio']['table'] = 'field_data_field_isbn_audio';
  $handler->display->display_options['fields']['field_isbn_audio']['field'] = 'field_isbn_audio';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = 'Format(s)';
  $handler->display->display_options['fields']['view']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'field_collection_view_repo_files_admin_report';
  $handler->display->display_options['fields']['view']['display'] = 'embed_4';
  $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';
  /* Field: Field collection item: DC Date */
  $handler->display->display_options['fields']['field_dc_date']['id'] = 'field_dc_date';
  $handler->display->display_options['fields']['field_dc_date']['table'] = 'field_data_field_dc_date';
  $handler->display->display_options['fields']['field_dc_date']['field'] = 'field_dc_date';
  $handler->display->display_options['fields']['field_dc_date']['relationship'] = 'field_date_value';
  /* Field: Field collection item: Qualifier Date */
  $handler->display->display_options['fields']['field_qualifier_date']['id'] = 'field_qualifier_date';
  $handler->display->display_options['fields']['field_qualifier_date']['table'] = 'field_data_field_qualifier_date';
  $handler->display->display_options['fields']['field_qualifier_date']['field'] = 'field_qualifier_date';
  $handler->display->display_options['fields']['field_qualifier_date']['relationship'] = 'field_date_value';
  /* Field: Content: Publisher (obsolete) */
  $handler->display->display_options['fields']['field_publisher']['id'] = 'field_publisher';
  $handler->display->display_options['fields']['field_publisher']['table'] = 'field_data_field_publisher';
  $handler->display->display_options['fields']['field_publisher']['field'] = 'field_publisher';
  $handler->display->display_options['fields']['field_publisher']['label'] = 'Publisher (Title)';
  $handler->display->display_options['fields']['field_publisher']['delta_offset'] = '0';
  /* Field: Field collection item: Name of Publisher */
  $handler->display->display_options['fields']['field_publisher_format']['id'] = 'field_publisher_format';
  $handler->display->display_options['fields']['field_publisher_format']['table'] = 'field_data_field_publisher_format';
  $handler->display->display_options['fields']['field_publisher_format']['field'] = 'field_publisher_format';
  $handler->display->display_options['fields']['field_publisher_format']['relationship'] = 'field_file_resource_value';
  $handler->display->display_options['fields']['field_publisher_format']['label'] = 'Publisher (File)';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  $handler->display->display_options['sorts']['nid']['order'] = 'DESC';
  $handler->display->display_options['sorts']['nid']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['nid']['expose']['label'] = 'Nid';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Post date';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'repository_item' => 'repository_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: ISBN (Audio) (field_isbn_audio) */
  $handler->display->display_options['filters']['field_isbn_audio_value']['id'] = 'field_isbn_audio_value';
  $handler->display->display_options['filters']['field_isbn_audio_value']['table'] = 'field_data_field_isbn_audio';
  $handler->display->display_options['filters']['field_isbn_audio_value']['field'] = 'field_isbn_audio_value';
  $handler->display->display_options['filters']['field_isbn_audio_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_isbn_audio_value']['expose']['operator_id'] = 'field_isbn_audio_value_op';
  $handler->display->display_options['filters']['field_isbn_audio_value']['expose']['label'] = 'ISBN (Audio) (field_isbn_audio)';
  $handler->display->display_options['filters']['field_isbn_audio_value']['expose']['operator'] = 'field_isbn_audio_value_op';
  $handler->display->display_options['filters']['field_isbn_audio_value']['expose']['identifier'] = 'field_isbn_audio_value';
  $handler->display->display_options['filters']['field_isbn_audio_value']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_isbn_audio_value']['group_info']['label'] = 'ISBN (Audio)';
  $handler->display->display_options['filters']['field_isbn_audio_value']['group_info']['identifier'] = 'field_isbn_audio_value';
  $handler->display->display_options['filters']['field_isbn_audio_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Not Empty',
      'operator' => 'not empty',
      'value' => '0',
    ),
    2 => array(
      'title' => 'Empty',
      'operator' => 'empty',
      'value' => '0',
    ),
  );
  /* Filter criterion: Content: ISBN (field_isbn) */
  $handler->display->display_options['filters']['field_isbn_value']['id'] = 'field_isbn_value';
  $handler->display->display_options['filters']['field_isbn_value']['table'] = 'field_data_field_isbn';
  $handler->display->display_options['filters']['field_isbn_value']['field'] = 'field_isbn_value';
  $handler->display->display_options['filters']['field_isbn_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_isbn_value']['expose']['operator_id'] = 'field_isbn_value_op';
  $handler->display->display_options['filters']['field_isbn_value']['expose']['label'] = 'ISBN (field_isbn)';
  $handler->display->display_options['filters']['field_isbn_value']['expose']['operator'] = 'field_isbn_value_op';
  $handler->display->display_options['filters']['field_isbn_value']['expose']['identifier'] = 'field_isbn_value';
  $handler->display->display_options['filters']['field_isbn_value']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_isbn_value']['group_info']['label'] = 'ISBN';
  $handler->display->display_options['filters']['field_isbn_value']['group_info']['identifier'] = 'field_isbn_value';
  $handler->display->display_options['filters']['field_isbn_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Not Empty',
      'operator' => 'not empty',
      'value' => '0',
    ),
    2 => array(
      'title' => 'Empty',
      'operator' => 'empty',
      'value' => '0',
    ),
  );
  /* Filter criterion: Field collection item: Name of Publisher (field_publisher_format) */
  $handler->display->display_options['filters']['field_publisher_format_value']['id'] = 'field_publisher_format_value';
  $handler->display->display_options['filters']['field_publisher_format_value']['table'] = 'field_data_field_publisher_format';
  $handler->display->display_options['filters']['field_publisher_format_value']['field'] = 'field_publisher_format_value';
  $handler->display->display_options['filters']['field_publisher_format_value']['relationship'] = 'field_file_resource_value';
  $handler->display->display_options['filters']['field_publisher_format_value']['operator'] = 'regular_expression';
  $handler->display->display_options['filters']['field_publisher_format_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_publisher_format_value']['expose']['operator_id'] = 'field_publisher_format_value_op';
  $handler->display->display_options['filters']['field_publisher_format_value']['expose']['label'] = 'Name of Publisher';
  $handler->display->display_options['filters']['field_publisher_format_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_publisher_format_value']['expose']['operator'] = 'field_publisher_format_value_op';
  $handler->display->display_options['filters']['field_publisher_format_value']['expose']['identifier'] = 'field_publisher_format_value';
  $handler->display->display_options['filters']['field_publisher_format_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['path'] = 'admin/content/cals/titles-inventory/export';
  $handler->display->display_options['displays'] = array(
    'page_12' => 'page_12',
    'default' => 0,
    'page_1' => 0,
    'page_2' => 0,
    'page_3' => 0,
    'page_4' => 0,
    'page_5' => 0,
    'page_6' => 0,
    'page_7' => 0,
    'page_8' => 0,
    'page_9' => 0,
    'page_10' => 0,
    'page_11' => 0,
  );
  $handler->display->display_options['use_batch'] = 'batch';
  $handler->display->display_options['segment_size'] = '240';

  /* Display: Repos Items - Identifiers */
  $handler = $view->new_display('page', 'Repos Items - Identifiers', 'identifiers');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Repository Items - Identifiers';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '80';
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['empty'] = 'No title';
  /* Field: Field: System Control Number */
  $handler->display->display_options['fields']['field_system_control_number']['id'] = 'field_system_control_number';
  $handler->display->display_options['fields']['field_system_control_number']['table'] = 'field_data_field_system_control_number';
  $handler->display->display_options['fields']['field_system_control_number']['field'] = 'field_system_control_number';
  $handler->display->display_options['fields']['field_system_control_number']['label'] = 'SysCtrl';
  $handler->display->display_options['fields']['field_system_control_number']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_system_control_number']['settings'] = array(
    'title_style' => '_none',
    'title_link' => '',
    'title_class' => '',
  );
  $handler->display->display_options['fields']['field_system_control_number']['delta_offset'] = '0';
  /* Field: Content: ISBN */
  $handler->display->display_options['fields']['field_isbn']['id'] = 'field_isbn';
  $handler->display->display_options['fields']['field_isbn']['table'] = 'field_data_field_isbn';
  $handler->display->display_options['fields']['field_isbn']['field'] = 'field_isbn';
  $handler->display->display_options['fields']['field_isbn']['delta_offset'] = '0';
  /* Field: Content: ISBN (Audio) */
  $handler->display->display_options['fields']['field_isbn_audio']['id'] = 'field_isbn_audio';
  $handler->display->display_options['fields']['field_isbn_audio']['table'] = 'field_data_field_isbn_audio';
  $handler->display->display_options['fields']['field_isbn_audio']['field'] = 'field_isbn_audio';
  $handler->display->display_options['fields']['field_isbn_audio']['delta_offset'] = '0';
  /* Field: Content: Access Restrictions */
  $handler->display->display_options['fields']['field_access_restrictions']['id'] = 'field_access_restrictions';
  $handler->display->display_options['fields']['field_access_restrictions']['table'] = 'field_data_field_access_restrictions';
  $handler->display->display_options['fields']['field_access_restrictions']['field'] = 'field_access_restrictions';
  $handler->display->display_options['fields']['field_access_restrictions']['label'] = 'Access';
  /* Field: Content: XML String */
  $handler->display->display_options['fields']['field_xml_string']['id'] = 'field_xml_string';
  $handler->display->display_options['fields']['field_xml_string']['table'] = 'field_data_field_xml_string';
  $handler->display->display_options['fields']['field_xml_string']['field'] = 'field_xml_string';
  $handler->display->display_options['fields']['field_xml_string']['exclude'] = TRUE;
  /* Field: Content: Published status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Pub';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Post date';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'repository_item' => 'repository_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Access Restrictions (field_access_restrictions) */
  $handler->display->display_options['filters']['field_access_restrictions_value']['id'] = 'field_access_restrictions_value';
  $handler->display->display_options['filters']['field_access_restrictions_value']['table'] = 'field_data_field_access_restrictions';
  $handler->display->display_options['filters']['field_access_restrictions_value']['field'] = 'field_access_restrictions_value';
  $handler->display->display_options['filters']['field_access_restrictions_value']['value'] = array(
    0 => '0',
    1 => '1',
  );
  $handler->display->display_options['filters']['field_access_restrictions_value']['group'] = 1;
  $handler->display->display_options['filters']['field_access_restrictions_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_access_restrictions_value']['expose']['operator_id'] = 'field_access_restrictions_value_op';
  $handler->display->display_options['filters']['field_access_restrictions_value']['expose']['label'] = 'Access Restrictions';
  $handler->display->display_options['filters']['field_access_restrictions_value']['expose']['operator'] = 'field_access_restrictions_value_op';
  $handler->display->display_options['filters']['field_access_restrictions_value']['expose']['identifier'] = 'field_access_restrictions_value';
  $handler->display->display_options['filters']['field_access_restrictions_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_access_restrictions_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_access_restrictions_value']['expose']['remember_roles'] = array(
    2 => '2',
    5 => '5',
    3 => '3',
    1 => 0,
    6 => 0,
    7 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Recherche';
  $handler->display->display_options['filters']['title']['expose']['description'] = 'Search for Title string';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  /* Filter criterion: Field: System Control Number (field_system_control_number) */
  $handler->display->display_options['filters']['field_system_control_number_value']['id'] = 'field_system_control_number_value';
  $handler->display->display_options['filters']['field_system_control_number_value']['table'] = 'field_data_field_system_control_number';
  $handler->display->display_options['filters']['field_system_control_number_value']['field'] = 'field_system_control_number_value';
  $handler->display->display_options['filters']['field_system_control_number_value']['group'] = 1;
  $handler->display->display_options['filters']['field_system_control_number_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['operator_id'] = 'field_system_control_number_value_op';
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['label'] = 'System Control Number';
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['operator'] = 'field_system_control_number_value_op';
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['identifier'] = 'field_system_control_number_value';
  $handler->display->display_options['filters']['field_system_control_number_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_system_control_number_value']['group_info']['label'] = 'System Control Number';
  $handler->display->display_options['filters']['field_system_control_number_value']['group_info']['identifier'] = 'field_system_control_number_value';
  $handler->display->display_options['filters']['field_system_control_number_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => '',
      'operator' => 'empty',
      'value' => '',
    ),
    2 => array(
      'title' => '',
      'operator' => 'not empty',
      'value' => '',
    ),
  );
  /* Filter criterion: Content: ISBN (field_isbn) */
  $handler->display->display_options['filters']['field_isbn_value']['id'] = 'field_isbn_value';
  $handler->display->display_options['filters']['field_isbn_value']['table'] = 'field_data_field_isbn';
  $handler->display->display_options['filters']['field_isbn_value']['field'] = 'field_isbn_value';
  $handler->display->display_options['filters']['field_isbn_value']['group'] = 1;
  $handler->display->display_options['filters']['field_isbn_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_isbn_value']['expose']['operator_id'] = 'field_isbn_value_op';
  $handler->display->display_options['filters']['field_isbn_value']['expose']['label'] = 'ISBN';
  $handler->display->display_options['filters']['field_isbn_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_isbn_value']['expose']['operator'] = 'field_isbn_value_op';
  $handler->display->display_options['filters']['field_isbn_value']['expose']['identifier'] = 'field_isbn_value';
  $handler->display->display_options['filters']['field_isbn_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_isbn_value']['group_info']['label'] = 'ISBN';
  $handler->display->display_options['filters']['field_isbn_value']['group_info']['identifier'] = 'field_isbn_value';
  $handler->display->display_options['filters']['field_isbn_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => '',
      'operator' => 'empty',
      'value' => '',
    ),
    2 => array(
      'title' => '',
      'operator' => 'not empty',
      'value' => '',
    ),
  );
  /* Filter criterion: Content: ISBN (Audio) (field_isbn_audio) */
  $handler->display->display_options['filters']['field_isbn_audio_value']['id'] = 'field_isbn_audio_value';
  $handler->display->display_options['filters']['field_isbn_audio_value']['table'] = 'field_data_field_isbn_audio';
  $handler->display->display_options['filters']['field_isbn_audio_value']['field'] = 'field_isbn_audio_value';
  $handler->display->display_options['filters']['field_isbn_audio_value']['group'] = 1;
  $handler->display->display_options['filters']['field_isbn_audio_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_isbn_audio_value']['expose']['operator_id'] = 'field_isbn_audio_value_op';
  $handler->display->display_options['filters']['field_isbn_audio_value']['expose']['label'] = 'ISBN (Audio)';
  $handler->display->display_options['filters']['field_isbn_audio_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_isbn_audio_value']['expose']['operator'] = 'field_isbn_audio_value_op';
  $handler->display->display_options['filters']['field_isbn_audio_value']['expose']['identifier'] = 'field_isbn_audio_value';
  $handler->display->display_options['filters']['field_isbn_audio_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_isbn_audio_value']['group_info']['label'] = 'ISBN (Audio)';
  $handler->display->display_options['filters']['field_isbn_audio_value']['group_info']['identifier'] = 'field_isbn_audio_value';
  $handler->display->display_options['filters']['field_isbn_audio_value']['group_info']['default_group'] = '1';
  $handler->display->display_options['filters']['field_isbn_audio_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => '',
      'operator' => 'empty',
      'value' => '',
    ),
    2 => array(
      'title' => '',
      'operator' => 'not empty',
      'value' => '',
    ),
  );
  $handler->display->display_options['path'] = 'admin/content/repo-items/identifiers';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Repo Items - Identifiers';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-nnels-admin';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['working_view'] = $view;

  return $export;
}
