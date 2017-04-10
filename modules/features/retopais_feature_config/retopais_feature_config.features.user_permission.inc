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

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'content admin' => 'content admin',
      'judge' => 'judge',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer flags'.
  $permissions['administer flags'] = array(
    'name' => 'administer flags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'flag',
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

  // Exported permission: 'create proposal content'.
  $permissions['create proposal content'] = array(
    'name' => 'create proposal content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own proposal content'.
  $permissions['edit own proposal content'] = array(
    'name' => 'edit own proposal content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'flag invalidar_propuesta'.
  $permissions['flag invalidar_propuesta'] = array(
    'name' => 'flag invalidar_propuesta',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'content admin' => 'content admin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag invalidar_propuesta'.
  $permissions['unflag invalidar_propuesta'] = array(
    'name' => 'unflag invalidar_propuesta',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'content admin' => 'content admin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'use flag import'.
  $permissions['use flag import'] = array(
    'name' => 'use flag import',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'content admin' => 'content admin',
      'judge' => 'judge',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
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

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'node',
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
