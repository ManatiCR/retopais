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
  'captcha',
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
  'flag',
  'honeypot',
  'inline_entity_form',
  'l10n_update',
  'libraries',
  'link',
  'magic',
  'master',
  'maxlength',
  'metatag',
  'metatag_opengraph',
  'metatag_twitter_cards',
  'module_filter',
  'page_manager',
  'panels',
  'panels_everywhere',
  'path_breadcrumbs',
  'pathauto',
  'page_manager',
  'panels',
  'paragraphs',
  'rabbit_hole',
  'recaptcha',
  'rh_node',
  'rh_taxonomy',
  'select_or_other',
  'semantic_panels',
  'strongarm',
  'styleguide',
  'token',
  'transliteration',
  'views',
  'views_content',
  'views_bulk_operations',
  'views_cache_bully',
  'views_data_export',

  // Custom modules.
  'retopais_environment',
  'retopais_feature_alliances',
  'retopais_feature_blog',
  'retopais_feature_config',
  'retopais_feature_field_bases',
  'retopais_feature_input_formats',
  'retopais_feature_pages',
  'retopais_feature_proposals',
  'retopais_feature_site_layout',
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
$conf['master_modules']['production'] = array(
  'smtp',
);

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

// Panels Everywhere.
$conf['panels_everywhere_site_template_enabled'] = TRUE;
$conf['panels_everywhere_head_title_include_name'] = FALSE;
$conf['panels_everywhere_head_title_include_slogan'] = FALSE;
$conf['panels_everywhere_head_title_separator'] = '';

// Don't bootstrap the database when serving pages from the cache.
$conf['page_cache_invoke_hooks'] = FALSE;

// Configuration for views caching.
$conf['views_cache_bully_results_lifespan'] = 300;
$conf['views_cache_bully_output_lifespan'] = 300;

// Environment.
$conf['environment_require_override'] = FALSE;
$conf['environment_indicator_overwrite'] = TRUE;

// Avoid Recaptcha issue.
// https://www.drupal.org/node/2476057.
ini_set('arg_separator.output', '&');

// Recaptcha.
$conf['recaptcha_site_key'] = '6Lfu4iITAAAAAD7Tr-ufLQff_x8QKnm7MQx0OUAm';
$conf['recaptcha_secret_key'] = '6Lfu4iITAAAAAA9ft2eaKMUqLJHeIb9eAMa6pby5';

// Local configuration; should remain at the bottom of this file.
if (file_exists(DRUPAL_ROOT . '/sites/default/settings.local.php')) {
  require_once DRUPAL_ROOT . '/sites/default/settings.local.php';
}
