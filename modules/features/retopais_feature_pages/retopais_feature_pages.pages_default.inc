<?php
/**
 * @file
 * retopais_feature_pages.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function retopais_feature_pages_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'que_es_reto_pais';
  $page->task = 'page';
  $page->admin_title = 'Qué es Reto PAÍS?';
  $page->admin_description = '';
  $page->path = 'que-es-reto-pais';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_que_es_reto_pais__panel';
  $handler->task = 'page';
  $handler->subtask = 'que_es_reto_pais';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => '¿Qué es Reto PAÍS?',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
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
  $display->title = '¿Qué es Reto PAÍS?';
  $display->uuid = '1400cc53-283d-46ef-9222-cba03a6d5f3f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2caedd1d-61e1-4b99-b5f8-8521d4d908c4';
    $pane->panel = 'middle';
    $pane->type = 'que_es_retopais_intro';
    $pane->subtype = 'que_es_retopais_intro';
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
    $pane->uuid = '2caedd1d-61e1-4b99-b5f8-8521d4d908c4';
    $display->content['new-2caedd1d-61e1-4b99-b5f8-8521d4d908c4'] = $pane;
    $display->panels['middle'][0] = 'new-2caedd1d-61e1-4b99-b5f8-8521d4d908c4';
    $pane = new stdClass();
    $pane->pid = 'new-ed2c6438-b418-40ca-8ce9-33c550d4f5ae';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'problems-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ed2c6438-b418-40ca-8ce9-33c550d4f5ae';
    $display->content['new-ed2c6438-b418-40ca-8ce9-33c550d4f5ae'] = $pane;
    $display->panels['middle'][1] = 'new-ed2c6438-b418-40ca-8ce9-33c550d4f5ae';
    $pane = new stdClass();
    $pane->pid = 'new-cef7a360-2bce-42da-a415-d63d0f936002';
    $pane->panel = 'middle';
    $pane->type = 'que_es_retopais_proposals';
    $pane->subtype = 'que_es_retopais_proposals';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'cef7a360-2bce-42da-a415-d63d0f936002';
    $display->content['new-cef7a360-2bce-42da-a415-d63d0f936002'] = $pane;
    $display->panels['middle'][2] = 'new-cef7a360-2bce-42da-a415-d63d0f936002';
    $pane = new stdClass();
    $pane->pid = 'new-33d6fd51-ca88-46b4-975d-824c430cdfe5';
    $pane->panel = 'middle';
    $pane->type = 'que_es_retopais_stages';
    $pane->subtype = 'que_es_retopais_stages';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '33d6fd51-ca88-46b4-975d-824c430cdfe5';
    $display->content['new-33d6fd51-ca88-46b4-975d-824c430cdfe5'] = $pane;
    $display->panels['middle'][3] = 'new-33d6fd51-ca88-46b4-975d-824c430cdfe5';
    $pane = new stdClass();
    $pane->pid = 'new-b2ec39dd-42df-4df4-9639-f41b2f68fba8';
    $pane->panel = 'middle';
    $pane->type = 'que_es_retopais_footer';
    $pane->subtype = 'que_es_retopais_footer';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'b2ec39dd-42df-4df4-9639-f41b2f68fba8';
    $display->content['new-b2ec39dd-42df-4df4-9639-f41b2f68fba8'] = $pane;
    $display->panels['middle'][4] = 'new-b2ec39dd-42df-4df4-9639-f41b2f68fba8';
    $pane = new stdClass();
    $pane->pid = 'new-18563054-409b-418d-b213-b8b2a9ff8fc1';
    $pane->panel = 'middle';
    $pane->type = 'que_es_retopais_cta';
    $pane->subtype = 'que_es_retopais_cta';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '18563054-409b-418d-b213-b8b2a9ff8fc1';
    $display->content['new-18563054-409b-418d-b213-b8b2a9ff8fc1'] = $pane;
    $display->panels['middle'][5] = 'new-18563054-409b-418d-b213-b8b2a9ff8fc1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['que_es_reto_pais'] = $page;

  return $pages;

}
