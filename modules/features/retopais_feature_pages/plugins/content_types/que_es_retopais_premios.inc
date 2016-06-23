<?php

/**
 * @file
 * Qué es Reto Pais Premios Text ctools content type.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Qué es Reto Pais Premios Text'),
  'content_types' => 'que_es_retopais_premios',
  'description' => t('Premios en el sidebar de ¿Qué es Reto País?'),
  'render callback' => 'que_es_retopais_premios_render',
  'category' => t('Reto Pais'),
);

/**
 * Render the custom content type.
 */
function que_es_retopais_premios_render($subtype, $conf, $panel_args, $context) {
  // Build the content type block.
  $block = new stdClass();
  $block->title = t('Premios');

  $premios = variable_get('retopais_feature_pages_que_es_reto_pais_premios_text', array('value' => 'Información acerca de los premios', 'format' => 'filtered_html'));

  $block->content['premios_text'] = array(
    '#type' => 'item',
    '#markup' => check_markup($premios['value'], $premios['format']),
    '#prefix' => '<div class="que-es-reto-pais premios-text">',
    '#suffix' => '</div>',
  );
  return $block;
}
