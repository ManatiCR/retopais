<?php

/**
 * @file
 * Proposal Counter for the Homepage Finalistas variant ctools content type.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Finalists banner for the Homepage'),
  'content_types' => 'proposal_counter_fin_hp',
  'description' => t('Proposal counter for the homepage block'),
  'render callback' => 'proposal_counter_hp_fin_render',
  'category' => t('Reto Pais'),
);

/**
 * Render the custom content type.
 */
function proposal_counter_hp_fin_render($subtype, $conf, $panel_args, $context) {
  // Build the content type block.
  $block = new stdClass();
  $block->title = '';
  $cantidad_propuestas = '¡Tenemos finalistas!';
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
  $text = 'El jurado compuesto por miembros del sector público, privado y sociedad civil tuvo varios días de deliberación, se evaluaron las 739 propuestas y se seleccionaron 15 finalistas.';
  $block->content['proposal_counter_hp'] = array(
    '#theme' => 'proposal_counter_hp',
    '#link' => l(t('Conoce a los finalistas'), 'blog/conoce-a-los-finalistas', array('attributes' => array('class' => array('button')))),
    '#cantidad_propuestas' => $cantidad_propuestas,
    '#video' => $video,
    '#image' => $image,
    '#text' => $text,
  );
  return $block;
}
