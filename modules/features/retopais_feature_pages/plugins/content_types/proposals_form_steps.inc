<?php

/**
 * @file
 * Proposals form steps ctools content type.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Proposals form steps'),
  'content_types' => 'proposals_form_steps',
  'description' => t('Proposals form steps'),
  'render callback' => 'proposals_form_steps_render',
  'category' => t('Reto Pais'),
);

/**
 * Render the custom content type.
 */
function proposals_form_steps_render($subtype, $conf, $panel_args, $context) {
  // Build the content type block.
  $block = new stdClass();
  $block->title = '';

  $items = array();

  for ($index = 1; $index <= 4; $index++) {
    $text = check_plain(variable_get('retopais_feature_pages_propuestas_form_step_' . $index, 'Text for step number ' . $index));
    $items[] = '<div class="steps-wrapper">' . $text . '</div>';
  }

  $block->content['steps-intro'] = array(
    '#markup' => '<span class="steps-intro-text">' . check_plain(variable_get('retopais_feature_pages_propuestas_intro_text', 'Proponer una idea es muy sencillo, sólo sigue los siguientes pasos:')) . '</span>',
  );

  $block->content['steps'] = array(
    '#prefix' => '<div class="proposals-form steps">',
    '#theme' => 'item_list',
    '#title' => '',
    '#type' => 'ol',
    '#attributes' => array(
      'class' => array('proposals-form steps-list'),
    ),
    '#items' => $items,
    '#suffix' => '</div>',
  );

  return $block;
}
