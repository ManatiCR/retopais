<?php
/**
 * @file
 * retopais_feature_blog.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function retopais_feature_blog_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'blog';
  $page->task = 'page';
  $page->admin_title = 'Blog';
  $page->admin_description = '';
  $page->path = 'blog/!category';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'category' => array(
      'id' => 1,
      'identifier' => 'Term Name',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_blog__panel';
  $handler->task = 'page';
  $handler->subtask = 'blog';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Blog',
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
  $display->title = 'Blog';
  $display->uuid = '2c0176fd-4282-4a80-8b91-27844cf6bbf8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4c9e8910-0987-4608-a748-cf75b4d84c69';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'blog-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_string_1',
      ),
      'arguments' => array(
        'field_category_tid' => '%category:html_safe',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4c9e8910-0987-4608-a748-cf75b4d84c69';
    $display->content['new-4c9e8910-0987-4608-a748-cf75b4d84c69'] = $pane;
    $display->panels['middle'][0] = 'new-4c9e8910-0987-4608-a748-cf75b4d84c69';
    $pane = new stdClass();
    $pane->pid = 'new-c61252a4-a18c-4d17-98ff-7953e5f0e9e8';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'blog_categories-panel_pane_1';
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
    $pane->uuid = 'c61252a4-a18c-4d17-98ff-7953e5f0e9e8';
    $display->content['new-c61252a4-a18c-4d17-98ff-7953e5f0e9e8'] = $pane;
    $display->panels['middle'][1] = 'new-c61252a4-a18c-4d17-98ff-7953e5f0e9e8';
    $pane = new stdClass();
    $pane->pid = 'new-376038c7-2317-4a09-ad01-3eef65afa073';
    $pane->panel = 'middle';
    $pane->type = 'problematicas_cta';
    $pane->subtype = 'problematicas_cta';
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
    $pane->uuid = '376038c7-2317-4a09-ad01-3eef65afa073';
    $display->content['new-376038c7-2317-4a09-ad01-3eef65afa073'] = $pane;
    $display->panels['middle'][2] = 'new-376038c7-2317-4a09-ad01-3eef65afa073';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-4c9e8910-0987-4608-a748-cf75b4d84c69';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['blog'] = $page;

  return $pages;

}
