<?php

/**
 * @file
 * Proposal Progress ctools content type.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Proposal Progress'),
  'content_types' => 'proposal_progress',
  'description' => t('Proposal progress block'),
  'render callback' => 'proposal_progress_render',
  'category' => t('Reto Pais'),
);

/**
 * Render the custom content type.
 */
function proposal_progress_render($subtype, $conf, $panel_args, $context) {
  // Build the content type block.
  $block = new stdClass();
  $block->title = '';

  $node = FALSE;
  $type = 'proposal';
  $current_step_name = 'group_inicio';

  $router_item = menu_get_item();
  $page_callback = $router_item['page_callback'];
  if ($page_callback == 'page_manager_node_edit') {
    $node = menu_get_object();
    if ($node->type !== $type) {
      // No expected node type? Return empty block.
      return $block;
    }
  }
  elseif($page_callback == 'node_add') {
    if ($router_item['page_arguments'][0] !== $type) {
      // No expected node type? Return empty block.
      return $block;
    }
  };

  if (!$node) {
    // Node create form.
    $steps = array(
      'group_inicio' => array(
        'short' => t('¿Qué deseás proponer?'),
      ),
    );
  }
  else {
    $node_wrapper = entity_metadata_wrapper('node', $node);
    $solution_type = $node_wrapper->field_solution_type->value();
    $organization_way = $node_wrapper->field_organization_way->value();
    // For internal use.
    $organization_way = $organization_way === 'organization' ? $organization_way : 'other';

    $steps = retopais_feature_proposals_get_steps_info();
    $steps = $steps[$solution_type][$organization_way];

    $query = drupal_get_query_parameters();
    if (isset($query['step']) && $query['step'] !== 'all' &&
      in_array($query['step'], array_keys($steps))) {
      $current_step_name = $query['step'];
    }
    else {
      // No in a real step; return empty block.
      return $block;
    }
  }

  $block->content['progress'] = array(
    '#theme' => 'proposal_progress',
    '#prefix' => '<div class="proposal-progress">',
    '#suffix' => '</div>',
    '#steps' => $steps,
    '#current_step' => $current_step_name,
  );

  return $block;
}
