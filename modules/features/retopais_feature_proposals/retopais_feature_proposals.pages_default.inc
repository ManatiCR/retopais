<?php
/**
 * @file
 * retopais_feature_proposals.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function retopais_feature_proposals_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit__panel_context_3ff4eec3-6d06-4090-bce8-84e3b8cf8d43';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Proposal',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'proposal' => 'proposal',
            ),
          ),
          'context' => 'argument_node_edit_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '395d427f-dfc5-44e2-b136-0d82fd9d1adf';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2642abf3-3eaf-42d5-aee9-2a5a73630206';
    $pane->panel = 'middle';
    $pane->type = 'proposal_progress';
    $pane->subtype = 'proposal_progress';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2642abf3-3eaf-42d5-aee9-2a5a73630206';
    $display->content['new-2642abf3-3eaf-42d5-aee9-2a5a73630206'] = $pane;
    $display->panels['middle'][0] = 'new-2642abf3-3eaf-42d5-aee9-2a5a73630206';
    $pane = new stdClass();
    $pane->pid = 'new-b84f2694-24bf-4a3d-855e-de72c086eddc';
    $pane->panel = 'middle';
    $pane->type = 'form';
    $pane->subtype = 'form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b84f2694-24bf-4a3d-855e-de72c086eddc';
    $display->content['new-b84f2694-24bf-4a3d-855e-de72c086eddc'] = $pane;
    $display->panels['middle'][1] = 'new-b84f2694-24bf-4a3d-855e-de72c086eddc';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_edit__panel_context_3ff4eec3-6d06-4090-bce8-84e3b8cf8d43'] = $handler;

  return $export;
}
