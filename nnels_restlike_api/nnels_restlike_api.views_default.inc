<?php
/**
 * @file
 * nnels_restlike_api.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function nnels_restlike_api_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'api_service_node_repo_item';
  $view->description = 'Resource endpoint for accessing the repository item entity';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'API Service: Node\\Repo-item';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Header: Global: Result summary with an additional token to change the items/page */
  $handler->display->display_options['header']['webform_result']['id'] = 'webform_result';
  $handler->display->display_options['header']['webform_result']['table'] = 'views';
  $handler->display->display_options['header']['webform_result']['field'] = 'webform_result';
  $handler->display->display_options['header']['webform_result']['empty'] = TRUE;
  /* Relationship: Content: File Resource (field_file_resource) */
  $handler->display->display_options['relationships']['field_file_resource_value']['id'] = 'field_file_resource_value';
  $handler->display->display_options['relationships']['field_file_resource_value']['table'] = 'field_data_field_file_resource';
  $handler->display->display_options['relationships']['field_file_resource_value']['field'] = 'field_file_resource_value';
  $handler->display->display_options['relationships']['field_file_resource_value']['delta'] = '-1';
  /* Field: Content: Node UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'node';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['element_default_classes'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  /* Field: Content: Access Rights */
  $handler->display->display_options['fields']['field_access_rights']['id'] = 'field_access_rights';
  $handler->display->display_options['fields']['field_access_rights']['table'] = 'field_data_field_access_rights';
  $handler->display->display_options['fields']['field_access_rights']['field'] = 'field_access_rights';
  $handler->display->display_options['fields']['field_access_rights']['label'] = 'access_rights';
  $handler->display->display_options['fields']['field_access_rights']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_access_rights']['type'] = 'services';
  $handler->display->display_options['fields']['field_access_rights']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 1,
    'skip_empty_values' => 1,
    'skip_text_format' => 1,
  );
  $handler->display->display_options['fields']['field_access_rights']['delta_offset'] = '0';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = 'path';
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Creator */
  $handler->display->display_options['fields']['field_dc_creator']['id'] = 'field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['table'] = 'field_data_field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['field'] = 'field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['label'] = 'creator';
  $handler->display->display_options['fields']['field_dc_creator']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dc_creator']['delta_offset'] = '0';
  /* Field: Content: Language */
  $handler->display->display_options['fields']['field_iso_language']['id'] = 'field_iso_language';
  $handler->display->display_options['fields']['field_iso_language']['table'] = 'field_data_field_iso_language';
  $handler->display->display_options['fields']['field_iso_language']['field'] = 'field_iso_language';
  $handler->display->display_options['fields']['field_iso_language']['label'] = 'language';
  $handler->display->display_options['fields']['field_iso_language']['delta_offset'] = '0';
  /* Field: Summary */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['ui_name'] = 'Summary';
  $handler->display->display_options['fields']['body']['label'] = 'abstract';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 1,
    'skip_empty_values' => 1,
    'skip_text_format' => 1,
  );
  /* Field: Content: DC Contributor */
  $handler->display->display_options['fields']['field_dc_contributor']['id'] = 'field_dc_contributor';
  $handler->display->display_options['fields']['field_dc_contributor']['table'] = 'field_data_field_dc_contributor';
  $handler->display->display_options['fields']['field_dc_contributor']['field'] = 'field_dc_contributor';
  $handler->display->display_options['fields']['field_dc_contributor']['label'] = 'dc_contributor';
  $handler->display->display_options['fields']['field_dc_contributor']['delta_offset'] = '0';
  /* Field: Content: DC Relation */
  $handler->display->display_options['fields']['field_dc_relation']['id'] = 'field_dc_relation';
  $handler->display->display_options['fields']['field_dc_relation']['table'] = 'field_data_field_dc_relation';
  $handler->display->display_options['fields']['field_dc_relation']['field'] = 'field_dc_relation';
  $handler->display->display_options['fields']['field_dc_relation']['label'] = 'dc_relation';
  $handler->display->display_options['fields']['field_dc_relation']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_dc_relation']['type'] = 'services';
  $handler->display->display_options['fields']['field_dc_relation']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 1,
    'skip_empty_values' => 1,
  );
  $handler->display->display_options['fields']['field_dc_relation']['delta_offset'] = '0';
  /* Field: Genre term_id */
  $handler->display->display_options['fields']['field_genre']['id'] = 'field_genre';
  $handler->display->display_options['fields']['field_genre']['table'] = 'field_data_field_genre';
  $handler->display->display_options['fields']['field_genre']['field'] = 'field_genre';
  $handler->display->display_options['fields']['field_genre']['ui_name'] = 'Genre term_id';
  $handler->display->display_options['fields']['field_genre']['label'] = 'genre';
  $handler->display->display_options['fields']['field_genre']['type'] = 'services';
  $handler->display->display_options['fields']['field_genre']['settings'] = array(
    'data_element_key' => 'term_id',
    'skip_safe' => 0,
    'skip_empty_values' => 1,
    'term_name' => 0,
  );
  $handler->display->display_options['fields']['field_genre']['delta_offset'] = '0';
  /* Field: Subject term_id */
  $handler->display->display_options['fields']['field_subject']['id'] = 'field_subject';
  $handler->display->display_options['fields']['field_subject']['table'] = 'field_data_field_subject';
  $handler->display->display_options['fields']['field_subject']['field'] = 'field_subject';
  $handler->display->display_options['fields']['field_subject']['ui_name'] = 'Subject term_id';
  $handler->display->display_options['fields']['field_subject']['label'] = 'subjects';
  $handler->display->display_options['fields']['field_subject']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_subject']['alter']['text'] = '\'[field_subject]\': [
{ \'uri\': \'https://staging.nnels.ca/taxonomy/term/[field_subject-tid]\' }
],';
  $handler->display->display_options['fields']['field_subject']['alter']['path'] = 'taxonomy/term/[field_subject-tid]';
  $handler->display->display_options['fields']['field_subject']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_subject']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_subject']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subject']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_subject']['type'] = 'services';
  $handler->display->display_options['fields']['field_subject']['settings'] = array(
    'data_element_key' => 'term_id',
    'skip_safe' => 0,
    'skip_empty_values' => 1,
    'term_name' => 0,
  );
  $handler->display->display_options['fields']['field_subject']['delta_offset'] = '0';
  /* Field: Content: ISBN */
  $handler->display->display_options['fields']['field_isbn']['id'] = 'field_isbn';
  $handler->display->display_options['fields']['field_isbn']['table'] = 'field_data_field_isbn';
  $handler->display->display_options['fields']['field_isbn']['field'] = 'field_isbn';
  $handler->display->display_options['fields']['field_isbn']['label'] = 'isbn';
  $handler->display->display_options['fields']['field_isbn']['delta_offset'] = '0';
  /* Field: Content: File Resource (field_file_resource:delta) */
  $handler->display->display_options['fields']['delta']['id'] = 'delta';
  $handler->display->display_options['fields']['delta']['table'] = 'field_data_field_file_resource';
  $handler->display->display_options['fields']['delta']['field'] = 'delta';
  $handler->display->display_options['fields']['delta']['label'] = 'field_file_resource:delta';
  $handler->display->display_options['fields']['delta']['separator'] = '';
  /* Field: Content: File Resource */
  $handler->display->display_options['fields']['field_file_resource']['id'] = 'field_file_resource';
  $handler->display->display_options['fields']['field_file_resource']['table'] = 'field_data_field_file_resource';
  $handler->display->display_options['fields']['field_file_resource']['field'] = 'field_file_resource';
  $handler->display->display_options['fields']['field_file_resource']['label'] = 'file_resource';
  $handler->display->display_options['fields']['field_file_resource']['alter']['text'] = '[field_file_resource-value]';
  $handler->display->display_options['fields']['field_file_resource']['settings'] = array(
    'add' => 'Add',
    'edit' => 'Edit',
    'translate' => '',
    'delete' => 'Delete',
    'description' => 1,
    'view_mode' => 'services',
  );
  $handler->display->display_options['fields']['field_file_resource']['delta_offset'] = '0';
  /* Field: Field: File Format */
  $handler->display->display_options['fields']['field_file_format']['id'] = 'field_file_format';
  $handler->display->display_options['fields']['field_file_format']['table'] = 'field_data_field_file_format';
  $handler->display->display_options['fields']['field_file_format']['field'] = 'field_file_format';
  $handler->display->display_options['fields']['field_file_format']['relationship'] = 'field_file_resource_value';
  $handler->display->display_options['fields']['field_file_format']['label'] = 'format';
  $handler->display->display_options['fields']['field_file_format']['type'] = 'i18n_list_default';
  $handler->display->display_options['fields']['field_file_format']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 1,
    'skip_empty_values' => 1,
  );
  /* Sort criterion: Content: Completion Date (field_completion_date) */
  $handler->display->display_options['sorts']['field_completion_date_value']['id'] = 'field_completion_date_value';
  $handler->display->display_options['sorts']['field_completion_date_value']['table'] = 'field_data_field_completion_date';
  $handler->display->display_options['sorts']['field_completion_date_value']['field'] = 'field_completion_date_value';
  $handler->display->display_options['sorts']['field_completion_date_value']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
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
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['nid']['expose']['operator_id'] = 'nid_op';
  $handler->display->display_options['filters']['nid']['expose']['label'] = 'Nid';
  $handler->display->display_options['filters']['nid']['expose']['operator'] = 'nid_op';
  $handler->display->display_options['filters']['nid']['expose']['identifier'] = 'nid';

  /* Display: Repo_items index */
  $handler = $view->new_display('services', 'Repo_items index', 'services_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Node UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'node';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['element_default_classes'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = 'path';
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'node_uri';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'https://staging.nnels.ca/node/[nid]';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Creator */
  $handler->display->display_options['fields']['field_dc_creator']['id'] = 'field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['table'] = 'field_data_field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['field'] = 'field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['label'] = 'creator';
  $handler->display->display_options['fields']['field_dc_creator']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dc_creator']['delta_offset'] = '0';
  /* Field: Content: Language */
  $handler->display->display_options['fields']['field_iso_language']['id'] = 'field_iso_language';
  $handler->display->display_options['fields']['field_iso_language']['table'] = 'field_data_field_iso_language';
  $handler->display->display_options['fields']['field_iso_language']['field'] = 'field_iso_language';
  $handler->display->display_options['fields']['field_iso_language']['label'] = 'language';
  $handler->display->display_options['fields']['field_iso_language']['delta_offset'] = '0';
  /* Field: Summary */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['ui_name'] = 'Summary';
  $handler->display->display_options['fields']['body']['label'] = 'abstract';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 1,
    'skip_empty_values' => 1,
    'skip_text_format' => 1,
  );
  /* Field: Content: DC Contributor */
  $handler->display->display_options['fields']['field_dc_contributor']['id'] = 'field_dc_contributor';
  $handler->display->display_options['fields']['field_dc_contributor']['table'] = 'field_data_field_dc_contributor';
  $handler->display->display_options['fields']['field_dc_contributor']['field'] = 'field_dc_contributor';
  $handler->display->display_options['fields']['field_dc_contributor']['label'] = 'dc_contributor';
  $handler->display->display_options['fields']['field_dc_contributor']['delta_offset'] = '0';
  /* Field: Content: DC Relation */
  $handler->display->display_options['fields']['field_dc_relation']['id'] = 'field_dc_relation';
  $handler->display->display_options['fields']['field_dc_relation']['table'] = 'field_data_field_dc_relation';
  $handler->display->display_options['fields']['field_dc_relation']['field'] = 'field_dc_relation';
  $handler->display->display_options['fields']['field_dc_relation']['label'] = 'dc_relation';
  $handler->display->display_options['fields']['field_dc_relation']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_dc_relation']['type'] = 'services';
  $handler->display->display_options['fields']['field_dc_relation']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 1,
    'skip_empty_values' => 1,
  );
  $handler->display->display_options['fields']['field_dc_relation']['delta_offset'] = '0';
  /* Field: Genre term_id */
  $handler->display->display_options['fields']['field_genre']['id'] = 'field_genre';
  $handler->display->display_options['fields']['field_genre']['table'] = 'field_data_field_genre';
  $handler->display->display_options['fields']['field_genre']['field'] = 'field_genre';
  $handler->display->display_options['fields']['field_genre']['ui_name'] = 'Genre term_id';
  $handler->display->display_options['fields']['field_genre']['label'] = 'genre';
  $handler->display->display_options['fields']['field_genre']['type'] = 'services';
  $handler->display->display_options['fields']['field_genre']['settings'] = array(
    'data_element_key' => 'term_id',
    'skip_safe' => 0,
    'skip_empty_values' => 1,
    'term_name' => 0,
  );
  $handler->display->display_options['fields']['field_genre']['delta_offset'] = '0';
  /* Field: Subject term_id */
  $handler->display->display_options['fields']['field_subject']['id'] = 'field_subject';
  $handler->display->display_options['fields']['field_subject']['table'] = 'field_data_field_subject';
  $handler->display->display_options['fields']['field_subject']['field'] = 'field_subject';
  $handler->display->display_options['fields']['field_subject']['ui_name'] = 'Subject term_id';
  $handler->display->display_options['fields']['field_subject']['label'] = 'subjects';
  $handler->display->display_options['fields']['field_subject']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_subject']['alter']['text'] = '\'[field_subject]\': [
{ \'uri\': \'https://staging.nnels.ca/taxonomy/term/[field_subject-tid]\' }
],';
  $handler->display->display_options['fields']['field_subject']['alter']['path'] = 'taxonomy/term/[field_subject-tid]';
  $handler->display->display_options['fields']['field_subject']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_subject']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_subject']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subject']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_subject']['type'] = 'services';
  $handler->display->display_options['fields']['field_subject']['settings'] = array(
    'data_element_key' => 'term_id',
    'skip_safe' => 0,
    'skip_empty_values' => 1,
    'term_name' => 0,
  );
  $handler->display->display_options['fields']['field_subject']['delta_offset'] = '0';
  /* Field: Content: Access Rights */
  $handler->display->display_options['fields']['field_access_rights']['id'] = 'field_access_rights';
  $handler->display->display_options['fields']['field_access_rights']['table'] = 'field_data_field_access_rights';
  $handler->display->display_options['fields']['field_access_rights']['field'] = 'field_access_rights';
  $handler->display->display_options['fields']['field_access_rights']['label'] = 'access_rights';
  $handler->display->display_options['fields']['field_access_rights']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_access_rights']['type'] = 'services';
  $handler->display->display_options['fields']['field_access_rights']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 1,
    'skip_empty_values' => 1,
    'skip_text_format' => 1,
  );
  $handler->display->display_options['fields']['field_access_rights']['delta_offset'] = '0';
  /* Field: Content: ISBN */
  $handler->display->display_options['fields']['field_isbn']['id'] = 'field_isbn';
  $handler->display->display_options['fields']['field_isbn']['table'] = 'field_data_field_isbn';
  $handler->display->display_options['fields']['field_isbn']['field'] = 'field_isbn';
  $handler->display->display_options['fields']['field_isbn']['label'] = 'isbn';
  $handler->display->display_options['fields']['field_isbn']['delta_offset'] = '0';
  /* Field: Field: File Format */
  $handler->display->display_options['fields']['field_file_format']['id'] = 'field_file_format';
  $handler->display->display_options['fields']['field_file_format']['table'] = 'field_data_field_file_format';
  $handler->display->display_options['fields']['field_file_format']['field'] = 'field_file_format';
  $handler->display->display_options['fields']['field_file_format']['relationship'] = 'field_file_resource_value';
  $handler->display->display_options['fields']['field_file_format']['label'] = 'format';
  $handler->display->display_options['fields']['field_file_format']['type'] = 'i18n_list_default';
  $handler->display->display_options['fields']['field_file_format']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 1,
    'skip_empty_values' => 1,
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
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
  $handler->display->display_options['filters']['field_isbn_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_isbn_value']['expose']['operator_id'] = 'field_isbn_value_op';
  $handler->display->display_options['filters']['field_isbn_value']['expose']['label'] = 'isbn';
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
    12 => 0,
  );
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['nid']['expose']['operator_id'] = 'nid_op';
  $handler->display->display_options['filters']['nid']['expose']['label'] = 'nid';
  $handler->display->display_options['filters']['nid']['expose']['operator'] = 'nid_op';
  $handler->display->display_options['filters']['nid']['expose']['identifier'] = 'nid';
  $handler->display->display_options['filters']['nid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
    8 => 0,
    11 => 0,
    12 => 0,
  );
  /* Filter criterion: Content: Node UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'node';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uuid']['expose']['operator_id'] = 'uuid_op';
  $handler->display->display_options['filters']['uuid']['expose']['label'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['expose']['operator'] = 'uuid_op';
  $handler->display->display_options['filters']['uuid']['expose']['identifier'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
    8 => 0,
    11 => 0,
    12 => 0,
  );
  $handler->display->display_options['path'] = 'repo_items';

  /* Display: File from NID/UUID */
  $handler = $view->new_display('services', 'File from NID/UUID', 'services_2');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: File Resource (field_file_resource) */
  $handler->display->display_options['relationships']['field_file_resource_value']['id'] = 'field_file_resource_value';
  $handler->display->display_options['relationships']['field_file_resource_value']['table'] = 'field_data_field_file_resource';
  $handler->display->display_options['relationships']['field_file_resource_value']['field'] = 'field_file_resource_value';
  $handler->display->display_options['relationships']['field_file_resource_value']['delta'] = '-1';
  /* Relationship: Field collection item: S3 File Upload (field_s3_file_upload:fid) */
  $handler->display->display_options['relationships']['field_s3_file_upload_fid']['id'] = 'field_s3_file_upload_fid';
  $handler->display->display_options['relationships']['field_s3_file_upload_fid']['table'] = 'field_data_field_s3_file_upload';
  $handler->display->display_options['relationships']['field_s3_file_upload_fid']['field'] = 'field_s3_file_upload_fid';
  $handler->display->display_options['relationships']['field_s3_file_upload_fid']['relationship'] = 'field_file_resource_value';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: File Resource (field_file_resource:delta) */
  $handler->display->display_options['fields']['delta']['id'] = 'delta';
  $handler->display->display_options['fields']['delta']['table'] = 'field_data_field_file_resource';
  $handler->display->display_options['fields']['delta']['field'] = 'delta';
  $handler->display->display_options['fields']['delta']['label'] = 'field_file_resource:delta';
  $handler->display->display_options['fields']['delta']['separator'] = '';
  /* Field: File: File UUID */
  $handler->display->display_options['fields']['uuid_1']['id'] = 'uuid_1';
  $handler->display->display_options['fields']['uuid_1']['table'] = 'file_managed';
  $handler->display->display_options['fields']['uuid_1']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid_1']['relationship'] = 'field_s3_file_upload_fid';
  $handler->display->display_options['fields']['uuid_1']['label'] = 'file_uuid';
  /* Field: Field: File Format */
  $handler->display->display_options['fields']['field_file_format']['id'] = 'field_file_format';
  $handler->display->display_options['fields']['field_file_format']['table'] = 'field_data_field_file_format';
  $handler->display->display_options['fields']['field_file_format']['field'] = 'field_file_format';
  $handler->display->display_options['fields']['field_file_format']['relationship'] = 'field_file_resource_value';
  $handler->display->display_options['fields']['field_file_format']['label'] = 'format';
  $handler->display->display_options['fields']['field_file_format']['type'] = 'i18n_list_default';
  $handler->display->display_options['fields']['field_file_format']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 1,
    'skip_empty_values' => 1,
  );
  /* Field: File: Size */
  $handler->display->display_options['fields']['filesize']['id'] = 'filesize';
  $handler->display->display_options['fields']['filesize']['table'] = 'file_managed';
  $handler->display->display_options['fields']['filesize']['field'] = 'filesize';
  $handler->display->display_options['fields']['filesize']['relationship'] = 'field_s3_file_upload_fid';
  $handler->display->display_options['fields']['filesize']['label'] = 'filesize';
  /* Field: Field collection item: S3 File Upload */
  $handler->display->display_options['fields']['field_s3_file_upload']['id'] = 'field_s3_file_upload';
  $handler->display->display_options['fields']['field_s3_file_upload']['table'] = 'field_data_field_s3_file_upload';
  $handler->display->display_options['fields']['field_s3_file_upload']['field'] = 'field_s3_file_upload';
  $handler->display->display_options['fields']['field_s3_file_upload']['relationship'] = 'field_file_resource_value';
  $handler->display->display_options['fields']['field_s3_file_upload']['label'] = 's3_file_signed';
  $handler->display->display_options['fields']['field_s3_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s3_file_upload']['type'] = 'file_url_plain';
  /* Field: Field collection item: Narrator */
  $handler->display->display_options['fields']['field_performer']['id'] = 'field_performer';
  $handler->display->display_options['fields']['field_performer']['table'] = 'field_data_field_performer';
  $handler->display->display_options['fields']['field_performer']['field'] = 'field_performer';
  $handler->display->display_options['fields']['field_performer']['relationship'] = 'field_file_resource_value';
  $handler->display->display_options['fields']['field_performer']['label'] = 'narrator';
  $handler->display->display_options['fields']['field_performer']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 1,
    'skip_empty_values' => 1,
    'skip_text_format' => 1,
  );
  $handler->display->display_options['fields']['field_performer']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
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
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['nid']['expose']['operator_id'] = 'nid_op';
  $handler->display->display_options['filters']['nid']['expose']['label'] = 'nid';
  $handler->display->display_options['filters']['nid']['expose']['operator'] = 'nid_op';
  $handler->display->display_options['filters']['nid']['expose']['identifier'] = 'nid';
  $handler->display->display_options['filters']['nid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['nid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
    8 => 0,
    11 => 0,
    12 => 0,
  );
  $handler->display->display_options['path'] = 's3_files';
  $export['api_service_node_repo_item'] = $view;

  return $export;
}
