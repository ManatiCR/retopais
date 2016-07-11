<?php
/**
 * @file
 * retopais_feature_input_formats.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function retopais_feature_input_formats_user_default_permissions() {
  $permissions = array();

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

  return $permissions;
}
