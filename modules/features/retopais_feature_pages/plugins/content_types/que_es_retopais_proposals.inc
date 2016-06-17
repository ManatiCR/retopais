<?php

/**
 * @file
 * Qué es Reto Pais Text After Problems ctools content type.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Qué es Reto Pais Text After Problems'),
  'content_types' => 'que_es_retopais_proposals',
  'description' => t('Introduction text for ¿Qué es Reto País? page'),
  'render callback' => 'que_es_retopais_proposals_render',
  'category' => t('Reto Pais'),
);

/**
 * Render the custom content type.
 */
function que_es_retopais_proposals_render($subtype, $conf, $panel_args, $context) {
  // Build the content type block.
  $block = new stdClass();
  $block->title = '';

  $block->content['proposals-time-reminder'] = array(
    '#markup' => '<p class="que-es-reto-pais proposals-time-reminder">' . check_plain(variable_get('retopais_feature_pages_que_es_reto_pais_text_after_problems', 'Tenemos el mes de julio para recibir propuestas de los ciudadanos y ciudadanas del país.')) . '</p>',
  );
  return $block;
}
