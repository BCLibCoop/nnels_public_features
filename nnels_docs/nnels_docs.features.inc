<?php
/**
 * @file
 * nnels_docs.features.inc
 */

/**
 * Implements hook_node_info().
 */
function nnels_docs_node_info() {
  $items = array(
    'document' => array(
      'name' => t('Document'),
      'base' => 'node_content',
      'description' => t('Document persisted in S3 for linking in other contexts. Public read access by default.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
