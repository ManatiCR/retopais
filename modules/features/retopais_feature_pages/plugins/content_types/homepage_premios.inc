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
  $description_premio = variable_get('retopais_feature_pages_homepage_premio_descripcion', array('value' => 'Descripción de los premios', 'format' => 'filtered_html'));
  $premios_cta_title = variable_get('retopais_feature_pages_homepage_premio_cta', 'Conocé más de los premios');
  $block->content['premios'] = array(
    '#theme' => 'homepage_premios',
    '#link' => l($premios_cta_title, 'que-es-reto-pais', array(
      'attributes' => array('class' => array('button', 'button-yellow')),
      'fragment' => 'premios',
      'external' => FALSE,
    )),
    '#description_premio' => check_markup($description_premio['value'], $description_premio['format']),
  );

  return $block;
}
