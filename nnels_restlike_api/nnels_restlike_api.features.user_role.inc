<?php
/**
 * @file
 * nnels_restlike_api.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function nnels_restlike_api_user_default_roles() {
  $roles = array();

  // Exported role: api consumer.
  $roles['api consumer'] = array(
    'name' => 'api consumer',
    'weight' => 9,
  );

  return $roles;
}
