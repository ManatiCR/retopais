<?php
/**
 * @file
 * Drupal site-specific configuration file.
 */

// Environment specific information that should not be in version control.
if (file_exists(DRUPAL_ROOT . '/sites/default/settings.secret.php')) {
  require_once DRUPAL_ROOT . '/sites/default/settings.secret.php';
}

/**
 * Master module configuration.
 *
 * @see https://www.drupal.org/project/master
 */
$conf['master_version'] = 2;
$conf['master_allow_base_scope'] = TRUE;
$conf['master_modules'] = array();
$conf['master_modules']['base'] = array(
  // Core modules.
  'file',
  'image',
  'list',
  'menu',
  'number',
  'options',
  'path',
  'taxonomy',

  // Contrib modules.
  'admin_menu',
  'admin_views',
  'adminimal_admin_menu',
  'chosen',
  'ckeditor',
  'ckeditor_entity_embed',
  'ctools',
  'date_api',
  'email',
  'entity',
  'entityreference',
  'features',
  'fences',
  'inline_entity_form',
  'link',
  'master',
  'maxlength',
  'module_filter',
  'page_manager',
  'panels',
  'path_breadcrumbs',
  'pathauto',
  'page_manager',
  'panels',
  'paragraphs',
  'rabbit_hole',
  'rh_node',
  'rh_taxonomy',
  'select_or_other',
  'semantic_panels',
  'strongarm',
  'styleguide',
  'token',
  'views',
  'views_content',
  'views_bulk_operations',

  // Custom modules.
  'retopais_feature_alliances',
  'retopais_feature_blog',
  'retopais_feature_field_bases',
  'retopais_feature_input_formats',
  'retopais_feature_pages',
  'retopais_feature_proposals',
  'retopais_taxonomy',
  'retopais_theme',
);

// Local environment.
$conf['master_modules']['local'] = array(
  'dblog',
  'devel',
  'diff',
  'field_ui',
  'path_breadcrumbs_ui',
  'views_ui',
);

$conf['master_modules']['development'] = $conf['master_modules']['local'];
$conf['master_modules']['test'] = array();
$conf['master_modules']['production'] = array();

$update_free_access = FALSE;

ini_set('session.gc_probability', 1);
ini_set('session.gc_divisor', 100);
ini_set('session.gc_maxlifetime', 200000);
ini_set('session.cookie_lifetime', 2000000);

$conf['404_fast_paths_exclude'] = '/\/(?:styles)\//';
$conf['404_fast_paths'] = '/\.(?:txt|png|gif|jpe?g|css|js|ico|swf|flv|cgi|bat|pl|dll|exe|asp)$/i';
$conf['404_fast_html'] = '<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML+RDFa 1.0//EN" "http://www.w3.org/MarkUp/DTD/xhtml-rdfa-1.dtd"><html xmlns="http://www.w3.org/1999/xhtml"><head><title>404 Not Found</title></head><body><h1>Not Found</h1><p>The requested URL "@path" was not found on this server.</p></body></html>';
drupal_fast_404();

// Use admin theme for editing content.
$conf['node_admin_theme'] = 1;

// Views.
$conf['views_ui_show_advanced_column'] = 1;
$conf['views_ui_show_advanced_help_warning'] = 0;
$conf['views_ui_show_master_display'] = 1;

// Fences.
$conf['fences_default_classes'] = 1;
$conf['fences_default_markup'] = 1;

// Disable Drupal's "poor man's cron".
$conf['cron_safe_threshold'] = 0;

// CKEditor Embed allowed bundles.
$conf['ckeditor_entity_embed_entity_bundles'] = array(
  'node' => array('image'),
);

// Enforce maxlength for user #1.
$conf['maxlength_always_for_uid1'] = TRUE;

// Site name.
$conf['site_name'] = 'Reto PAÍS';

// Reto Pais Theme.
$conf['theme_default'] = 'retopais';

// Breadcrumbs.
$conf['path_breadcrumbs_delimiter'] = '>';

// Local configuration; should remain at the bottom of this file.
if (file_exists(DRUPAL_ROOT . '/sites/default/settings.local.php')) {
  require_once DRUPAL_ROOT . '/sites/default/settings.local.php';
}
