<?php

/**
 * @file
 * Back to blog link ctools content type.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Back to blog link'),
  'content_types' => 'back_to_blog',
  'description' => t('Back to blog link'),
  'render callback' => 'back_to_blog_render',
  'category' => t('Reto Pais'),
);

/**
 * Render the custom content type.
 */
function back_to_blog_render($subtype, $conf, $panel_args, $context) {
  // Build the content type block.
  $block = new stdClass();
  $block->title = '';

  $block->content['blog'] = array(
    '#type' => 'item',
    '#prefix' => '<div class="blog-link">',
    '#suffix' => '</div>',
    '#markup' => l(t('Volver al blog'), 'blog'),
  );
  return $block;
}
