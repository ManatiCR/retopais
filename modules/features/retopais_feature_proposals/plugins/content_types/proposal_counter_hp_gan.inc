<?php

/**
 * @file
 * Proposal Counter for the Homepage Finalistas variant ctools content type.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Winners banner for the Homepage'),
  'content_types' => 'proposal_counter_gan_hp',
  'description' => t('Proposal counter for the homepage block'),
  'render callback' => 'proposal_counter_hp_gan_render',
  'category' => t('Reto Pais'),
);

/**
 * Render the custom content type.
 */
function proposal_counter_hp_gan_render($subtype, $conf, $panel_args, $context) {
  // Build the content type block.
  $block = new stdClass();
  $block->title = '';
  $cantidad_propuestas = '¡Reto PAÍS tiene ganadores!';
  $video = variable_get('retopais_feature_pages_homepage_que_es_reto_pais_video', '');
  $image = variable_get('retopais_feature_pages_homepage_que_es_reto_pais_image', 0);
  if ($video) {
    $parts = drupal_parse_url($video);
    if (isset($parts['query'])) {
      $video_id = $parts['query']['v'];
      $video = 'https://www.youtube.com/embed/' . $video_id;
    }
  }
  elseif ($image) {
    $image_file = file_load($image);
    $image_path = $image_file->uri;
    $variables = array(
      'path' => $image_path,
      'attributes' => array(),
    );
    $image = theme_image($variables);
  }
  $text = 'En una emocionante Noche de Premiación, se nombraron las 5 soluciones ganadoras de esta primera edición de Reto PAÍS. ¡Muchas gracias a todos los y las participantes que hicieron esto posible! Hoy comenzamos una nueva etapa con la puesta en marcha de los proyectos.';
  $block->content['proposal_counter_hp'] = array(
    '#theme' => 'proposal_counter_hp',
    '#link' => l(t('Conoce a los ganadores'), 'blog/actualizaciones-de-reto-país/noche-de-premiación-y-ganadores', array('attributes' => array('class' => array('button')))),
    '#cantidad_propuestas' => $cantidad_propuestas,
    '#video' => $video,
    '#image' => $image,
    '#text' => $text,
  );
  return $block;
}
