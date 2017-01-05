<?php
/**
 * @file
 * nnels_contributed_video.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function nnels_contributed_video_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'contributed_videos';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Videos';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Registered Disability Savings Plan - Videos';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Video Upload */
  $handler->display->display_options['fields']['field_video_upload']['id'] = 'field_video_upload';
  $handler->display->display_options['fields']['field_video_upload']['table'] = 'field_data_field_video_upload';
  $handler->display->display_options['fields']['field_video_upload']['field'] = 'field_video_upload';
  $handler->display->display_options['fields']['field_video_upload']['label'] = '';
  $handler->display->display_options['fields']['field_video_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_video_upload']['type'] = 'video_formatter_thumbnail';
  $handler->display->display_options['fields']['field_video_upload']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  /* Field: Video: Duration */
  $handler->display->display_options['fields']['duration']['id'] = 'duration';
  $handler->display->display_options['fields']['duration']['table'] = 'video_queue';
  $handler->display->display_options['fields']['duration']['field'] = 'duration';
  $handler->display->display_options['fields']['duration']['label'] = '';
  $handler->display->display_options['fields']['duration']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '160';
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Read more';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '160',
  );
  /* Field: Content: Video Collection */
  $handler->display->display_options['fields']['field_video_collection']['id'] = 'field_video_collection';
  $handler->display->display_options['fields']['field_video_collection']['table'] = 'field_data_field_video_collection';
  $handler->display->display_options['fields']['field_video_collection']['field'] = 'field_video_collection';
  $handler->display->display_options['fields']['field_video_collection']['label'] = '';
  $handler->display->display_options['fields']['field_video_collection']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_video_collection']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Collection Order (field_video_collection_order) */
  $handler->display->display_options['sorts']['field_video_collection_order_value']['id'] = 'field_video_collection_order_value';
  $handler->display->display_options['sorts']['field_video_collection_order_value']['table'] = 'field_data_field_video_collection_order';
  $handler->display->display_options['sorts']['field_video_collection_order_value']['field'] = 'field_video_collection_order_value';
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
    'contributed_video' => 'contributed_video',
  );
  /* Filter criterion: Content: Video Collection (field_video_collection) */
  $handler->display->display_options['filters']['field_video_collection_tid']['id'] = 'field_video_collection_tid';
  $handler->display->display_options['filters']['field_video_collection_tid']['table'] = 'field_data_field_video_collection';
  $handler->display->display_options['filters']['field_video_collection_tid']['field'] = 'field_video_collection_tid';
  $handler->display->display_options['filters']['field_video_collection_tid']['value'] = array(
    0 => '31198',
  );
  $handler->display->display_options['filters']['field_video_collection_tid']['vocabulary'] = 'relations';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Registered Disability Savings Plan - ASL Videos';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['path'] = 'videos/rdsp/page';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Registered Disability Savings Plan - Videos feed';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['style_options']['description'] = 'Feed for the RDSP contributed videos. Useful for getting the canonical links for each item.';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['row_options']['links'] = TRUE;
  $handler->display->display_options['path'] = 'videos/rdsp/rss';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['block_description'] = 'RDSP Video Grid view';
  $export['contributed_videos'] = $view;

  return $export;
}
