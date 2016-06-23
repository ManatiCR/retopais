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
  $display->uuid = 'ccfe1a5b-12e2-444d-b1aa-23cbec4e6cdf';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1152c588-6304-49db-968e-46283154ab12';
    $pane->panel = 'middle';
    $pane->type = 'homepage_que_es_reto_pais';
    $pane->subtype = 'homepage_que_es_reto_pais';
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
    $pane->uuid = '1152c588-6304-49db-968e-46283154ab12';
    $display->content['new-1152c588-6304-49db-968e-46283154ab12'] = $pane;
    $display->panels['middle'][0] = 'new-1152c588-6304-49db-968e-46283154ab12';
    $pane = new stdClass();
    $pane->pid = 'new-5d5a23a5-5e89-4a40-a707-fd13db736bfb';
    $pane->panel = 'middle';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '5d5a23a5-5e89-4a40-a707-fd13db736bfb';
    $display->content['new-5d5a23a5-5e89-4a40-a707-fd13db736bfb'] = $pane;
    $display->panels['middle'][1] = 'new-5d5a23a5-5e89-4a40-a707-fd13db736bfb';
    $pane = new stdClass();
    $pane->pid = 'new-2242428e-6cb3-4d11-93a1-d89a9c34d54c';
    $pane->panel = 'middle';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '2242428e-6cb3-4d11-93a1-d89a9c34d54c';
    $display->content['new-2242428e-6cb3-4d11-93a1-d89a9c34d54c'] = $pane;
    $display->panels['middle'][2] = 'new-2242428e-6cb3-4d11-93a1-d89a9c34d54c';
    $pane = new stdClass();
    $pane->pid = 'new-2e6251ab-f281-4d4d-b621-95803a993f5c';
    $pane->panel = 'middle';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '2e6251ab-f281-4d4d-b621-95803a993f5c';
    $display->content['new-2e6251ab-f281-4d4d-b621-95803a993f5c'] = $pane;
    $display->panels['middle'][3] = 'new-2e6251ab-f281-4d4d-b621-95803a993f5c';
    $pane = new stdClass();
    $pane->pid = 'new-a765bff4-3c41-4787-bb36-faeafe49cd35';
    $pane->panel = 'middle';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'a765bff4-3c41-4787-bb36-faeafe49cd35';
    $display->content['new-a765bff4-3c41-4787-bb36-faeafe49cd35'] = $pane;
    $display->panels['middle'][4] = 'new-a765bff4-3c41-4787-bb36-faeafe49cd35';
    $pane = new stdClass();
    $pane->pid = 'new-4e2305b5-cc4a-4934-80b6-487cd302f850';
    $pane->panel = 'middle';
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '4e2305b5-cc4a-4934-80b6-487cd302f850';
    $display->content['new-4e2305b5-cc4a-4934-80b6-487cd302f850'] = $pane;
    $display->panels['middle'][5] = 'new-4e2305b5-cc4a-4934-80b6-487cd302f850';
    $pane = new stdClass();
    $pane->pid = 'new-5f242e59-d4af-4d5c-b312-b9d77381b90a';
    $pane->panel = 'middle';
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '5f242e59-d4af-4d5c-b312-b9d77381b90a';
    $display->content['new-5f242e59-d4af-4d5c-b312-b9d77381b90a'] = $pane;
    $display->panels['middle'][6] = 'new-5f242e59-d4af-4d5c-b312-b9d77381b90a';
    $pane = new stdClass();
    $pane->pid = 'new-833c5ca5-b186-4e0c-bc77-b8b0aa4dd929';
    $pane->panel = 'middle';
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
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '833c5ca5-b186-4e0c-bc77-b8b0aa4dd929';
    $display->content['new-833c5ca5-b186-4e0c-bc77-b8b0aa4dd929'] = $pane;
    $display->panels['middle'][7] = 'new-833c5ca5-b186-4e0c-bc77-b8b0aa4dd929';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1152c588-6304-49db-968e-46283154ab12';
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
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'first' => NULL,
      'second' => NULL,
      'third' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Problemáticas';
  $display->uuid = 'eab00d15-e7d9-44fa-b6cb-ba5c926f3f70';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6874d86a-c440-4b79-9ed0-58696adaaab2';
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
    $pane->uuid = '6874d86a-c440-4b79-9ed0-58696adaaab2';
    $display->content['new-6874d86a-c440-4b79-9ed0-58696adaaab2'] = $pane;
    $display->panels['middle'][0] = 'new-6874d86a-c440-4b79-9ed0-58696adaaab2';
    $pane = new stdClass();
    $pane->pid = 'new-870e153d-8d7b-421a-aee1-659f8d2e17bb';
    $pane->panel = 'middle';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '870e153d-8d7b-421a-aee1-659f8d2e17bb';
    $display->content['new-870e153d-8d7b-421a-aee1-659f8d2e17bb'] = $pane;
    $display->panels['middle'][1] = 'new-870e153d-8d7b-421a-aee1-659f8d2e17bb';
    $pane = new stdClass();
    $pane->pid = 'new-8306962c-3be9-464e-8307-524a2b12991f';
    $pane->panel = 'middle';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '8306962c-3be9-464e-8307-524a2b12991f';
    $display->content['new-8306962c-3be9-464e-8307-524a2b12991f'] = $pane;
    $display->panels['middle'][2] = 'new-8306962c-3be9-464e-8307-524a2b12991f';
    $pane = new stdClass();
    $pane->pid = 'new-f5780150-733f-46ba-9969-7b73a5707533';
    $pane->panel = 'middle';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'f5780150-733f-46ba-9969-7b73a5707533';
    $display->content['new-f5780150-733f-46ba-9969-7b73a5707533'] = $pane;
    $display->panels['middle'][3] = 'new-f5780150-733f-46ba-9969-7b73a5707533';
    $pane = new stdClass();
    $pane->pid = 'new-b26897fd-e848-4b71-8e20-9bd89d531295';
    $pane->panel = 'middle';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'b26897fd-e848-4b71-8e20-9bd89d531295';
    $display->content['new-b26897fd-e848-4b71-8e20-9bd89d531295'] = $pane;
    $display->panels['middle'][4] = 'new-b26897fd-e848-4b71-8e20-9bd89d531295';
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '4dfcf3a0-bf7e-4fa4-87ac-b358c8f8b7fa';
    $display->content['new-4dfcf3a0-bf7e-4fa4-87ac-b358c8f8b7fa'] = $pane;
    $display->panels['left'][6] = 'new-4dfcf3a0-bf7e-4fa4-87ac-b358c8f8b7fa';
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
    $pane->pid = 'new-c366fbfb-9af2-4330-8371-da7dd9ea610a';
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
    $pane->uuid = 'c366fbfb-9af2-4330-8371-da7dd9ea610a';
    $display->content['new-c366fbfb-9af2-4330-8371-da7dd9ea610a'] = $pane;
    $display->panels['middle'][0] = 'new-c366fbfb-9af2-4330-8371-da7dd9ea610a';
    $pane = new stdClass();
    $pane->pid = 'new-16984945-94be-4067-a6e4-765eec452247';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Just some placeholder content',
      'body' => '<p>Look around, look at what we have. Beauty is everywhere, you only have to look to see it. It\'s beautiful - and we haven\'t even done anything to it yet. Here we\'re limited by the time we have. Working it up and down, back and forth. We spend so much of our life looking - but never seeing.</p>

<p>If you hypnotize it, it will go away. Trees get lonely too, so we\'ll give him a little friend. This is gonna be a happy little seascape. Each highlight must have it\'s own private shadow.</p>

<p>No pressure. Just relax and watch it happen. Let\'s make a nice big leafy tree. Work that paint. I think there\'s an artist hidden in the bottom of every single one of us.</p>

<p>Every time you practice, you learn more. I really believe that if you practice enough you could paint the \'Mona Lisa\' with a two-inch brush. Maybe there\'s a happy little Evergreen that lives here.</p>

<p>Isn\'t that fantastic? You don\'t have to be crazy to do this but it does help. Just take out whatever you don\'t want. It\'ll change your entire perspective.</p>

<p>God gave you this gift of imagination. Use it. Remember how free clouds are. They just lay around in the sky all day long. See there, told you that would be easy. This is probably the greatest thing to happen in my life - to be able to share this with you.</p>

<p>Have fun with it. Little trees and bushes grow however makes them happy. That\'s why I paint - because I can create the kind of world I want - and I can make this world as happy as I want it. It\'s amazing what you can do with a little love in your heart.</p>
',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '16984945-94be-4067-a6e4-765eec452247';
    $display->content['new-16984945-94be-4067-a6e4-765eec452247'] = $pane;
    $display->panels['middle'][1] = 'new-16984945-94be-4067-a6e4-765eec452247';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-c366fbfb-9af2-4330-8371-da7dd9ea610a';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['reglamento'] = $page;

  return $pages;

}
