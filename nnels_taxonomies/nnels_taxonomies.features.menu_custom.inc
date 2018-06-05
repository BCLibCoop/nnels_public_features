<?php
/**
 * @file
 * nnels_taxonomies.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function nnels_taxonomies_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-nnels-admin.
  $menus['menu-nnels-admin'] = array(
    'menu_name' => 'menu-nnels-admin',
    'title' => 'NNELS Admin',
    'description' => 'Sidebar menu for admins',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('NNELS Admin');
  t('Sidebar menu for admins');

  return $menus;
}
