<?php
/**
 * @file
 * retopais_feature_alliances.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function retopais_feature_alliances_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function retopais_feature_alliances_node_info() {
  $items = array(
    'alliance' => array(
      'name' => t('Alliance'),
      'base' => 'node_content',
      'description' => t('Use this content type to show Reto Pais alliances.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
