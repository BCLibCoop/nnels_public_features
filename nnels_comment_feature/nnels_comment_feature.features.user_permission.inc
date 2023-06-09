<?php
/**
 * @file
 * nnels_comment_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function nnels_comment_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_screen_name'.
  $permissions['create field_screen_name'] = array(
    'name' => 'create field_screen_name',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_screen_name'.
  $permissions['edit field_screen_name'] = array(
    'name' => 'edit field_screen_name',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_screen_name'.
  $permissions['edit own field_screen_name'] = array(
    'name' => 'edit own field_screen_name',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'patron' => 'patron',
      'site editor' => 'site editor',
      'site manager' => 'site manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_screen_name'.
  $permissions['view field_screen_name'] = array(
    'name' => 'view field_screen_name',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'patron' => 'patron',
      'site editor' => 'site editor',
      'site manager' => 'site manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_screen_name'.
  $permissions['view own field_screen_name'] = array(
    'name' => 'view own field_screen_name',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'patron' => 'patron',
      'site editor' => 'site editor',
      'site manager' => 'site manager',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
