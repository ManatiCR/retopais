<?php
/**
 * @file
 * retopais_feature_alliances.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function retopais_feature_alliances_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'alianzas';
  $page->task = 'page';
  $page->admin_title = 'Alianzas';
  $page->admin_description = '';
  $page->path = 'alianzas';
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
  $handler->name = 'page_alianzas__panel';
  $handler->task = 'page';
  $handler->subtask = 'alianzas';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Alianzas',
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
  $display->title = 'Alianzas';
  $display->uuid = 'ff53bb31-fa52-451d-a5cd-bdc3909a72a1';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4472375d-ef9f-4688-a1e2-5e9d62b60036';
    $pane->panel = 'middle';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => '',
      'id' => '',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4472375d-ef9f-4688-a1e2-5e9d62b60036';
    $display->content['new-4472375d-ef9f-4688-a1e2-5e9d62b60036'] = $pane;
    $display->panels['middle'][0] = 'new-4472375d-ef9f-4688-a1e2-5e9d62b60036';
    $pane = new stdClass();
    $pane->pid = 'new-bb8950e3-8b4f-4671-8629-c2485a4467c5';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'alianzas-panel_pane_1';
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
    $pane->uuid = 'bb8950e3-8b4f-4671-8629-c2485a4467c5';
    $display->content['new-bb8950e3-8b4f-4671-8629-c2485a4467c5'] = $pane;
    $display->panels['middle'][1] = 'new-bb8950e3-8b4f-4671-8629-c2485a4467c5';
    $pane = new stdClass();
    $pane->pid = 'new-4cf946f5-ee0d-4933-b0e8-c57edc090d6d';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'alianzas-panel_pane_2';
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
    $pane->uuid = '4cf946f5-ee0d-4933-b0e8-c57edc090d6d';
    $display->content['new-4cf946f5-ee0d-4933-b0e8-c57edc090d6d'] = $pane;
    $display->panels['middle'][2] = 'new-4cf946f5-ee0d-4933-b0e8-c57edc090d6d';
    $pane = new stdClass();
    $pane->pid = 'new-94969bed-e53d-4d38-a717-855b211e9c6c';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'alianzas-panel_pane_3';
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
    $pane->uuid = '94969bed-e53d-4d38-a717-855b211e9c6c';
    $display->content['new-94969bed-e53d-4d38-a717-855b211e9c6c'] = $pane;
    $display->panels['middle'][3] = 'new-94969bed-e53d-4d38-a717-855b211e9c6c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-bb8950e3-8b4f-4671-8629-c2485a4467c5';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['alianzas'] = $page;

  return $pages;

}