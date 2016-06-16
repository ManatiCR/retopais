<?php
/**
 * @file
 * retopais_feature_field_bases.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function retopais_feature_field_bases_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_paragraphs_info().
 */
function retopais_feature_field_bases_paragraphs_info() {
  $items = array(
    'contact_information' => array(
      'name' => 'Contact Information',
      'bundle' => 'contact_information',
      'locked' => '1',
    ),
  );
  return $items;
}
