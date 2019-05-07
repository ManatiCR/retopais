<?php

/**
 * @file
 * Alianzas CTA ctools content type.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Alianzas CTA'),
  'content_types' => 'alianzas_cta',
  'description' => t('Alianzas CTA'),
  'render callback' => 'alianzas_cta_render',
  'category' => t('Reto Pais'),
);

/**
 * Render the custom content type.
 */
function alianzas_cta_render($subtype, $conf, $panel_args, $context) {
  // Build the content type block.
  $block = new stdClass();
  $block->title = '';

  // Get text.
  $text_array = variable_get('retopais_feature_pages_alianzas_intro_text', array('value' => 'Alianzas placeholder text.', 'format' => 'filtered_html'));
  $block->content['introduction_text'] = array(
    '#markup' => '<div class="alianzas introduction-text">' . check_markup($text_array['value'], $text_array['format']) . '</div>',
  );

  return $block;
}
