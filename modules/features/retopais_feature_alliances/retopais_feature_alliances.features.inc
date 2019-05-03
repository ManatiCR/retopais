<?php

/**
 * @file
 * retopais_feature_alliances.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function retopais_feature_alliances_ctools_plugin_api($module = NULL, $api = NULL) {
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
function retopais_feature_alliances_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function retopais_feature_alliances_image_default_styles() {
  $styles = array();

  // Exported image style: logos_mesainnovacion.
  $styles['logos_mesainnovacion'] = array(
    'label' => 'Logos Mesa de Innovación',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 40,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: main_alliances.
  $styles['main_alliances'] = array(
    'label' => 'Main Alliances',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 200,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: sponsor1.
  $styles['sponsor1'] = array(
    'label' => 'Sponsor Level 1',
    'effects' => array(
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 120,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: sponsor2.
  $styles['sponsor2'] = array(
    'label' => 'Sponsor Level 2',
    'effects' => array(
      5 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 90,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: sponsor3.
  $styles['sponsor3'] = array(
    'label' => 'Sponsor Level 3',
    'effects' => array(
      7 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 60,
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
