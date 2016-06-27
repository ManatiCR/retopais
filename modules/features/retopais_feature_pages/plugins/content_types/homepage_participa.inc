<?php

/**
 * @file
 * Participá en el Reto Homepage ctools content type.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Participá en el Reto Homepage'),
  'content_types' => 'homepage_participa',
  'description' => t('Participá en el Reto block for the homepage'),
  'render callback' => 'homepage_participa_render',
  'category' => t('Reto Pais'),
);

/**
 * Render the custom content type.
 */
function homepage_participa_render($subtype, $conf, $panel_args, $context) {
  // Build the content type block.
  $block = new stdClass();
  $block->title = '';

  $participa_cta_title = variable_get('retopais_feature_pages_homepage_participa_cta_text', 'Participá en el RETO');

  $block->content['participa_en_el_reto'] = array(
    '#theme' => 'homepage_participa_en_el_reto',
    '#link' => l($participa_cta_title, 'que-es-reto-pais', array('attributes' => array('class' => array('button', 'button-red')))),
  );

  return $block;
}
