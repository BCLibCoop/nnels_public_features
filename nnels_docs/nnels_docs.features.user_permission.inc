<?php
/**
 * @file
 * nnels_docs.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function nnels_docs_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_s3_file_upload'.
  $permissions['create field_s3_file_upload'] = array(
    'name' => 'create field_s3_file_upload',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'site manager' => 'site manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_s3_file_upload'.
  $permissions['edit field_s3_file_upload'] = array(
    'name' => 'edit field_s3_file_upload',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_s3_file_upload'.
  $permissions['edit own field_s3_file_upload'] = array(
    'name' => 'edit own field_s3_file_upload',
    'roles' => array(
      'administrator' => 'administrator',
      'site manager' => 'site manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_s3_file_upload'.
  $permissions['view field_s3_file_upload'] = array(
    'name' => 'view field_s3_file_upload',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_s3_file_upload'.
  $permissions['view own field_s3_file_upload'] = array(
    'name' => 'view own field_s3_file_upload',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
