<?php

/**
 * @file
 * Alianzas CTA ctools content type.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Reglamento CTA'),
  'content_types' => 'reglamento_cta',
  'description' => t('Reglamento CTA'),
  'render callback' => 'reglamento_cta_render',
  'category' => t('Reto Pais'),
);

/**
 * Render the custom content type.
 */
function reglamento_cta_render($subtype, $conf, $panel_args, $context) {
  // Build the content type block.
  $block = new stdClass();
  $block->title = '';

  // Get text.
  $text_array = variable_get('retopais_feature_pages_regulation_text', array('value' => 'Reglamento placeholder text.', 'format' => 'filtered_html'));
  $block->content['regulation_text'] = array(
    '#markup' => '<div class="regulation-text">' . check_markup($text_array['value'], $text_array['format']) . '</div>',
  );

  return $block;
}
