<?php
/**
 * @file
 * retopais_feature_config.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function retopais_feature_config_user_default_roles() {
  $roles = array();

  // Exported role: content admin.
  $roles['content admin'] = array(
    'name' => 'content admin',
    'weight' => 4,
  );

  // Exported role: judge.
  $roles['judge'] = array(
    'name' => 'judge',
    'weight' => 3,
  );

  return $roles;
}
