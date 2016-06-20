<?php
/**
 * @file
 * retopais_feature_blog.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function retopais_feature_blog_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_7ced7ec8-3ec2-4adf-966e-192d5c81107c';
  $handler->task = 'node_view';
  $handler->subtask = '';
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
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'blog' => 'blog',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
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
  $display->uuid = '51aa36ad-9d48-4756-ac6f-3d3844068fe2';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f10b8297-ca8c-4f48-a828-e57e45549567';
    $pane->panel = 'middle';
    $pane->type = 'node_created';
    $pane->subtype = 'node_created';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'format' => 'blog_date',
      'context' => 'argument_entity_id:node_1',
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f10b8297-ca8c-4f48-a828-e57e45549567';
    $display->content['new-f10b8297-ca8c-4f48-a828-e57e45549567'] = $pane;
    $display->panels['middle'][0] = 'new-f10b8297-ca8c-4f48-a828-e57e45549567';
    $pane = new stdClass();
    $pane->pid = 'new-414f0cf7-bf05-4365-9701-ccf747d57156';
    $pane->panel = 'middle';
    $pane->type = 'page_breadcrumb';
    $pane->subtype = 'page_breadcrumb';
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
    $pane->uuid = '414f0cf7-bf05-4365-9701-ccf747d57156';
    $display->content['new-414f0cf7-bf05-4365-9701-ccf747d57156'] = $pane;
    $display->panels['middle'][1] = 'new-414f0cf7-bf05-4365-9701-ccf747d57156';
    $pane = new stdClass();
    $pane->pid = 'new-6b219252-f8a1-41c0-b165-c421fead4175';
    $pane->panel = 'middle';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h1',
      'id' => '',
      'class' => '',
      'context' => 'argument_entity_id:node_1',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '6b219252-f8a1-41c0-b165-c421fead4175';
    $display->content['new-6b219252-f8a1-41c0-b165-c421fead4175'] = $pane;
    $display->panels['middle'][2] = 'new-6b219252-f8a1-41c0-b165-c421fead4175';
    $pane = new stdClass();
    $pane->pid = 'new-59e99933-fe2d-4815-b369-1b80e6e614b0';
    $pane->panel = 'middle';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '59e99933-fe2d-4815-b369-1b80e6e614b0';
    $display->content['new-59e99933-fe2d-4815-b369-1b80e6e614b0'] = $pane;
    $display->panels['middle'][3] = 'new-59e99933-fe2d-4815-b369-1b80e6e614b0';
    $pane = new stdClass();
    $pane->pid = 'new-6be0276c-fed2-466e-ad9e-321811b3578f';
    $pane->panel = 'middle';
    $pane->type = 'back_to_blog';
    $pane->subtype = 'back_to_blog';
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
    $pane->uuid = '6be0276c-fed2-466e-ad9e-321811b3578f';
    $display->content['new-6be0276c-fed2-466e-ad9e-321811b3578f'] = $pane;
    $display->panels['middle'][4] = 'new-6be0276c-fed2-466e-ad9e-321811b3578f';
    $pane = new stdClass();
    $pane->pid = 'new-0c1b37eb-8c30-4328-8052-e7307db7cf76';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'blog-recent_articles';
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
    $pane->uuid = '0c1b37eb-8c30-4328-8052-e7307db7cf76';
    $display->content['new-0c1b37eb-8c30-4328-8052-e7307db7cf76'] = $pane;
    $display->panels['middle'][5] = 'new-0c1b37eb-8c30-4328-8052-e7307db7cf76';
    $pane = new stdClass();
    $pane->pid = 'new-81ba4d50-4ee0-45c1-ad9b-8c177b6810b9';
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '81ba4d50-4ee0-45c1-ad9b-8c177b6810b9';
    $display->content['new-81ba4d50-4ee0-45c1-ad9b-8c177b6810b9'] = $pane;
    $display->panels['middle'][6] = 'new-81ba4d50-4ee0-45c1-ad9b-8c177b6810b9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_7ced7ec8-3ec2-4adf-966e-192d5c81107c'] = $handler;

  return $export;
}

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
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
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
    $pane->pid = 'new-7cb3dd80-abf1-4b1b-a0c3-3d902e0c45c5';
    $pane->panel = 'middle';
    $pane->type = 'page_breadcrumb';
    $pane->subtype = 'page_breadcrumb';
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
    $pane->uuid = '7cb3dd80-abf1-4b1b-a0c3-3d902e0c45c5';
    $display->content['new-7cb3dd80-abf1-4b1b-a0c3-3d902e0c45c5'] = $pane;
    $display->panels['middle'][0] = 'new-7cb3dd80-abf1-4b1b-a0c3-3d902e0c45c5';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '4c9e8910-0987-4608-a748-cf75b4d84c69';
    $display->content['new-4c9e8910-0987-4608-a748-cf75b4d84c69'] = $pane;
    $display->panels['middle'][1] = 'new-4c9e8910-0987-4608-a748-cf75b4d84c69';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'c61252a4-a18c-4d17-98ff-7953e5f0e9e8';
    $display->content['new-c61252a4-a18c-4d17-98ff-7953e5f0e9e8'] = $pane;
    $display->panels['middle'][2] = 'new-c61252a4-a18c-4d17-98ff-7953e5f0e9e8';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '376038c7-2317-4a09-ad01-3eef65afa073';
    $display->content['new-376038c7-2317-4a09-ad01-3eef65afa073'] = $pane;
    $display->panels['middle'][3] = 'new-376038c7-2317-4a09-ad01-3eef65afa073';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-4c9e8910-0987-4608-a748-cf75b4d84c69';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['blog'] = $page;

  return $pages;

}
