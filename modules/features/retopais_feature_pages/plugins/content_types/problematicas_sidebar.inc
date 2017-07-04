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
  $block->title = check_plain(variable_get('retopais_feature_pages_problematicas_sidebar_title', 'Índice de Progreso Social en Costa Rica'));

  $retopais_feature_pages_problematicas_sidebar_text = variable_get('retopais_feature_pages_problematicas_sidebar_text', array('value' => 'Alguna descripción del IPS', 'format' => 'filtered_html'));
  $block->content['ips-description'] = array(
    '#markup' => '<div class="problematicas-sidebar-description">' . check_markup($retopais_feature_pages_problematicas_sidebar_text['value'], $retopais_feature_pages_problematicas_sidebar_text['format']) . '</div>',
  );

  $image = file_load(variable_get('retopais_feature_pages_problematicas_sidebar_image', 0));
  if ($image) {
    $image_path = $image->uri;
    $image_resized = image_style_path(RETOPAIS_FEATURE_PAGES_PROBLEMS_SIDEBAR_IMAGE, $image->uri);
    $dimensions = getimagesize($image_resized);

    $variables = array(
      'style_name' => RETOPAIS_FEATURE_PAGES_PROBLEMS_SIDEBAR_IMAGE,
      'path' => $image_path,
      'width' => $dimensions[0],
      'height' => $dimensions[1],
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
