<?php

/**
 * @file
 * Problemáticas Intro Text ctools content type.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Problemáticas Intro Text'),
  'content_types' => 'problematicas_intro',
  'description' => t('Introduction text for ¿Qué es Reto País? page'),
  'render callback' => 'problematicas_intro_render',
  'category' => t('Reto Pais'),
);

/**
 * Render the custom content type.
 */
function problematicas_intro_render($subtype, $conf, $panel_args, $context) {
  // Build the content type block.
  $block = new stdClass();
  $block->title = check_plain(variable_get('retopais_feature_pages_problematicas_problems_title', '¿Por qué fueron elegidas estas problemáticas?'));

  $problems_intro = variable_get('retopais_feature_pages_problematicas_problems_intro', array('value' => 'Razones por las cuales fueron elegidas', 'format' => 'filtered_html'));
  $block->content['introduction_text'] = array(
    '#markup' => '<div class="problematicas problematicas-introduction-text">' . check_markup($problems_intro['value'], $problems_intro['format']) . '</div>',
  );
  return $block;
}
