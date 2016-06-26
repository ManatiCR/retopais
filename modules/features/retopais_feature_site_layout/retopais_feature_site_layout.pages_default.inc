<?php
/**
 * @file
 * retopais_feature_site_layout.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function retopais_feature_site_layout_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template__panel_context_12926229-762a-490b-9aa5-5e6394884268';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Sitewide Layout',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'retopais_site_layout';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top_bar' => NULL,
      'header' => NULL,
      'nav' => NULL,
      'main' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd077b127-64f4-4482-bc3b-225e8c6422e5';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-26d03b53-c41c-43bd-a020-1d511c2f8385';
    $pane->panel = 'footer';
    $pane->type = 'block';
    $pane->subtype = 'menu-footer-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
          'type' => '0',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_content' => array(
          'type' => '0',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_wrapper' => array(
          'type' => 'nav',
          'class_enable' => 1,
          'class' => 'nav-footer',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 0,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '26d03b53-c41c-43bd-a020-1d511c2f8385';
    $display->content['new-26d03b53-c41c-43bd-a020-1d511c2f8385'] = $pane;
    $display->panels['footer'][0] = 'new-26d03b53-c41c-43bd-a020-1d511c2f8385';
    $pane = new stdClass();
    $pane->pid = 'new-f7cdb9d1-f2e1-4c3a-8458-726f6e5893bc';
    $pane->panel = 'footer';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f7cdb9d1-f2e1-4c3a-8458-726f6e5893bc';
    $display->content['new-f7cdb9d1-f2e1-4c3a-8458-726f6e5893bc'] = $pane;
    $display->panels['footer'][1] = 'new-f7cdb9d1-f2e1-4c3a-8458-726f6e5893bc';
    $pane = new stdClass();
    $pane->pid = 'new-e9e05085-6184-4597-b08f-a3cdae206e59';
    $pane->panel = 'footer';
    $pane->type = 'views_panes';
    $pane->subtype = 'problems-problems_only_names';
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
    $pane->uuid = 'e9e05085-6184-4597-b08f-a3cdae206e59';
    $display->content['new-e9e05085-6184-4597-b08f-a3cdae206e59'] = $pane;
    $display->panels['footer'][2] = 'new-e9e05085-6184-4597-b08f-a3cdae206e59';
    $pane = new stdClass();
    $pane->pid = 'new-f9e13231-465b-47f8-83c0-264fcd054027';
    $pane->panel = 'footer';
    $pane->type = 'views_panes';
    $pane->subtype = 'alianzas-panel_pane_4';
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
    $pane->uuid = 'f9e13231-465b-47f8-83c0-264fcd054027';
    $display->content['new-f9e13231-465b-47f8-83c0-264fcd054027'] = $pane;
    $display->panels['footer'][3] = 'new-f9e13231-465b-47f8-83c0-264fcd054027';
    $pane = new stdClass();
    $pane->pid = 'new-26f3ca8a-8fd6-45ec-a468-2b9a8d984169';
    $pane->panel = 'header';
    $pane->type = 'page_site_name';
    $pane->subtype = 'page_site_name';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'linked' => 1,
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
          'type' => '0',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_content' => array(
          'type' => '',
          'class_enable' => 1,
          'class' => 'site-name',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_wrapper' => array(
          'type' => '0',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 0,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '26f3ca8a-8fd6-45ec-a468-2b9a8d984169';
    $display->content['new-26f3ca8a-8fd6-45ec-a468-2b9a8d984169'] = $pane;
    $display->panels['header'][0] = 'new-26f3ca8a-8fd6-45ec-a468-2b9a8d984169';
    $pane = new stdClass();
    $pane->pid = 'new-f1cd393d-09f1-4ff4-bac1-7f3fd0bb0d8f';
    $pane->panel = 'header';
    $pane->type = 'block';
    $pane->subtype = 'menu-social-links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
          'type' => '0',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_content' => array(
          'type' => '0',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_wrapper' => array(
          'type' => 'nav',
          'class_enable' => 1,
          'class' => 'social-links',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 0,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f1cd393d-09f1-4ff4-bac1-7f3fd0bb0d8f';
    $display->content['new-f1cd393d-09f1-4ff4-bac1-7f3fd0bb0d8f'] = $pane;
    $display->panels['header'][1] = 'new-f1cd393d-09f1-4ff4-bac1-7f3fd0bb0d8f';
    $pane = new stdClass();
    $pane->pid = 'new-a7b1201f-8cff-4d90-8047-b28d9c9fe0ec';
    $pane->panel = 'main';
    $pane->type = 'page_messages';
    $pane->subtype = 'page_messages';
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
    $pane->uuid = 'a7b1201f-8cff-4d90-8047-b28d9c9fe0ec';
    $display->content['new-a7b1201f-8cff-4d90-8047-b28d9c9fe0ec'] = $pane;
    $display->panels['main'][0] = 'new-a7b1201f-8cff-4d90-8047-b28d9c9fe0ec';
    $pane = new stdClass();
    $pane->pid = 'new-cd68d447-0ff6-4691-abe9-9d6fd311be4a';
    $pane->panel = 'main';
    $pane->type = 'page_content';
    $pane->subtype = 'page_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_page_content_1',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'cd68d447-0ff6-4691-abe9-9d6fd311be4a';
    $display->content['new-cd68d447-0ff6-4691-abe9-9d6fd311be4a'] = $pane;
    $display->panels['main'][1] = 'new-cd68d447-0ff6-4691-abe9-9d6fd311be4a';
    $pane = new stdClass();
    $pane->pid = 'new-b1c363b3-1169-499e-9301-9af70c75d533';
    $pane->panel = 'nav';
    $pane->type = 'block';
    $pane->subtype = 'system-main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
          'type' => '0',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_content' => array(
          'type' => '0',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_wrapper' => array(
          'type' => 'nav',
          'class_enable' => 1,
          'class' => 'nav-main',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 0,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b1c363b3-1169-499e-9301-9af70c75d533';
    $display->content['new-b1c363b3-1169-499e-9301-9af70c75d533'] = $pane;
    $display->panels['nav'][0] = 'new-b1c363b3-1169-499e-9301-9af70c75d533';
    $pane = new stdClass();
    $pane->pid = 'new-199ec9cd-110d-44ca-9ab7-5798c351bd4d';
    $pane->panel = 'top_bar';
    $pane->type = 'block';
    $pane->subtype = 'menu-top-bar-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
          'type' => '0',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_content' => array(
          'type' => '0',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_wrapper' => array(
          'type' => 'nav',
          'class_enable' => 1,
          'class' => 'nav-top-bar',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 0,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '199ec9cd-110d-44ca-9ab7-5798c351bd4d';
    $display->content['new-199ec9cd-110d-44ca-9ab7-5798c351bd4d'] = $pane;
    $display->panels['top_bar'][0] = 'new-199ec9cd-110d-44ca-9ab7-5798c351bd4d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-26f3ca8a-8fd6-45ec-a468-2b9a8d984169';
  $handler->conf['display'] = $display;
  $export['site_template__panel_context_12926229-762a-490b-9aa5-5e6394884268'] = $handler;

  return $export;
}
