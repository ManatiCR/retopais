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

  $block->content['problematicas-cta-title'] = array(
    '#markup' => '<h3>' . check_plain(variable_get('retopais_feature_pages_blog_problematicas_cta_title', '')) . '</h3>',
  );

  $image = file_load(variable_get('retopais_feature_pages_blog_problematicas_cta_image', 0));
  if ($image) {
    $image_path = $image->uri;

    $variables = array(
      'style_name' => RETOPAIS_FEATURE_PAGES_BLOG_PROBLEMATICAS_CTA_IMAGE,
      'path' => $image_path,
      'attributes' => array(),
    );

    $block->content['problematicas-cta-link'] = array(
      '#theme' => 'link',
      '#text' => theme_image_style($variables),
      '#path' => 'problematicas',
      '#prefix' => '<div class="problematicas-cta-link">',
      '#suffix' => '</div>',
      '#options' => array(
        'attributes' => array(
          'class' => array('problematicas-cta-link'),
          'title' => t('Ir a página de Problemáticas'),
        ),
        'html' => TRUE,
      ),
    );
  }
  return $block;
}
