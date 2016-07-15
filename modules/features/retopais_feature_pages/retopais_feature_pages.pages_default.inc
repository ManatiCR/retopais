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
  $page->name = 'contacto';
  $page->task = 'page';
  $page->admin_title = 'Contacto';
  $page->admin_description = '';
  $page->path = 'contacto';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_contacto__panel';
  $handler->task = 'page';
  $handler->subtask = 'contacto';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Contacto',
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
  $display->layout = 'retopais_sidebar';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Contacto';
  $display->uuid = '6358cdaa-8b59-44b7-a647-ce16db75919d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4129d240-c4f8-44a2-9f81-c1199ad0ca6d';
    $pane->panel = 'left';
    $pane->type = 'contact';
    $pane->subtype = 'contact';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '4129d240-c4f8-44a2-9f81-c1199ad0ca6d';
    $display->content['new-4129d240-c4f8-44a2-9f81-c1199ad0ca6d'] = $pane;
    $display->panels['left'][0] = 'new-4129d240-c4f8-44a2-9f81-c1199ad0ca6d';
    $pane = new stdClass();
    $pane->pid = 'new-18127bf3-a68d-47c1-8fd8-ee2c32e8e5b2';
    $pane->panel = 'right';
    $pane->type = 'contact_media_kit';
    $pane->subtype = 'contact_media_kit';
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
    $pane->uuid = '18127bf3-a68d-47c1-8fd8-ee2c32e8e5b2';
    $display->content['new-18127bf3-a68d-47c1-8fd8-ee2c32e8e5b2'] = $pane;
    $display->panels['right'][0] = 'new-18127bf3-a68d-47c1-8fd8-ee2c32e8e5b2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-18127bf3-a68d-47c1-8fd8-ee2c32e8e5b2';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['contacto'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'homepage';
  $page->task = 'page';
  $page->admin_title = 'Homepage';
  $page->admin_description = '';
  $page->path = 'homepage';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_homepage__panel';
  $handler->task = 'page';
  $handler->subtask = 'homepage';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Homepage',
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
  $display->layout = 'retopais_fullwidth_areas';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'first-full' => NULL,
      'second' => NULL,
      'third-full' => NULL,
      'fourth' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ccfe1a5b-12e2-444d-b1aa-23cbec4e6cdf';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b2f7a4c0-954f-4e9e-97a2-8c15787a535b';
    $pane->panel = 'first-full';
    $pane->type = 'proposal_counter_hp';
    $pane->subtype = 'proposal_counter_hp';
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
    $pane->uuid = 'b2f7a4c0-954f-4e9e-97a2-8c15787a535b';
    $display->content['new-b2f7a4c0-954f-4e9e-97a2-8c15787a535b'] = $pane;
    $display->panels['first-full'][0] = 'new-b2f7a4c0-954f-4e9e-97a2-8c15787a535b';
    $pane = new stdClass();
    $pane->pid = 'new-2e6251ab-f281-4d4d-b621-95803a993f5c';
    $pane->panel = 'fourth';
    $pane->type = 'homepage_premios';
    $pane->subtype = 'homepage_premios';
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
    $pane->uuid = '2e6251ab-f281-4d4d-b621-95803a993f5c';
    $display->content['new-2e6251ab-f281-4d4d-b621-95803a993f5c'] = $pane;
    $display->panels['fourth'][0] = 'new-2e6251ab-f281-4d4d-b621-95803a993f5c';
    $pane = new stdClass();
    $pane->pid = 'new-a765bff4-3c41-4787-bb36-faeafe49cd35';
    $pane->panel = 'fourth';
    $pane->type = 'homepage_participa';
    $pane->subtype = 'homepage_participa';
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
    $pane->uuid = 'a765bff4-3c41-4787-bb36-faeafe49cd35';
    $display->content['new-a765bff4-3c41-4787-bb36-faeafe49cd35'] = $pane;
    $display->panels['fourth'][1] = 'new-a765bff4-3c41-4787-bb36-faeafe49cd35';
    $pane = new stdClass();
    $pane->pid = 'new-4e2305b5-cc4a-4934-80b6-487cd302f850';
    $pane->panel = 'fourth';
    $pane->type = 'views_panes';
    $pane->subtype = 'alianzas-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Patrocinadores',
      'override_title_heading' => 'h2',
      'exposed' => array(
        'field_alliance_type_value' => 'sponsor1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '4e2305b5-cc4a-4934-80b6-487cd302f850';
    $display->content['new-4e2305b5-cc4a-4934-80b6-487cd302f850'] = $pane;
    $display->panels['fourth'][2] = 'new-4e2305b5-cc4a-4934-80b6-487cd302f850';
    $pane = new stdClass();
    $pane->pid = 'new-5f242e59-d4af-4d5c-b312-b9d77381b90a';
    $pane->panel = 'fourth';
    $pane->type = 'views_panes';
    $pane->subtype = 'alianzas-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'field_alliance_type_value' => 'sponsor2',
      ),
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
    $pane->uuid = '5f242e59-d4af-4d5c-b312-b9d77381b90a';
    $display->content['new-5f242e59-d4af-4d5c-b312-b9d77381b90a'] = $pane;
    $display->panels['fourth'][3] = 'new-5f242e59-d4af-4d5c-b312-b9d77381b90a';
    $pane = new stdClass();
    $pane->pid = 'new-833c5ca5-b186-4e0c-bc77-b8b0aa4dd929';
    $pane->panel = 'fourth';
    $pane->type = 'views_panes';
    $pane->subtype = 'alianzas-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'field_alliance_type_value' => 'sponsor3',
      ),
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '833c5ca5-b186-4e0c-bc77-b8b0aa4dd929';
    $display->content['new-833c5ca5-b186-4e0c-bc77-b8b0aa4dd929'] = $pane;
    $display->panels['fourth'][4] = 'new-833c5ca5-b186-4e0c-bc77-b8b0aa4dd929';
    $pane = new stdClass();
    $pane->pid = 'new-5d5a23a5-5e89-4a40-a707-fd13db736bfb';
    $pane->panel = 'second';
    $pane->type = 'views_panes';
    $pane->subtype = 'problems-panel_pane_3';
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
    $pane->uuid = '5d5a23a5-5e89-4a40-a707-fd13db736bfb';
    $display->content['new-5d5a23a5-5e89-4a40-a707-fd13db736bfb'] = $pane;
    $display->panels['second'][0] = 'new-5d5a23a5-5e89-4a40-a707-fd13db736bfb';
    $pane = new stdClass();
    $pane->pid = 'new-2242428e-6cb3-4d11-93a1-d89a9c34d54c';
    $pane->panel = 'third-full';
    $pane->type = 'homepage_timeline';
    $pane->subtype = 'homepage_timeline';
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
    $pane->uuid = '2242428e-6cb3-4d11-93a1-d89a9c34d54c';
    $display->content['new-2242428e-6cb3-4d11-93a1-d89a9c34d54c'] = $pane;
    $display->panels['third-full'][0] = 'new-2242428e-6cb3-4d11-93a1-d89a9c34d54c';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_homepage__finalistas';
  $handler->task = 'page';
  $handler->subtask = 'homepage';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Finalistas',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'finalistas',
  );
  $display = new panels_display();
  $display->layout = 'retopais_fullwidth_areas';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'first-full' => NULL,
      'second' => NULL,
      'third-full' => NULL,
      'fourth' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ccfe1a5b-12e2-444d-b1aa-23cbec4e6cdf';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-daa04d34-d915-44ce-aa1f-db126c91995c';
    $pane->panel = 'first-full';
    $pane->type = 'proposal_counter_hp_fin';
    $pane->subtype = 'proposal_counter_hp_fin';
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
    $pane->uuid = 'daa04d34-d915-44ce-aa1f-db126c91995c';
    $display->content['new-daa04d34-d915-44ce-aa1f-db126c91995c'] = $pane;
    $display->panels['first-full'][0] = 'new-daa04d34-d915-44ce-aa1f-db126c91995c';
    $pane = new stdClass();
    $pane->pid = 'new-2e6251ab-f281-4d4d-b621-95803a993f5c';
    $pane->panel = 'fourth';
    $pane->type = 'homepage_premios';
    $pane->subtype = 'homepage_premios';
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
    $pane->uuid = '2e6251ab-f281-4d4d-b621-95803a993f5c';
    $display->content['new-2e6251ab-f281-4d4d-b621-95803a993f5c'] = $pane;
    $display->panels['fourth'][0] = 'new-2e6251ab-f281-4d4d-b621-95803a993f5c';
    $pane = new stdClass();
    $pane->pid = 'new-4e2305b5-cc4a-4934-80b6-487cd302f850';
    $pane->panel = 'fourth';
    $pane->type = 'views_panes';
    $pane->subtype = 'alianzas-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Patrocinadores',
      'override_title_heading' => 'h2',
      'exposed' => array(
        'field_alliance_type_value' => 'sponsor1',
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
    $pane->uuid = '4e2305b5-cc4a-4934-80b6-487cd302f850';
    $display->content['new-4e2305b5-cc4a-4934-80b6-487cd302f850'] = $pane;
    $display->panels['fourth'][1] = 'new-4e2305b5-cc4a-4934-80b6-487cd302f850';
    $pane = new stdClass();
    $pane->pid = 'new-5f242e59-d4af-4d5c-b312-b9d77381b90a';
    $pane->panel = 'fourth';
    $pane->type = 'views_panes';
    $pane->subtype = 'alianzas-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'field_alliance_type_value' => 'sponsor2',
      ),
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
    $pane->uuid = '5f242e59-d4af-4d5c-b312-b9d77381b90a';
    $display->content['new-5f242e59-d4af-4d5c-b312-b9d77381b90a'] = $pane;
    $display->panels['fourth'][2] = 'new-5f242e59-d4af-4d5c-b312-b9d77381b90a';
    $pane = new stdClass();
    $pane->pid = 'new-833c5ca5-b186-4e0c-bc77-b8b0aa4dd929';
    $pane->panel = 'fourth';
    $pane->type = 'views_panes';
    $pane->subtype = 'alianzas-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'field_alliance_type_value' => 'sponsor3',
      ),
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
    $pane->uuid = '833c5ca5-b186-4e0c-bc77-b8b0aa4dd929';
    $display->content['new-833c5ca5-b186-4e0c-bc77-b8b0aa4dd929'] = $pane;
    $display->panels['fourth'][3] = 'new-833c5ca5-b186-4e0c-bc77-b8b0aa4dd929';
    $pane = new stdClass();
    $pane->pid = 'new-8fc27360-216a-40ac-9830-6b03bc9760af';
    $pane->panel = 'second';
    $pane->type = 'views_panes';
    $pane->subtype = 'problems-panel_pane_5';
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
    $pane->uuid = '8fc27360-216a-40ac-9830-6b03bc9760af';
    $display->content['new-8fc27360-216a-40ac-9830-6b03bc9760af'] = $pane;
    $display->panels['second'][0] = 'new-8fc27360-216a-40ac-9830-6b03bc9760af';
    $pane = new stdClass();
    $pane->pid = 'new-2242428e-6cb3-4d11-93a1-d89a9c34d54c';
    $pane->panel = 'third-full';
    $pane->type = 'homepage_timeline';
    $pane->subtype = 'homepage_timeline';
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
    $pane->uuid = '2242428e-6cb3-4d11-93a1-d89a9c34d54c';
    $display->content['new-2242428e-6cb3-4d11-93a1-d89a9c34d54c'] = $pane;
    $display->panels['third-full'][0] = 'new-2242428e-6cb3-4d11-93a1-d89a9c34d54c';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_homepage__ganadores';
  $handler->task = 'page';
  $handler->subtask = 'homepage';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Ganadores',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'ganadores',
  );
  $display = new panels_display();
  $display->layout = 'retopais_fullwidth_areas';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'first-full' => NULL,
      'second' => NULL,
      'third-full' => NULL,
      'fourth' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ccfe1a5b-12e2-444d-b1aa-23cbec4e6cdf';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-daa04d34-d915-44ce-aa1f-db126c91995c';
    $pane->panel = 'first-full';
    $pane->type = 'proposal_counter_hp_fin';
    $pane->subtype = 'proposal_counter_hp_fin';
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
    $pane->uuid = 'daa04d34-d915-44ce-aa1f-db126c91995c';
    $display->content['new-daa04d34-d915-44ce-aa1f-db126c91995c'] = $pane;
    $display->panels['first-full'][0] = 'new-daa04d34-d915-44ce-aa1f-db126c91995c';
    $pane = new stdClass();
    $pane->pid = 'new-2e6251ab-f281-4d4d-b621-95803a993f5c';
    $pane->panel = 'fourth';
    $pane->type = 'homepage_premios';
    $pane->subtype = 'homepage_premios';
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
    $pane->uuid = '2e6251ab-f281-4d4d-b621-95803a993f5c';
    $display->content['new-2e6251ab-f281-4d4d-b621-95803a993f5c'] = $pane;
    $display->panels['fourth'][0] = 'new-2e6251ab-f281-4d4d-b621-95803a993f5c';
    $pane = new stdClass();
    $pane->pid = 'new-4e2305b5-cc4a-4934-80b6-487cd302f850';
    $pane->panel = 'fourth';
    $pane->type = 'views_panes';
    $pane->subtype = 'alianzas-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Patrocinadores',
      'override_title_heading' => 'h2',
      'exposed' => array(
        'field_alliance_type_value' => 'sponsor1',
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
    $pane->uuid = '4e2305b5-cc4a-4934-80b6-487cd302f850';
    $display->content['new-4e2305b5-cc4a-4934-80b6-487cd302f850'] = $pane;
    $display->panels['fourth'][1] = 'new-4e2305b5-cc4a-4934-80b6-487cd302f850';
    $pane = new stdClass();
    $pane->pid = 'new-5f242e59-d4af-4d5c-b312-b9d77381b90a';
    $pane->panel = 'fourth';
    $pane->type = 'views_panes';
    $pane->subtype = 'alianzas-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'field_alliance_type_value' => 'sponsor2',
      ),
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
    $pane->uuid = '5f242e59-d4af-4d5c-b312-b9d77381b90a';
    $display->content['new-5f242e59-d4af-4d5c-b312-b9d77381b90a'] = $pane;
    $display->panels['fourth'][2] = 'new-5f242e59-d4af-4d5c-b312-b9d77381b90a';
    $pane = new stdClass();
    $pane->pid = 'new-833c5ca5-b186-4e0c-bc77-b8b0aa4dd929';
    $pane->panel = 'fourth';
    $pane->type = 'views_panes';
    $pane->subtype = 'alianzas-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'field_alliance_type_value' => 'sponsor3',
      ),
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
    $pane->uuid = '833c5ca5-b186-4e0c-bc77-b8b0aa4dd929';
    $display->content['new-833c5ca5-b186-4e0c-bc77-b8b0aa4dd929'] = $pane;
    $display->panels['fourth'][3] = 'new-833c5ca5-b186-4e0c-bc77-b8b0aa4dd929';
    $pane = new stdClass();
    $pane->pid = 'new-8fc27360-216a-40ac-9830-6b03bc9760af';
    $pane->panel = 'second';
    $pane->type = 'views_panes';
    $pane->subtype = 'problems-panel_pane_5';
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
    $pane->uuid = '8fc27360-216a-40ac-9830-6b03bc9760af';
    $display->content['new-8fc27360-216a-40ac-9830-6b03bc9760af'] = $pane;
    $display->panels['second'][0] = 'new-8fc27360-216a-40ac-9830-6b03bc9760af';
    $pane = new stdClass();
    $pane->pid = 'new-2242428e-6cb3-4d11-93a1-d89a9c34d54c';
    $pane->panel = 'third-full';
    $pane->type = 'homepage_timeline';
    $pane->subtype = 'homepage_timeline';
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
    $pane->uuid = '2242428e-6cb3-4d11-93a1-d89a9c34d54c';
    $display->content['new-2242428e-6cb3-4d11-93a1-d89a9c34d54c'] = $pane;
    $display->panels['third-full'][0] = 'new-2242428e-6cb3-4d11-93a1-d89a9c34d54c';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['homepage'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'problematicas';
  $page->task = 'page';
  $page->admin_title = 'Problemáticas';
  $page->admin_description = '';
  $page->path = 'problematicas';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_problematicas__panel';
  $handler->task = 'page';
  $handler->subtask = 'problematicas';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Problemáticas',
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
  $display->layout = 'retopais_sidebar';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'first' => NULL,
      'second' => NULL,
      'third' => NULL,
      'middle' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Problemáticas';
  $display->uuid = 'eab00d15-e7d9-44fa-b6cb-ba5c926f3f70';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-870e153d-8d7b-421a-aee1-659f8d2e17bb';
    $pane->panel = 'left';
    $pane->type = 'problematicas_intro';
    $pane->subtype = 'problematicas_intro';
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
    $pane->uuid = '870e153d-8d7b-421a-aee1-659f8d2e17bb';
    $display->content['new-870e153d-8d7b-421a-aee1-659f8d2e17bb'] = $pane;
    $display->panels['left'][0] = 'new-870e153d-8d7b-421a-aee1-659f8d2e17bb';
    $pane = new stdClass();
    $pane->pid = 'new-8306962c-3be9-464e-8307-524a2b12991f';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'problems-panel_pane_2';
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
    $pane->uuid = '8306962c-3be9-464e-8307-524a2b12991f';
    $display->content['new-8306962c-3be9-464e-8307-524a2b12991f'] = $pane;
    $display->panels['left'][1] = 'new-8306962c-3be9-464e-8307-524a2b12991f';
    $pane = new stdClass();
    $pane->pid = 'new-f5780150-733f-46ba-9969-7b73a5707533';
    $pane->panel = 'right';
    $pane->type = 'problematicas_sidebar';
    $pane->subtype = 'problematicas_sidebar';
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
    $pane->uuid = 'f5780150-733f-46ba-9969-7b73a5707533';
    $display->content['new-f5780150-733f-46ba-9969-7b73a5707533'] = $pane;
    $display->panels['right'][0] = 'new-f5780150-733f-46ba-9969-7b73a5707533';
    $pane = new stdClass();
    $pane->pid = 'new-b26897fd-e848-4b71-8e20-9bd89d531295';
    $pane->panel = 'right';
    $pane->type = 'blog_cta';
    $pane->subtype = 'blog_cta';
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
    $pane->uuid = 'b26897fd-e848-4b71-8e20-9bd89d531295';
    $display->content['new-b26897fd-e848-4b71-8e20-9bd89d531295'] = $pane;
    $display->panels['right'][1] = 'new-b26897fd-e848-4b71-8e20-9bd89d531295';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['problematicas'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'que_es_reto_pais';
  $page->task = 'page';
  $page->admin_title = 'Qué es Reto PAÍS?';
  $page->admin_description = '';
  $page->path = 'que-es-reto-pais';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
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
  $display->layout = 'retopais_sidebar';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '¿Qué es Reto PAÍS?';
  $display->uuid = '1400cc53-283d-46ef-9222-cba03a6d5f3f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2caedd1d-61e1-4b99-b5f8-8521d4d908c4';
    $pane->panel = 'left';
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
    $display->panels['left'][0] = 'new-2caedd1d-61e1-4b99-b5f8-8521d4d908c4';
    $pane = new stdClass();
    $pane->pid = 'new-ed2c6438-b418-40ca-8ce9-33c550d4f5ae';
    $pane->panel = 'left';
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
    $display->panels['left'][1] = 'new-ed2c6438-b418-40ca-8ce9-33c550d4f5ae';
    $pane = new stdClass();
    $pane->pid = 'new-cef7a360-2bce-42da-a415-d63d0f936002';
    $pane->panel = 'left';
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
    $display->panels['left'][2] = 'new-cef7a360-2bce-42da-a415-d63d0f936002';
    $pane = new stdClass();
    $pane->pid = 'new-33d6fd51-ca88-46b4-975d-824c430cdfe5';
    $pane->panel = 'left';
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
    $display->panels['left'][3] = 'new-33d6fd51-ca88-46b4-975d-824c430cdfe5';
    $pane = new stdClass();
    $pane->pid = 'new-b2ec39dd-42df-4df4-9639-f41b2f68fba8';
    $pane->panel = 'left';
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
    $display->panels['left'][4] = 'new-b2ec39dd-42df-4df4-9639-f41b2f68fba8';
    $pane = new stdClass();
    $pane->pid = 'new-18563054-409b-418d-b213-b8b2a9ff8fc1';
    $pane->panel = 'left';
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
    $display->panels['left'][5] = 'new-18563054-409b-418d-b213-b8b2a9ff8fc1';
    $pane = new stdClass();
    $pane->pid = 'new-4dfcf3a0-bf7e-4fa4-87ac-b358c8f8b7fa';
    $pane->panel = 'left';
    $pane->type = 'que_es_retopais_premios_main';
    $pane->subtype = 'que_es_retopais_premios_main';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'premios',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '4dfcf3a0-bf7e-4fa4-87ac-b358c8f8b7fa';
    $display->content['new-4dfcf3a0-bf7e-4fa4-87ac-b358c8f8b7fa'] = $pane;
    $display->panels['left'][6] = 'new-4dfcf3a0-bf7e-4fa4-87ac-b358c8f8b7fa';
    $pane = new stdClass();
    $pane->pid = 'new-edcab7bc-6a87-4c50-ab05-a3e53a58971b';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'alianzas-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'alliances-prizes-logos',
    );
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'edcab7bc-6a87-4c50-ab05-a3e53a58971b';
    $display->content['new-edcab7bc-6a87-4c50-ab05-a3e53a58971b'] = $pane;
    $display->panels['left'][7] = 'new-edcab7bc-6a87-4c50-ab05-a3e53a58971b';
    $pane = new stdClass();
    $pane->pid = 'new-80cad167-6ba0-4ad0-aff7-dffca1d42d68';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'problems-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '80cad167-6ba0-4ad0-aff7-dffca1d42d68';
    $display->content['new-80cad167-6ba0-4ad0-aff7-dffca1d42d68'] = $pane;
    $display->panels['left'][8] = 'new-80cad167-6ba0-4ad0-aff7-dffca1d42d68';
    $pane = new stdClass();
    $pane->pid = 'new-19ae4028-0201-45e3-87e4-16050a23995a';
    $pane->panel = 'right';
    $pane->type = 'proposal_counter';
    $pane->subtype = 'proposal_counter';
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
    $pane->uuid = '19ae4028-0201-45e3-87e4-16050a23995a';
    $display->content['new-19ae4028-0201-45e3-87e4-16050a23995a'] = $pane;
    $display->panels['right'][0] = 'new-19ae4028-0201-45e3-87e4-16050a23995a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['que_es_reto_pais'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'reglamento';
  $page->task = 'page';
  $page->admin_title = 'Reglamento';
  $page->admin_description = '';
  $page->path = 'reglamento';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_reglamento__panel';
  $handler->task = 'page';
  $handler->subtask = 'reglamento';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Reglamento',
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
  $display->title = 'Reglamento';
  $display->uuid = 'cf5c5def-18c7-4fca-b97a-eb37d80dcece';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-16984945-94be-4067-a6e4-765eec452247';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<ol>
<li>
Objetivo de la competencia
<p>Empoderar a la sociedad civil a proponer y desarrollar soluciones de innovación social para atacar las problemáticas definidas por el Índice de Progreso Social (IPS) en Costa Rica.</p>
</li>

<li>
Línea de Tiempo
<p>El lanzamiento de la competencia será el 27 de junio del 2016. Este día se abrirá el plazo para recibir aplicaciones y estará abierto hasta el 24 de julio. Ese día se cierran las inscripciones. La única forma de aplicar es a través de los formularios en la plataforma.</p>

<p>Se llevará a cabo la Maratón de Ideas el 16 de julio. Será un día donde se unirán participantes invitados de diferentes sectores para crear propuestas a las problemáticas.</p>

<p>Se anunciarán cuáles ideas o soluciones en marcha pasan a la siguiente etapa el 28 de julio, serán 15 finalistas. Se anunciarán a través de la página web y serán contactados inmediatamente para confirmar su participación en las fases siguientes. Deben contestar teléfonos o correo electrónico, de lo contrario serán descalificados por no contar con un medio de comunicación eficiente.</p>

<p>El 6 y 7 de agosto se llevará a cabo el fin de semana de talleres, donde los finalistas recibirán capacitación y asesoría para sus proyectos, consejos de emprendedores y organizaciones de diferentes sectores. La asistencia es obligatoria para los finalistas.</p>

<p>Ellos tendrán una semana para mejorar su propuesta y el 11 de agosto se llevará a cabo el Evento de Premiación. Los finalistas tendrán la oportunidad de exponer sus ideas mejoradas una última vez frente a un jurado e invitados al evento y al final del día se nombrarán ganadores.</p>

<p>Dependiendo de la cantidad de personas que sean por grupo finalista, Impactico y la Mesa de Innovación Social definirán cuantas personas por equipo pueden participar en el Evento de Premiación. El jurado será definido por Impactico y la Mesa de Innovación Social. Habrán miembros del sector público, de la academia, del sector privado y sociedad civil.</p>
</li>

<li>
Premios

<p>Habrán dos categorías de premios: Ideas y Soluciones en Marcha y se seleccionarán 15 finalistas, 12 para la categoría de ideas (3 por problemática) y 3 finalistas para la categoría de Soluciones en Marcha, para que participen en la siguiente etapa.</p>

<p>Los premios serán mentoría, capacitaciones e incubación para llevar a cabo la propuesta, además de apoyo del gobierno para el desarrollo de la idea.</p>

<p>Todos los ganadores recibirán:</p>

<ul>
	<li>
	Proceso de aceleración del Instituto de Desarrollo Empresarial y Acción Social (IDEAS).
	</li>
	<li>
	Mentoría de Global Shapers San José.
	</li>
	<li>
	$1000 de crédito para ser utilizados en el espacio de coworking para emprendedores, Impactico.
	</li>
	<li>
	Guía y acompañamiento de gerentes de proyectos de IBM que facilitarán la implementación de las grandes ideas y proyectos.
	</li>
	<li>
	Serán destacados en el curso U.Lab de la Universidad MIT en Estados Unidos, este septiembre.
	</li>
</ul>

<p>El ganador de la categoría Solución en Marcha recibirá consultoría de Ernst&amp;Young.</p>

<p>Además, el ganador de la idea para la Tasa de Obesidad recibirá un proceso de incubación del Central American Healthcare Iniciative (CAHI), el de Accidentes de Tránsito recibirá acompañamiento técnico de Toyota y los ganadores de las soluciones para el Acceso a la Educación Superior y Manejo de Residuos recibirán consultorías de Ernst&amp;Young.</p>

<p>No habrán desembolsos económicos para el desarrollo de la idea o solución.</p>
</li>

<li>
Condiciones generales. Elegibilidad

<p>Con respecto a las aplicaciones en la etapa inicial, deben ser ideas originales y las aplicaciones deben estar en español. Pueden ser ideas o soluciones que ya están en marcha y deben atacar alguna de las cuatro problemáticas establecidas en Reto PAIS, que salen del Índice de Progreso Social Cantonal.</p>

<p>La sociedad civil de Costa Rica puede aplicar, desde cualquier parte del país y se permiten múltiples aplicaciones por persona. En caso de que alguien aplique en las dos categorías, solamente podrá ganar en una. Se aceptan aplicaciones individuales y grupales también. En este caso, la aplicación llevará el nombre del representante del grupo. Los miembros de la Mesa de Innovación Social no pueden participar.</p>

<p>La única forma de aplicar es a través de los formularios en la plataforma y no se aceptarán aplicaciones después del 24 de julio.</p>

<p>La participación de los finalistas en el fin de semana de talleres y evento final de premiación es obligatoria. En caso de no asistir, serán eliminados de la competencia.</p>

<p>En caso de que alguno de los participantes viva fuera del Gran Área Metropolitana, se les dará transporte y hospedaje para el fin de semana de talleres, y el transporte para el Evento de Premiación.</p>

<p>Pueden aplicar condiciones aceptables por ley y/o dispuestas en la legislación vigente de la República de Costa Rica.</p>
</li>

<li>
Criterios para evaluar aplicaciones

<p>Se evaluarán a través de todo el proceso y durante las distintas fases los siguientes criterios técnicos:</p>

<p>Grado de innovación de la idea: ¿El modelo de negocios, producto o idea es innovadora? ¿Cuál es su ventaja competitiva? ¿Existe algo similar en el mercado?</p>

<p>En qué medida solventa una problemática social: ¿Está claro quiénes y cómo se verán beneficiados por la idea o propuesta? ¿En qué grado ataca directamente la problemática a la cual va dirigida?</p>

<p>Sostenibilidad y escalabilidad: ¿Está claro cómo la solución generaría ingresos para ser sostenible en el tiempo? ¿La solución es escalable? ¿Qué tan convincentes son sus proyecciones?</p>

<p>Presupuesto realístico primer año: ¿La persona o el equipo tiene claro los recursos financieros necesarios para poner en marcha su idea o solución?</p>

<p>Equipo: ¿La persona o el equipo tiene experiencia en el área asociada a la propuesta y tienen habilidades comprobadas para liderar y ejecutar? ¿Han recibido algún tipo de reconocimiento?</p>

<p>Identificación de necesidades: ¿Han identificado debilidades o necesidades? ¿Puede Reto PÁIS a través de su proceso y premios ayudar a solventar estas debilidades o necesidades?</p>

<p>Uso propuesto de recursos financieros: ¿La persona o el equipo está activamente buscando capital para poner en marcha su idea o solución? ¿Está claro cómo utilizarían estos recursos?</p>

<p>Plan para la evaluación de impacto: ¿La propuesta cuenta con un plan viable para medir el éxito respecto a sus objetivos de impacto relacionados a la problemática en específico? ¿La propuesta explica qué será medido, cuándo será medido y cómo será medido?</p>

<p>La decisión final será tomada por el jurado determinado previamente, que pertenecen al sector público, privado, academia y sociedad civil.</p>
</li>

<li>
Propiedad, uso de la información suministrada

<p>El dueño de la idea o solución en marcha y su desarrollo será siempre el participante, pero la competencia tiene derecho a exponer la información en su página web y comunicarla a través de otros medios de comunicación.</p>

<p>Reto PAIS es una alianza público privada, de manera que la idea o proyecto ganador contará con el compromiso del gobierno de apoyar el desarrollo y la implementación de la propuesta, pero el responsable será siempre el participante.</p>

</li>

<li>
Información personal
<p>La información personal suministrada por los participantes será utilizada para fines de la competencia y solamente los participantes y los organizadores tendrán acceso a ella.</p>

<p>Los organizadores podrán hacer uso de fotografías de las actividades y logos de los concursantes para promoción y documentación de la competencia.</p>
</li>

<li>
Aceptación del Reglamento
<p>Los concursantes, por el solo hecho de la participación se darán por enterados del presente Reglamento, aceptando adherirse a éste; asimismo exoneran a Impactico de toda responsabilidad e indemnización por el uso de su imagen.</p>
</li>

</ol>',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '16984945-94be-4067-a6e4-765eec452247';
    $display->content['new-16984945-94be-4067-a6e4-765eec452247'] = $pane;
    $display->panels['middle'][0] = 'new-16984945-94be-4067-a6e4-765eec452247';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['reglamento'] = $page;

  return $pages;

}
