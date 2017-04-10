<?php

/**
 * @file
 * Qué es Reto Pais CTA ctools content type.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Qué es Reto Pais CTA'),
  'content_types' => 'que_es_retopais_cta',
  'description' => t('CTA for ¿Qué es Reto País? page'),
  'render callback' => 'que_es_retopais_cta_render',
  'category' => t('Reto Pais'),
);

/**
 * Render the custom content type.
 */
function que_es_retopais_cta_render($subtype, $conf, $panel_args, $context) {
  // Build the content type block.
  $block = new stdClass();
  $block->title = '';

  $block->content['cta'] = array(
    '#type' => 'item',
    '#prefix' => '<div class="que-es-reto-pais propose-cta">',
    '#suffix' => '</div>',
    '#markup' => l(check_plain(variable_get('retopais_feature_pages_que_es_reto_pais_cta_text', 'Proponé Ideas')), 'node/add/proposal', array('attributes' => array('class' => array('button', 'button-red')))),
  );
  return $block;
}
