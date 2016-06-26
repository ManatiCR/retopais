<?php

/**
 * @file
 * Premios Homepage ctools content type.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Premios Homepage'),
  'content_types' => 'homepage_premios',
  'description' => t('Premios block for the homepage'),
  'render callback' => 'homepage_premios_render',
  'category' => t('Reto Pais'),
);

/**
 * Render the custom content type.
 */
function homepage_premios_render($subtype, $conf, $panel_args, $context) {
  // Build the content type block.
  $block = new stdClass();
  $block->title = '';

  $ideas_title = variable_get('retopais_feature_pages_homepage_premio_idea_titulo', '1 ganador(a) por cada problemática (4)');
  $ideas_description = variable_get('retopais_feature_pages_homepage_premio_idea_descripcion', array('value' => 'Descripción de este premio', 'format' => 'filtered_html'));

  $solution_title = variable_get('retopais_feature_pages_homepage_premio_solucion_titulo', '1 ganador(a)');
  $solution_description = variable_get('retopais_feature_pages_homepage_premio_solucion_descripcion', array('value' => 'Descripción de este premio', 'format' => 'filtered_html'));

  $premios_cta_title = variable_get('retopais_feature_pages_homepage_premio_cta', 'Conocé más de los premios');

  $block->content['premios'] = array(
    '#theme' => 'homepage_premios',
    '#link' => l($premios_cta_title, 'que-es-reto-pais'),
    '#ideas_title' => $ideas_title,
    '#ideas_description' => check_markup($ideas_description['value'], $ideas_description['format']),
    '#solution_title' => $solution_title,
    '#solution_description' => check_markup($solution_description['value'], $solution_description['format']),
  );

  return $block;
}
