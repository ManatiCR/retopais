<?php
/**
 * @file
 * retopais_feature_proposals.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function retopais_feature_proposals_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function retopais_feature_proposals_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function retopais_feature_proposals_flag_default_flags() {
  $flags = array();
  // Exported flag: "Invalidar propuesta".
  $flags['invalidar_propuesta'] = array(
    'entity_type' => 'node',
    'title' => 'Invalidar propuesta',
    'global' => 1,
    'types' => array(
      0 => 'proposal',
    ),
    'flag_short' => 'Sí',
    'flag_long' => 'Haga click para marcar esta propuesta como inválida.',
    'flag_message' => '',
    'unflag_short' => 'No',
    'unflag_long' => 'Haga click para marcar esta propuesta como válida.',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'token' => 'token',
      'full' => 0,
      'teaser' => 0,
      'rss' => 0,
      'ckeditor_embed' => 0,
      'diff_standard' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => FALSE,
    'i18n' => 0,
    'api_version' => 3,
    'module' => 'retopais_feature_proposals',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

}

/**
 * Implements hook_image_default_styles().
 */
function retopais_feature_proposals_image_default_styles() {
  $styles = array();

  // Exported image style: prize_logo.
  $styles['prize_logo'] = array(
    'label' => 'Prize logo',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 100,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function retopais_feature_proposals_node_info() {
  $items = array(
    'proposal' => array(
      'name' => t('Proposal'),
      'base' => 'node_content',
      'description' => t('Contains proposals submitted by citizens.'),
      'has_title' => '1',
      'title_label' => t('Nombre de la solución'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
