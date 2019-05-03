<?php

/**
 * @file
 * retopais_feature_pages.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function retopais_feature_pages_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access site-wide contact form'.
  $permissions['access site-wide contact form'] = array(
    'name' => 'access site-wide contact form',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'content admin' => 'content admin',
      'judge' => 'judge',
    ),
    'module' => 'contact',
  );

  return $permissions;
}
