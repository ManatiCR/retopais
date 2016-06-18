<?php
/**
 * @file
 * retopais_feature_config.features.language.inc
 */

/**
 * Implements hook_locale_default_languages().
 */
function retopais_feature_config_locale_default_languages() {
  $languages = array();

  // Exported language: es.
  $languages['es'] = array(
    'language' => 'es',
    'name' => 'Spanish',
    'native' => 'Español',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'es',
    'weight' => 0,
  );
  return $languages;
}
