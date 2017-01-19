<?php
/**
 * @file
 * nnels_bookshelf_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function nnels_bookshelf_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: flag bookshelf.
  $permissions['flag bookshelf'] = array(
    'name' => 'flag bookshelf',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'patron' => 'patron',
      'site editor' => 'site editor',
      'site manager' => 'site manager',
    ),
    'module' => 'flag',
  );

  // Exported permission: unflag bookshelf.
  $permissions['unflag bookshelf'] = array(
    'name' => 'unflag bookshelf',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'patron' => 'patron',
      'site editor' => 'site editor',
      'site manager' => 'site manager',
    ),
    'module' => 'flag',
  );

  return $permissions;
}
