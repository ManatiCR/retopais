<?php

/**
 * @file
 * Problematicas Sidebar ctools content type.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Problematicas Sidebar'),
  'content_types' => 'problematicas_sidebar',
  'description' => t('Problematicas Sidebar'),
  'render callback' => 'problematicas_sidebar_render',
  'category' => t('Reto Pais'),
);

/**
 * Render the custom content type.
 */
function problematicas_sidebar_render($subtype, $conf, $panel_args, $context) {
  // Build the content type block.
  $block = new stdClass();
  $block->title = check_plain(variable_get('retopais_feature_pages_problematicas_sidebar_title', 'Mapa de IPS'));

  $block->content['ips-description'] = array(
    '#markup' => '<p class="problematicas-sidebar-description">' . check_plain(variable_get('retopais_feature_pages_problematicas_sidebar_text')) . '</p>',
  );

  $image = file_load(variable_get('retopais_feature_pages_problematicas_sidebar_image', 0));
  if ($image) {
    $image_path = $image->uri;

    $variables = array(
      'style_name' => RETOPAIS_FEATURE_PAGES_PROBLEMS_SIDEBAR_IMAGE,
      'path' => $image_path,
      'attributes' => array(),
    );

    $block->content['ips-link'] = array(
      '#theme' => 'link',
      '#text' => theme_image_style($variables),
      '#path' => 'http://www.costaricapropone.go.cr',
      '#prefix' => '<div class="ips-link">',
      '#suffix' => '</div>',
      '#options' => array(
        'attributes' => array(
          'class' => array('ips-link'),
          'target' => '_blank',
          'title' => t('Ir a Costa Rica Propone'),
        ),
        'html' => TRUE,
      ),
    );
  }
  return $block;
}