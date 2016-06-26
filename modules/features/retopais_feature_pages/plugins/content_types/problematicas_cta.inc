<?php

/**
 * @file
 * Problematicas CTA ctools content type.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Problematicas CTA'),
  'content_types' => 'problematicas_cta',
  'description' => t('Problematicas CTA'),
  'render callback' => 'problematicas_cta_render',
  'category' => t('Reto Pais'),
);

/**
 * Render the custom content type.
 */
function problematicas_cta_render($subtype, $conf, $panel_args, $context) {
  // Build the content type block.
  $block = new stdClass();
  $block->title = '';

  $block->content['problematicas-cta-link'] = array(
    '#theme' => 'link',
    '#text' => check_plain(variable_get('retopais_feature_pages_blog_problematicas_cta_title', 'Descubrí las problemáticas')),
    '#path' => 'problematicas',
    '#prefix' => '<div class="problematicas-cta-link">',
    '#suffix' => '</div>',
    '#options' => array(
      'attributes' => array(
        'class' => array('button', 'button-yellow'),
      ),
      'html' => FALSE,
    ),
  );

  return $block;
}
