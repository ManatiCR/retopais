<?php

/**
 * @file
 * Homepage Timeline ctools content type.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Homepage Timeline'),
  'content_types' => 'homepage_timeline',
  'description' => t('Homepage Timeline'),
  'render callback' => 'homepage_timeline_render',
  'category' => t('Reto Pais'),
);

/**
 * Render the custom content type.
 */
function homepage_timeline_render($subtype, $conf, $panel_args, $context) {
  // Build the content type block.
  $block = new stdClass();
  $block->title = '';

  $image = file_load(variable_get('retopais_feature_pages_homepage_timeline_image', 0));
  if ($image) {
    $image_path = $image->uri;

    $block->content['timeline-image'] = array(
      '#theme' => 'image',
      '#path' => $image_path,
      '#attributes' => array(),
      '#prefix' => '<h3 class="timeline-image-title">' . t('Fechas importantes') . '</h3>',
    );
  }
  return $block;
}
