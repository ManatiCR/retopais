<?php

/**
 * @file
 * Qué es Reto Pais Stages ctools content type.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Qué es Reto Pais Stages'),
  'content_types' => 'que_es_retopais_stages',
  'description' => t('Stages for ¿Qué es Reto País? page'),
  'render callback' => 'que_es_retopais_stages_render',
  'category' => t('Reto Pais'),
);

/**
 * Render the custom content type.
 */
function que_es_retopais_stages_render($subtype, $conf, $panel_args, $context) {
  // Build the content type block.
  $block = new stdClass();
  $block->title = t('Son 4 etapas:');

  $items = array();

  for ($index = 1; $index <= 4; $index++) {
    $text = check_plain(variable_get('retopais_feature_pages_que_es_reto_pais_stage_text_' . $index, 'Text for stage number ' . $index));
    $items[] = $text;
  }

  $block->content['stages'] = array(
    '#prefix' => '<div class="que-es-reto-pais stages">',
    '#theme' => 'item_list',
    '#title' => '',
    '#type' => 'ul',
    '#attributes' => array(
      'class' => array('que-es-reto-pais stages-list'),
    ),
    '#items' => $items,
    '#suffix' => '</div>',
  );

  return $block;
}
