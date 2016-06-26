<?php

/**
 * @file
 * Blog CTA ctools content type.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Blog CTA'),
  'content_types' => 'blog_cta',
  'description' => t('CTA for ¿Qué es Reto País? page'),
  'render callback' => 'blog_cta_render',
  'category' => t('Reto Pais'),
);

/**
 * Render the custom content type.
 */
function blog_cta_render($subtype, $conf, $panel_args, $context) {
  // Build the content type block.
  $block = new stdClass();
  $block->title = '';

  $block->content['cta'] = array(
    '#type' => 'item',
    '#prefix' => '<div class="blog-cta">',
    '#suffix' => '</div>',
    '#markup' => l(check_plain(variable_get('retopais_feature_pages_problematicas_sidebar_cta_text', 'Conocé más en nuestro Blog')), 'blog'),
  );
  return $block;
}
