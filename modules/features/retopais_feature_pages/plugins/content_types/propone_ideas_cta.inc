<?php

/**
 * @file
 * Proponé ideas CTA ctools content type.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Proponé ideas CTA'),
  'content_types' => 'propone_ideas_cta',
  'description' => t('Proponé ideas CTA'),
  'render callback' => 'propone_ideas_cta_render',
  'category' => t('Reto Pais'),
);

/**
 * Render the custom content type.
 */
function propone_ideas_cta_render($subtype, $conf, $panel_args, $context) {
  // Build the content type block.
  $block = new stdClass();
  $block->title = '';

  $block->content['propone-ideas-cta'] = array(
    '#type' => 'item',
    '#prefix' => '<div class="propone-ideas-cta">',
    '#suffix' => '</div>',
    '#markup' => l(t('Proponé ideas'), 'propone-idea'),
  );
  return $block;
}
