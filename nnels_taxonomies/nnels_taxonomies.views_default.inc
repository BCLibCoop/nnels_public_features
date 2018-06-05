<?php
/**
 * @file
 * nnels_taxonomies.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function nnels_taxonomies_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'list_export_by_term';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'List Export - By Term';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'By Term';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '40';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '40, 100, 500';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'field_dc_relation_term_value' => 'field_dc_relation_term_value',
    'title' => 'title',
    'field_dc_creator' => 'field_dc_creator',
    'field_genre' => 'field_genre',
    'created' => 'created',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'created';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
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
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dc_creator' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_genre' => array(
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Creator */
  $handler->display->display_options['fields']['field_dc_creator']['id'] = 'field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['table'] = 'field_data_field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['field'] = 'field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['delta_offset'] = '0';
  /* Field: Content: Genre */
  $handler->display->display_options['fields']['field_genre']['id'] = 'field_genre';
  $handler->display->display_options['fields']['field_genre']['table'] = 'field_data_field_genre';
  $handler->display->display_options['fields']['field_genre']['field'] = 'field_genre';
  $handler->display->display_options['fields']['field_genre']['delta_offset'] = '0';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  /* Sort criterion: Content: Title (title_field) */
  $handler->display->display_options['sorts']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['sorts']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['sorts']['title_field_value']['field'] = 'title_field_value';
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/content/cals/export-by-term';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'admin/content/cals/export-by-term/export';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );

  /* Display: NNELS Collections Operations */
  $handler = $view->new_display('page', 'NNELS Collections Operations', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Collections Ops';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '5';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '30, 50, 100';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
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
  /* Field: Add to Collection */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['ui_name'] = 'Add to Collection';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 1,
      'label' => 'Add to Collection',
      'settings' => array(
        'show_all_tokens' => 0,
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
  /* Field: Field collection item: Value (term) */
  $handler->display->display_options['fields']['field_dc_relation_term_value']['id'] = 'field_dc_relation_term_value';
  $handler->display->display_options['fields']['field_dc_relation_term_value']['table'] = 'field_data_field_dc_relation_term_value';
  $handler->display->display_options['fields']['field_dc_relation_term_value']['field'] = 'field_dc_relation_term_value';
  $handler->display->display_options['fields']['field_dc_relation_term_value']['relationship'] = 'field_dc_relation_value';
  $handler->display->display_options['fields']['field_dc_relation_term_value']['label'] = 'Collection';
  $handler->display->display_options['fields']['field_dc_relation_term_value']['settings'] = array(
    'view_mode' => 'default',
    'links' => 1,
    'use_content_language' => 1,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Creator */
  $handler->display->display_options['fields']['field_dc_creator']['id'] = 'field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['table'] = 'field_data_field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['field'] = 'field_dc_creator';
  $handler->display->display_options['fields']['field_dc_creator']['delta_offset'] = '0';
  /* Field: Content: Genre */
  $handler->display->display_options['fields']['field_genre']['id'] = 'field_genre';
  $handler->display->display_options['fields']['field_genre']['table'] = 'field_data_field_genre';
  $handler->display->display_options['fields']['field_genre']['field'] = 'field_genre';
  $handler->display->display_options['fields']['field_genre']['delta_offset'] = '0';
  /* Field: Content: Subject */
  $handler->display->display_options['fields']['field_subject']['id'] = 'field_subject';
  $handler->display->display_options['fields']['field_subject']['table'] = 'field_data_field_subject';
  $handler->display->display_options['fields']['field_subject']['field'] = 'field_subject';
  $handler->display->display_options['fields']['field_subject']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_subject']['multi_type'] = 'ul';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'search_api_facetapi_YEAR';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
    3 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'repository_item' => 'repository_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field collection item: DC Relation Qualifiers (field_dc_relation_qualifiers) */
  $handler->display->display_options['filters']['field_dc_relation_qualifiers_value']['id'] = 'field_dc_relation_qualifiers_value';
  $handler->display->display_options['filters']['field_dc_relation_qualifiers_value']['table'] = 'field_data_field_dc_relation_qualifiers';
  $handler->display->display_options['filters']['field_dc_relation_qualifiers_value']['field'] = 'field_dc_relation_qualifiers_value';
  $handler->display->display_options['filters']['field_dc_relation_qualifiers_value']['relationship'] = 'field_dc_relation_value';
  $handler->display->display_options['filters']['field_dc_relation_qualifiers_value']['group'] = 1;
  $handler->display->display_options['filters']['field_dc_relation_qualifiers_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_dc_relation_qualifiers_value']['expose']['operator_id'] = 'field_dc_relation_qualifiers_value_op';
  $handler->display->display_options['filters']['field_dc_relation_qualifiers_value']['expose']['label'] = 'DC Relation Qualifiers (field_dc_relation_qualifiers)';
  $handler->display->display_options['filters']['field_dc_relation_qualifiers_value']['expose']['operator'] = 'field_dc_relation_qualifiers_value_op';
  $handler->display->display_options['filters']['field_dc_relation_qualifiers_value']['expose']['identifier'] = 'field_dc_relation_qualifiers_value';
  $handler->display->display_options['filters']['field_dc_relation_qualifiers_value']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_dc_relation_qualifiers_value']['group_info']['label'] = 'Collection Member?';
  $handler->display->display_options['filters']['field_dc_relation_qualifiers_value']['group_info']['description'] = 'Whether an item is a member of a Collection or not';
  $handler->display->display_options['filters']['field_dc_relation_qualifiers_value']['group_info']['identifier'] = 'field_dc_relation_qualifiers_value';
  $handler->display->display_options['filters']['field_dc_relation_qualifiers_value']['group_info']['default_group'] = '2';
  $handler->display->display_options['filters']['field_dc_relation_qualifiers_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Yes',
      'operator' => 'or',
      'value' => array(
        'IsPartOf' => 'IsPartOf',
      ),
    ),
    2 => array(
      'title' => 'No',
      'operator' => 'empty',
      'value' => array(),
    ),
  );
  /* Filter criterion: Collection Dropdown */
  $handler->display->display_options['filters']['field_dc_relation_term_value_tid_1']['id'] = 'field_dc_relation_term_value_tid_1';
  $handler->display->display_options['filters']['field_dc_relation_term_value_tid_1']['table'] = 'field_data_field_dc_relation_term_value';
  $handler->display->display_options['filters']['field_dc_relation_term_value_tid_1']['field'] = 'field_dc_relation_term_value_tid';
  $handler->display->display_options['filters']['field_dc_relation_term_value_tid_1']['relationship'] = 'field_dc_relation_value';
  $handler->display->display_options['filters']['field_dc_relation_term_value_tid_1']['ui_name'] = 'Collection Dropdown';
  $handler->display->display_options['filters']['field_dc_relation_term_value_tid_1']['group'] = 1;
  $handler->display->display_options['filters']['field_dc_relation_term_value_tid_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_dc_relation_term_value_tid_1']['expose']['operator_id'] = 'field_dc_relation_term_value_tid_1_op';
  $handler->display->display_options['filters']['field_dc_relation_term_value_tid_1']['expose']['label'] = 'Collection Name';
  $handler->display->display_options['filters']['field_dc_relation_term_value_tid_1']['expose']['operator'] = 'field_dc_relation_term_value_tid_1_op';
  $handler->display->display_options['filters']['field_dc_relation_term_value_tid_1']['expose']['identifier'] = 'field_dc_relation_term_value_tid_1';
  $handler->display->display_options['filters']['field_dc_relation_term_value_tid_1']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_dc_relation_term_value_tid_1']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_dc_relation_term_value_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_dc_relation_term_value_tid_1']['vocabulary'] = 'relations';
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
  /* Filter criterion: Content: Genre (field_genre) */
  $handler->display->display_options['filters']['field_genre_tid']['id'] = 'field_genre_tid';
  $handler->display->display_options['filters']['field_genre_tid']['table'] = 'field_data_field_genre';
  $handler->display->display_options['filters']['field_genre_tid']['field'] = 'field_genre_tid';
  $handler->display->display_options['filters']['field_genre_tid']['group'] = 2;
  $handler->display->display_options['filters']['field_genre_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_genre_tid']['expose']['operator_id'] = 'field_genre_tid_op';
  $handler->display->display_options['filters']['field_genre_tid']['expose']['label'] = 'Genre Browse';
  $handler->display->display_options['filters']['field_genre_tid']['expose']['operator'] = 'field_genre_tid_op';
  $handler->display->display_options['filters']['field_genre_tid']['expose']['identifier'] = 'field_genre_tid';
  $handler->display->display_options['filters']['field_genre_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_genre_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_genre_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_genre_tid']['vocabulary'] = 'genre';
  /* Filter criterion: Subject autocomplete */
  $handler->display->display_options['filters']['field_subject_tid_1']['id'] = 'field_subject_tid_1';
  $handler->display->display_options['filters']['field_subject_tid_1']['table'] = 'field_data_field_subject';
  $handler->display->display_options['filters']['field_subject_tid_1']['field'] = 'field_subject_tid';
  $handler->display->display_options['filters']['field_subject_tid_1']['ui_name'] = 'Subject autocomplete';
  $handler->display->display_options['filters']['field_subject_tid_1']['value'] = '';
  $handler->display->display_options['filters']['field_subject_tid_1']['group'] = 2;
  $handler->display->display_options['filters']['field_subject_tid_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_subject_tid_1']['expose']['operator_id'] = 'field_subject_tid_1_op';
  $handler->display->display_options['filters']['field_subject_tid_1']['expose']['label'] = 'Subject Search';
  $handler->display->display_options['filters']['field_subject_tid_1']['expose']['operator'] = 'field_subject_tid_1_op';
  $handler->display->display_options['filters']['field_subject_tid_1']['expose']['identifier'] = 'field_subject_tid_1';
  $handler->display->display_options['filters']['field_subject_tid_1']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_subject_tid_1']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_subject_tid_1']['vocabulary'] = 'subject';
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
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 3;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title Search';
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
  /* Filter criterion: Collection Name search */
  $handler->display->display_options['filters']['field_dc_relation_term_value_tid']['id'] = 'field_dc_relation_term_value_tid';
  $handler->display->display_options['filters']['field_dc_relation_term_value_tid']['table'] = 'field_data_field_dc_relation_term_value';
  $handler->display->display_options['filters']['field_dc_relation_term_value_tid']['field'] = 'field_dc_relation_term_value_tid';
  $handler->display->display_options['filters']['field_dc_relation_term_value_tid']['relationship'] = 'field_dc_relation_value';
  $handler->display->display_options['filters']['field_dc_relation_term_value_tid']['ui_name'] = 'Collection Name search';
  $handler->display->display_options['filters']['field_dc_relation_term_value_tid']['value'] = '';
  $handler->display->display_options['filters']['field_dc_relation_term_value_tid']['group'] = 3;
  $handler->display->display_options['filters']['field_dc_relation_term_value_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_dc_relation_term_value_tid']['expose']['operator_id'] = 'field_dc_relation_term_value_tid_op';
  $handler->display->display_options['filters']['field_dc_relation_term_value_tid']['expose']['label'] = 'Search Collections';
  $handler->display->display_options['filters']['field_dc_relation_term_value_tid']['expose']['description'] = 'Free text';
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
  /* Filter criterion: Content: Body (body:summary) */
  $handler->display->display_options['filters']['body_summary']['id'] = 'body_summary';
  $handler->display->display_options['filters']['body_summary']['table'] = 'field_data_body';
  $handler->display->display_options['filters']['body_summary']['field'] = 'body_summary';
  $handler->display->display_options['filters']['body_summary']['operator'] = 'contains';
  $handler->display->display_options['filters']['body_summary']['group'] = 3;
  $handler->display->display_options['filters']['body_summary']['exposed'] = TRUE;
  $handler->display->display_options['filters']['body_summary']['expose']['operator_id'] = 'body_summary_op';
  $handler->display->display_options['filters']['body_summary']['expose']['label'] = 'Abstract contains';
  $handler->display->display_options['filters']['body_summary']['expose']['description'] = 'Free text';
  $handler->display->display_options['filters']['body_summary']['expose']['operator'] = 'body_summary_op';
  $handler->display->display_options['filters']['body_summary']['expose']['identifier'] = 'body_summary';
  $handler->display->display_options['filters']['body_summary']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['path'] = 'admin/taxonomy/collections-ops';
  $export['list_export_by_term'] = $view;

  $view = new view();
  $view->name = 'taxonomy_normalizer';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'taxonomy normalizer';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'taxonomy normalizer';
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
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Listed below are genre & subjects that end with periods.';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Field: Bulk operations: Taxonomy term */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_taxonomy_term';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::_cals_normalize_taxonomy_terms' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy vocabulary: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  /* Field: Taxonomy vocabulary: Vocabulary ID */
  $handler->display->display_options['fields']['vid']['id'] = 'vid';
  $handler->display->display_options['fields']['vid']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['fields']['vid']['field'] = 'vid';
  $handler->display->display_options['fields']['vid']['separator'] = '';
  /* Field: Taxonomy term: Term edit link */
  $handler->display->display_options['fields']['edit_term']['id'] = 'edit_term';
  $handler->display->display_options['fields']['edit_term']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['edit_term']['field'] = 'edit_term';
  $handler->display->display_options['fields']['edit_term']['label'] = '';
  $handler->display->display_options['fields']['edit_term']['element_label_colon'] = FALSE;
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* Sort criterion: Taxonomy term: Term ID */
  $handler->display->display_options['sorts']['tid']['id'] = 'tid';
  $handler->display->display_options['sorts']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['tid']['field'] = 'tid';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'genre' => 'genre',
    'subject' => 'subject',
  );
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['operator'] = 'ends';
  $handler->display->display_options['filters']['name']['value'] = '.';
  /* Filter criterion: Taxonomy term: Vocabulary */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    4 => '4',
    3 => '3',
  );
  $handler->display->display_options['filters']['vid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['vid']['expose']['operator_id'] = 'vid_op';
  $handler->display->display_options['filters']['vid']['expose']['label'] = 'Vocabulary';
  $handler->display->display_options['filters']['vid']['expose']['operator'] = 'vid_op';
  $handler->display->display_options['filters']['vid']['expose']['identifier'] = 'vid';
  $handler->display->display_options['filters']['vid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['vid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['vid']['expose']['reduce'] = TRUE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/content/cals/repo-items/normalize/taxonomy-terms';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Taxonomy Terms';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-nnels-admin';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['taxonomy_normalizer'] = $view;

  $view = new view();
  $view->name = 'taxonomy_term_browse';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Taxonomy Term Browse';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Browse By Genre';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'genre' => 'genre',
  );

  /* Display: Page - Genre */
  $handler = $view->new_display('page', 'Page - Genre', 'page');
  $handler->display->display_options['path'] = 'browse-by-genre';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Browse by Genre';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['taxonomy_term_browse'] = $view;

  $view = new view();
  $view->name = 'taxonomy_term_count';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Taxonomy Term Count';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Taxonomy Term Count';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'name' => 'name',
    'nid' => 'nid',
    'tid' => 'tid',
    'name_1' => 'name_1',
  );
  $handler->display->display_options['style_options']['default'] = 'nid';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
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
    'tid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Taxonomy term: Content with term */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'taxonomy_index';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  /* Field: Bulk operations: Taxonomy term */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_taxonomy_term';
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
      'label' => 'Edit Term Names',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'name' => 'name',
        ),
      ),
    ),
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['max_length'] = '50';
  $handler->display->display_options['fields']['name']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = 'NIDs';
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Taxonomy vocabulary: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['label'] = 'Vocab';
  /* Filter criterion: Taxonomy term: Vocabulary */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    4 => '4',
    16 => '16',
    3 => '3',
  );
  $handler->display->display_options['filters']['vid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['vid']['expose']['operator_id'] = 'vid_op';
  $handler->display->display_options['filters']['vid']['expose']['label'] = 'Vocabulary';
  $handler->display->display_options['filters']['vid']['expose']['operator'] = 'vid_op';
  $handler->display->display_options['filters']['vid']['expose']['identifier'] = 'vid';
  $handler->display->display_options['filters']['vid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['vid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['vid']['expose']['reduce'] = TRUE;
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['operator'] = 'contains';
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Search term';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
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
  /* Filter criterion: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['relationship'] = 'nid';
  $handler->display->display_options['filters']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['filters']['nid']['operator'] = '<=';
  $handler->display->display_options['filters']['nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['nid']['expose']['operator_id'] = 'nid_op';
  $handler->display->display_options['filters']['nid']['expose']['label'] = 'Count';
  $handler->display->display_options['filters']['nid']['expose']['use_operator'] = TRUE;
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
  );

  /* Display: Taxa Counts */
  $handler = $view->new_display('page', 'Taxa Counts', 'page');
  $handler->display->display_options['path'] = 'admin/taxonomy-term-count';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Taxonomy Term Count';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-nnels-admin';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'admin/taxonomy-term-count/export';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $export['taxonomy_term_count'] = $view;

  return $export;
}
