<?php
/**
 * @file
 * marcxml_export_components.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function marcxml_export_components_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_add-marc-tag:admin/structure/entity-type/marc_tag/marc_tag/add.
  $menu_links['management_add-marc-tag:admin/structure/entity-type/marc_tag/marc_tag/add'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/entity-type/marc_tag/marc_tag/add',
    'router_path' => 'admin/structure/entity-type/marc_tag/marc_tag/add',
    'link_title' => 'Add MARC tag',
    'options' => array(
      'attributes' => array(
        'title' => 'Add an entity of type MARC tag with bundle MARC tag',
      ),
      'identifier' => 'management_add-marc-tag:admin/structure/entity-type/marc_tag/marc_tag/add',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_marc-tag:admin/structure/entity-type/marc_tag/marc_tag',
  );
  // Exported menu link: management_marc-export-sets:admin/content/cals/marc-export-sets.
  $menu_links['management_marc-export-sets:admin/content/cals/marc-export-sets'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/content/cals/marc-export-sets',
    'router_path' => 'admin/content/cals/marc-export-sets',
    'link_title' => 'MARC Export Sets',
    'options' => array(
      'identifier' => 'management_marc-export-sets:admin/content/cals/marc-export-sets',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_content:admin/content',
  );
  // Exported menu link: management_marc-tag:admin/structure/entity-type/marc_tag.
  $menu_links['management_marc-tag:admin/structure/entity-type/marc_tag'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/entity-type/marc_tag',
    'router_path' => 'admin/structure/entity-type/marc_tag',
    'link_title' => 'MARC tag',
    'options' => array(
      'attributes' => array(
        'title' => 'View all the bundles for \'MARC tag\'',
      ),
      'identifier' => 'management_marc-tag:admin/structure/entity-type/marc_tag',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_entity-types:admin/structure/entity-type',
  );
  // Exported menu link: management_marc-tag:admin/structure/entity-type/marc_tag/marc_tag.
  $menu_links['management_marc-tag:admin/structure/entity-type/marc_tag/marc_tag'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/entity-type/marc_tag/marc_tag',
    'router_path' => 'admin/structure/entity-type/marc_tag/marc_tag',
    'link_title' => 'MARC tag',
    'options' => array(
      'attributes' => array(
        'title' => 'View all entites of type MARC tag with bundle MARC tag',
      ),
      'identifier' => 'management_marc-tag:admin/structure/entity-type/marc_tag/marc_tag',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_marc-tag:admin/structure/entity-type/marc_tag',
  );
  // Exported menu link: menu-nnels-admin_marc-tag-x-walk-editable:admin/content/cals/marc-tag-crosswalk.
  $menu_links['menu-nnels-admin_marc-tag-x-walk-editable:admin/content/cals/marc-tag-crosswalk'] = array(
    'menu_name' => 'menu-nnels-admin',
    'link_path' => 'admin/content/cals/marc-tag-crosswalk',
    'router_path' => 'admin/content/cals/marc-tag-crosswalk',
    'link_title' => 'MARC Tag X-walk (Editable)',
    'options' => array(
      'identifier' => 'menu-nnels-admin_marc-tag-x-walk-editable:admin/content/cals/marc-tag-crosswalk',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -34,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: navigation_marc-export-set:node/add/marc-export-set.
  $menu_links['navigation_marc-export-set:node/add/marc-export-set'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/marc-export-set',
    'router_path' => 'node/add/marc-export-set',
    'link_title' => 'MARC Export Set',
    'options' => array(
      'attributes' => array(
        'title' => 'Used to manage & track MARC Export files.',
      ),
      'identifier' => 'navigation_marc-export-set:node/add/marc-export-set',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add MARC tag');
  t('MARC Export Set');
  t('MARC Export Sets');
  t('MARC Tag X-walk (Editable)');
  t('MARC tag');

  return $menu_links;
}
