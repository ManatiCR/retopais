<?php

/**
 * @file
 * Qué es Reto Pais Intro Text ctools content type.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Qué es Reto Pais Intro Text'),
  'content_types' => 'que_es_retopais_intro',
  'description' => t('Introduction text for ¿Qué es Reto País? page'),
  'render callback' => 'que_es_retopais_intro_render',
  'category' => t('Reto Pais'),
);

/**
 * Render the custom content type.
 */
function que_es_retopais_intro_render($subtype, $conf, $panel_args, $context) {
  // Build the content type block.
  $block = new stdClass();
  $block->title = '';

  $intro = variable_get('retopais_feature_pages_que_es_reto_pais_intro_text', array('value' => 'Reto PAIS es el Premio a la Innovación Social que invita a toda la ciudadanía a promover soluciones para <strong>4 problemáticas:</strong>', 'format' => 'filtered_html'));

  $block->content['introduction_text'] = array(
    '#type' => 'item',
    '#markup' => check_markup($intro['value'], $intro['format']),
    '#prefix' => '<div class="que-es-reto-pais introduction-text">',
    '#suffix' => '</div>',
  );
  return $block;
}
