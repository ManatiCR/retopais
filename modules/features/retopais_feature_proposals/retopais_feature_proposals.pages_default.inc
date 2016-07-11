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

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_34cdff32-dfda-4a88-904e-7cf39d85f30c';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
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
  $display->title = '%node:title';
  $display->uuid = '31d742f9-4cd6-4293-9ac2-757779d7db83';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6f4bd32c-11ae-442b-ad57-fb3e4ab340b1';
    $pane->panel = 'middle';
    $pane->type = 'flag_link';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'flag_name' => 'invalidar_propuesta',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Preaprobada:',
      'override_title_heading' => 'h4',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6f4bd32c-11ae-442b-ad57-fb3e4ab340b1';
    $display->content['new-6f4bd32c-11ae-442b-ad57-fb3e4ab340b1'] = $pane;
    $display->panels['middle'][0] = 'new-6f4bd32c-11ae-442b-ad57-fb3e4ab340b1';
    $pane = new stdClass();
    $pane->pid = 'new-3ffc4a7d-72ff-46bd-be27-11e31548d8f6';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '¿Qué deseás proponer?',
      'title' => '',
      'body' => '<h3>¿Qué deseás proponer?</h3>
',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '3ffc4a7d-72ff-46bd-be27-11e31548d8f6';
    $display->content['new-3ffc4a7d-72ff-46bd-be27-11e31548d8f6'] = $pane;
    $display->panels['middle'][1] = 'new-3ffc4a7d-72ff-46bd-be27-11e31548d8f6';
    $pane = new stdClass();
    $pane->pid = 'new-3eebdd19-740d-461b-a2c0-f13fb5edf242';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_problem';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'taxonomy_term_reference_plain',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Problemática:',
      'override_title_heading' => 'h4',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '3eebdd19-740d-461b-a2c0-f13fb5edf242';
    $display->content['new-3eebdd19-740d-461b-a2c0-f13fb5edf242'] = $pane;
    $display->panels['middle'][2] = 'new-3eebdd19-740d-461b-a2c0-f13fb5edf242';
    $pane = new stdClass();
    $pane->pid = 'new-2328fbe8-0dc0-4cfc-93d4-6921f5d9ded9';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_solution_type';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'list_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Solución: ',
      'override_title_heading' => 'h4',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '2328fbe8-0dc0-4cfc-93d4-6921f5d9ded9';
    $display->content['new-2328fbe8-0dc0-4cfc-93d4-6921f5d9ded9'] = $pane;
    $display->panels['middle'][3] = 'new-2328fbe8-0dc0-4cfc-93d4-6921f5d9ded9';
    $pane = new stdClass();
    $pane->pid = 'new-73431e2f-ee29-4d00-93b4-2140fd38c4d1';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_organization_way';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'list_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Tipo de solución: ',
      'override_title_heading' => 'h4',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '73431e2f-ee29-4d00-93b4-2140fd38c4d1';
    $display->content['new-73431e2f-ee29-4d00-93b4-2140fd38c4d1'] = $pane;
    $display->panels['middle'][4] = 'new-73431e2f-ee29-4d00-93b4-2140fd38c4d1';
    $pane = new stdClass();
    $pane->pid = 'new-2fd21b13-7cf4-4f55-b1ab-07ab0c4a9366';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Contanos de tu idea',
      'title' => '',
      'body' => '<h3>Contanos de tu idea</h3>
',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '2fd21b13-7cf4-4f55-b1ab-07ab0c4a9366';
    $display->content['new-2fd21b13-7cf4-4f55-b1ab-07ab0c4a9366'] = $pane;
    $display->panels['middle'][5] = 'new-2fd21b13-7cf4-4f55-b1ab-07ab0c4a9366';
    $pane = new stdClass();
    $pane->pid = 'new-e9561664-8df2-4b80-9437-a5b724acd1b9';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_plain',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'La idea trata de: ',
      'override_title_heading' => 'h4',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'e9561664-8df2-4b80-9437-a5b724acd1b9';
    $display->content['new-e9561664-8df2-4b80-9437-a5b724acd1b9'] = $pane;
    $display->panels['middle'][6] = 'new-e9561664-8df2-4b80-9437-a5b724acd1b9';
    $pane = new stdClass();
    $pane->pid = 'new-95d1d25f-3edc-4acd-ae71-bd95cd1ad348';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_innovative_idea';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_plain',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Idea innovadora:',
      'override_title_heading' => 'h4',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '95d1d25f-3edc-4acd-ae71-bd95cd1ad348';
    $display->content['new-95d1d25f-3edc-4acd-ae71-bd95cd1ad348'] = $pane;
    $display->panels['middle'][7] = 'new-95d1d25f-3edc-4acd-ae71-bd95cd1ad348';
    $pane = new stdClass();
    $pane->pid = 'new-9bac8b58-c8d1-4f0a-a122-8ace4889eda1';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_idea_susteinability';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_plain',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Sostenibilidad de la idea: ',
      'override_title_heading' => 'h4',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '9bac8b58-c8d1-4f0a-a122-8ace4889eda1';
    $display->content['new-9bac8b58-c8d1-4f0a-a122-8ace4889eda1'] = $pane;
    $display->panels['middle'][8] = 'new-9bac8b58-c8d1-4f0a-a122-8ace4889eda1';
    $pane = new stdClass();
    $pane->pid = 'new-6a91f84d-9226-4f1f-99e6-6f3bc929809c';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_canton';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'taxonomy_term_reference_plain',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Cantones:',
      'override_title_heading' => 'h4',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = '6a91f84d-9226-4f1f-99e6-6f3bc929809c';
    $display->content['new-6a91f84d-9226-4f1f-99e6-6f3bc929809c'] = $pane;
    $display->panels['middle'][9] = 'new-6a91f84d-9226-4f1f-99e6-6f3bc929809c';
    $pane = new stdClass();
    $pane->pid = 'new-8cfafc88-16a7-489e-becd-80a6a1f428a1';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_project_audience';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_plain',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Público meta: ',
      'override_title_heading' => 'h4',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 10;
    $pane->locks = array();
    $pane->uuid = '8cfafc88-16a7-489e-becd-80a6a1f428a1';
    $display->content['new-8cfafc88-16a7-489e-becd-80a6a1f428a1'] = $pane;
    $display->panels['middle'][10] = 'new-8cfafc88-16a7-489e-becd-80a6a1f428a1';
    $pane = new stdClass();
    $pane->pid = 'new-ad76e2d8-0ea6-4502-9004-e40fd483649b';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:proposal:field_solution_type',
          'settings' => array(
            'field_solution_type' => array(
              'und' => array(
                0 => array(
                  'value' => 'running_solution',
                ),
              ),
            ),
            'field_solution_type_value' => array(
              0 => 'running_solution',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Contanos más sobre el proyecto',
      'title' => '',
      'body' => '<h3>Contanos más sobre el proyecto</h3>
',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 11;
    $pane->locks = array();
    $pane->uuid = 'ad76e2d8-0ea6-4502-9004-e40fd483649b';
    $display->content['new-ad76e2d8-0ea6-4502-9004-e40fd483649b'] = $pane;
    $display->panels['middle'][11] = 'new-ad76e2d8-0ea6-4502-9004-e40fd483649b';
    $pane = new stdClass();
    $pane->pid = 'new-9fc4a8d4-ff9b-4b57-93db-fde905ff3434';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_project_origin';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_plain',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Origen del proyecto: ',
      'override_title_heading' => 'h4',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 12;
    $pane->locks = array();
    $pane->uuid = '9fc4a8d4-ff9b-4b57-93db-fde905ff3434';
    $display->content['new-9fc4a8d4-ff9b-4b57-93db-fde905ff3434'] = $pane;
    $display->panels['middle'][12] = 'new-9fc4a8d4-ff9b-4b57-93db-fde905ff3434';
    $pane = new stdClass();
    $pane->pid = 'new-469e92ec-658e-47d4-819d-40a30005d6b3';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_project_achievements';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_plain',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Logros: ',
      'override_title_heading' => 'h4',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 13;
    $pane->locks = array();
    $pane->uuid = '469e92ec-658e-47d4-819d-40a30005d6b3';
    $display->content['new-469e92ec-658e-47d4-819d-40a30005d6b3'] = $pane;
    $display->panels['middle'][13] = 'new-469e92ec-658e-47d4-819d-40a30005d6b3';
    $pane = new stdClass();
    $pane->pid = 'new-486e09d1-13aa-4bba-a3e0-eb17e04afdfa';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_project_running';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'list_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '¿Está en ejecución?',
      'override_title_heading' => 'h4',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 14;
    $pane->locks = array();
    $pane->uuid = '486e09d1-13aa-4bba-a3e0-eb17e04afdfa';
    $display->content['new-486e09d1-13aa-4bba-a3e0-eb17e04afdfa'] = $pane;
    $display->panels['middle'][14] = 'new-486e09d1-13aa-4bba-a3e0-eb17e04afdfa';
    $pane = new stdClass();
    $pane->pid = 'new-2e0e40f6-750c-4653-83e1-a445f9efbf9d';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_project_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'link_url',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Links: ',
      'override_title_heading' => 'h4',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 15;
    $pane->locks = array();
    $pane->uuid = '2e0e40f6-750c-4653-83e1-a445f9efbf9d';
    $display->content['new-2e0e40f6-750c-4653-83e1-a445f9efbf9d'] = $pane;
    $display->panels['middle'][15] = 'new-2e0e40f6-750c-4653-83e1-a445f9efbf9d';
    $pane = new stdClass();
    $pane->pid = 'new-e1664350-bd9b-4926-950b-5a41aadb1f96';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:proposal:field_organization_way',
          'settings' => array(
            'field_organization_way' => array(
              'und' => array(
                0 => array(
                  'value' => 'organization',
                ),
              ),
            ),
            'field_organization_way_value' => array(
              0 => 'organization',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Contanos más sobre tu organización',
      'title' => '',
      'body' => '<h3>Contanos más sobre tu organización</h3>
',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 16;
    $pane->locks = array();
    $pane->uuid = 'e1664350-bd9b-4926-950b-5a41aadb1f96';
    $display->content['new-e1664350-bd9b-4926-950b-5a41aadb1f96'] = $pane;
    $display->panels['middle'][16] = 'new-e1664350-bd9b-4926-950b-5a41aadb1f96';
    $pane = new stdClass();
    $pane->pid = 'new-17cc0b60-7d52-46f0-8e1b-201785e60fe4';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_organization_name';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(),
    );
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_plain',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Nombre de la organización: ',
      'override_title_heading' => 'h4',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 17;
    $pane->locks = array();
    $pane->uuid = '17cc0b60-7d52-46f0-8e1b-201785e60fe4';
    $display->content['new-17cc0b60-7d52-46f0-8e1b-201785e60fe4'] = $pane;
    $display->panels['middle'][17] = 'new-17cc0b60-7d52-46f0-8e1b-201785e60fe4';
    $pane = new stdClass();
    $pane->pid = 'new-2528aa8d-581a-44bd-8d0c-e9e33d9ad464';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_org_rep_name';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_plain',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Representante legal de la organización: ',
      'override_title_heading' => 'h4',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 18;
    $pane->locks = array();
    $pane->uuid = '2528aa8d-581a-44bd-8d0c-e9e33d9ad464';
    $display->content['new-2528aa8d-581a-44bd-8d0c-e9e33d9ad464'] = $pane;
    $display->panels['middle'][18] = 'new-2528aa8d-581a-44bd-8d0c-e9e33d9ad464';
    $pane = new stdClass();
    $pane->pid = 'new-f3f72b2f-576c-426c-89e6-33d4b8844123';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_org_rep_phone';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_plain',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Teléfono del rep. legal: ',
      'override_title_heading' => 'h4',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 19;
    $pane->locks = array();
    $pane->uuid = 'f3f72b2f-576c-426c-89e6-33d4b8844123';
    $display->content['new-f3f72b2f-576c-426c-89e6-33d4b8844123'] = $pane;
    $display->panels['middle'][19] = 'new-f3f72b2f-576c-426c-89e6-33d4b8844123';
    $pane = new stdClass();
    $pane->pid = 'new-4b309b11-8c69-464e-b196-9773e495ef5f';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_org_rep_email';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'email_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'E-mail del rep. legal:',
      'override_title_heading' => 'h4',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 20;
    $pane->locks = array();
    $pane->uuid = '4b309b11-8c69-464e-b196-9773e495ef5f';
    $display->content['new-4b309b11-8c69-464e-b196-9773e495ef5f'] = $pane;
    $display->panels['middle'][20] = 'new-4b309b11-8c69-464e-b196-9773e495ef5f';
    $pane = new stdClass();
    $pane->pid = 'new-72ee6bc5-88f8-4b95-b5b6-d552e6dcd6fa';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_proj_resp_name';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_plain',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Responsable del proyecto: ',
      'override_title_heading' => 'h4',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 21;
    $pane->locks = array();
    $pane->uuid = '72ee6bc5-88f8-4b95-b5b6-d552e6dcd6fa';
    $display->content['new-72ee6bc5-88f8-4b95-b5b6-d552e6dcd6fa'] = $pane;
    $display->panels['middle'][21] = 'new-72ee6bc5-88f8-4b95-b5b6-d552e6dcd6fa';
    $pane = new stdClass();
    $pane->pid = 'new-ed9302e1-586e-412e-9a5c-f941645dae16';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_proj_resp_phone';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_plain',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Teléfono del responsable del proyecto: ',
      'override_title_heading' => 'h4',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 22;
    $pane->locks = array();
    $pane->uuid = 'ed9302e1-586e-412e-9a5c-f941645dae16';
    $display->content['new-ed9302e1-586e-412e-9a5c-f941645dae16'] = $pane;
    $display->panels['middle'][22] = 'new-ed9302e1-586e-412e-9a5c-f941645dae16';
    $pane = new stdClass();
    $pane->pid = 'new-e2a337f0-5f89-412a-930e-626efe090ad8';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_proj_resp_email';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'email_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'E-mail del responsable del proyecto: ',
      'override_title_heading' => 'h4',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 23;
    $pane->locks = array();
    $pane->uuid = 'e2a337f0-5f89-412a-930e-626efe090ad8';
    $display->content['new-e2a337f0-5f89-412a-930e-626efe090ad8'] = $pane;
    $display->panels['middle'][23] = 'new-e2a337f0-5f89-412a-930e-626efe090ad8';
    $pane = new stdClass();
    $pane->pid = 'new-3236f762-21c5-4ff2-8970-d8e62992386d';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_organization_address';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_plain',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Dirección dentro de la organización:',
      'override_title_heading' => 'h4',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 24;
    $pane->locks = array();
    $pane->uuid = '3236f762-21c5-4ff2-8970-d8e62992386d';
    $display->content['new-3236f762-21c5-4ff2-8970-d8e62992386d'] = $pane;
    $display->panels['middle'][24] = 'new-3236f762-21c5-4ff2-8970-d8e62992386d';
    $pane = new stdClass();
    $pane->pid = 'new-3e817091-0df2-4ce9-bedf-160a0da72bda';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Contanos más sobre por qué deberías ganar este reto',
      'title' => '',
      'body' => '<h3>Contanos más sobre por qué deberías ganar este reto</h3',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 25;
    $pane->locks = array();
    $pane->uuid = '3e817091-0df2-4ce9-bedf-160a0da72bda';
    $display->content['new-3e817091-0df2-4ce9-bedf-160a0da72bda'] = $pane;
    $display->panels['middle'][25] = 'new-3e817091-0df2-4ce9-bedf-160a0da72bda';
    $pane = new stdClass();
    $pane->pid = 'new-aa7cd337-968e-4bf2-b7be-1aebc4b991bb';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_idea_motivation';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_plain',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Motivación para participar: ',
      'override_title_heading' => 'h4',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 26;
    $pane->locks = array();
    $pane->uuid = 'aa7cd337-968e-4bf2-b7be-1aebc4b991bb';
    $display->content['new-aa7cd337-968e-4bf2-b7be-1aebc4b991bb'] = $pane;
    $display->panels['middle'][26] = 'new-aa7cd337-968e-4bf2-b7be-1aebc4b991bb';
    $pane = new stdClass();
    $pane->pid = 'new-0439017c-ab0d-40f5-a37e-94b4d1a20f08';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_idea_features';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_plain',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Destrezas y características:',
      'override_title_heading' => 'h4',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 27;
    $pane->locks = array();
    $pane->uuid = '0439017c-ab0d-40f5-a37e-94b4d1a20f08';
    $display->content['new-0439017c-ab0d-40f5-a37e-94b4d1a20f08'] = $pane;
    $display->panels['middle'][27] = 'new-0439017c-ab0d-40f5-a37e-94b4d1a20f08';
    $pane = new stdClass();
    $pane->pid = 'new-fe56d141-7d9d-48c5-abd9-98b05bcd0513';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<h3>Datos del representante</h3>',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 28;
    $pane->locks = array();
    $pane->uuid = 'fe56d141-7d9d-48c5-abd9-98b05bcd0513';
    $display->content['new-fe56d141-7d9d-48c5-abd9-98b05bcd0513'] = $pane;
    $display->panels['middle'][28] = 'new-fe56d141-7d9d-48c5-abd9-98b05bcd0513';
    $pane = new stdClass();
    $pane->pid = 'new-52818190-31e8-4350-a379-85f1ee5937bd';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_representative_full_name';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_plain',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Nombre del representante: ',
      'override_title_heading' => 'h4',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 29;
    $pane->locks = array();
    $pane->uuid = '52818190-31e8-4350-a379-85f1ee5937bd';
    $display->content['new-52818190-31e8-4350-a379-85f1ee5937bd'] = $pane;
    $display->panels['middle'][29] = 'new-52818190-31e8-4350-a379-85f1ee5937bd';
    $pane = new stdClass();
    $pane->pid = 'new-44fc0feb-63d4-4cd8-825b-2910c048e54f';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_representative_id_number';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_plain',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Número de cédula: ',
      'override_title_heading' => 'h4',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 30;
    $pane->locks = array();
    $pane->uuid = '44fc0feb-63d4-4cd8-825b-2910c048e54f';
    $display->content['new-44fc0feb-63d4-4cd8-825b-2910c048e54f'] = $pane;
    $display->panels['middle'][30] = 'new-44fc0feb-63d4-4cd8-825b-2910c048e54f';
    $pane = new stdClass();
    $pane->pid = 'new-d6064b19-4c1b-4d81-b1fc-d57faafddaa1';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_representative_email';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'email_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'E-mail: ',
      'override_title_heading' => 'h4',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 31;
    $pane->locks = array();
    $pane->uuid = 'd6064b19-4c1b-4d81-b1fc-d57faafddaa1';
    $display->content['new-d6064b19-4c1b-4d81-b1fc-d57faafddaa1'] = $pane;
    $display->panels['middle'][31] = 'new-d6064b19-4c1b-4d81-b1fc-d57faafddaa1';
    $pane = new stdClass();
    $pane->pid = 'new-8334a1c3-3294-4b70-af5f-925fb9290139';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_representative_phone';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_plain',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Teléfono: ',
      'override_title_heading' => 'h4',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 32;
    $pane->locks = array();
    $pane->uuid = '8334a1c3-3294-4b70-af5f-925fb9290139';
    $display->content['new-8334a1c3-3294-4b70-af5f-925fb9290139'] = $pane;
    $display->panels['middle'][32] = 'new-8334a1c3-3294-4b70-af5f-925fb9290139';
    $pane = new stdClass();
    $pane->pid = 'new-c6657b04-d8e6-4596-9a19-a376c0bfdf2d';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_representative_address';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_plain',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Dirección: ',
      'override_title_heading' => 'h4',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 33;
    $pane->locks = array();
    $pane->uuid = 'c6657b04-d8e6-4596-9a19-a376c0bfdf2d';
    $display->content['new-c6657b04-d8e6-4596-9a19-a376c0bfdf2d'] = $pane;
    $display->panels['middle'][33] = 'new-c6657b04-d8e6-4596-9a19-a376c0bfdf2d';
    $pane = new stdClass();
    $pane->pid = 'new-baad5078-bcb2-4744-9b1b-9c0a99791267';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_heard';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_plain',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Escuchó de Reto País por: ',
      'override_title_heading' => 'h4',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 34;
    $pane->locks = array();
    $pane->uuid = 'baad5078-bcb2-4744-9b1b-9c0a99791267';
    $display->content['new-baad5078-bcb2-4744-9b1b-9c0a99791267'] = $pane;
    $display->panels['middle'][34] = 'new-baad5078-bcb2-4744-9b1b-9c0a99791267';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_34cdff32-dfda-4a88-904e-7cf39d85f30c'] = $handler;

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
