<?php
/**
 * @file
 * retopais_feature_proposals.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function retopais_feature_proposals_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create proposal content'.
  $permissions['create proposal content'] = array(
    'name' => 'create proposal content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own proposal content'.
  $permissions['edit own proposal content'] = array(
    'name' => 'edit own proposal content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
