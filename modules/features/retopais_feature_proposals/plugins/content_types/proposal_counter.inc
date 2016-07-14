<?php

/**
 * @file
 * Proposal Counter ctools content type.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Proposal Counter'),
  'content_types' => 'proposal_counter',
  'description' => t('Proposal counter block'),
  'render callback' => 'proposal_counter_render',
  'category' => t('Reto Pais'),
);

/**
 * Render the custom content type.
 */
function proposal_counter_render($subtype, $conf, $panel_args, $context) {
  // Build the content type block.
  $block = new stdClass();
  $block->title = '';
  $cantidad_propuestas = retopais_feature_proposals_counter();
  $content = '<h2>Se han recibido...</h2><div class="sidebar-counter"><div class="ideas-column"><div class="ideas-row">' .
  $cantidad_propuestas .
  '</div><div class="ideas-row">' . t('Propuestas') . '</div></div></div>';
  $block->content['progress'] = array(
    '#markup' => $content,
  );
  return $block;
}
