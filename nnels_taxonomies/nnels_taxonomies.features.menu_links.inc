<?php
/**
 * @file
 * nnels_taxonomies.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function nnels_taxonomies_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-nnels-admin_taxonomy-term-count:admin/taxonomy-term-count.
  $menu_links['menu-nnels-admin_taxonomy-term-count:admin/taxonomy-term-count'] = array(
    'menu_name' => 'menu-nnels-admin',
    'link_path' => 'admin/taxonomy-term-count',
    'router_path' => 'admin/taxonomy-term-count',
    'link_title' => 'Taxonomy Term Count',
    'options' => array(
      'identifier' => 'menu-nnels-admin_taxonomy-term-count:admin/taxonomy-term-count',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-nnels-admin_repo-itemsgeneral:admin/content/cals/streamlined-repo',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Taxonomy Term Count');

  return $menu_links;
}
