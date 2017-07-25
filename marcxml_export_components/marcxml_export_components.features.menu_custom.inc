<?php
/**
 * @file
 * marcxml_export_components.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function marcxml_export_components_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: management.
  $menus['management'] = array(
    'menu_name' => 'management',
    'title' => 'Management',
    'description' => 'The <em>Management</em> menu contains links for administrative tasks.',
    'language' => 'und',
    'i18n_mode' => 0,
  );
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
  t('Management');
  t('NNELS Admin');
  t('Sidebar menu for admins');
  t('The <em>Management</em> menu contains links for administrative tasks.');

  return $menus;
}
