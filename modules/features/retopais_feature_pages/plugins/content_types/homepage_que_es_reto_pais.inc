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

  // Get title, replace proposal count if needed.
  $title = variable_get('retopais_feature_pages_homepage_que_es_reto_pais_title', '');
  $title = str_replace('COUNT', strval(retopais_feature_proposals_counter()), $title);

  // Get text.
  $text_array = variable_get('retopais_feature_pages_homepage_que_es_reto_pais_text', array('value' => '¿Qué es reto país? placeholder text.', 'format' => 'filtered_html'));
  $text = check_markup($text_array['value'], $text_array['format']);

  // Get link text and destination.
  $link_text = variable_get('retopais_feature_pages_homepage_que_es_reto_pais_link_text', '');
  $link_url = variable_get('retopais_feature_pages_homepage_que_es_reto_pais_link_url', '');
  $link = '';
  if ($link_text) {
    $link = l($link_text, $link_url, array('attributes' => array('class' => array('button'))));
  }

  // Get image or video.
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
    if ($image_file) {
      $image_path = $image_file->uri;
      $variables = array(
        'path' => $image_path,
        'attributes' => array(),
      );

      $image = theme_image($variables);
    }
    else {
      $image = NULL;
    }
  }

  $block->content['que-es-reto-pais'] = array(
    '#theme' => 'homepage_que_es_reto_pais',
    '#link' => $link,
    '#video' => $video,
    '#image' => $image,
    '#title' => $title,
    '#text' => $text,
  );

  return $block;
}
