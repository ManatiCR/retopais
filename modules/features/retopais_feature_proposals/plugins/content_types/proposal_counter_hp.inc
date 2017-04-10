<?php

/**
 * @file
 * Proposal Counter for the Homepage ctools content type.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Proposal Counter for the Homepage'),
  'content_types' => 'proposal_counter_hp',
  'description' => t('Proposal counter for the homepage block'),
  'render callback' => 'proposal_counter_hp_render',
  'category' => t('Reto Pais'),
);

/**
 * Render the custom content type.
 */
function proposal_counter_hp_render($subtype, $conf, $panel_args, $context) {
  // Build the content type block.
  $block = new stdClass();
  $block->title = '';
  $cantidad_propuestas = '¡' . retopais_feature_proposals_counter() . ' propuestas han sido enviadas!';
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
  $retopais_feature_pages_homepage_cantidad_ideas = variable_get('retopais_feature_pages_homepage_cantidad_ideas', array('value' => 'Hemos recibido muchas propuestas muy buenas y las estamos evaluando. Pero todavía hay tiempo de aplicar. Si crees que con tu idea o solución podemos resolver alguna de estas cuatro problemáticas que tiene el país, entrá al formulario y contanos tu propuesta.', 'format' => 'filtered_html'));
  $text = check_markup($retopais_feature_pages_homepage_cantidad_ideas['value'], $retopais_feature_pages_homepage_cantidad_ideas['format']);
  $block->content['proposal_counter_hp'] = array(
    '#theme' => 'proposal_counter_hp',
    '#link' => '',
    '#cantidad_propuestas' => $cantidad_propuestas,
    '#video' => $video,
    '#image' => $image,
    '#text' => $text,
  );
  return $block;
}
