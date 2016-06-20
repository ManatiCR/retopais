<?php

/**
 * @file
 * Qué es Reto Pais Homepage ctools content type.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Qué es Reto Pais Homepage'),
  'content_types' => 'homepage_que_es_reto_pais',
  'description' => t('¿Qué es Reto País? block for the homepage'),
  'render callback' => 'homepage_que_es_reto_pais_render',
  'category' => t('Reto Pais'),
);

/**
 * Render the custom content type.
 */
function homepage_que_es_reto_pais_render($subtype, $conf, $panel_args, $context) {
  // Build the content type block.
  $block = new stdClass();
  $block->title = '';

  $video = variable_get('retopais_feature_pages_homepage_que_es_reto_pais_video', '');
  if ($video) {
    $parts = drupal_parse_url($video);
    if (isset($parts['query'])) {
      $video_id = $parts['query']['v'];
      $video = 'https://www.youtube.com/embed/' . $video_id;
    }
  }

  $block->content['que-es-reto-pais'] = array(
    '#theme' => 'homepage_que_es_reto_pais',
    '#link' => l(t('Descubrí más sobre El Reto'), 'que-es-reto-pais'),
    '#video' => $video,
  );
  return $block;
}
