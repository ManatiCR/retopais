<?php
/**
 * @file
 * retopais_feature_proposals.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function retopais_feature_proposals_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function retopais_feature_proposals_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function retopais_feature_proposals_image_default_styles() {
  $styles = array();

  // Exported image style: prize_logo.
  $styles['prize_logo'] = array(
    'label' => 'Prize logo',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 100,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function retopais_feature_proposals_node_info() {
  $items = array(
    'proposal' => array(
      'name' => t('Proposal'),
      'base' => 'node_content',
      'description' => t('Contains proposals submitted by citizens.'),
      'has_title' => '1',
      'title_label' => t('Nombre de la solución'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
