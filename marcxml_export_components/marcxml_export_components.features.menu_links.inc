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
  // Exported menu link: menu-nnels-admin_marc-export-subfields:admin/content/cals/marc-tags-entity-view/subfields.
  $menu_links['menu-nnels-admin_marc-export-subfields:admin/content/cals/marc-tags-entity-view/subfields'] = array(
    'menu_name' => 'menu-nnels-admin',
    'link_path' => 'admin/content/cals/marc-tags-entity-view/subfields',
    'router_path' => 'admin/content/cals/marc-tags-entity-view/subfields',
    'link_title' => 'MARC Export Subfields',
    'options' => array(
      'identifier' => 'menu-nnels-admin_marc-export-subfields:admin/content/cals/marc-tags-entity-view/subfields',
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
    'parent_identifier' => 'menu-nnels-admin_marc-tags-entity-view:admin/content/cals/marc-tags-entity-view',
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
  // Exported menu link: menu-nnels-admin_marc-tag-x-walk-grid:admin/content/cals/marc-tag-crosswalk/list.
  $menu_links['menu-nnels-admin_marc-tag-x-walk-grid:admin/content/cals/marc-tag-crosswalk/list'] = array(
    'menu_name' => 'menu-nnels-admin',
    'link_path' => 'admin/content/cals/marc-tag-crosswalk/list',
    'router_path' => 'admin/content/cals/marc-tag-crosswalk/list',
    'link_title' => 'MARC Tag X-walk (Grid)',
    'options' => array(
      'identifier' => 'menu-nnels-admin_marc-tag-x-walk-grid:admin/content/cals/marc-tag-crosswalk/list',
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
    'parent_identifier' => 'menu-nnels-admin_marc-tag-x-walk-editable:admin/content/cals/marc-tag-crosswalk',
  );
  // Exported menu link: menu-nnels-admin_marc-tag-x-walk-table-list:admin/content/cals/marc-tag-crosswalk/list-table.
  $menu_links['menu-nnels-admin_marc-tag-x-walk-table-list:admin/content/cals/marc-tag-crosswalk/list-table'] = array(
    'menu_name' => 'menu-nnels-admin',
    'link_path' => 'admin/content/cals/marc-tag-crosswalk/list-table',
    'router_path' => 'admin/content/cals/marc-tag-crosswalk/list-table',
    'link_title' => 'MARC Tag X-walk (Table List)',
    'options' => array(
      'identifier' => 'menu-nnels-admin_marc-tag-x-walk-table-list:admin/content/cals/marc-tag-crosswalk/list-table',
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
    'parent_identifier' => 'menu-nnels-admin_marc-tag-x-walk-editable:admin/content/cals/marc-tag-crosswalk',
  );
  // Exported menu link: menu-nnels-admin_marc-tag-x-walk-vbo:admin/content/cals/marc-tag-crosswalk/vbo.
  $menu_links['menu-nnels-admin_marc-tag-x-walk-vbo:admin/content/cals/marc-tag-crosswalk/vbo'] = array(
    'menu_name' => 'menu-nnels-admin',
    'link_path' => 'admin/content/cals/marc-tag-crosswalk/vbo',
    'router_path' => 'admin/content/cals/marc-tag-crosswalk/vbo',
    'link_title' => 'MARC Tag X-walk (VBO)',
    'options' => array(
      'identifier' => 'menu-nnels-admin_marc-tag-x-walk-vbo:admin/content/cals/marc-tag-crosswalk/vbo',
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
    'parent_identifier' => 'menu-nnels-admin_marc-tag-x-walk-editable:admin/content/cals/marc-tag-crosswalk',
  );
  // Exported menu link: menu-nnels-admin_marc-tags-entity-view:admin/content/cals/marc-tags-entity-view.
  $menu_links['menu-nnels-admin_marc-tags-entity-view:admin/content/cals/marc-tags-entity-view'] = array(
    'menu_name' => 'menu-nnels-admin',
    'link_path' => 'admin/content/cals/marc-tags-entity-view',
    'router_path' => 'admin/content/cals/marc-tags-entity-view',
    'link_title' => 'MARC Tags entity view',
    'options' => array(
      'identifier' => 'menu-nnels-admin_marc-tags-entity-view:admin/content/cals/marc-tags-entity-view',
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
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add MARC tag');
  t('MARC Export Subfields');
  t('MARC Tag X-walk (Editable)');
  t('MARC Tag X-walk (Grid)');
  t('MARC Tag X-walk (Table List)');
  t('MARC Tag X-walk (VBO)');
  t('MARC Tags entity view');
  t('MARC tag');

  return $menu_links;
}
