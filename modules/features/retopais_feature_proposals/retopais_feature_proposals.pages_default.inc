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
    $pane->pid = 'new-a4a66baa-682f-4c60-b3c4-33c0e03e4e64';
    $pane->panel = 'middle';
    $pane->type = 'proposals_form_steps';
    $pane->subtype = 'proposals_form_steps';
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
    $pane->uuid = 'a4a66baa-682f-4c60-b3c4-33c0e03e4e64';
    $display->content['new-a4a66baa-682f-4c60-b3c4-33c0e03e4e64'] = $pane;
    $display->panels['middle'][0] = 'new-a4a66baa-682f-4c60-b3c4-33c0e03e4e64';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '2642abf3-3eaf-42d5-aee9-2a5a73630206';
    $display->content['new-2642abf3-3eaf-42d5-aee9-2a5a73630206'] = $pane;
    $display->panels['middle'][1] = 'new-2642abf3-3eaf-42d5-aee9-2a5a73630206';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'b84f2694-24bf-4a3d-855e-de72c086eddc';
    $display->content['new-b84f2694-24bf-4a3d-855e-de72c086eddc'] = $pane;
    $display->panels['middle'][2] = 'new-b84f2694-24bf-4a3d-855e-de72c086eddc';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_edit__panel_context_3ff4eec3-6d06-4090-bce8-84e3b8cf8d43'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function retopais_feature_proposals_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'propuesta_enviada';
  $page->task = 'page';
  $page->admin_title = 'Propuesta Enviada';
  $page->admin_description = '';
  $page->path = 'propuesta-enviada';
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
  $handler->name = 'page_propuesta_enviada__panel';
  $handler->task = 'page';
  $handler->subtask = 'propuesta_enviada';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Propuesta Enviada',
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
  $display->title = '¡Felicidades, su propuesta ha sido enviada!';
  $display->uuid = 'ec7c90bc-e929-4166-ab79-fc4856b900de';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-76f454e0-8a83-4428-911f-e7d59b0c17e2';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Mensaje Final',
      'title' => '',
      'body' => '<p>Los finalistas serán anunciados por nuestro sitio web y serán contactados por correo o por teléfono.</p>

<p>Fecha de anuncio: El día 28 de julio</p>
',
      'format' => 'full_html',
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
    $pane->uuid = '76f454e0-8a83-4428-911f-e7d59b0c17e2';
    $display->content['new-76f454e0-8a83-4428-911f-e7d59b0c17e2'] = $pane;
    $display->panels['middle'][0] = 'new-76f454e0-8a83-4428-911f-e7d59b0c17e2';
    $pane = new stdClass();
    $pane->pid = 'new-b0b98534-2b41-4d77-94bd-a349dad85746';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Nota al pie',
      'title' => '',
      'body' => '<p>* Los finalistas recibirán un taller de capacitación el 6 y 7 de Agosto.</p>
',
      'format' => 'full_html',
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
    $pane->uuid = 'b0b98534-2b41-4d77-94bd-a349dad85746';
    $display->content['new-b0b98534-2b41-4d77-94bd-a349dad85746'] = $pane;
    $display->panels['middle'][1] = 'new-b0b98534-2b41-4d77-94bd-a349dad85746';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-76f454e0-8a83-4428-911f-e7d59b0c17e2';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['propuesta_enviada'] = $page;

  return $pages;

}
