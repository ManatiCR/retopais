<?php

/**
 * @file
 * Media Kit ctools content type.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Media Kit'),
  'content_types' => 'media_kit',
  'description' => t('Media Kit'),
  'render callback' => 'media_kit_render',
  'category' => t('Reto Pais'),
);

/**
 * Render the custom content type.
 */
function media_kit_render($subtype, $conf, $panel_args, $context) {
  // Build the content type block.
  $block = new stdClass();
  $block->title = t('Descargar Media Kit');

  $image = file_load(variable_get('retopais_feature_pages_contacto_media_kit_image', 0));
  $file = file_load(variable_get('retopais_feature_pages_contacto_media_kit_file', 0));
  if ($image && $file) {
    $file_path = file_create_url($file->uri);
    $image_path = $image->uri;

    $variables = array(
      'path' => $image_path,
      'attributes' => array(),
    );

    $block->content['media-kit'] = array(
      '#theme' => 'link',
      '#text' => theme_image($variables),
      '#path' => $file_path,
      '#prefix' => '<div class="media-kit-download">',
      '#suffix' => '</div>',
      '#options' => array(
        'attributes' => array(
          'class' => array('media-kit-download-link'),
          'title' => t('Descargar Media Kit'),
        ),
        'html' => TRUE,
      ),
    );
  }
  return $block;
}
