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

  $image = file_load(variable_get('retopais_feature_pages_contacto_media_kit_image', 0));
  $file = file_load(variable_get('retopais_feature_pages_contacto_media_kit_file', 0));

  if ($file) {
    $file_path = file_create_url($file->uri);

    if ($image) {
      $variables = array(
        'path' => $image->uri,
        'alt' => t('Descargar Media Kit'),
        'title' => t('Descargar Media Kit'),
        'attributes' => array(),
      );

      $block->title = t('Descargar Media Kit');
      $text = theme_image($variables);
      $classes = array('media-kit-download-link');
    }
    else {
      $block->title = '';
      $text = t('Descargar Media Kit');
      $classes = array('button', 'parallelogram');
    }

    $block->content['media-kit'] = array(
      '#theme' => 'link',
      '#text' => $text,
      '#path' => $file_path,
      '#prefix' => '<div class="media-kit-download">',
      '#suffix' => '</div>',
      '#options' => array(
        'attributes' => array(
          'class' => $classes,
          'title' => t('Descargar Media Kit'),
        ),
        'html' => TRUE,
      ),
    );
  }
  return $block;
}
