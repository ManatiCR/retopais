<?php

/**
 * @file
 * retopais_feature_pages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function retopais_feature_pages_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function retopais_feature_pages_image_default_styles() {
  $styles = array();

  // Exported image style: sidebar.
  $styles['sidebar'] = array(
    'label' => 'Sidebar',
    'effects' => array(
      8 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 300,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
