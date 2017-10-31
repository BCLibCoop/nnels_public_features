<?php
/**
 * @file
 * marcxml_export_components.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function marcxml_export_components_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'cals_marc_xml_file_builder';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'CALS MARC XML File Builder';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'CALS records with 856 Tags';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access content overview';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'counter' => 'counter',
    'nid' => 'nid',
    'title' => 'title',
    'field_nnels_856_tag' => 'field_nnels_856_tag',
    'field_xml_string' => 'field_xml_string',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
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
    'field_nnels_856_tag' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_xml_string' => array(
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
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::_cals_importer_generate_marcxml_files_all_records' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
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
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: XML String */
  $handler->display->display_options['fields']['field_xml_string']['id'] = 'field_xml_string';
  $handler->display->display_options['fields']['field_xml_string']['table'] = 'field_data_field_xml_string';
  $handler->display->display_options['fields']['field_xml_string']['field'] = 'field_xml_string';
  $handler->display->display_options['fields']['field_xml_string']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['field_xml_string']['alter']['trim'] = TRUE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
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
  /* Filter criterion: Content: NNELS 856 tag (field_nnels_856_tag) */
  $handler->display->display_options['filters']['field_nnels_856_tag_value']['id'] = 'field_nnels_856_tag_value';
  $handler->display->display_options['filters']['field_nnels_856_tag_value']['table'] = 'field_data_field_nnels_856_tag';
  $handler->display->display_options['filters']['field_nnels_856_tag_value']['field'] = 'field_nnels_856_tag_value';
  $handler->display->display_options['filters']['field_nnels_856_tag_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Field: XML String (field_xml_string) */
  $handler->display->display_options['filters']['field_xml_string_value']['id'] = 'field_xml_string_value';
  $handler->display->display_options['filters']['field_xml_string_value']['table'] = 'field_data_field_xml_string';
  $handler->display->display_options['filters']['field_xml_string_value']['field'] = 'field_xml_string_value';
  $handler->display->display_options['filters']['field_xml_string_value']['operator'] = 'not empty';

  /* Display: Page - 856 Tags */
  $handler = $view->new_display('page', 'Page - 856 Tags', 'page');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Please see the reciprocal view here before you generate the final XML file: <a href="/admin/content/cals/repo-items/marc-xml-no-856-tags">MARC Files - no 856 tags<a/>.';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['path'] = 'admin/content/cals/repo-items/marc-xml-file-builder';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'MARC XML File Builder';
  $handler->display->display_options['menu']['name'] = 'menu-nnels-admin';

  /* Display: MARC Files - NO 856 tag */
  $handler = $view->new_display('page', 'MARC Files - NO 856 tag', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'CALS records - no 856 Tags';
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
      'label' => 'Add 856 tag to MARC String',
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
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: NNELS 856 tag */
  $handler->display->display_options['fields']['field_nnels_856_tag']['id'] = 'field_nnels_856_tag';
  $handler->display->display_options['fields']['field_nnels_856_tag']['table'] = 'field_data_field_nnels_856_tag';
  $handler->display->display_options['fields']['field_nnels_856_tag']['field'] = 'field_nnels_856_tag';
  /* Field: Field: XML String */
  $handler->display->display_options['fields']['field_xml_string']['id'] = 'field_xml_string';
  $handler->display->display_options['fields']['field_xml_string']['table'] = 'field_data_field_xml_string';
  $handler->display->display_options['fields']['field_xml_string']['field'] = 'field_xml_string';
  $handler->display->display_options['fields']['field_xml_string']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['field_xml_string']['alter']['trim'] = TRUE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'repository_item' => 'repository_item',
  );
  /* Filter criterion: Content: NNELS 856 tag (field_nnels_856_tag) */
  $handler->display->display_options['filters']['field_nnels_856_tag_value']['id'] = 'field_nnels_856_tag_value';
  $handler->display->display_options['filters']['field_nnels_856_tag_value']['table'] = 'field_data_field_nnels_856_tag';
  $handler->display->display_options['filters']['field_nnels_856_tag_value']['field'] = 'field_nnels_856_tag_value';
  $handler->display->display_options['filters']['field_nnels_856_tag_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_nnels_856_tag_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Field: XML String (field_xml_string) */
  $handler->display->display_options['filters']['field_xml_string_value']['id'] = 'field_xml_string_value';
  $handler->display->display_options['filters']['field_xml_string_value']['table'] = 'field_data_field_xml_string';
  $handler->display->display_options['filters']['field_xml_string_value']['field'] = 'field_xml_string_value';
  $handler->display->display_options['filters']['field_xml_string_value']['operator'] = 'not empty';
  $handler->display->display_options['path'] = 'admin/content/cals/repo-items/marc-xml-no-856-tags';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'MARC XML - No 856 tags';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-nnels-admin';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['cals_marc_xml_file_builder'] = $view;

  $view = new view();
  $view->name = 'field_collection_view_marc_subfields';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'field collection view marc subfields';
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
  /* Relationship: Field collection item: Entity with the Marc Subfield (field_marc_subfield_collection) */
  $handler->display->display_options['relationships']['field_marc_subfield_collection_marc_tag']['id'] = 'field_marc_subfield_collection_marc_tag';
  $handler->display->display_options['relationships']['field_marc_subfield_collection_marc_tag']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_marc_subfield_collection_marc_tag']['field'] = 'field_marc_subfield_collection_marc_tag';
  $handler->display->display_options['relationships']['field_marc_subfield_collection_marc_tag']['required'] = TRUE;
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
  /* Field: MARC tag: ind1 (editable) */
  $handler->display->display_options['fields']['field_indc1_editable']['id'] = 'field_indc1_editable';
  $handler->display->display_options['fields']['field_indc1_editable']['table'] = 'field_data_field_indc1';
  $handler->display->display_options['fields']['field_indc1_editable']['field'] = 'field_indc1_editable';
  $handler->display->display_options['fields']['field_indc1_editable']['type'] = 'editable';
  $handler->display->display_options['fields']['field_indc1_editable']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'text_default',
  );
  $handler->display->display_options['fields']['field_indc1_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_indc1_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_indc1_editable']['suppress_description'] = 0;
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
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'item_id' => 'item_id',
    'field_path' => 'field_path',
    'host_entity_id' => 'host_entity_id',
    'host_entity_path' => 'host_entity_path',
    'host_entity_type' => 'host_entity_type',
    'field_subfield_code' => 'field_subfield_code',
    'field_include_in_export' => 'field_include_in_export',
    'field_export_type' => 'field_export_type',
    'field_source_value' => 'field_source_value',
    'field_drupal_fieldname' => 'field_drupal_fieldname',
    'field_static_value' => 'field_static_value',
    'field_repeatable_editable' => 'field_repeatable_editable',
    'field_description' => 'field_description',
    'nothing' => 'nothing',
    'nothing_1' => 'nothing_1',
    'nothing_2' => 'nothing_2',
    'field_url_external_1' => 'field_url_external_1',
    'field_url_external' => 'field_url_external',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'item_id' => array(
      'sortable' => 0,
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
    'field_subfield_code' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_include_in_export' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_export_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_source_value' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_drupal_fieldname' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_static_value' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_repeatable_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_description' => array(
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
    'field_url_external_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_url_external' => array(
      'sortable' => 0,
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
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<span class="add-new-link">[nothing_2]</span>';
  $handler->display->display_options['footer']['area']['format'] = 'block_text';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Field: Field: Subfield Code */
  $handler->display->display_options['fields']['field_subfield_code']['id'] = 'field_subfield_code';
  $handler->display->display_options['fields']['field_subfield_code']['table'] = 'field_data_field_subfield_code';
  $handler->display->display_options['fields']['field_subfield_code']['field'] = 'field_subfield_code';
  /* Field: Field: Include in Export */
  $handler->display->display_options['fields']['field_include_in_export']['id'] = 'field_include_in_export';
  $handler->display->display_options['fields']['field_include_in_export']['table'] = 'field_data_field_include_in_export';
  $handler->display->display_options['fields']['field_include_in_export']['field'] = 'field_include_in_export';
  /* Field: Field: Export Type */
  $handler->display->display_options['fields']['field_export_type']['id'] = 'field_export_type';
  $handler->display->display_options['fields']['field_export_type']['table'] = 'field_data_field_export_type';
  $handler->display->display_options['fields']['field_export_type']['field'] = 'field_export_type';
  $handler->display->display_options['fields']['field_export_type']['exclude'] = TRUE;
  /* Field: Field: Source Value */
  $handler->display->display_options['fields']['field_source_value']['id'] = 'field_source_value';
  $handler->display->display_options['fields']['field_source_value']['table'] = 'field_data_field_source_value';
  $handler->display->display_options['fields']['field_source_value']['field'] = 'field_source_value';
  /* Field: Field collection item: Drupal Fieldname */
  $handler->display->display_options['fields']['field_drupal_fieldname']['id'] = 'field_drupal_fieldname';
  $handler->display->display_options['fields']['field_drupal_fieldname']['table'] = 'field_data_field_drupal_fieldname';
  $handler->display->display_options['fields']['field_drupal_fieldname']['field'] = 'field_drupal_fieldname';
  $handler->display->display_options['fields']['field_drupal_fieldname']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_drupal_fieldname']['multi_type'] = 'ul';
  /* Field: Field collection item: Static Value */
  $handler->display->display_options['fields']['field_static_value']['id'] = 'field_static_value';
  $handler->display->display_options['fields']['field_static_value']['table'] = 'field_data_field_static_value';
  $handler->display->display_options['fields']['field_static_value']['field'] = 'field_static_value';
  $handler->display->display_options['fields']['field_static_value']['hide_empty'] = TRUE;
  /* Field: Field collection item: Repeatable? (editable) */
  $handler->display->display_options['fields']['field_repeatable_editable']['id'] = 'field_repeatable_editable';
  $handler->display->display_options['fields']['field_repeatable_editable']['table'] = 'field_data_field_repeatable';
  $handler->display->display_options['fields']['field_repeatable_editable']['field'] = 'field_repeatable_editable';
  $handler->display->display_options['fields']['field_repeatable_editable']['label'] = 'Repeatable?';
  $handler->display->display_options['fields']['field_repeatable_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_repeatable_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_repeatable_editable']['suppress_description'] = 0;
  /* Field: Field: Notes */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_description']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['field_description']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_description']['alter']['trim'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '[field_path]/[item_id]/edit?destination=admin/content/cals/marc-tags-entity-view';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Delete';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = '[field_path]/[item_id]/delete?destination=admin/content/cals/marc-tags-entity-view';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = 'Add New';
  $handler->display->display_options['fields']['nothing_2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['path'] = '[field_path]/add/[host_entity_type]/[host_entity_id]?destination=admin/content/cals/marc-tags-entity-view';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
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
  /* Contextual filter: MARC tag: Id */
  $handler->display->display_options['arguments']['id']['id'] = 'id';
  $handler->display->display_options['arguments']['id']['table'] = 'eck_marc_tag';
  $handler->display->display_options['arguments']['id']['field'] = 'id';
  $handler->display->display_options['arguments']['id']['relationship'] = 'field_marc_subfield_collection_marc_tag';
  $handler->display->display_options['arguments']['id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['id']['summary_options']['items_per_page'] = '25';
  $export['field_collection_view_marc_subfields'] = $view;

  $view = new view();
  $view->name = 'field_collection_view_marc_subfields_vbo';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'field collection view marc subfields vbo';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'item_id' => 'item_id',
    'field_resume_job_title' => 'field_resume_job_title',
    'field_resume_time_period' => 'field_resume_time_period',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'item_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_resume_job_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_resume_time_period' => array(
      'align' => '',
      'separator' => '',
    ),
  );
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '[nothing_2]';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  /* Relationship: Field collection item: Entity with the Marc Subfield (field_marc_subfield_collection) */
  $handler->display->display_options['relationships']['field_marc_subfield_collection_marc_tag']['id'] = 'field_marc_subfield_collection_marc_tag';
  $handler->display->display_options['relationships']['field_marc_subfield_collection_marc_tag']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_marc_subfield_collection_marc_tag']['field'] = 'field_marc_subfield_collection_marc_tag';
  $handler->display->display_options['relationships']['field_marc_subfield_collection_marc_tag']['required'] = TRUE;
  /* Field: Bulk operations: Field collection item */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_field_collection_item';
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
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Update Export Type',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'field_marc_subfield_collection::field_export_type' => 'field_marc_subfield_collection::field_export_type',
        ),
      ),
    ),
  );
  /* Field: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
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
  /* Field: MARC tag: ind1 */
  $handler->display->display_options['fields']['field_indc1']['id'] = 'field_indc1';
  $handler->display->display_options['fields']['field_indc1']['table'] = 'field_data_field_indc1';
  $handler->display->display_options['fields']['field_indc1']['field'] = 'field_indc1';
  $handler->display->display_options['fields']['field_indc1']['relationship'] = 'field_marc_subfield_collection_marc_tag';
  $handler->display->display_options['fields']['field_indc1']['exclude'] = TRUE;
  /* Field: MARC tag: ind2 */
  $handler->display->display_options['fields']['field_ind2']['id'] = 'field_ind2';
  $handler->display->display_options['fields']['field_ind2']['table'] = 'field_data_field_ind2';
  $handler->display->display_options['fields']['field_ind2']['field'] = 'field_ind2';
  $handler->display->display_options['fields']['field_ind2']['relationship'] = 'field_marc_subfield_collection_marc_tag';
  $handler->display->display_options['fields']['field_ind2']['exclude'] = TRUE;
  /* Field: MARC tag: Code */
  $handler->display->display_options['fields']['field_code']['id'] = 'field_code';
  $handler->display->display_options['fields']['field_code']['table'] = 'field_data_field_code';
  $handler->display->display_options['fields']['field_code']['field'] = 'field_code';
  $handler->display->display_options['fields']['field_code']['relationship'] = 'field_marc_subfield_collection_marc_tag';
  $handler->display->display_options['fields']['field_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_code']['element_type'] = 'strong';
  /* Field: Field: Marc Tag */
  $handler->display->display_options['fields']['field_marc_tag']['id'] = 'field_marc_tag';
  $handler->display->display_options['fields']['field_marc_tag']['table'] = 'field_data_field_marc_tag';
  $handler->display->display_options['fields']['field_marc_tag']['field'] = 'field_marc_tag';
  $handler->display->display_options['fields']['field_marc_tag']['relationship'] = 'field_marc_subfield_collection_marc_tag';
  $handler->display->display_options['fields']['field_marc_tag']['element_type'] = 'strong';
  /* Field: Field: Subfield Code (editable) */
  $handler->display->display_options['fields']['field_subfield_code_editable']['id'] = 'field_subfield_code_editable';
  $handler->display->display_options['fields']['field_subfield_code_editable']['table'] = 'field_data_field_subfield_code';
  $handler->display->display_options['fields']['field_subfield_code_editable']['field'] = 'field_subfield_code_editable';
  $handler->display->display_options['fields']['field_subfield_code_editable']['label'] = 'Subfield Code';
  $handler->display->display_options['fields']['field_subfield_code_editable']['element_type'] = 'strong';
  $handler->display->display_options['fields']['field_subfield_code_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_subfield_code_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_subfield_code_editable']['suppress_description'] = 0;
  /* Field: Field: Include in Export (editable) */
  $handler->display->display_options['fields']['field_include_in_export_editable']['id'] = 'field_include_in_export_editable';
  $handler->display->display_options['fields']['field_include_in_export_editable']['table'] = 'field_data_field_include_in_export';
  $handler->display->display_options['fields']['field_include_in_export_editable']['field'] = 'field_include_in_export_editable';
  $handler->display->display_options['fields']['field_include_in_export_editable']['label'] = 'Include in Export';
  $handler->display->display_options['fields']['field_include_in_export_editable']['type'] = 'editable';
  $handler->display->display_options['fields']['field_include_in_export_editable']['settings'] = array(
    'click_to_edit' => 1,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  $handler->display->display_options['fields']['field_include_in_export_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_include_in_export_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_include_in_export_editable']['suppress_description'] = 0;
  /* Field: Field: Source Value (editable) */
  $handler->display->display_options['fields']['field_source_value_editable']['id'] = 'field_source_value_editable';
  $handler->display->display_options['fields']['field_source_value_editable']['table'] = 'field_data_field_source_value';
  $handler->display->display_options['fields']['field_source_value_editable']['field'] = 'field_source_value_editable';
  $handler->display->display_options['fields']['field_source_value_editable']['label'] = 'Source Value';
  $handler->display->display_options['fields']['field_source_value_editable']['type'] = 'editable';
  $handler->display->display_options['fields']['field_source_value_editable']['settings'] = array(
    'click_to_edit' => 1,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  $handler->display->display_options['fields']['field_source_value_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_source_value_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_source_value_editable']['suppress_description'] = 0;
  /* Field: Field: Export Type (editable) */
  $handler->display->display_options['fields']['field_export_type_editable']['id'] = 'field_export_type_editable';
  $handler->display->display_options['fields']['field_export_type_editable']['table'] = 'field_data_field_export_type';
  $handler->display->display_options['fields']['field_export_type_editable']['field'] = 'field_export_type_editable';
  $handler->display->display_options['fields']['field_export_type_editable']['type'] = 'editable';
  $handler->display->display_options['fields']['field_export_type_editable']['settings'] = array(
    'click_to_edit' => 1,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  $handler->display->display_options['fields']['field_export_type_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_export_type_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_export_type_editable']['suppress_description'] = 0;
  /* Field: Field collection item: Drupal Fieldname (editable) */
  $handler->display->display_options['fields']['field_drupal_fieldname_editable']['id'] = 'field_drupal_fieldname_editable';
  $handler->display->display_options['fields']['field_drupal_fieldname_editable']['table'] = 'field_data_field_drupal_fieldname';
  $handler->display->display_options['fields']['field_drupal_fieldname_editable']['field'] = 'field_drupal_fieldname_editable';
  $handler->display->display_options['fields']['field_drupal_fieldname_editable']['label'] = 'Drupal Fieldname';
  $handler->display->display_options['fields']['field_drupal_fieldname_editable']['type'] = 'editable';
  $handler->display->display_options['fields']['field_drupal_fieldname_editable']['settings'] = array(
    'click_to_edit' => 1,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'text_default',
  );
  $handler->display->display_options['fields']['field_drupal_fieldname_editable']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_drupal_fieldname_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_drupal_fieldname_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_drupal_fieldname_editable']['suppress_description'] = 0;
  /* Field: Field: Notes (editable) */
  $handler->display->display_options['fields']['field_description_editable']['id'] = 'field_description_editable';
  $handler->display->display_options['fields']['field_description_editable']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description_editable']['field'] = 'field_description_editable';
  $handler->display->display_options['fields']['field_description_editable']['type'] = 'editable';
  $handler->display->display_options['fields']['field_description_editable']['settings'] = array(
    'click_to_edit' => 1,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'text_default',
  );
  $handler->display->display_options['fields']['field_description_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_description_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_description_editable']['suppress_description'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '[field_path]/[item_id]/edit?destination=admin/content/cals/marc-tags-entity-view/subfields';
  /* Field: Field collection item: replicate link */
  $handler->display->display_options['fields']['replicate_ui_link']['id'] = 'replicate_ui_link';
  $handler->display->display_options['fields']['replicate_ui_link']['table'] = 'views_entity_field_collection_item';
  $handler->display->display_options['fields']['replicate_ui_link']['field'] = 'replicate_ui_link';
  $handler->display->display_options['fields']['replicate_ui_link']['label'] = '';
  $handler->display->display_options['fields']['replicate_ui_link']['element_label_colon'] = FALSE;
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
  /* Sort criterion: Field: Marc Tag (field_marc_tag) */
  $handler->display->display_options['sorts']['field_marc_tag_value']['id'] = 'field_marc_tag_value';
  $handler->display->display_options['sorts']['field_marc_tag_value']['table'] = 'field_data_field_marc_tag';
  $handler->display->display_options['sorts']['field_marc_tag_value']['field'] = 'field_marc_tag_value';
  $handler->display->display_options['sorts']['field_marc_tag_value']['relationship'] = 'field_marc_subfield_collection_marc_tag';
  /* Sort criterion: Field: Subfield Code (field_subfield_code) */
  $handler->display->display_options['sorts']['field_subfield_code_value']['id'] = 'field_subfield_code_value';
  $handler->display->display_options['sorts']['field_subfield_code_value']['table'] = 'field_data_field_subfield_code';
  $handler->display->display_options['sorts']['field_subfield_code_value']['field'] = 'field_subfield_code_value';
  /* Filter criterion: Field: Include in Export (field_include_in_export) */
  $handler->display->display_options['filters']['field_include_in_export_value']['id'] = 'field_include_in_export_value';
  $handler->display->display_options['filters']['field_include_in_export_value']['table'] = 'field_data_field_include_in_export';
  $handler->display->display_options['filters']['field_include_in_export_value']['field'] = 'field_include_in_export_value';
  $handler->display->display_options['filters']['field_include_in_export_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_include_in_export_value']['expose']['operator_id'] = 'field_include_in_export_value_op';
  $handler->display->display_options['filters']['field_include_in_export_value']['expose']['label'] = 'Include in Export';
  $handler->display->display_options['filters']['field_include_in_export_value']['expose']['operator'] = 'field_include_in_export_value_op';
  $handler->display->display_options['filters']['field_include_in_export_value']['expose']['identifier'] = 'field_include_in_export_value';
  $handler->display->display_options['filters']['field_include_in_export_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Field: Source Value (field_source_value) */
  $handler->display->display_options['filters']['field_source_value_value']['id'] = 'field_source_value_value';
  $handler->display->display_options['filters']['field_source_value_value']['table'] = 'field_data_field_source_value';
  $handler->display->display_options['filters']['field_source_value_value']['field'] = 'field_source_value_value';
  $handler->display->display_options['filters']['field_source_value_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_source_value_value']['expose']['operator_id'] = 'field_source_value_value_op';
  $handler->display->display_options['filters']['field_source_value_value']['expose']['label'] = 'Source';
  $handler->display->display_options['filters']['field_source_value_value']['expose']['operator'] = 'field_source_value_value_op';
  $handler->display->display_options['filters']['field_source_value_value']['expose']['identifier'] = 'field_source_value_value';
  $handler->display->display_options['filters']['field_source_value_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Field: Subfield Code (field_subfield_code) */
  $handler->display->display_options['filters']['field_subfield_code_value']['id'] = 'field_subfield_code_value';
  $handler->display->display_options['filters']['field_subfield_code_value']['table'] = 'field_data_field_subfield_code';
  $handler->display->display_options['filters']['field_subfield_code_value']['field'] = 'field_subfield_code_value';
  $handler->display->display_options['filters']['field_subfield_code_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_subfield_code_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_subfield_code_value']['expose']['operator_id'] = 'field_subfield_code_value_op';
  $handler->display->display_options['filters']['field_subfield_code_value']['expose']['label'] = 'Subfield Code';
  $handler->display->display_options['filters']['field_subfield_code_value']['expose']['operator'] = 'field_subfield_code_value_op';
  $handler->display->display_options['filters']['field_subfield_code_value']['expose']['identifier'] = 'field_subfield_code_value';
  $handler->display->display_options['filters']['field_subfield_code_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Field: Export Type (field_export_type) */
  $handler->display->display_options['filters']['field_export_type_value']['id'] = 'field_export_type_value';
  $handler->display->display_options['filters']['field_export_type_value']['table'] = 'field_data_field_export_type';
  $handler->display->display_options['filters']['field_export_type_value']['field'] = 'field_export_type_value';
  $handler->display->display_options['filters']['field_export_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_export_type_value']['expose']['operator_id'] = 'field_export_type_value_op';
  $handler->display->display_options['filters']['field_export_type_value']['expose']['label'] = 'Export Type';
  $handler->display->display_options['filters']['field_export_type_value']['expose']['operator'] = 'field_export_type_value_op';
  $handler->display->display_options['filters']['field_export_type_value']['expose']['identifier'] = 'field_export_type_value';
  $handler->display->display_options['filters']['field_export_type_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: MARC tag: Code (field_code) */
  $handler->display->display_options['filters']['field_code_value']['id'] = 'field_code_value';
  $handler->display->display_options['filters']['field_code_value']['table'] = 'field_data_field_code';
  $handler->display->display_options['filters']['field_code_value']['field'] = 'field_code_value';
  $handler->display->display_options['filters']['field_code_value']['relationship'] = 'field_marc_subfield_collection_marc_tag';
  $handler->display->display_options['filters']['field_code_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_code_value']['expose']['operator_id'] = 'field_code_value_op';
  $handler->display->display_options['filters']['field_code_value']['expose']['label'] = 'MARC Tag';
  $handler->display->display_options['filters']['field_code_value']['expose']['operator'] = 'field_code_value_op';
  $handler->display->display_options['filters']['field_code_value']['expose']['identifier'] = 'field_code_value';
  $handler->display->display_options['filters']['field_code_value']['expose']['remember_roles'] = array(
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'admin/content/cals/marc-tags-entity-view/subfields';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'MARC Export Subfields';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-nnels-admin';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['field_collection_view_marc_subfields_vbo'] = $view;

  $view = new view();
  $view->name = 'field_collection_view_marcxml_file_builder';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'field collection view marcxml file builder';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'repo-item available-formats';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer nodes';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'field_access_restrictions' => 'field_access_restrictions',
    'item_id' => 'item_id',
    'field_path' => 'field_path',
    'host_entity_id' => 'host_entity_id',
    'fid' => 'fid',
    'host_entity_path' => 'host_entity_path',
    'host_entity_type' => 'host_entity_type',
    'field_s3_file_upload_1' => 'field_s3_file_upload_1',
    'field_s3_file_upload' => 'field_s3_file_upload',
    'field_running_time' => 'field_running_time',
    'field_performer' => 'field_performer',
    'field_availability_status' => 'field_availability_status',
    'nothing' => 'nothing',
    'nothing_1' => 'nothing_1',
    'nothing_2' => 'nothing_2',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_access_restrictions' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'item_id' => array(
      'sortable' => 0,
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
    'fid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
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
    'field_s3_file_upload_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_s3_file_upload' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_running_time' => array(
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
    'field_availability_status' => array(
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
  /* Relationship: Field collection item: S3 File Upload (field_s3_file_upload:fid) */
  $handler->display->display_options['relationships']['field_s3_file_upload_fid']['id'] = 'field_s3_file_upload_fid';
  $handler->display->display_options['relationships']['field_s3_file_upload_fid']['table'] = 'field_data_field_s3_file_upload';
  $handler->display->display_options['relationships']['field_s3_file_upload_fid']['field'] = 'field_s3_file_upload_fid';
  /* Relationship: Content: Date (field_date) */
  $handler->display->display_options['relationships']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['relationships']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['relationships']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['relationships']['field_date_value']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['relationships']['field_date_value']['delta'] = '-1';
  /* Field: Bulk operations: Field collection item */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_field_collection_item';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::_cals_importer_generate_marcxml_files_search_interface' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Generate MARC XML export file',
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
          'field_file_resource::field_availability_status' => 'field_file_resource::field_availability_status',
        ),
      ),
    ),
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_file_resource_node';
  /* Field: Content: Access Restrictions */
  $handler->display->display_options['fields']['field_access_restrictions']['id'] = 'field_access_restrictions';
  $handler->display->display_options['fields']['field_access_restrictions']['table'] = 'field_data_field_access_restrictions';
  $handler->display->display_options['fields']['field_access_restrictions']['field'] = 'field_access_restrictions';
  $handler->display->display_options['fields']['field_access_restrictions']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['fields']['field_access_restrictions']['label'] = 'Access Rights';
  $handler->display->display_options['fields']['field_access_restrictions']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_access_restrictions']['type'] = 'list_key';
  /* Field: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['label'] = 'Item ID';
  $handler->display->display_options['fields']['item_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['item_id']['alter']['text'] = '<a href="../../../../field-collection/field-file-resource/[item_id]" target="_blank">View item [item_id]</a>';
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
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'edit' => 'Edit',
    'delete' => 'Delete',
    'add' => 'Add',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_date']['delta_offset'] = '0';
  /* Field: Field: File Format */
  $handler->display->display_options['fields']['field_file_format']['id'] = 'field_file_format';
  $handler->display->display_options['fields']['field_file_format']['table'] = 'field_data_field_file_format';
  $handler->display->display_options['fields']['field_file_format']['field'] = 'field_file_format';
  /* Field: Field collection item: S3 File Upload */
  $handler->display->display_options['fields']['field_s3_file_upload']['id'] = 'field_s3_file_upload';
  $handler->display->display_options['fields']['field_s3_file_upload']['table'] = 'field_data_field_s3_file_upload';
  $handler->display->display_options['fields']['field_s3_file_upload']['field'] = 'field_s3_file_upload';
  $handler->display->display_options['fields']['field_s3_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_s3_file_upload']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s3_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s3_file_upload']['empty'] = 'File not yet available';
  $handler->display->display_options['fields']['field_s3_file_upload']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_s3_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s3_file_upload']['type'] = 'file_url_plain';
  /* Field: Field collection item: Host Entity Type */
  $handler->display->display_options['fields']['host_entity_type']['id'] = 'host_entity_type';
  $handler->display->display_options['fields']['host_entity_type']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_type']['field'] = 'host_entity_type';
  $handler->display->display_options['fields']['host_entity_type']['label'] = '';
  $handler->display->display_options['fields']['host_entity_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_type']['hide_alter_empty'] = FALSE;
  /* Field: Field collection item: S3 File Upload */
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
  /* Field: Field collection item: Performer */
  $handler->display->display_options['fields']['field_performer']['id'] = 'field_performer';
  $handler->display->display_options['fields']['field_performer']['table'] = 'field_data_field_performer';
  $handler->display->display_options['fields']['field_performer']['field'] = 'field_performer';
  $handler->display->display_options['fields']['field_performer']['label'] = 'Performed / Narrated by';
  $handler->display->display_options['fields']['field_performer']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_performer']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_performer']['separator'] = '; ';
  /* Field: Field collection item: Accrual Method */
  $handler->display->display_options['fields']['field_accrual_method']['id'] = 'field_accrual_method';
  $handler->display->display_options['fields']['field_accrual_method']['table'] = 'field_data_field_accrual_method';
  $handler->display->display_options['fields']['field_accrual_method']['field'] = 'field_accrual_method';
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
  /* Filter criterion: Field collection item: Field collection item ID */
  $handler->display->display_options['filters']['item_id']['id'] = 'item_id';
  $handler->display->display_options['filters']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['filters']['item_id']['field'] = 'item_id';
  $handler->display->display_options['filters']['item_id']['operator'] = 'not empty';
  $handler->display->display_options['filters']['item_id']['group'] = 1;
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
  /* Filter criterion: Field collection item: DC Date (field_dc_date) */
  $handler->display->display_options['filters']['field_dc_date_value']['id'] = 'field_dc_date_value';
  $handler->display->display_options['filters']['field_dc_date_value']['table'] = 'field_data_field_dc_date';
  $handler->display->display_options['filters']['field_dc_date_value']['field'] = 'field_dc_date_value';
  $handler->display->display_options['filters']['field_dc_date_value']['relationship'] = 'field_date_value';
  $handler->display->display_options['filters']['field_dc_date_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_dc_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_dc_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_dc_date_value']['expose']['operator_id'] = 'field_dc_date_value_op';
  $handler->display->display_options['filters']['field_dc_date_value']['expose']['label'] = 'DC Date';
  $handler->display->display_options['filters']['field_dc_date_value']['expose']['operator'] = 'field_dc_date_value_op';
  $handler->display->display_options['filters']['field_dc_date_value']['expose']['identifier'] = 'field_dc_date_value';
  $handler->display->display_options['filters']['field_dc_date_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Field collection item: Qualifier Date (field_qualifier_date) */
  $handler->display->display_options['filters']['field_qualifier_date_value']['id'] = 'field_qualifier_date_value';
  $handler->display->display_options['filters']['field_qualifier_date_value']['table'] = 'field_data_field_qualifier_date';
  $handler->display->display_options['filters']['field_qualifier_date_value']['field'] = 'field_qualifier_date_value';
  $handler->display->display_options['filters']['field_qualifier_date_value']['relationship'] = 'field_date_value';
  $handler->display->display_options['filters']['field_qualifier_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_qualifier_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_qualifier_date_value']['expose']['operator_id'] = 'field_qualifier_date_value_op';
  $handler->display->display_options['filters']['field_qualifier_date_value']['expose']['label'] = 'Date Qualifier';
  $handler->display->display_options['filters']['field_qualifier_date_value']['expose']['operator'] = 'field_qualifier_date_value_op';
  $handler->display->display_options['filters']['field_qualifier_date_value']['expose']['identifier'] = 'field_qualifier_date_value';
  $handler->display->display_options['filters']['field_qualifier_date_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: NNELS 856 tag (field_nnels_856_tag) */
  $handler->display->display_options['filters']['field_nnels_856_tag_value']['id'] = 'field_nnels_856_tag_value';
  $handler->display->display_options['filters']['field_nnels_856_tag_value']['table'] = 'field_data_field_nnels_856_tag';
  $handler->display->display_options['filters']['field_nnels_856_tag_value']['field'] = 'field_nnels_856_tag_value';
  $handler->display->display_options['filters']['field_nnels_856_tag_value']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['filters']['field_nnels_856_tag_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_nnels_856_tag_value']['group'] = 1;
  /* Filter criterion: Content: Title (title_field) */
  $handler->display->display_options['filters']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['filters']['title_field_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_field_value']['group'] = 1;
  $handler->display->display_options['filters']['title_field_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_field_value']['expose']['operator_id'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title_field_value']['expose']['operator'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['identifier'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_audience_value']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['filters']['field_audience_value']['group'] = 1;
  $handler->display->display_options['filters']['field_audience_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_audience_value']['expose']['operator_id'] = 'field_audience_value_op';
  $handler->display->display_options['filters']['field_audience_value']['expose']['label'] = 'Audience';
  $handler->display->display_options['filters']['field_audience_value']['expose']['operator'] = 'field_audience_value_op';
  $handler->display->display_options['filters']['field_audience_value']['expose']['identifier'] = 'field_audience_value';
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
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['required'] = TRUE;
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
    11 => 0,
  );
  /* Filter criterion: Field: XML String (field_xml_string) */
  $handler->display->display_options['filters']['field_xml_string_value']['id'] = 'field_xml_string_value';
  $handler->display->display_options['filters']['field_xml_string_value']['table'] = 'field_data_field_xml_string';
  $handler->display->display_options['filters']['field_xml_string_value']['field'] = 'field_xml_string_value';
  $handler->display->display_options['filters']['field_xml_string_value']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['filters']['field_xml_string_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_xml_string_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_xml_string_value']['expose']['operator_id'] = 'field_xml_string_value_op';
  $handler->display->display_options['filters']['field_xml_string_value']['expose']['label'] = 'XML String';
  $handler->display->display_options['filters']['field_xml_string_value']['expose']['operator'] = 'field_xml_string_value_op';
  $handler->display->display_options['filters']['field_xml_string_value']['expose']['identifier'] = 'field_xml_string_value';
  $handler->display->display_options['filters']['field_xml_string_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Field collection item: Performer (field_performer) */
  $handler->display->display_options['filters']['field_performer_value']['id'] = 'field_performer_value';
  $handler->display->display_options['filters']['field_performer_value']['table'] = 'field_data_field_performer';
  $handler->display->display_options['filters']['field_performer_value']['field'] = 'field_performer_value';
  $handler->display->display_options['filters']['field_performer_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_performer_value']['expose']['operator_id'] = 'field_performer_value_op';
  $handler->display->display_options['filters']['field_performer_value']['expose']['label'] = 'Performer';
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
  /* Filter criterion: Field collection item: Running Time (field_running_time) */
  $handler->display->display_options['filters']['field_running_time_value']['id'] = 'field_running_time_value';
  $handler->display->display_options['filters']['field_running_time_value']['table'] = 'field_data_field_running_time';
  $handler->display->display_options['filters']['field_running_time_value']['field'] = 'field_running_time_value';
  $handler->display->display_options['filters']['field_running_time_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_running_time_value']['expose']['operator_id'] = 'field_running_time_value_op';
  $handler->display->display_options['filters']['field_running_time_value']['expose']['label'] = 'Run Time';
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'admin/content/cals/repo-items/searchable-marc-xml-file-builder';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'MARC XML File Builder - Searchable (Field Collection)';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-nnels-admin';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['field_collection_view_marcxml_file_builder'] = $view;

  $view = new view();
  $view->name = 'marc_export_sets';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Marc Export Sets';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Marc Export Sets';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
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
      'skip_confirmation' => 1,
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
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Field: Content: Marc XML output file */
  $handler->display->display_options['fields']['field_marc_xml_output_file']['id'] = 'field_marc_xml_output_file';
  $handler->display->display_options['fields']['field_marc_xml_output_file']['table'] = 'field_data_field_marc_xml_output_file';
  $handler->display->display_options['fields']['field_marc_xml_output_file']['field'] = 'field_marc_xml_output_file';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
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
    'marc_export_set' => 'marc_export_set',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
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
      'skip_confirmation' => 1,
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
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Field: Content: Marc XML output file */
  $handler->display->display_options['fields']['field_marc_xml_output_file']['id'] = 'field_marc_xml_output_file';
  $handler->display->display_options['fields']['field_marc_xml_output_file']['table'] = 'field_data_field_marc_xml_output_file';
  $handler->display->display_options['fields']['field_marc_xml_output_file']['field'] = 'field_marc_xml_output_file';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  /* Field: Field: Organization */
  $handler->display->display_options['fields']['field_organization']['id'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['table'] = 'field_data_field_organization';
  $handler->display->display_options['fields']['field_organization']['field'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['relationship'] = 'uid';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_name_f']['id'] = 'field_name_f';
  $handler->display->display_options['fields']['field_name_f']['table'] = 'field_data_field_name_f';
  $handler->display->display_options['fields']['field_name_f']['field'] = 'field_name_f';
  $handler->display->display_options['fields']['field_name_f']['relationship'] = 'uid';
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_name_l']['id'] = 'field_name_l';
  $handler->display->display_options['fields']['field_name_l']['table'] = 'field_data_field_name_l';
  $handler->display->display_options['fields']['field_name_l']['field'] = 'field_name_l';
  $handler->display->display_options['fields']['field_name_l']['relationship'] = 'uid';
  $handler->display->display_options['path'] = 'admin/content/cals/marc-export-sets';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'MARC Export Sets';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Block - NIDs in set */
  $handler = $view->new_display('block', 'Block - NIDs in set', 'block');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Repo Item (field_nid_entry) - reverse */
  $handler->display->display_options['relationships']['reverse_field_nid_entry_node']['id'] = 'reverse_field_nid_entry_node';
  $handler->display->display_options['relationships']['reverse_field_nid_entry_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_nid_entry_node']['field'] = 'reverse_field_nid_entry_node';
  $handler->display->display_options['relationships']['reverse_field_nid_entry_node']['required'] = TRUE;
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
    'action::_cals_importer_generate_marcxml_files_search_interface' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Re-Generate MARC XML export from selected records',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
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
  $handler->display->display_options['fields']['title']['relationship'] = 'field_nid_entry_nid';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_nid_entry_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'repository_item' => 'repository_item',
  );
  $handler->display->display_options['block_description'] = 'Nodes in MARC XML Record Set Output';
  $export['marc_export_sets'] = $view;

  $view = new view();
  $view->name = 'marc_tag_crosswalk';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'MARC Tag Crosswalk';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'MARC Tag Crosswalk';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'bypass node access';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '200';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_field_name_generic_editable' => 'field_field_name_generic_editable',
    'field_drupal_field_name_editable' => 'field_drupal_field_name_editable',
    'field_parser_callback_editable' => 'field_parser_callback_editable',
    'field_marc_tag_editable' => 'field_marc_tag_editable',
    'field_marc_subfield_editable' => 'field_marc_subfield_editable',
    'field_marc_indicator_editable' => 'field_marc_indicator_editable',
    'field_implement_parser_editable' => 'field_implement_parser_editable',
    'field_status_parser_editable' => 'field_status_parser_editable',
    'body_editable' => 'body_editable',
    'field_interface_editable' => 'field_interface_editable',
    'edit_node' => 'edit_node',
    'clone_node' => 'clone_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_field_name_generic_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_drupal_field_name_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_parser_callback_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_marc_tag_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_marc_subfield_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_marc_indicator_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_implement_parser_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_status_parser_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_interface_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'clone_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['style_options']['batch'] = TRUE;
  $handler->display->display_options['style_options']['batch_size'] = '10';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Field Name Generic (editable) */
  $handler->display->display_options['fields']['field_field_name_generic_editable']['id'] = 'field_field_name_generic_editable';
  $handler->display->display_options['fields']['field_field_name_generic_editable']['table'] = 'field_data_field_field_name_generic';
  $handler->display->display_options['fields']['field_field_name_generic_editable']['field'] = 'field_field_name_generic_editable';
  $handler->display->display_options['fields']['field_field_name_generic_editable']['label'] = 'Field Name';
  $handler->display->display_options['fields']['field_field_name_generic_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_field_name_generic_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_field_name_generic_editable']['suppress_description'] = 1;
  /* Field: Content: Drupal Field Name (editable) */
  $handler->display->display_options['fields']['field_drupal_field_name_editable']['id'] = 'field_drupal_field_name_editable';
  $handler->display->display_options['fields']['field_drupal_field_name_editable']['table'] = 'field_data_field_drupal_field_name';
  $handler->display->display_options['fields']['field_drupal_field_name_editable']['field'] = 'field_drupal_field_name_editable';
  $handler->display->display_options['fields']['field_drupal_field_name_editable']['label'] = 'Drupal Field Name';
  $handler->display->display_options['fields']['field_drupal_field_name_editable']['widget_type'] = 'options_select';
  $handler->display->display_options['fields']['field_drupal_field_name_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_drupal_field_name_editable']['suppress_description'] = 1;
  /* Field: Content: Parser Callback (editable) */
  $handler->display->display_options['fields']['field_parser_callback_editable']['id'] = 'field_parser_callback_editable';
  $handler->display->display_options['fields']['field_parser_callback_editable']['table'] = 'field_data_field_parser_callback';
  $handler->display->display_options['fields']['field_parser_callback_editable']['field'] = 'field_parser_callback_editable';
  $handler->display->display_options['fields']['field_parser_callback_editable']['label'] = 'Parser';
  $handler->display->display_options['fields']['field_parser_callback_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_parser_callback_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_parser_callback_editable']['suppress_description'] = 1;
  /* Field: Field: Marc Tag (editable) */
  $handler->display->display_options['fields']['field_marc_tag_editable']['id'] = 'field_marc_tag_editable';
  $handler->display->display_options['fields']['field_marc_tag_editable']['table'] = 'field_data_field_marc_tag';
  $handler->display->display_options['fields']['field_marc_tag_editable']['field'] = 'field_marc_tag_editable';
  $handler->display->display_options['fields']['field_marc_tag_editable']['label'] = 'Marc Tag';
  $handler->display->display_options['fields']['field_marc_tag_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_marc_tag_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_marc_tag_editable']['suppress_description'] = 0;
  /* Field: Content: Subfield (editable) */
  $handler->display->display_options['fields']['field_marc_subfield_editable']['id'] = 'field_marc_subfield_editable';
  $handler->display->display_options['fields']['field_marc_subfield_editable']['table'] = 'field_data_field_marc_subfield';
  $handler->display->display_options['fields']['field_marc_subfield_editable']['field'] = 'field_marc_subfield_editable';
  $handler->display->display_options['fields']['field_marc_subfield_editable']['label'] = 'MARC Subfield';
  $handler->display->display_options['fields']['field_marc_subfield_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_marc_subfield_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_marc_subfield_editable']['suppress_description'] = 1;
  /* Field: Content: Indicator (editable) */
  $handler->display->display_options['fields']['field_marc_indicator_editable']['id'] = 'field_marc_indicator_editable';
  $handler->display->display_options['fields']['field_marc_indicator_editable']['table'] = 'field_data_field_marc_indicator';
  $handler->display->display_options['fields']['field_marc_indicator_editable']['field'] = 'field_marc_indicator_editable';
  $handler->display->display_options['fields']['field_marc_indicator_editable']['label'] = 'Indicator';
  $handler->display->display_options['fields']['field_marc_indicator_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_marc_indicator_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_marc_indicator_editable']['suppress_description'] = 1;
  /* Field: Content: Implement? (editable) */
  $handler->display->display_options['fields']['field_implement_parser_editable']['id'] = 'field_implement_parser_editable';
  $handler->display->display_options['fields']['field_implement_parser_editable']['table'] = 'field_data_field_implement_parser';
  $handler->display->display_options['fields']['field_implement_parser_editable']['field'] = 'field_implement_parser_editable';
  $handler->display->display_options['fields']['field_implement_parser_editable']['label'] = 'Implement?';
  $handler->display->display_options['fields']['field_implement_parser_editable']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_implement_parser_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_implement_parser_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_implement_parser_editable']['suppress_description'] = 0;
  /* Field: Content: Status Parser (editable) */
  $handler->display->display_options['fields']['field_status_parser_editable']['id'] = 'field_status_parser_editable';
  $handler->display->display_options['fields']['field_status_parser_editable']['table'] = 'field_data_field_status_parser';
  $handler->display->display_options['fields']['field_status_parser_editable']['field'] = 'field_status_parser_editable';
  $handler->display->display_options['fields']['field_status_parser_editable']['label'] = 'Parser Status';
  $handler->display->display_options['fields']['field_status_parser_editable']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_status_parser_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_status_parser_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_status_parser_editable']['suppress_description'] = 1;
  /* Field: Content: Body (editable) */
  $handler->display->display_options['fields']['body_editable']['id'] = 'body_editable';
  $handler->display->display_options['fields']['body_editable']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_editable']['field'] = 'body_editable';
  $handler->display->display_options['fields']['body_editable']['label'] = 'Body';
  $handler->display->display_options['fields']['body_editable']['type'] = 'text_plain';
  $handler->display->display_options['fields']['body_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['body_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['body_editable']['suppress_description'] = 1;
  /* Field: Content: Interface (editable) */
  $handler->display->display_options['fields']['field_interface_editable']['id'] = 'field_interface_editable';
  $handler->display->display_options['fields']['field_interface_editable']['table'] = 'field_data_field_interface';
  $handler->display->display_options['fields']['field_interface_editable']['field'] = 'field_interface_editable';
  $handler->display->display_options['fields']['field_interface_editable']['label'] = 'Interface';
  $handler->display->display_options['fields']['field_interface_editable']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_interface_editable']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_interface_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_interface_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_interface_editable']['suppress_description'] = 1;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Clone link */
  $handler->display->display_options['fields']['clone_node']['id'] = 'clone_node';
  $handler->display->display_options['fields']['clone_node']['table'] = 'node';
  $handler->display->display_options['fields']['clone_node']['field'] = 'clone_node';
  $handler->display->display_options['fields']['clone_node']['label'] = '';
  $handler->display->display_options['fields']['clone_node']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Implement? (field_implement_parser) */
  $handler->display->display_options['sorts']['field_implement_parser_value']['id'] = 'field_implement_parser_value';
  $handler->display->display_options['sorts']['field_implement_parser_value']['table'] = 'field_data_field_implement_parser';
  $handler->display->display_options['sorts']['field_implement_parser_value']['field'] = 'field_implement_parser_value';
  $handler->display->display_options['sorts']['field_implement_parser_value']['order'] = 'DESC';
  $handler->display->display_options['sorts']['field_implement_parser_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_implement_parser_value']['expose']['label'] = 'Implement?';
  /* Sort criterion: Content: Status Parser (field_status_parser) */
  $handler->display->display_options['sorts']['field_status_parser_value']['id'] = 'field_status_parser_value';
  $handler->display->display_options['sorts']['field_status_parser_value']['table'] = 'field_data_field_status_parser';
  $handler->display->display_options['sorts']['field_status_parser_value']['field'] = 'field_status_parser_value';
  $handler->display->display_options['sorts']['field_status_parser_value']['order'] = 'DESC';
  $handler->display->display_options['sorts']['field_status_parser_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_status_parser_value']['expose']['label'] = 'Parser Status';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  /* Sort criterion: Field: Marc Tag (field_marc_tag) */
  $handler->display->display_options['sorts']['field_marc_tag_value']['id'] = 'field_marc_tag_value';
  $handler->display->display_options['sorts']['field_marc_tag_value']['table'] = 'field_data_field_marc_tag';
  $handler->display->display_options['sorts']['field_marc_tag_value']['field'] = 'field_marc_tag_value';
  $handler->display->display_options['sorts']['field_marc_tag_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_marc_tag_value']['expose']['label'] = 'MARC Tag';
  /* Sort criterion: Content: Field Name Generic (field_field_name_generic) */
  $handler->display->display_options['sorts']['field_field_name_generic_value']['id'] = 'field_field_name_generic_value';
  $handler->display->display_options['sorts']['field_field_name_generic_value']['table'] = 'field_data_field_field_name_generic';
  $handler->display->display_options['sorts']['field_field_name_generic_value']['field'] = 'field_field_name_generic_value';
  $handler->display->display_options['sorts']['field_field_name_generic_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_field_name_generic_value']['expose']['label'] = 'Field Name Generic';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'marc_tag_mapper' => 'marc_tag_mapper',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Implement? (field_implement_parser) */
  $handler->display->display_options['filters']['field_implement_parser_value']['id'] = 'field_implement_parser_value';
  $handler->display->display_options['filters']['field_implement_parser_value']['table'] = 'field_data_field_implement_parser';
  $handler->display->display_options['filters']['field_implement_parser_value']['field'] = 'field_implement_parser_value';
  $handler->display->display_options['filters']['field_implement_parser_value']['group'] = 1;
  $handler->display->display_options['filters']['field_implement_parser_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_implement_parser_value']['expose']['operator_id'] = 'field_implement_parser_value_op';
  $handler->display->display_options['filters']['field_implement_parser_value']['expose']['label'] = 'Implement?';
  $handler->display->display_options['filters']['field_implement_parser_value']['expose']['operator'] = 'field_implement_parser_value_op';
  $handler->display->display_options['filters']['field_implement_parser_value']['expose']['identifier'] = 'field_implement_parser_value';
  $handler->display->display_options['filters']['field_implement_parser_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: Status Parser (field_status_parser) */
  $handler->display->display_options['filters']['field_status_parser_value']['id'] = 'field_status_parser_value';
  $handler->display->display_options['filters']['field_status_parser_value']['table'] = 'field_data_field_status_parser';
  $handler->display->display_options['filters']['field_status_parser_value']['field'] = 'field_status_parser_value';
  $handler->display->display_options['filters']['field_status_parser_value']['group'] = 1;
  $handler->display->display_options['filters']['field_status_parser_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_status_parser_value']['expose']['operator_id'] = 'field_status_parser_value_op';
  $handler->display->display_options['filters']['field_status_parser_value']['expose']['label'] = 'Parser Status';
  $handler->display->display_options['filters']['field_status_parser_value']['expose']['operator'] = 'field_status_parser_value_op';
  $handler->display->display_options['filters']['field_status_parser_value']['expose']['identifier'] = 'field_status_parser_value';
  $handler->display->display_options['filters']['field_status_parser_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Field: Marc Tag (field_marc_tag) */
  $handler->display->display_options['filters']['field_marc_tag_value']['id'] = 'field_marc_tag_value';
  $handler->display->display_options['filters']['field_marc_tag_value']['table'] = 'field_data_field_marc_tag';
  $handler->display->display_options['filters']['field_marc_tag_value']['field'] = 'field_marc_tag_value';
  $handler->display->display_options['filters']['field_marc_tag_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_marc_tag_value']['group'] = 1;
  $handler->display->display_options['filters']['field_marc_tag_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_marc_tag_value']['expose']['operator_id'] = 'field_marc_tag_value_op';
  $handler->display->display_options['filters']['field_marc_tag_value']['expose']['label'] = 'MARC Tag';
  $handler->display->display_options['filters']['field_marc_tag_value']['expose']['operator'] = 'field_marc_tag_value_op';
  $handler->display->display_options['filters']['field_marc_tag_value']['expose']['identifier'] = 'field_marc_tag_value';
  $handler->display->display_options['filters']['field_marc_tag_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: Indicator (field_marc_indicator) */
  $handler->display->display_options['filters']['field_marc_indicator_value']['id'] = 'field_marc_indicator_value';
  $handler->display->display_options['filters']['field_marc_indicator_value']['table'] = 'field_data_field_marc_indicator';
  $handler->display->display_options['filters']['field_marc_indicator_value']['field'] = 'field_marc_indicator_value';
  $handler->display->display_options['filters']['field_marc_indicator_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_marc_indicator_value']['group'] = 1;
  $handler->display->display_options['filters']['field_marc_indicator_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_marc_indicator_value']['expose']['operator_id'] = 'field_marc_indicator_value_op';
  $handler->display->display_options['filters']['field_marc_indicator_value']['expose']['label'] = 'Indicator';
  $handler->display->display_options['filters']['field_marc_indicator_value']['expose']['operator'] = 'field_marc_indicator_value_op';
  $handler->display->display_options['filters']['field_marc_indicator_value']['expose']['identifier'] = 'field_marc_indicator_value';
  $handler->display->display_options['filters']['field_marc_indicator_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: Field Name Generic (field_field_name_generic) */
  $handler->display->display_options['filters']['field_field_name_generic_value']['id'] = 'field_field_name_generic_value';
  $handler->display->display_options['filters']['field_field_name_generic_value']['table'] = 'field_data_field_field_name_generic';
  $handler->display->display_options['filters']['field_field_name_generic_value']['field'] = 'field_field_name_generic_value';
  $handler->display->display_options['filters']['field_field_name_generic_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_field_name_generic_value']['group'] = 1;
  $handler->display->display_options['filters']['field_field_name_generic_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_field_name_generic_value']['expose']['operator_id'] = 'field_field_name_generic_value_op';
  $handler->display->display_options['filters']['field_field_name_generic_value']['expose']['label'] = 'Field Name (Generic)';
  $handler->display->display_options['filters']['field_field_name_generic_value']['expose']['operator'] = 'field_field_name_generic_value_op';
  $handler->display->display_options['filters']['field_field_name_generic_value']['expose']['identifier'] = 'field_field_name_generic_value';
  $handler->display->display_options['filters']['field_field_name_generic_value']['expose']['remember_roles'] = array(
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

  /* Display: Page - List */
  $handler = $view->new_display('page', 'Page - List', 'page_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
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
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Field Name Generic (editable) */
  $handler->display->display_options['fields']['field_field_name_generic_editable']['id'] = 'field_field_name_generic_editable';
  $handler->display->display_options['fields']['field_field_name_generic_editable']['table'] = 'field_data_field_field_name_generic';
  $handler->display->display_options['fields']['field_field_name_generic_editable']['field'] = 'field_field_name_generic_editable';
  $handler->display->display_options['fields']['field_field_name_generic_editable']['label'] = 'Field Name';
  $handler->display->display_options['fields']['field_field_name_generic_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_field_name_generic_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_field_name_generic_editable']['suppress_description'] = 1;
  /* Field: Field: Marc Tag (editable) */
  $handler->display->display_options['fields']['field_marc_tag_editable']['id'] = 'field_marc_tag_editable';
  $handler->display->display_options['fields']['field_marc_tag_editable']['table'] = 'field_data_field_marc_tag';
  $handler->display->display_options['fields']['field_marc_tag_editable']['field'] = 'field_marc_tag_editable';
  $handler->display->display_options['fields']['field_marc_tag_editable']['label'] = 'Marc Tag';
  $handler->display->display_options['fields']['field_marc_tag_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_marc_tag_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_marc_tag_editable']['suppress_description'] = 0;
  /* Field: Content: Subfield (editable) */
  $handler->display->display_options['fields']['field_marc_subfield_editable']['id'] = 'field_marc_subfield_editable';
  $handler->display->display_options['fields']['field_marc_subfield_editable']['table'] = 'field_data_field_marc_subfield';
  $handler->display->display_options['fields']['field_marc_subfield_editable']['field'] = 'field_marc_subfield_editable';
  $handler->display->display_options['fields']['field_marc_subfield_editable']['label'] = 'MARC Subfield';
  $handler->display->display_options['fields']['field_marc_subfield_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_marc_subfield_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_marc_subfield_editable']['suppress_description'] = 1;
  /* Field: Content: Indicator (editable) */
  $handler->display->display_options['fields']['field_marc_indicator_editable']['id'] = 'field_marc_indicator_editable';
  $handler->display->display_options['fields']['field_marc_indicator_editable']['table'] = 'field_data_field_marc_indicator';
  $handler->display->display_options['fields']['field_marc_indicator_editable']['field'] = 'field_marc_indicator_editable';
  $handler->display->display_options['fields']['field_marc_indicator_editable']['label'] = 'Indicator';
  $handler->display->display_options['fields']['field_marc_indicator_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_marc_indicator_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_marc_indicator_editable']['suppress_description'] = 1;
  /* Field: Content: Body (editable) */
  $handler->display->display_options['fields']['body_editable']['id'] = 'body_editable';
  $handler->display->display_options['fields']['body_editable']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_editable']['field'] = 'body_editable';
  $handler->display->display_options['fields']['body_editable']['label'] = 'Description';
  $handler->display->display_options['fields']['body_editable']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['body_editable']['type'] = 'text_plain';
  $handler->display->display_options['fields']['body_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['body_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['body_editable']['suppress_description'] = 1;
  /* Field: Content: Interface (editable) */
  $handler->display->display_options['fields']['field_interface_editable']['id'] = 'field_interface_editable';
  $handler->display->display_options['fields']['field_interface_editable']['table'] = 'field_data_field_interface';
  $handler->display->display_options['fields']['field_interface_editable']['field'] = 'field_interface_editable';
  $handler->display->display_options['fields']['field_interface_editable']['label'] = 'Interface';
  $handler->display->display_options['fields']['field_interface_editable']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_interface_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_interface_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_interface_editable']['suppress_description'] = 1;
  /* Field: Content: Parser Callback (editable) */
  $handler->display->display_options['fields']['field_parser_callback_editable']['id'] = 'field_parser_callback_editable';
  $handler->display->display_options['fields']['field_parser_callback_editable']['table'] = 'field_data_field_parser_callback';
  $handler->display->display_options['fields']['field_parser_callback_editable']['field'] = 'field_parser_callback_editable';
  $handler->display->display_options['fields']['field_parser_callback_editable']['label'] = 'Parser';
  $handler->display->display_options['fields']['field_parser_callback_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_parser_callback_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_parser_callback_editable']['suppress_description'] = 1;
  /* Field: Content: Status Parser (editable) */
  $handler->display->display_options['fields']['field_status_parser_editable']['id'] = 'field_status_parser_editable';
  $handler->display->display_options['fields']['field_status_parser_editable']['table'] = 'field_data_field_status_parser';
  $handler->display->display_options['fields']['field_status_parser_editable']['field'] = 'field_status_parser_editable';
  $handler->display->display_options['fields']['field_status_parser_editable']['label'] = 'Parser Status';
  $handler->display->display_options['fields']['field_status_parser_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_status_parser_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_status_parser_editable']['suppress_description'] = 1;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Clone link */
  $handler->display->display_options['fields']['clone_node']['id'] = 'clone_node';
  $handler->display->display_options['fields']['clone_node']['table'] = 'node';
  $handler->display->display_options['fields']['clone_node']['field'] = 'clone_node';
  $handler->display->display_options['fields']['clone_node']['label'] = '';
  $handler->display->display_options['fields']['clone_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'admin/content/cals/marc-tag-crosswalk/list';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'MARC Tag X-walk (Grid)';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-nnels-admin';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Page - VBO */
  $handler = $view->new_display('page', 'Page - VBO', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'title' => 'title',
    'field_field_name_drupal_editable' => 'field_field_name_drupal_editable',
    'field_field_name_generic_editable' => 'field_field_name_generic_editable',
    'field_marc_tag_editable' => 'field_marc_tag_editable',
    'field_marc_subfield_editable' => 'field_marc_subfield_editable',
    'field_marc_indicator_editable' => 'field_marc_indicator_editable',
    'field_implement_parser_editable' => 'field_implement_parser_editable',
    'field_status_parser_editable' => 'field_status_parser_editable',
    'body_editable' => 'body_editable',
    'field_interface_editable' => 'field_interface_editable',
    'field_parser_callback_editable' => 'field_parser_callback_editable',
    'edit_node' => 'edit_node',
    'clone_node' => 'clone_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_field_name_drupal_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_field_name_generic_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_marc_tag_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_marc_subfield_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_marc_indicator_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_implement_parser_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_status_parser_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'body_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_interface_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_parser_callback_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'clone_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
  );
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
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Update Parser and Implementation Status',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'marc_tag_mapper::field_implement_parser' => 'marc_tag_mapper::field_implement_parser',
          'marc_tag_mapper::field_interface' => 'marc_tag_mapper::field_interface',
          'marc_tag_mapper::field_status_parser' => 'marc_tag_mapper::field_status_parser',
        ),
      ),
    ),
    'action::node_export_drupal_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Implement? (editable) */
  $handler->display->display_options['fields']['field_implement_parser_editable']['id'] = 'field_implement_parser_editable';
  $handler->display->display_options['fields']['field_implement_parser_editable']['table'] = 'field_data_field_implement_parser';
  $handler->display->display_options['fields']['field_implement_parser_editable']['field'] = 'field_implement_parser_editable';
  $handler->display->display_options['fields']['field_implement_parser_editable']['label'] = 'Implement?';
  $handler->display->display_options['fields']['field_implement_parser_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_implement_parser_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_implement_parser_editable']['suppress_description'] = 0;
  /* Field: Content: Status Parser (editable) */
  $handler->display->display_options['fields']['field_status_parser_editable']['id'] = 'field_status_parser_editable';
  $handler->display->display_options['fields']['field_status_parser_editable']['table'] = 'field_data_field_status_parser';
  $handler->display->display_options['fields']['field_status_parser_editable']['field'] = 'field_status_parser_editable';
  $handler->display->display_options['fields']['field_status_parser_editable']['label'] = 'Parser Status';
  $handler->display->display_options['fields']['field_status_parser_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_status_parser_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_status_parser_editable']['suppress_description'] = 1;
  /* Field: Content: Drupal Field Name */
  $handler->display->display_options['fields']['field_drupal_field_name']['id'] = 'field_drupal_field_name';
  $handler->display->display_options['fields']['field_drupal_field_name']['table'] = 'field_data_field_drupal_field_name';
  $handler->display->display_options['fields']['field_drupal_field_name']['field'] = 'field_drupal_field_name';
  $handler->display->display_options['fields']['field_drupal_field_name']['label'] = 'Field (Drupal)';
  /* Field: Content: Field Name Generic (editable) */
  $handler->display->display_options['fields']['field_field_name_generic_editable']['id'] = 'field_field_name_generic_editable';
  $handler->display->display_options['fields']['field_field_name_generic_editable']['table'] = 'field_data_field_field_name_generic';
  $handler->display->display_options['fields']['field_field_name_generic_editable']['field'] = 'field_field_name_generic_editable';
  $handler->display->display_options['fields']['field_field_name_generic_editable']['label'] = 'Field Name';
  $handler->display->display_options['fields']['field_field_name_generic_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_field_name_generic_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_field_name_generic_editable']['suppress_description'] = 1;
  /* Field: Field: Marc Tag (editable) */
  $handler->display->display_options['fields']['field_marc_tag_editable']['id'] = 'field_marc_tag_editable';
  $handler->display->display_options['fields']['field_marc_tag_editable']['table'] = 'field_data_field_marc_tag';
  $handler->display->display_options['fields']['field_marc_tag_editable']['field'] = 'field_marc_tag_editable';
  $handler->display->display_options['fields']['field_marc_tag_editable']['label'] = 'Marc Tag';
  $handler->display->display_options['fields']['field_marc_tag_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_marc_tag_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_marc_tag_editable']['suppress_description'] = 0;
  /* Field: Content: Subfield (editable) */
  $handler->display->display_options['fields']['field_marc_subfield_editable']['id'] = 'field_marc_subfield_editable';
  $handler->display->display_options['fields']['field_marc_subfield_editable']['table'] = 'field_data_field_marc_subfield';
  $handler->display->display_options['fields']['field_marc_subfield_editable']['field'] = 'field_marc_subfield_editable';
  $handler->display->display_options['fields']['field_marc_subfield_editable']['label'] = 'MARC Subfield';
  $handler->display->display_options['fields']['field_marc_subfield_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_marc_subfield_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_marc_subfield_editable']['suppress_description'] = 1;
  /* Field: Content: Indicator (editable) */
  $handler->display->display_options['fields']['field_marc_indicator_editable']['id'] = 'field_marc_indicator_editable';
  $handler->display->display_options['fields']['field_marc_indicator_editable']['table'] = 'field_data_field_marc_indicator';
  $handler->display->display_options['fields']['field_marc_indicator_editable']['field'] = 'field_marc_indicator_editable';
  $handler->display->display_options['fields']['field_marc_indicator_editable']['label'] = 'Indicator';
  $handler->display->display_options['fields']['field_marc_indicator_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_marc_indicator_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_marc_indicator_editable']['suppress_description'] = 1;
  /* Field: Content: URLs External */
  $handler->display->display_options['fields']['field_urls_external']['id'] = 'field_urls_external';
  $handler->display->display_options['fields']['field_urls_external']['table'] = 'field_data_field_urls_external';
  $handler->display->display_options['fields']['field_urls_external']['field'] = 'field_urls_external';
  $handler->display->display_options['fields']['field_urls_external']['label'] = 'See';
  $handler->display->display_options['fields']['field_urls_external']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_urls_external']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_urls_external']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_urls_external']['multi_type'] = 'ul';
  /* Field: Content: Body (editable) */
  $handler->display->display_options['fields']['body_editable']['id'] = 'body_editable';
  $handler->display->display_options['fields']['body_editable']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_editable']['field'] = 'body_editable';
  $handler->display->display_options['fields']['body_editable']['label'] = 'Body';
  $handler->display->display_options['fields']['body_editable']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body_editable']['alter']['text'] = '[body_editable]
<div>
More information:
[field_urls_external]
</div>';
  $handler->display->display_options['fields']['body_editable']['type'] = 'text_plain';
  $handler->display->display_options['fields']['body_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['body_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['body_editable']['suppress_description'] = 1;
  /* Field: Content: Interface (editable) */
  $handler->display->display_options['fields']['field_interface_editable']['id'] = 'field_interface_editable';
  $handler->display->display_options['fields']['field_interface_editable']['table'] = 'field_data_field_interface';
  $handler->display->display_options['fields']['field_interface_editable']['field'] = 'field_interface_editable';
  $handler->display->display_options['fields']['field_interface_editable']['label'] = 'Interface';
  $handler->display->display_options['fields']['field_interface_editable']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_interface_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_interface_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_interface_editable']['suppress_description'] = 1;
  /* Field: Content: Parser Callback (editable) */
  $handler->display->display_options['fields']['field_parser_callback_editable']['id'] = 'field_parser_callback_editable';
  $handler->display->display_options['fields']['field_parser_callback_editable']['table'] = 'field_data_field_parser_callback';
  $handler->display->display_options['fields']['field_parser_callback_editable']['field'] = 'field_parser_callback_editable';
  $handler->display->display_options['fields']['field_parser_callback_editable']['label'] = 'Parser';
  $handler->display->display_options['fields']['field_parser_callback_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_parser_callback_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_parser_callback_editable']['suppress_description'] = 1;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Clone link */
  $handler->display->display_options['fields']['clone_node']['id'] = 'clone_node';
  $handler->display->display_options['fields']['clone_node']['table'] = 'node';
  $handler->display->display_options['fields']['clone_node']['field'] = 'clone_node';
  $handler->display->display_options['fields']['clone_node']['label'] = '';
  $handler->display->display_options['fields']['clone_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'admin/content/cals/marc-tag-crosswalk/vbo';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'MARC Tag X-walk (VBO)';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-nnels-admin';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Page - Editable */
  $handler = $view->new_display('page', 'Page - Editable', 'page');
  $handler->display->display_options['path'] = 'admin/content/cals/marc-tag-crosswalk';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'MARC Tag X-walk (Editable)';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-nnels-admin';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Page - List (table) */
  $handler = $view->new_display('page', 'Page - List (table)', 'page_3');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_field_name_generic_editable' => 'field_field_name_generic_editable',
    'field_marc_tag_editable' => 'field_marc_tag_editable',
    'field_marc_subfield_editable' => 'field_marc_subfield_editable',
    'field_marc_indicator_editable' => 'field_marc_indicator_editable',
    'body_editable' => 'body_editable',
    'field_interface_editable' => 'field_interface_editable',
    'field_parser_callback_editable' => 'field_parser_callback_editable',
    'field_status_parser_editable' => 'field_status_parser_editable',
    'edit_node' => 'edit_node',
    'clone_node' => 'clone_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_field_name_generic_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_marc_tag_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_marc_subfield_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_marc_indicator_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_interface_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_parser_callback_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_status_parser_editable' => array(
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
    'clone_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Field Name Generic (editable) */
  $handler->display->display_options['fields']['field_field_name_generic_editable']['id'] = 'field_field_name_generic_editable';
  $handler->display->display_options['fields']['field_field_name_generic_editable']['table'] = 'field_data_field_field_name_generic';
  $handler->display->display_options['fields']['field_field_name_generic_editable']['field'] = 'field_field_name_generic_editable';
  $handler->display->display_options['fields']['field_field_name_generic_editable']['label'] = 'Field Name';
  $handler->display->display_options['fields']['field_field_name_generic_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_field_name_generic_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_field_name_generic_editable']['suppress_description'] = 1;
  /* Field: Field: Marc Tag (editable) */
  $handler->display->display_options['fields']['field_marc_tag_editable']['id'] = 'field_marc_tag_editable';
  $handler->display->display_options['fields']['field_marc_tag_editable']['table'] = 'field_data_field_marc_tag';
  $handler->display->display_options['fields']['field_marc_tag_editable']['field'] = 'field_marc_tag_editable';
  $handler->display->display_options['fields']['field_marc_tag_editable']['label'] = 'Marc Tag';
  $handler->display->display_options['fields']['field_marc_tag_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_marc_tag_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_marc_tag_editable']['suppress_description'] = 0;
  /* Field: Content: Subfield (editable) */
  $handler->display->display_options['fields']['field_marc_subfield_editable']['id'] = 'field_marc_subfield_editable';
  $handler->display->display_options['fields']['field_marc_subfield_editable']['table'] = 'field_data_field_marc_subfield';
  $handler->display->display_options['fields']['field_marc_subfield_editable']['field'] = 'field_marc_subfield_editable';
  $handler->display->display_options['fields']['field_marc_subfield_editable']['label'] = 'MARC Subfield';
  $handler->display->display_options['fields']['field_marc_subfield_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_marc_subfield_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_marc_subfield_editable']['suppress_description'] = 1;
  /* Field: Content: Indicator (editable) */
  $handler->display->display_options['fields']['field_marc_indicator_editable']['id'] = 'field_marc_indicator_editable';
  $handler->display->display_options['fields']['field_marc_indicator_editable']['table'] = 'field_data_field_marc_indicator';
  $handler->display->display_options['fields']['field_marc_indicator_editable']['field'] = 'field_marc_indicator_editable';
  $handler->display->display_options['fields']['field_marc_indicator_editable']['label'] = 'Indicator';
  $handler->display->display_options['fields']['field_marc_indicator_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_marc_indicator_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_marc_indicator_editable']['suppress_description'] = 1;
  /* Field: Content: Body (editable) */
  $handler->display->display_options['fields']['body_editable']['id'] = 'body_editable';
  $handler->display->display_options['fields']['body_editable']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_editable']['field'] = 'body_editable';
  $handler->display->display_options['fields']['body_editable']['label'] = 'Description';
  $handler->display->display_options['fields']['body_editable']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['body_editable']['type'] = 'text_plain';
  $handler->display->display_options['fields']['body_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['body_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['body_editable']['suppress_description'] = 1;
  /* Field: Content: Interface (editable) */
  $handler->display->display_options['fields']['field_interface_editable']['id'] = 'field_interface_editable';
  $handler->display->display_options['fields']['field_interface_editable']['table'] = 'field_data_field_interface';
  $handler->display->display_options['fields']['field_interface_editable']['field'] = 'field_interface_editable';
  $handler->display->display_options['fields']['field_interface_editable']['label'] = 'Interface';
  $handler->display->display_options['fields']['field_interface_editable']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_interface_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_interface_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_interface_editable']['suppress_description'] = 1;
  /* Field: Content: Parser Callback (editable) */
  $handler->display->display_options['fields']['field_parser_callback_editable']['id'] = 'field_parser_callback_editable';
  $handler->display->display_options['fields']['field_parser_callback_editable']['table'] = 'field_data_field_parser_callback';
  $handler->display->display_options['fields']['field_parser_callback_editable']['field'] = 'field_parser_callback_editable';
  $handler->display->display_options['fields']['field_parser_callback_editable']['label'] = 'Parser';
  $handler->display->display_options['fields']['field_parser_callback_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_parser_callback_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_parser_callback_editable']['suppress_description'] = 1;
  /* Field: Content: Status Parser (editable) */
  $handler->display->display_options['fields']['field_status_parser_editable']['id'] = 'field_status_parser_editable';
  $handler->display->display_options['fields']['field_status_parser_editable']['table'] = 'field_data_field_status_parser';
  $handler->display->display_options['fields']['field_status_parser_editable']['field'] = 'field_status_parser_editable';
  $handler->display->display_options['fields']['field_status_parser_editable']['label'] = 'Parser Status';
  $handler->display->display_options['fields']['field_status_parser_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_status_parser_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_status_parser_editable']['suppress_description'] = 1;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Clone link */
  $handler->display->display_options['fields']['clone_node']['id'] = 'clone_node';
  $handler->display->display_options['fields']['clone_node']['table'] = 'node';
  $handler->display->display_options['fields']['clone_node']['field'] = 'clone_node';
  $handler->display->display_options['fields']['clone_node']['label'] = '';
  $handler->display->display_options['fields']['clone_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'admin/content/cals/marc-tag-crosswalk/list-table';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'MARC Tag X-walk (Table List)';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-nnels-admin';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['marc_tag_crosswalk'] = $view;

  $view = new view();
  $view->name = 'marc_tags_entity_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'eck_marc_tag';
  $view->human_name = 'MARC Tags entity view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'MARC Tags entity view';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'bypass node access';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '20, 50, 100, 500';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['style_plugin'] = 'table';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  /* Relationship: MARC tag: Marc Subfield (field_marc_subfield_collection) */
  $handler->display->display_options['relationships']['field_marc_subfield_collection_value']['id'] = 'field_marc_subfield_collection_value';
  $handler->display->display_options['relationships']['field_marc_subfield_collection_value']['table'] = 'field_data_field_marc_subfield_collection';
  $handler->display->display_options['relationships']['field_marc_subfield_collection_value']['field'] = 'field_marc_subfield_collection_value';
  $handler->display->display_options['relationships']['field_marc_subfield_collection_value']['delta'] = '-1';
  /* Field: MARC tag: Id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'eck_marc_tag';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['label'] = '';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['id']['separator'] = '';
  /* Field: Bulk operations: MARC tag */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_marc_tag';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'marc_tag::field_indc1' => 'marc_tag::field_indc1',
          'marc_tag::field_ind2' => 'marc_tag::field_ind2',
          'marc_tag::field_include_in_export' => 'marc_tag::field_include_in_export',
          'marc_tag::field_source_value' => 'marc_tag::field_source_value',
          'marc_tag::field_marc_tag_type' => 'marc_tag::field_marc_tag_type',
          'marc_tag::field_export_type' => 'marc_tag::field_export_type',
        ),
      ),
    ),
  );
  /* Field: MARC tag: Development Status (editable) */
  $handler->display->display_options['fields']['field_development_status_editable']['id'] = 'field_development_status_editable';
  $handler->display->display_options['fields']['field_development_status_editable']['table'] = 'field_data_field_development_status';
  $handler->display->display_options['fields']['field_development_status_editable']['field'] = 'field_development_status_editable';
  $handler->display->display_options['fields']['field_development_status_editable']['label'] = 'Status';
  $handler->display->display_options['fields']['field_development_status_editable']['type'] = 'editable';
  $handler->display->display_options['fields']['field_development_status_editable']['settings'] = array(
    'click_to_edit' => 1,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  $handler->display->display_options['fields']['field_development_status_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_development_status_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_development_status_editable']['suppress_description'] = 0;
  /* Field: MARC tag: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'eck_marc_tag';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: MARC tag: ind1 */
  $handler->display->display_options['fields']['field_indc1']['id'] = 'field_indc1';
  $handler->display->display_options['fields']['field_indc1']['table'] = 'field_data_field_indc1';
  $handler->display->display_options['fields']['field_indc1']['field'] = 'field_indc1';
  $handler->display->display_options['fields']['field_indc1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_indc1']['settings'] = array(
    'click_to_edit' => 1,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'text_default',
  );
  /* Field: MARC tag: ind2 */
  $handler->display->display_options['fields']['field_ind2']['id'] = 'field_ind2';
  $handler->display->display_options['fields']['field_ind2']['table'] = 'field_data_field_ind2';
  $handler->display->display_options['fields']['field_ind2']['field'] = 'field_ind2';
  $handler->display->display_options['fields']['field_ind2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ind2']['settings'] = array(
    'click_to_edit' => 1,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'text_default',
  );
  /* Field: Field: Marc Tag */
  $handler->display->display_options['fields']['field_marc_tag']['id'] = 'field_marc_tag';
  $handler->display->display_options['fields']['field_marc_tag']['table'] = 'field_data_field_marc_tag';
  $handler->display->display_options['fields']['field_marc_tag']['field'] = 'field_marc_tag';
  $handler->display->display_options['fields']['field_marc_tag']['label'] = 'Title / Tag';
  $handler->display->display_options['fields']['field_marc_tag']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_marc_tag']['alter']['text'] = '<strong>[title]</strong><br/>----------<br/>
<strong>[field_marc_tag]</strong><br/>
ind1: [field_indc1]<br/>ind2: [field_ind2] ';
  $handler->display->display_options['fields']['field_marc_tag']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_marc_tag']['settings'] = array(
    'click_to_edit' => 1,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'text_default',
  );
  /* Field: MARC tag: MARC Tag Type */
  $handler->display->display_options['fields']['field_marc_tag_type']['id'] = 'field_marc_tag_type';
  $handler->display->display_options['fields']['field_marc_tag_type']['table'] = 'field_data_field_marc_tag_type';
  $handler->display->display_options['fields']['field_marc_tag_type']['field'] = 'field_marc_tag_type';
  /* Field: Field: Export Type (editable) */
  $handler->display->display_options['fields']['field_export_type_editable']['id'] = 'field_export_type_editable';
  $handler->display->display_options['fields']['field_export_type_editable']['table'] = 'field_data_field_export_type';
  $handler->display->display_options['fields']['field_export_type_editable']['field'] = 'field_export_type_editable';
  $handler->display->display_options['fields']['field_export_type_editable']['label'] = 'Export Type';
  $handler->display->display_options['fields']['field_export_type_editable']['settings'] = array(
    'click_to_edit' => 1,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  $handler->display->display_options['fields']['field_export_type_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_export_type_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_export_type_editable']['suppress_description'] = 0;
  /* Field: Field: Include in Export */
  $handler->display->display_options['fields']['field_include_in_export']['id'] = 'field_include_in_export';
  $handler->display->display_options['fields']['field_include_in_export']['table'] = 'field_data_field_include_in_export';
  $handler->display->display_options['fields']['field_include_in_export']['field'] = 'field_include_in_export';
  $handler->display->display_options['fields']['field_include_in_export']['label'] = 'Export?';
  $handler->display->display_options['fields']['field_include_in_export']['settings'] = array(
    'click_to_edit' => 1,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Field: Field: Source Value */
  $handler->display->display_options['fields']['field_source_value']['id'] = 'field_source_value';
  $handler->display->display_options['fields']['field_source_value']['table'] = 'field_data_field_source_value';
  $handler->display->display_options['fields']['field_source_value']['field'] = 'field_source_value';
  $handler->display->display_options['fields']['field_source_value']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Field: Field: Notes */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_description']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_description']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_description']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['field_description']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_description']['settings'] = array(
    'click_to_edit' => 1,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'text_default',
  );
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = 'Subfield View';
  $handler->display->display_options['fields']['view']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['view']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['view']['view'] = 'field_collection_view_marc_subfields';
  $handler->display->display_options['fields']['view']['display'] = 'embed_4';
  $handler->display->display_options['fields']['view']['arguments'] = '[!id]';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Notes and Subfields';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div>[field_description]</div>
[view]';
  /* Field: MARC tag: Delete link */
  $handler->display->display_options['fields']['delete_link']['id'] = 'delete_link';
  $handler->display->display_options['fields']['delete_link']['table'] = 'eck_marc_tag';
  $handler->display->display_options['fields']['delete_link']['field'] = 'delete_link';
  $handler->display->display_options['fields']['delete_link']['exclude'] = TRUE;
  /* Field: MARC tag: Edit link */
  $handler->display->display_options['fields']['edit_link']['id'] = 'edit_link';
  $handler->display->display_options['fields']['edit_link']['table'] = 'eck_marc_tag';
  $handler->display->display_options['fields']['edit_link']['field'] = 'edit_link';
  $handler->display->display_options['fields']['edit_link']['label'] = '';
  $handler->display->display_options['fields']['edit_link']['element_label_colon'] = FALSE;
  /* Field: MARC tag: replicate link */
  $handler->display->display_options['fields']['replicate_ui_link']['id'] = 'replicate_ui_link';
  $handler->display->display_options['fields']['replicate_ui_link']['table'] = 'views_entity_marc_tag';
  $handler->display->display_options['fields']['replicate_ui_link']['field'] = 'replicate_ui_link';
  $handler->display->display_options['fields']['replicate_ui_link']['label'] = '';
  $handler->display->display_options['fields']['replicate_ui_link']['element_label_colon'] = FALSE;
  /* Field: MARC tag: Link */
  $handler->display->display_options['fields']['view_link']['id'] = 'view_link';
  $handler->display->display_options['fields']['view_link']['table'] = 'eck_marc_tag';
  $handler->display->display_options['fields']['view_link']['field'] = 'view_link';
  $handler->display->display_options['fields']['view_link']['label'] = '';
  $handler->display->display_options['fields']['view_link']['element_label_colon'] = FALSE;
  /* Field: MARC tag: Delete link */
  $handler->display->display_options['fields']['delete_link_1']['id'] = 'delete_link_1';
  $handler->display->display_options['fields']['delete_link_1']['table'] = 'eck_marc_tag';
  $handler->display->display_options['fields']['delete_link_1']['field'] = 'delete_link';
  $handler->display->display_options['fields']['delete_link_1']['label'] = '';
  $handler->display->display_options['fields']['delete_link_1']['element_label_colon'] = FALSE;
  /* Sort criterion: MARC tag: marc_tag type */
  $handler->display->display_options['sorts']['type']['id'] = 'type';
  $handler->display->display_options['sorts']['type']['table'] = 'eck_marc_tag';
  $handler->display->display_options['sorts']['type']['field'] = 'type';
  /* Sort criterion: Field: Marc Tag (field_marc_tag) */
  $handler->display->display_options['sorts']['field_marc_tag_value']['id'] = 'field_marc_tag_value';
  $handler->display->display_options['sorts']['field_marc_tag_value']['table'] = 'field_data_field_marc_tag';
  $handler->display->display_options['sorts']['field_marc_tag_value']['field'] = 'field_marc_tag_value';
  /* Filter criterion: MARC tag: marc_tag type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_marc_tag';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'marc_tag' => 'marc_tag',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Export Type (field_export_type) */
  $handler->display->display_options['filters']['field_export_type_value']['id'] = 'field_export_type_value';
  $handler->display->display_options['filters']['field_export_type_value']['table'] = 'field_data_field_export_type';
  $handler->display->display_options['filters']['field_export_type_value']['field'] = 'field_export_type_value';
  $handler->display->display_options['filters']['field_export_type_value']['group'] = 1;
  $handler->display->display_options['filters']['field_export_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_export_type_value']['expose']['operator_id'] = 'field_export_type_value_op';
  $handler->display->display_options['filters']['field_export_type_value']['expose']['label'] = 'Export Type';
  $handler->display->display_options['filters']['field_export_type_value']['expose']['operator'] = 'field_export_type_value_op';
  $handler->display->display_options['filters']['field_export_type_value']['expose']['identifier'] = 'field_export_type_value';
  $handler->display->display_options['filters']['field_export_type_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Field: Include in Export (field_include_in_export) */
  $handler->display->display_options['filters']['field_include_in_export_value']['id'] = 'field_include_in_export_value';
  $handler->display->display_options['filters']['field_include_in_export_value']['table'] = 'field_data_field_include_in_export';
  $handler->display->display_options['filters']['field_include_in_export_value']['field'] = 'field_include_in_export_value';
  $handler->display->display_options['filters']['field_include_in_export_value']['group'] = 1;
  $handler->display->display_options['filters']['field_include_in_export_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_include_in_export_value']['expose']['operator_id'] = 'field_include_in_export_value_op';
  $handler->display->display_options['filters']['field_include_in_export_value']['expose']['label'] = 'Include in Export?';
  $handler->display->display_options['filters']['field_include_in_export_value']['expose']['operator'] = 'field_include_in_export_value_op';
  $handler->display->display_options['filters']['field_include_in_export_value']['expose']['identifier'] = 'field_include_in_export_value';
  $handler->display->display_options['filters']['field_include_in_export_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Field: Source Value (field_source_value) */
  $handler->display->display_options['filters']['field_source_value_value']['id'] = 'field_source_value_value';
  $handler->display->display_options['filters']['field_source_value_value']['table'] = 'field_data_field_source_value';
  $handler->display->display_options['filters']['field_source_value_value']['field'] = 'field_source_value_value';
  $handler->display->display_options['filters']['field_source_value_value']['group'] = 1;
  $handler->display->display_options['filters']['field_source_value_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_source_value_value']['expose']['operator_id'] = 'field_source_value_value_op';
  $handler->display->display_options['filters']['field_source_value_value']['expose']['label'] = 'Source';
  $handler->display->display_options['filters']['field_source_value_value']['expose']['operator'] = 'field_source_value_value_op';
  $handler->display->display_options['filters']['field_source_value_value']['expose']['identifier'] = 'field_source_value_value';
  $handler->display->display_options['filters']['field_source_value_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: MARC tag: MARC Tag Type (field_marc_tag_type) */
  $handler->display->display_options['filters']['field_marc_tag_type_value']['id'] = 'field_marc_tag_type_value';
  $handler->display->display_options['filters']['field_marc_tag_type_value']['table'] = 'field_data_field_marc_tag_type';
  $handler->display->display_options['filters']['field_marc_tag_type_value']['field'] = 'field_marc_tag_type_value';
  $handler->display->display_options['filters']['field_marc_tag_type_value']['group'] = 1;
  $handler->display->display_options['filters']['field_marc_tag_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_marc_tag_type_value']['expose']['operator_id'] = 'field_marc_tag_type_value_op';
  $handler->display->display_options['filters']['field_marc_tag_type_value']['expose']['label'] = 'MARC Tag Type';
  $handler->display->display_options['filters']['field_marc_tag_type_value']['expose']['operator'] = 'field_marc_tag_type_value_op';
  $handler->display->display_options['filters']['field_marc_tag_type_value']['expose']['identifier'] = 'field_marc_tag_type_value';
  $handler->display->display_options['filters']['field_marc_tag_type_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: MARC tag: Code (field_code) */
  $handler->display->display_options['filters']['field_code_value']['id'] = 'field_code_value';
  $handler->display->display_options['filters']['field_code_value']['table'] = 'field_data_field_code';
  $handler->display->display_options['filters']['field_code_value']['field'] = 'field_code_value';
  $handler->display->display_options['filters']['field_code_value']['group'] = 1;
  $handler->display->display_options['filters']['field_code_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_code_value']['expose']['operator_id'] = 'field_code_value_op';
  $handler->display->display_options['filters']['field_code_value']['expose']['label'] = 'Tag';
  $handler->display->display_options['filters']['field_code_value']['expose']['operator'] = 'field_code_value_op';
  $handler->display->display_options['filters']['field_code_value']['expose']['identifier'] = 'field_code_value';
  $handler->display->display_options['filters']['field_code_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: MARC tag: Development Status (field_development_status) */
  $handler->display->display_options['filters']['field_development_status_value']['id'] = 'field_development_status_value';
  $handler->display->display_options['filters']['field_development_status_value']['table'] = 'field_data_field_development_status';
  $handler->display->display_options['filters']['field_development_status_value']['field'] = 'field_development_status_value';
  $handler->display->display_options['filters']['field_development_status_value']['group'] = 1;
  $handler->display->display_options['filters']['field_development_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_development_status_value']['expose']['operator_id'] = 'field_development_status_value_op';
  $handler->display->display_options['filters']['field_development_status_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_development_status_value']['expose']['operator'] = 'field_development_status_value_op';
  $handler->display->display_options['filters']['field_development_status_value']['expose']['identifier'] = 'field_development_status_value';
  $handler->display->display_options['filters']['field_development_status_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: MARC tag: ind1 (field_indc1) */
  $handler->display->display_options['filters']['field_indc1_value']['id'] = 'field_indc1_value';
  $handler->display->display_options['filters']['field_indc1_value']['table'] = 'field_data_field_indc1';
  $handler->display->display_options['filters']['field_indc1_value']['field'] = 'field_indc1_value';
  $handler->display->display_options['filters']['field_indc1_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_indc1_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_indc1_value']['expose']['operator_id'] = 'field_indc1_value_op';
  $handler->display->display_options['filters']['field_indc1_value']['expose']['label'] = 'ind1';
  $handler->display->display_options['filters']['field_indc1_value']['expose']['operator'] = 'field_indc1_value_op';
  $handler->display->display_options['filters']['field_indc1_value']['expose']['identifier'] = 'field_indc1_value';
  $handler->display->display_options['filters']['field_indc1_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: MARC tag: ind2 (field_ind2) */
  $handler->display->display_options['filters']['field_ind2_value']['id'] = 'field_ind2_value';
  $handler->display->display_options['filters']['field_ind2_value']['table'] = 'field_data_field_ind2';
  $handler->display->display_options['filters']['field_ind2_value']['field'] = 'field_ind2_value';
  $handler->display->display_options['filters']['field_ind2_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_ind2_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ind2_value']['expose']['operator_id'] = 'field_ind2_value_op';
  $handler->display->display_options['filters']['field_ind2_value']['expose']['label'] = 'ind2';
  $handler->display->display_options['filters']['field_ind2_value']['expose']['operator'] = 'field_ind2_value_op';
  $handler->display->display_options['filters']['field_ind2_value']['expose']['identifier'] = 'field_ind2_value';
  $handler->display->display_options['filters']['field_ind2_value']['expose']['remember_roles'] = array(
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/content/cals/marc-tags-entity-view';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'MARC Tags entity view';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-nnels-admin';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Just Entities */
  $handler = $view->new_display('page', 'Just Entities', 'page_1');
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: MARC tag: Id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'eck_marc_tag';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['label'] = '';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['id']['separator'] = '';
  /* Field: MARC tag: Development Status (editable) */
  $handler->display->display_options['fields']['field_development_status_editable']['id'] = 'field_development_status_editable';
  $handler->display->display_options['fields']['field_development_status_editable']['table'] = 'field_data_field_development_status';
  $handler->display->display_options['fields']['field_development_status_editable']['field'] = 'field_development_status_editable';
  $handler->display->display_options['fields']['field_development_status_editable']['label'] = 'Status';
  $handler->display->display_options['fields']['field_development_status_editable']['type'] = 'editable';
  $handler->display->display_options['fields']['field_development_status_editable']['settings'] = array(
    'click_to_edit' => 1,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  $handler->display->display_options['fields']['field_development_status_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_development_status_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_development_status_editable']['suppress_description'] = 0;
  /* Field: MARC tag: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'eck_marc_tag';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: MARC tag: ind1 */
  $handler->display->display_options['fields']['field_indc1']['id'] = 'field_indc1';
  $handler->display->display_options['fields']['field_indc1']['table'] = 'field_data_field_indc1';
  $handler->display->display_options['fields']['field_indc1']['field'] = 'field_indc1';
  $handler->display->display_options['fields']['field_indc1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_indc1']['settings'] = array(
    'click_to_edit' => 1,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'text_default',
  );
  /* Field: MARC tag: ind2 */
  $handler->display->display_options['fields']['field_ind2']['id'] = 'field_ind2';
  $handler->display->display_options['fields']['field_ind2']['table'] = 'field_data_field_ind2';
  $handler->display->display_options['fields']['field_ind2']['field'] = 'field_ind2';
  $handler->display->display_options['fields']['field_ind2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ind2']['settings'] = array(
    'click_to_edit' => 1,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'text_default',
  );
  /* Field: Field: Marc Tag */
  $handler->display->display_options['fields']['field_marc_tag']['id'] = 'field_marc_tag';
  $handler->display->display_options['fields']['field_marc_tag']['table'] = 'field_data_field_marc_tag';
  $handler->display->display_options['fields']['field_marc_tag']['field'] = 'field_marc_tag';
  $handler->display->display_options['fields']['field_marc_tag']['label'] = 'Title / Tag';
  $handler->display->display_options['fields']['field_marc_tag']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_marc_tag']['alter']['text'] = '<strong>[title]</strong><br/>----------<br/>
<strong>[field_marc_tag]</strong><br/>
ind1: [field_indc1]<br/>ind2: [field_ind2] ';
  $handler->display->display_options['fields']['field_marc_tag']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_marc_tag']['settings'] = array(
    'click_to_edit' => 1,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'text_default',
  );
  /* Field: MARC tag: MARC Tag Type */
  $handler->display->display_options['fields']['field_marc_tag_type']['id'] = 'field_marc_tag_type';
  $handler->display->display_options['fields']['field_marc_tag_type']['table'] = 'field_data_field_marc_tag_type';
  $handler->display->display_options['fields']['field_marc_tag_type']['field'] = 'field_marc_tag_type';
  /* Field: Field: Export Type (editable) */
  $handler->display->display_options['fields']['field_export_type_editable']['id'] = 'field_export_type_editable';
  $handler->display->display_options['fields']['field_export_type_editable']['table'] = 'field_data_field_export_type';
  $handler->display->display_options['fields']['field_export_type_editable']['field'] = 'field_export_type_editable';
  $handler->display->display_options['fields']['field_export_type_editable']['label'] = 'Export Type';
  $handler->display->display_options['fields']['field_export_type_editable']['settings'] = array(
    'click_to_edit' => 1,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  $handler->display->display_options['fields']['field_export_type_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_export_type_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_export_type_editable']['suppress_description'] = 0;
  /* Field: Field: Include in Export */
  $handler->display->display_options['fields']['field_include_in_export']['id'] = 'field_include_in_export';
  $handler->display->display_options['fields']['field_include_in_export']['table'] = 'field_data_field_include_in_export';
  $handler->display->display_options['fields']['field_include_in_export']['field'] = 'field_include_in_export';
  $handler->display->display_options['fields']['field_include_in_export']['label'] = 'Export?';
  $handler->display->display_options['fields']['field_include_in_export']['settings'] = array(
    'click_to_edit' => 1,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Field: Field: Source Value */
  $handler->display->display_options['fields']['field_source_value']['id'] = 'field_source_value';
  $handler->display->display_options['fields']['field_source_value']['table'] = 'field_data_field_source_value';
  $handler->display->display_options['fields']['field_source_value']['field'] = 'field_source_value';
  $handler->display->display_options['fields']['field_source_value']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Field: Field: Notes */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_description']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_description']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_description']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['field_description']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_description']['settings'] = array(
    'click_to_edit' => 1,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'text_default',
  );
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = 'Subfield View';
  $handler->display->display_options['fields']['view']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['view']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['view']['view'] = 'field_collection_view_marc_subfields';
  $handler->display->display_options['fields']['view']['display'] = 'embed_4';
  $handler->display->display_options['fields']['view']['arguments'] = '[!id]';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Notes and Subfields';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div>[field_description]</div>
[view]';
  /* Field: Field collection item: Field collection item UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['relationship'] = 'field_marc_subfield_collection_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: MARC tag: marc_tag type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_marc_tag';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'marc_tag' => 'marc_tag',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'admin/content/exportable_marc_tags_entity';
  $export['marc_tags_entity_view'] = $view;

  $view = new view();
  $view->name = 's3_file_attachment_dates_and_publishers';
  $view->description = 'Used to convert file formats, normalize performer values, etc.';
  $view->tag = 'File Attachments, Normalization';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'S3 File Attachment Dates and Publishers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Files - Copy / Update Date Created values';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
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
  /* Relationship: Field collection item: S3 File Upload (field_s3_file_upload:fid) */
  $handler->display->display_options['relationships']['field_s3_file_upload_fid']['id'] = 'field_s3_file_upload_fid';
  $handler->display->display_options['relationships']['field_s3_file_upload_fid']['table'] = 'field_data_field_s3_file_upload';
  $handler->display->display_options['relationships']['field_s3_file_upload_fid']['field'] = 'field_s3_file_upload_fid';
  /* Relationship: Content: Date (field_date) */
  $handler->display->display_options['relationships']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['relationships']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['relationships']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['relationships']['field_date_value']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['relationships']['field_date_value']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_date_value']['delta'] = '-1';
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
    'action::_cals_importer_exporter_update_publisher_and_datecreated_vbo' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'skip_permission_check' => 0,
      'override_label' => 1,
      'label' => 'Copy Date Created & Publisher to Field Collection',
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
  /* Field: Field collection item: S3 File Upload */
  $handler->display->display_options['fields']['field_s3_file_upload']['id'] = 'field_s3_file_upload';
  $handler->display->display_options['fields']['field_s3_file_upload']['table'] = 'field_data_field_s3_file_upload';
  $handler->display->display_options['fields']['field_s3_file_upload']['field'] = 'field_s3_file_upload';
  $handler->display->display_options['fields']['field_s3_file_upload']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s3_file_upload']['click_sort_column'] = 'fid';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['fields']['field_date']['label'] = 'Date (node)';
  $handler->display->display_options['fields']['field_date']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_date']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_date']['multi_type'] = 'ul';
  /* Field: Field collection item: Date Created */
  $handler->display->display_options['fields']['field_date_created']['id'] = 'field_date_created';
  $handler->display->display_options['fields']['field_date_created']['table'] = 'field_data_field_date_created';
  $handler->display->display_options['fields']['field_date_created']['field'] = 'field_date_created';
  $handler->display->display_options['fields']['field_date_created']['label'] = 'Date Created (File)';
  $handler->display->display_options['fields']['field_date_created']['settings'] = array(
    'format_type' => 'long',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Publisher (Source) */
  $handler->display->display_options['fields']['field_publisher_source']['id'] = 'field_publisher_source';
  $handler->display->display_options['fields']['field_publisher_source']['table'] = 'field_data_field_publisher_source';
  $handler->display->display_options['fields']['field_publisher_source']['field'] = 'field_publisher_source';
  $handler->display->display_options['fields']['field_publisher_source']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['fields']['field_publisher_source']['label'] = 'Source Publisher (Node)';
  $handler->display->display_options['fields']['field_publisher_source']['delta_offset'] = '0';
  /* Field: Content: Publisher */
  $handler->display->display_options['fields']['field_publisher']['id'] = 'field_publisher';
  $handler->display->display_options['fields']['field_publisher']['table'] = 'field_data_field_publisher';
  $handler->display->display_options['fields']['field_publisher']['field'] = 'field_publisher';
  $handler->display->display_options['fields']['field_publisher']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['fields']['field_publisher']['label'] = 'Publisher (Node)';
  $handler->display->display_options['fields']['field_publisher']['delta_offset'] = '0';
  /* Field: Field: File Format */
  $handler->display->display_options['fields']['field_file_format']['id'] = 'field_file_format';
  $handler->display->display_options['fields']['field_file_format']['table'] = 'field_data_field_file_format';
  $handler->display->display_options['fields']['field_file_format']['field'] = 'field_file_format';
  /* Field: Field collection item: Place of Publication */
  $handler->display->display_options['fields']['field_place_of_publication']['id'] = 'field_place_of_publication';
  $handler->display->display_options['fields']['field_place_of_publication']['table'] = 'field_data_field_place_of_publication';
  $handler->display->display_options['fields']['field_place_of_publication']['field'] = 'field_place_of_publication';
  /* Field: Field collection item: Format Publisher */
  $handler->display->display_options['fields']['field_publisher_format']['id'] = 'field_publisher_format';
  $handler->display->display_options['fields']['field_publisher_format']['table'] = 'field_data_field_publisher_format';
  $handler->display->display_options['fields']['field_publisher_format']['field'] = 'field_publisher_format';
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
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  $handler->display->display_options['sorts']['nid']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['sorts']['nid']['order'] = 'DESC';
  $handler->display->display_options['sorts']['nid']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['nid']['expose']['label'] = 'Nid';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  /* Sort criterion: Field collection item: Date Created (field_date_created) */
  $handler->display->display_options['sorts']['field_date_created_value']['id'] = 'field_date_created_value';
  $handler->display->display_options['sorts']['field_date_created_value']['table'] = 'field_data_field_date_created';
  $handler->display->display_options['sorts']['field_date_created_value']['field'] = 'field_date_created_value';
  $handler->display->display_options['sorts']['field_date_created_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_date_created_value']['expose']['label'] = 'Date Created';
  /* Sort criterion: Field collection item: Format Publisher (field_publisher_format) */
  $handler->display->display_options['sorts']['field_publisher_format_value']['id'] = 'field_publisher_format_value';
  $handler->display->display_options['sorts']['field_publisher_format_value']['table'] = 'field_data_field_publisher_format';
  $handler->display->display_options['sorts']['field_publisher_format_value']['field'] = 'field_publisher_format_value';
  $handler->display->display_options['sorts']['field_publisher_format_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_publisher_format_value']['expose']['label'] = 'Format Publisher';
  /* Filter criterion: Field collection item: S3 File Upload (field_s3_file_upload:fid) */
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
  /* Filter criterion: Field collection item: DC Date (field_dc_date) */
  $handler->display->display_options['filters']['field_dc_date_value_1']['id'] = 'field_dc_date_value_1';
  $handler->display->display_options['filters']['field_dc_date_value_1']['table'] = 'field_data_field_dc_date';
  $handler->display->display_options['filters']['field_dc_date_value_1']['field'] = 'field_dc_date_value';
  $handler->display->display_options['filters']['field_dc_date_value_1']['relationship'] = 'field_date_value';
  $handler->display->display_options['filters']['field_dc_date_value_1']['group'] = 1;
  $handler->display->display_options['filters']['field_dc_date_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_dc_date_value_1']['expose']['operator_id'] = 'field_dc_date_value_1_op';
  $handler->display->display_options['filters']['field_dc_date_value_1']['expose']['label'] = 'DC Date Value (node)';
  $handler->display->display_options['filters']['field_dc_date_value_1']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_dc_date_value_1']['expose']['operator'] = 'field_dc_date_value_1_op';
  $handler->display->display_options['filters']['field_dc_date_value_1']['expose']['identifier'] = 'field_dc_date_value_1';
  $handler->display->display_options['filters']['field_dc_date_value_1']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Field collection item: Qualifier Date (field_qualifier_date) */
  $handler->display->display_options['filters']['field_qualifier_date_value']['id'] = 'field_qualifier_date_value';
  $handler->display->display_options['filters']['field_qualifier_date_value']['table'] = 'field_data_field_qualifier_date';
  $handler->display->display_options['filters']['field_qualifier_date_value']['field'] = 'field_qualifier_date_value';
  $handler->display->display_options['filters']['field_qualifier_date_value']['relationship'] = 'field_date_value';
  $handler->display->display_options['filters']['field_qualifier_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_qualifier_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_qualifier_date_value']['expose']['operator_id'] = 'field_qualifier_date_value_op';
  $handler->display->display_options['filters']['field_qualifier_date_value']['expose']['label'] = 'Date Type / Qualifer (node)';
  $handler->display->display_options['filters']['field_qualifier_date_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_qualifier_date_value']['expose']['operator'] = 'field_qualifier_date_value_op';
  $handler->display->display_options['filters']['field_qualifier_date_value']['expose']['identifier'] = 'field_qualifier_date_value';
  $handler->display->display_options['filters']['field_qualifier_date_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_qualifier_date_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: Date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['filters']['field_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'Date (node)';
  $handler->display->display_options['filters']['field_date_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Field collection item: Date Created (field_date_created) */
  $handler->display->display_options['filters']['field_date_created_value']['id'] = 'field_date_created_value';
  $handler->display->display_options['filters']['field_date_created_value']['table'] = 'field_data_field_date_created';
  $handler->display->display_options['filters']['field_date_created_value']['field'] = 'field_date_created_value';
  $handler->display->display_options['filters']['field_date_created_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_created_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_created_value']['expose']['operator_id'] = 'field_date_created_value_op';
  $handler->display->display_options['filters']['field_date_created_value']['expose']['label'] = 'Date Created (file)';
  $handler->display->display_options['filters']['field_date_created_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_date_created_value']['expose']['operator'] = 'field_date_created_value_op';
  $handler->display->display_options['filters']['field_date_created_value']['expose']['identifier'] = 'field_date_created_value';
  $handler->display->display_options['filters']['field_date_created_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: Publisher (field_publisher) */
  $handler->display->display_options['filters']['field_publisher_value']['id'] = 'field_publisher_value';
  $handler->display->display_options['filters']['field_publisher_value']['table'] = 'field_data_field_publisher';
  $handler->display->display_options['filters']['field_publisher_value']['field'] = 'field_publisher_value';
  $handler->display->display_options['filters']['field_publisher_value']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['filters']['field_publisher_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_publisher_value']['group'] = 1;
  $handler->display->display_options['filters']['field_publisher_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_publisher_value']['expose']['operator_id'] = 'field_publisher_value_op';
  $handler->display->display_options['filters']['field_publisher_value']['expose']['label'] = 'Publisher (node)';
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
  /* Filter criterion: Content: Publisher (Source) (field_publisher_source) */
  $handler->display->display_options['filters']['field_publisher_source_value']['id'] = 'field_publisher_source_value';
  $handler->display->display_options['filters']['field_publisher_source_value']['table'] = 'field_data_field_publisher_source';
  $handler->display->display_options['filters']['field_publisher_source_value']['field'] = 'field_publisher_source_value';
  $handler->display->display_options['filters']['field_publisher_source_value']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['filters']['field_publisher_source_value']['group'] = 1;
  $handler->display->display_options['filters']['field_publisher_source_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_publisher_source_value']['expose']['operator_id'] = 'field_publisher_source_value_op';
  $handler->display->display_options['filters']['field_publisher_source_value']['expose']['label'] = 'Publisher (Source) (node)';
  $handler->display->display_options['filters']['field_publisher_source_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_publisher_source_value']['expose']['operator'] = 'field_publisher_source_value_op';
  $handler->display->display_options['filters']['field_publisher_source_value']['expose']['identifier'] = 'field_publisher_source_value';
  $handler->display->display_options['filters']['field_publisher_source_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['filters']['status']['value'] = '0';
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['required'] = TRUE;
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

  /* Display: VBO - File Dates and Publisher */
  $handler = $view->new_display('page', 'VBO - File Dates and Publisher', 'page_1');
  $handler->display->display_options['path'] = 'admin/content/cals/repo-items/attachments';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Files - update Publisher and Date Created Values';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-nnels-admin';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: VBO - File Publisher */
  $handler = $view->new_display('page', 'VBO - File Publisher', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Files - Copy / Update Format Publishers';
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
    'action::_cals_importer_exporter_update_publisher_vbo' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'skip_permission_check' => 0,
      'override_label' => 1,
      'label' => 'Copy Publisher to Field Collection',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 1,
      'label' => 'Update Publisher / Place of Publication',
      'settings' => array(
        'show_all_tokens' => 0,
        'display_values' => array(
          'field_file_resource::field_place_of_publication' => 'field_file_resource::field_place_of_publication',
          'field_file_resource::field_publisher_format' => 'field_file_resource::field_publisher_format',
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
  /* Field: Field collection item: S3 File Upload */
  $handler->display->display_options['fields']['field_s3_file_upload']['id'] = 'field_s3_file_upload';
  $handler->display->display_options['fields']['field_s3_file_upload']['table'] = 'field_data_field_s3_file_upload';
  $handler->display->display_options['fields']['field_s3_file_upload']['field'] = 'field_s3_file_upload';
  $handler->display->display_options['fields']['field_s3_file_upload']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s3_file_upload']['click_sort_column'] = 'fid';
  /* Field: Field: File Format */
  $handler->display->display_options['fields']['field_file_format']['id'] = 'field_file_format';
  $handler->display->display_options['fields']['field_file_format']['table'] = 'field_data_field_file_format';
  $handler->display->display_options['fields']['field_file_format']['field'] = 'field_file_format';
  /* Field: Content: Publisher (Source) */
  $handler->display->display_options['fields']['field_publisher_source']['id'] = 'field_publisher_source';
  $handler->display->display_options['fields']['field_publisher_source']['table'] = 'field_data_field_publisher_source';
  $handler->display->display_options['fields']['field_publisher_source']['field'] = 'field_publisher_source';
  $handler->display->display_options['fields']['field_publisher_source']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['fields']['field_publisher_source']['label'] = 'Source Publisher (Node)';
  $handler->display->display_options['fields']['field_publisher_source']['delta_offset'] = '0';
  /* Field: Content: Publisher */
  $handler->display->display_options['fields']['field_publisher']['id'] = 'field_publisher';
  $handler->display->display_options['fields']['field_publisher']['table'] = 'field_data_field_publisher';
  $handler->display->display_options['fields']['field_publisher']['field'] = 'field_publisher';
  $handler->display->display_options['fields']['field_publisher']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['fields']['field_publisher']['label'] = 'Publisher (Node)';
  $handler->display->display_options['fields']['field_publisher']['delta_offset'] = '0';
  /* Field: Field collection item: Place of Publication */
  $handler->display->display_options['fields']['field_place_of_publication']['id'] = 'field_place_of_publication';
  $handler->display->display_options['fields']['field_place_of_publication']['table'] = 'field_data_field_place_of_publication';
  $handler->display->display_options['fields']['field_place_of_publication']['field'] = 'field_place_of_publication';
  /* Field: Field collection item: Format Publisher */
  $handler->display->display_options['fields']['field_publisher_format']['id'] = 'field_publisher_format';
  $handler->display->display_options['fields']['field_publisher_format']['table'] = 'field_data_field_publisher_format';
  $handler->display->display_options['fields']['field_publisher_format']['field'] = 'field_publisher_format';
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
  /* Sort criterion: Field collection item: Format Publisher (field_publisher_format) */
  $handler->display->display_options['sorts']['field_publisher_format_value']['id'] = 'field_publisher_format_value';
  $handler->display->display_options['sorts']['field_publisher_format_value']['table'] = 'field_data_field_publisher_format';
  $handler->display->display_options['sorts']['field_publisher_format_value']['field'] = 'field_publisher_format_value';
  $handler->display->display_options['sorts']['field_publisher_format_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_publisher_format_value']['expose']['label'] = 'Format Publisher';
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  $handler->display->display_options['sorts']['nid']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['sorts']['nid']['order'] = 'DESC';
  $handler->display->display_options['sorts']['nid']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['nid']['expose']['label'] = 'Nid';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  /* Sort criterion: Field collection item: Date Created (field_date_created) */
  $handler->display->display_options['sorts']['field_date_created_value']['id'] = 'field_date_created_value';
  $handler->display->display_options['sorts']['field_date_created_value']['table'] = 'field_data_field_date_created';
  $handler->display->display_options['sorts']['field_date_created_value']['field'] = 'field_date_created_value';
  $handler->display->display_options['sorts']['field_date_created_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_date_created_value']['expose']['label'] = 'Date Created';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Field collection item: S3 File Upload (field_s3_file_upload:fid) */
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
  /* Filter criterion: Content: Publisher (field_publisher) */
  $handler->display->display_options['filters']['field_publisher_value']['id'] = 'field_publisher_value';
  $handler->display->display_options['filters']['field_publisher_value']['table'] = 'field_data_field_publisher';
  $handler->display->display_options['filters']['field_publisher_value']['field'] = 'field_publisher_value';
  $handler->display->display_options['filters']['field_publisher_value']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['filters']['field_publisher_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_publisher_value']['group'] = 1;
  $handler->display->display_options['filters']['field_publisher_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_publisher_value']['expose']['operator_id'] = 'field_publisher_value_op';
  $handler->display->display_options['filters']['field_publisher_value']['expose']['label'] = 'Publisher (node)';
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
  /* Filter criterion: Content: Publisher (Source) (field_publisher_source) */
  $handler->display->display_options['filters']['field_publisher_source_value']['id'] = 'field_publisher_source_value';
  $handler->display->display_options['filters']['field_publisher_source_value']['table'] = 'field_data_field_publisher_source';
  $handler->display->display_options['filters']['field_publisher_source_value']['field'] = 'field_publisher_source_value';
  $handler->display->display_options['filters']['field_publisher_source_value']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['filters']['field_publisher_source_value']['group'] = 1;
  $handler->display->display_options['filters']['field_publisher_source_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_publisher_source_value']['expose']['operator_id'] = 'field_publisher_source_value_op';
  $handler->display->display_options['filters']['field_publisher_source_value']['expose']['label'] = 'Publisher (Source) (node)';
  $handler->display->display_options['filters']['field_publisher_source_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_publisher_source_value']['expose']['operator'] = 'field_publisher_source_value_op';
  $handler->display->display_options['filters']['field_publisher_source_value']['expose']['identifier'] = 'field_publisher_source_value';
  $handler->display->display_options['filters']['field_publisher_source_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Field collection item: Format Publisher (field_publisher_format) */
  $handler->display->display_options['filters']['field_publisher_format_value']['id'] = 'field_publisher_format_value';
  $handler->display->display_options['filters']['field_publisher_format_value']['table'] = 'field_data_field_publisher_format';
  $handler->display->display_options['filters']['field_publisher_format_value']['field'] = 'field_publisher_format_value';
  $handler->display->display_options['filters']['field_publisher_format_value']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_publisher_format_value']['group'] = 1;
  $handler->display->display_options['filters']['field_publisher_format_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_publisher_format_value']['expose']['operator_id'] = 'field_publisher_format_value_op';
  $handler->display->display_options['filters']['field_publisher_format_value']['expose']['label'] = 'Format Publisher (file)';
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
  /* Filter criterion: Field collection item: Place of Publication (field_place_of_publication) */
  $handler->display->display_options['filters']['field_place_of_publication_value']['id'] = 'field_place_of_publication_value';
  $handler->display->display_options['filters']['field_place_of_publication_value']['table'] = 'field_data_field_place_of_publication';
  $handler->display->display_options['filters']['field_place_of_publication_value']['field'] = 'field_place_of_publication_value';
  $handler->display->display_options['filters']['field_place_of_publication_value']['group'] = 1;
  $handler->display->display_options['filters']['field_place_of_publication_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_place_of_publication_value']['expose']['operator_id'] = 'field_place_of_publication_value_op';
  $handler->display->display_options['filters']['field_place_of_publication_value']['expose']['label'] = 'Place of Publication';
  $handler->display->display_options['filters']['field_place_of_publication_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_place_of_publication_value']['expose']['operator'] = 'field_place_of_publication_value_op';
  $handler->display->display_options['filters']['field_place_of_publication_value']['expose']['identifier'] = 'field_place_of_publication_value';
  $handler->display->display_options['filters']['field_place_of_publication_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: Published */
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
  $handler->display->display_options['filters']['status']['expose']['required'] = TRUE;
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
  /* Filter criterion: Field: File Format (field_file_format) */
  $handler->display->display_options['filters']['field_file_format_value']['id'] = 'field_file_format_value';
  $handler->display->display_options['filters']['field_file_format_value']['table'] = 'field_data_field_file_format';
  $handler->display->display_options['filters']['field_file_format_value']['field'] = 'field_file_format_value';
  $handler->display->display_options['filters']['field_file_format_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_file_format_value']['expose']['operator_id'] = 'field_file_format_value_op';
  $handler->display->display_options['filters']['field_file_format_value']['expose']['label'] = 'File Format';
  $handler->display->display_options['filters']['field_file_format_value']['expose']['use_operator'] = TRUE;
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
  $handler->display->display_options['path'] = 'admin/content/cals/repo-items/attachments/publishers';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Files - update Publisher and Date Created Values';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-nnels-admin';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: VBO - File Dates */
  $handler = $view->new_display('page', 'VBO - File Dates', 'page_3');
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
    'action::_cals_importer_exporter_update_date_created_entity_vbo' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'skip_permission_check' => 0,
      'override_label' => 1,
      'label' => 'Copy Date Created to Field Collection',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'skip_permission_check' => 0,
      'override_label' => 1,
      'label' => 'Update Date Created on the File',
      'settings' => array(
        'show_all_tokens' => 0,
        'display_values' => array(
          'field_file_resource::field_date_created' => 'field_file_resource::field_date_created',
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
  /* Field: Field collection item: S3 File Upload */
  $handler->display->display_options['fields']['field_s3_file_upload']['id'] = 'field_s3_file_upload';
  $handler->display->display_options['fields']['field_s3_file_upload']['table'] = 'field_data_field_s3_file_upload';
  $handler->display->display_options['fields']['field_s3_file_upload']['field'] = 'field_s3_file_upload';
  $handler->display->display_options['fields']['field_s3_file_upload']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s3_file_upload']['click_sort_column'] = 'fid';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['fields']['field_date']['label'] = 'Date (node)';
  $handler->display->display_options['fields']['field_date']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_date']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_date']['multi_type'] = 'ul';
  /* Field: Field collection item: Date Created */
  $handler->display->display_options['fields']['field_date_created']['id'] = 'field_date_created';
  $handler->display->display_options['fields']['field_date_created']['table'] = 'field_data_field_date_created';
  $handler->display->display_options['fields']['field_date_created']['field'] = 'field_date_created';
  $handler->display->display_options['fields']['field_date_created']['label'] = 'Date Created (File)';
  $handler->display->display_options['fields']['field_date_created']['settings'] = array(
    'format_type' => 'long',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Field collection item: S3 File Upload (field_s3_file_upload:fid) */
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
  /* Filter criterion: Field collection item: DC Date (field_dc_date) */
  $handler->display->display_options['filters']['field_dc_date_value_1']['id'] = 'field_dc_date_value_1';
  $handler->display->display_options['filters']['field_dc_date_value_1']['table'] = 'field_data_field_dc_date';
  $handler->display->display_options['filters']['field_dc_date_value_1']['field'] = 'field_dc_date_value';
  $handler->display->display_options['filters']['field_dc_date_value_1']['relationship'] = 'field_date_value';
  $handler->display->display_options['filters']['field_dc_date_value_1']['group'] = 1;
  $handler->display->display_options['filters']['field_dc_date_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_dc_date_value_1']['expose']['operator_id'] = 'field_dc_date_value_1_op';
  $handler->display->display_options['filters']['field_dc_date_value_1']['expose']['label'] = 'DC Date Value (node)';
  $handler->display->display_options['filters']['field_dc_date_value_1']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_dc_date_value_1']['expose']['operator'] = 'field_dc_date_value_1_op';
  $handler->display->display_options['filters']['field_dc_date_value_1']['expose']['identifier'] = 'field_dc_date_value_1';
  $handler->display->display_options['filters']['field_dc_date_value_1']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Field collection item: Qualifier Date (field_qualifier_date) */
  $handler->display->display_options['filters']['field_qualifier_date_value']['id'] = 'field_qualifier_date_value';
  $handler->display->display_options['filters']['field_qualifier_date_value']['table'] = 'field_data_field_qualifier_date';
  $handler->display->display_options['filters']['field_qualifier_date_value']['field'] = 'field_qualifier_date_value';
  $handler->display->display_options['filters']['field_qualifier_date_value']['relationship'] = 'field_date_value';
  $handler->display->display_options['filters']['field_qualifier_date_value']['value'] = array(
    'Created' => 'Created',
  );
  $handler->display->display_options['filters']['field_qualifier_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_qualifier_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_qualifier_date_value']['expose']['operator_id'] = 'field_qualifier_date_value_op';
  $handler->display->display_options['filters']['field_qualifier_date_value']['expose']['label'] = 'Date Type / Qualifer (node)';
  $handler->display->display_options['filters']['field_qualifier_date_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_qualifier_date_value']['expose']['operator'] = 'field_qualifier_date_value_op';
  $handler->display->display_options['filters']['field_qualifier_date_value']['expose']['identifier'] = 'field_qualifier_date_value';
  $handler->display->display_options['filters']['field_qualifier_date_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_qualifier_date_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: Date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['relationship'] = 'field_file_resource_node';
  $handler->display->display_options['filters']['field_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'Date (node)';
  $handler->display->display_options['filters']['field_date_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Field collection item: Date Created (field_date_created) */
  $handler->display->display_options['filters']['field_date_created_value']['id'] = 'field_date_created_value';
  $handler->display->display_options['filters']['field_date_created_value']['table'] = 'field_data_field_date_created';
  $handler->display->display_options['filters']['field_date_created_value']['field'] = 'field_date_created_value';
  $handler->display->display_options['filters']['field_date_created_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_created_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_created_value']['expose']['operator_id'] = 'field_date_created_value_op';
  $handler->display->display_options['filters']['field_date_created_value']['expose']['label'] = 'Date Created (file)';
  $handler->display->display_options['filters']['field_date_created_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_date_created_value']['expose']['operator'] = 'field_date_created_value_op';
  $handler->display->display_options['filters']['field_date_created_value']['expose']['identifier'] = 'field_date_created_value';
  $handler->display->display_options['filters']['field_date_created_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: Published */
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
  $handler->display->display_options['filters']['status']['expose']['required'] = TRUE;
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
  /* Filter criterion: Field: File Format (field_file_format) */
  $handler->display->display_options['filters']['field_file_format_value']['id'] = 'field_file_format_value';
  $handler->display->display_options['filters']['field_file_format_value']['table'] = 'field_data_field_file_format';
  $handler->display->display_options['filters']['field_file_format_value']['field'] = 'field_file_format_value';
  $handler->display->display_options['filters']['field_file_format_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_file_format_value']['expose']['operator_id'] = 'field_file_format_value_op';
  $handler->display->display_options['filters']['field_file_format_value']['expose']['label'] = 'File Format';
  $handler->display->display_options['filters']['field_file_format_value']['expose']['use_operator'] = TRUE;
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
  $handler->display->display_options['path'] = 'admin/content/cals/repo-items/attachments/dates';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Files - update Publisher and Date Created Values';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-nnels-admin';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['s3_file_attachment_dates_and_publishers'] = $view;

  return $export;
}
