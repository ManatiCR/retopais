<?php

/**
 * @file
 * Qué es Reto Pais Footer ctools content type.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Qué es Reto Pais Footer'),
  'content_types' => 'que_es_retopais_footer',
  'description' => t('Footer for ¿Qué es Reto País? page'),
  'render callback' => 'que_es_retopais_footer_render',
  'category' => t('Reto Pais'),
);

/**
 * Render the custom content type.
 */
function que_es_retopais_footer_render($subtype, $conf, $panel_args, $context) {
  // Build the content type block.
  $block = new stdClass();
  $block->title = '';

  $footer = variable_get('retopais_feature_pages_que_es_reto_pais_footer_text', array('value' => 'Texto debajo de las etapas', 'format' => 'filtered_html'));

  $block->content['footer'] = array(
    '#type' => 'item',
    '#markup' => check_markup($footer['value'], $footer['format']),
    '#prefix' => '<div class="que-es-reto-pais footer">',
    '#suffix' => '</div>',
  );

  return $block;
}
