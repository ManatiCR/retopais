<?php

/**
 * @file
 * Proposal end form content type.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Proposal End Form'),
  'content_types' => 'proposal_end_form_cta',
  'description' => t('Proposal End Form CTA'),
  'render callback' => 'proposal_end_form_cta_render',
  'category' => t('Reto Pais'),
);

/**
 * Render the custom content type.
 */
function proposal_end_form_cta_render($subtype, $conf, $panel_args, $context) {
  // Build the content type block.
  $image_text = '';
  $image = file_load(variable_get('retopais_feature_proposals_form_end_image', 0));
  $text_array = variable_get('retopais_feature_proposals_form_end_text', array('value' => '', 'format' => 'filtered_html'));
  $block = new stdClass();
  $block->title = variable_get('retopais_feature_proposals_form_end_title', 0);

  if ($image) {
    $variables = array(
      'path' => $image->uri,
      'alt' => t('Reto PAÍS'),
      'title' => t('Reto PAÍS'),
      'attributes' => array(),
    );

    $image_text = theme_image($variables);
  }

  $text_array['value'] = str_replace('!image', $image_text, $text_array['value']);

  $block->content['proposal_end_form'] = array(
    '#markup' => '<div class="proposal-end-form">' . check_markup($text_array['value'], $text_array['format']) . '</div>',
  );

  return $block;
}
