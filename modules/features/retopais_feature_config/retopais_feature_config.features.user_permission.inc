<?php
/**
 * @file
 * retopais_feature_config.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function retopais_feature_config_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'content admin' => 'content admin',
      'judge' => 'judge',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'content admin' => 'content admin',
      'judge' => 'judge',
    ),
    'module' => 'system',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'administrator' => 'administrator',
      'content admin' => 'content admin',
      'judge' => 'judge',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view final proposals'.
  $permissions['view final proposals'] = array(
    'name' => 'view final proposals',
    'roles' => array(
      'administrator' => 'administrator',
      'judge' => 'judge',
    ),
    'module' => 'retopais_feature_proposals',
  );

  // Exported permission: 'view proposals'.
  $permissions['view proposals'] = array(
    'name' => 'view proposals',
    'roles' => array(
      'administrator' => 'administrator',
      'content admin' => 'content admin',
    ),
    'module' => 'retopais_feature_proposals',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'content admin' => 'content admin',
      'judge' => 'judge',
    ),
    'module' => 'system',
  );

  return $permissions;
}
