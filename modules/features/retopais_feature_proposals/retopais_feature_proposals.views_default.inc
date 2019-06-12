<?php

/**
 * @file
 * retopais_feature_proposals.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function retopais_feature_proposals_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'problems';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Problems';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'más';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'elementos por página';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '— Todo(s) —';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Desplazamiento';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primero';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_featured_image_target_id']['id'] = 'field_featured_image_target_id';
  $handler->display->display_options['relationships']['field_featured_image_target_id']['table'] = 'field_data_field_featured_image';
  $handler->display->display_options['relationships']['field_featured_image_target_id']['field'] = 'field_featured_image_target_id';
  $handler->display->display_options['relationships']['field_featured_image_target_id']['required'] = TRUE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_featured_image_target_id';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['field_api_classes'] = TRUE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'problems' => 'problems',
  );
  /* Criterios de filtrado: Término de taxonomía: Años (field_years) */
  $handler->display->display_options['filters']['field_years_value']['id'] = 'field_years_value';
  $handler->display->display_options['filters']['field_years_value']['table'] = 'field_data_field_years';
  $handler->display->display_options['filters']['field_years_value']['field'] = 'field_years_value';
  $handler->display->display_options['filters']['field_years_value']['value'] = array(
    2019 => '2019',
  );

  /* Display: Problems */
  $handler = $view->new_display('panel_pane', 'Problems', 'panel_pane_1');
  $handler->display->display_options['display_description'] = 'Image and Name';
  $handler->display->display_options['pane_category']['name'] = 'Reto Pais';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Problems with Details */
  $handler = $view->new_display('panel_pane', 'Problems with Details', 'panel_pane_2');
  $handler->display->display_options['display_description'] = 'Image, Name and Description';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_featured_image_target_id';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['field_api_classes'] = TRUE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_type'] = 'h3';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'Reto Pais';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Problems with Abstract */
  $handler = $view->new_display('panel_pane', 'Problems with Abstract', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '¿Qué problemáticas puedo solucionar?';
  $handler->display->display_options['display_description'] = 'Image, Name and Abstract';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_featured_image_target_id';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['field_api_classes'] = TRUE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Abstract */
  $handler->display->display_options['fields']['field_abstract']['id'] = 'field_abstract';
  $handler->display->display_options['fields']['field_abstract']['table'] = 'field_data_field_abstract';
  $handler->display->display_options['fields']['field_abstract']['field'] = 'field_abstract';
  $handler->display->display_options['fields']['field_abstract']['label'] = '';
  $handler->display->display_options['fields']['field_abstract']['element_type'] = '0';
  $handler->display->display_options['fields']['field_abstract']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_abstract']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_abstract']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_abstract']['field_api_classes'] = TRUE;
  $handler->display->display_options['pane_category']['name'] = 'Reto Pais';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Problems (titles and classes) */
  $handler = $view->new_display('panel_pane', 'Problems (titles and classes)', 'problems_only_names');
  $handler->display->display_options['display_description'] = 'Only titles and css classes.';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'Reto Pais';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Problem Prizes */
  $handler = $view->new_display('panel_pane', 'Problem Prizes', 'panel_pane_4');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_prize_image_target_id']['id'] = 'field_prize_image_target_id';
  $handler->display->display_options['relationships']['field_prize_image_target_id']['table'] = 'field_data_field_prize_image';
  $handler->display->display_options['relationships']['field_prize_image_target_id']['field'] = 'field_prize_image_target_id';
  $handler->display->display_options['relationships']['field_prize_image_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Prize Text */
  $handler->display->display_options['fields']['field_prize_text']['id'] = 'field_prize_text';
  $handler->display->display_options['fields']['field_prize_text']['table'] = 'field_data_field_prize_text';
  $handler->display->display_options['fields']['field_prize_text']['field'] = 'field_prize_text';
  $handler->display->display_options['fields']['field_prize_text']['label'] = '';
  $handler->display->display_options['fields']['field_prize_text']['element_type'] = '0';
  $handler->display->display_options['fields']['field_prize_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_prize_text']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_prize_text']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_prize_text']['field_api_classes'] = TRUE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image_1']['id'] = 'field_image_1';
  $handler->display->display_options['fields']['field_image_1']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image_1']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image_1']['relationship'] = 'field_prize_image_target_id';
  $handler->display->display_options['fields']['field_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_1']['settings'] = array(
    'image_style' => 'prize_logo',
    'image_link' => '',
  );
  $handler->display->display_options['pane_category']['name'] = 'Reto Pais';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Problems with Abstract - Finalistas */
  $handler = $view->new_display('panel_pane', 'Problems with Abstract - Finalistas', 'panel_pane_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '¿En cuáles problemáticas nos enfocamos?';
  $handler->display->display_options['display_description'] = 'Image, Name and Abstract';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_featured_image_target_id';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['field_api_classes'] = TRUE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Abstract */
  $handler->display->display_options['fields']['field_abstract']['id'] = 'field_abstract';
  $handler->display->display_options['fields']['field_abstract']['table'] = 'field_data_field_abstract';
  $handler->display->display_options['fields']['field_abstract']['field'] = 'field_abstract';
  $handler->display->display_options['fields']['field_abstract']['label'] = '';
  $handler->display->display_options['fields']['field_abstract']['element_type'] = '0';
  $handler->display->display_options['fields']['field_abstract']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_abstract']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_abstract']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_abstract']['field_api_classes'] = TRUE;
  $handler->display->display_options['pane_category']['name'] = 'Reto Pais';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Referencia a entidades */
  $handler = $view->new_display('entityreference', 'Referencia a entidades', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Término de taxonomía: Nombre */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $translatables['problems'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Content entity referenced from field_featured_image'),
    t('Problems'),
    t('Image and Name'),
    t('Reto Pais'),
    t('Problems with Details'),
    t('Image, Name and Description'),
    t('Problems with Abstract'),
    t('¿Qué problemáticas puedo solucionar?'),
    t('Image, Name and Abstract'),
    t('Problems (titles and classes)'),
    t('Only titles and css classes.'),
    t('Problem Prizes'),
    t('Content entity referenced from field_prize_image'),
    t('Problems with Abstract - Finalistas'),
    t('¿En cuáles problemáticas nos enfocamos?'),
    t('Referencia a entidades'),
  );
  $export['problems'] = $view;

  $view = new view();
  $view->name = 'proposal_export';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Proposal Export';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'más';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'elementos por página';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '— Todo(s) —';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Desplazamiento';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primero';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Flags: invalidar_propuesta */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = 'marca';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'invalidar_propuesta';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Nombre de la solución';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Campo: Contenido: ¿Qué problemática deseás solucionar? */
  $handler->display->display_options['fields']['field_problem_to_solve']['id'] = 'field_problem_to_solve';
  $handler->display->display_options['fields']['field_problem_to_solve']['table'] = 'field_data_field_problem_to_solve';
  $handler->display->display_options['fields']['field_problem_to_solve']['field'] = 'field_problem_to_solve';
  $handler->display->display_options['fields']['field_problem_to_solve']['label'] = 'Problemática a resolver';
  $handler->display->display_options['fields']['field_problem_to_solve']['element_type'] = '0';
  $handler->display->display_options['fields']['field_problem_to_solve']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_problem_to_solve']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_problem_to_solve']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_problem_to_solve']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_problem_to_solve']['field_api_classes'] = TRUE;
  /* Field: Content: Contanos de manera resumida de qué se trata tu idea y cómo resolverá la problemática */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  $handler->display->display_options['fields']['body']['field_api_classes'] = TRUE;
  /* Field: Content: Correo electrónico */
  $handler->display->display_options['fields']['field_representative_email']['id'] = 'field_representative_email';
  $handler->display->display_options['fields']['field_representative_email']['table'] = 'field_data_field_representative_email';
  $handler->display->display_options['fields']['field_representative_email']['field'] = 'field_representative_email';
  $handler->display->display_options['fields']['field_representative_email']['label'] = 'Correo electrónico del representante';
  $handler->display->display_options['fields']['field_representative_email']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_representative_email']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_representative_email']['element_type'] = '0';
  $handler->display->display_options['fields']['field_representative_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_representative_email']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_representative_email']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_representative_email']['type'] = 'email_plain';
  $handler->display->display_options['fields']['field_representative_email']['field_api_classes'] = TRUE;
  /* Field: Content: Correo electrónico */
  $handler->display->display_options['fields']['field_proj_resp_email']['id'] = 'field_proj_resp_email';
  $handler->display->display_options['fields']['field_proj_resp_email']['table'] = 'field_data_field_proj_resp_email';
  $handler->display->display_options['fields']['field_proj_resp_email']['field'] = 'field_proj_resp_email';
  $handler->display->display_options['fields']['field_proj_resp_email']['label'] = 'Correo electrónico del responsable del proyecto';
  $handler->display->display_options['fields']['field_proj_resp_email']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_proj_resp_email']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_proj_resp_email']['element_type'] = '0';
  $handler->display->display_options['fields']['field_proj_resp_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_proj_resp_email']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_proj_resp_email']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_proj_resp_email']['type'] = 'email_plain';
  $handler->display->display_options['fields']['field_proj_resp_email']['field_api_classes'] = TRUE;
  /* Field: Content: Correo electrónico */
  $handler->display->display_options['fields']['field_org_rep_email']['id'] = 'field_org_rep_email';
  $handler->display->display_options['fields']['field_org_rep_email']['table'] = 'field_data_field_org_rep_email';
  $handler->display->display_options['fields']['field_org_rep_email']['field'] = 'field_org_rep_email';
  $handler->display->display_options['fields']['field_org_rep_email']['label'] = 'Correo electrónico de la organización del represante';
  $handler->display->display_options['fields']['field_org_rep_email']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_org_rep_email']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_org_rep_email']['element_type'] = '0';
  $handler->display->display_options['fields']['field_org_rep_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_org_rep_email']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_org_rep_email']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_org_rep_email']['type'] = 'email_plain';
  $handler->display->display_options['fields']['field_org_rep_email']['field_api_classes'] = TRUE;
  /* Field: Content: Explicá cómo tu idea es innovadora */
  $handler->display->display_options['fields']['field_innovative_idea']['id'] = 'field_innovative_idea';
  $handler->display->display_options['fields']['field_innovative_idea']['table'] = 'field_data_field_innovative_idea';
  $handler->display->display_options['fields']['field_innovative_idea']['field'] = 'field_innovative_idea';
  $handler->display->display_options['fields']['field_innovative_idea']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_innovative_idea']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_innovative_idea']['element_type'] = '0';
  $handler->display->display_options['fields']['field_innovative_idea']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_innovative_idea']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_innovative_idea']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_innovative_idea']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_innovative_idea']['field_api_classes'] = TRUE;
  /* Field: Content: Nombre completo del representante */
  $handler->display->display_options['fields']['field_representative_full_name']['id'] = 'field_representative_full_name';
  $handler->display->display_options['fields']['field_representative_full_name']['table'] = 'field_data_field_representative_full_name';
  $handler->display->display_options['fields']['field_representative_full_name']['field'] = 'field_representative_full_name';
  $handler->display->display_options['fields']['field_representative_full_name']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_representative_full_name']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_representative_full_name']['element_type'] = '0';
  $handler->display->display_options['fields']['field_representative_full_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_representative_full_name']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_representative_full_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_representative_full_name']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_representative_full_name']['field_api_classes'] = TRUE;
  /* Field: Content: Nombre del representante legal de la organización */
  $handler->display->display_options['fields']['field_org_rep_name']['id'] = 'field_org_rep_name';
  $handler->display->display_options['fields']['field_org_rep_name']['table'] = 'field_data_field_org_rep_name';
  $handler->display->display_options['fields']['field_org_rep_name']['field'] = 'field_org_rep_name';
  $handler->display->display_options['fields']['field_org_rep_name']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_org_rep_name']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_org_rep_name']['element_type'] = '0';
  $handler->display->display_options['fields']['field_org_rep_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_org_rep_name']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_org_rep_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_org_rep_name']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_org_rep_name']['field_api_classes'] = TRUE;
  /* Field: Content: Nombrá el cantón(es) o comunidad(es) donde tu idea o solución será ejecutada */
  $handler->display->display_options['fields']['field_canton']['id'] = 'field_canton';
  $handler->display->display_options['fields']['field_canton']['table'] = 'field_data_field_canton';
  $handler->display->display_options['fields']['field_canton']['field'] = 'field_canton';
  $handler->display->display_options['fields']['field_canton']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_canton']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_canton']['element_type'] = '0';
  $handler->display->display_options['fields']['field_canton']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_canton']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_canton']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_canton']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_canton']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_canton']['field_api_classes'] = TRUE;
  /* Field: Content: Número de cédula */
  $handler->display->display_options['fields']['field_representative_id_number']['id'] = 'field_representative_id_number';
  $handler->display->display_options['fields']['field_representative_id_number']['table'] = 'field_data_field_representative_id_number';
  $handler->display->display_options['fields']['field_representative_id_number']['field'] = 'field_representative_id_number';
  $handler->display->display_options['fields']['field_representative_id_number']['label'] = 'Número de cédula del representante';
  $handler->display->display_options['fields']['field_representative_id_number']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_representative_id_number']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_representative_id_number']['element_type'] = '0';
  $handler->display->display_options['fields']['field_representative_id_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_representative_id_number']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_representative_id_number']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_representative_id_number']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_representative_id_number']['field_api_classes'] = TRUE;
  /* Field: Content: Número de teléfono */
  $handler->display->display_options['fields']['field_representative_phone']['id'] = 'field_representative_phone';
  $handler->display->display_options['fields']['field_representative_phone']['table'] = 'field_data_field_representative_phone';
  $handler->display->display_options['fields']['field_representative_phone']['field'] = 'field_representative_phone';
  $handler->display->display_options['fields']['field_representative_phone']['label'] = 'Número de teléfono del representante';
  $handler->display->display_options['fields']['field_representative_phone']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_representative_phone']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_representative_phone']['element_type'] = '0';
  $handler->display->display_options['fields']['field_representative_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_representative_phone']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_representative_phone']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_representative_phone']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_representative_phone']['field_api_classes'] = TRUE;
  /* Field: Content: Persona responsable del proyecto presentado */
  $handler->display->display_options['fields']['field_proj_resp_name']['id'] = 'field_proj_resp_name';
  $handler->display->display_options['fields']['field_proj_resp_name']['table'] = 'field_data_field_proj_resp_name';
  $handler->display->display_options['fields']['field_proj_resp_name']['field'] = 'field_proj_resp_name';
  $handler->display->display_options['fields']['field_proj_resp_name']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_proj_resp_name']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_proj_resp_name']['element_type'] = '0';
  $handler->display->display_options['fields']['field_proj_resp_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_proj_resp_name']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_proj_resp_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_proj_resp_name']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_proj_resp_name']['field_api_classes'] = TRUE;
  /* Field: Content: Sitio web, Redes Sociales */
  $handler->display->display_options['fields']['field_project_links']['id'] = 'field_project_links';
  $handler->display->display_options['fields']['field_project_links']['table'] = 'field_data_field_project_links';
  $handler->display->display_options['fields']['field_project_links']['field'] = 'field_project_links';
  $handler->display->display_options['fields']['field_project_links']['label'] = 'Sitio web, Redes Sociales del proyecto';
  $handler->display->display_options['fields']['field_project_links']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_project_links']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_project_links']['element_type'] = '0';
  $handler->display->display_options['fields']['field_project_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_links']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_project_links']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_project_links']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_project_links']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_project_links']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_project_links']['field_api_classes'] = TRUE;
  /* Field: Content: Teléfono */
  $handler->display->display_options['fields']['field_proj_resp_phone']['id'] = 'field_proj_resp_phone';
  $handler->display->display_options['fields']['field_proj_resp_phone']['table'] = 'field_data_field_proj_resp_phone';
  $handler->display->display_options['fields']['field_proj_resp_phone']['field'] = 'field_proj_resp_phone';
  $handler->display->display_options['fields']['field_proj_resp_phone']['label'] = 'Teléfono del responsable del proyecto';
  $handler->display->display_options['fields']['field_proj_resp_phone']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_proj_resp_phone']['element_type'] = '0';
  $handler->display->display_options['fields']['field_proj_resp_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_proj_resp_phone']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_proj_resp_phone']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_proj_resp_phone']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_proj_resp_phone']['field_api_classes'] = TRUE;
  /* Field: Content: Teléfono */
  $handler->display->display_options['fields']['field_org_rep_phone']['id'] = 'field_org_rep_phone';
  $handler->display->display_options['fields']['field_org_rep_phone']['table'] = 'field_data_field_org_rep_phone';
  $handler->display->display_options['fields']['field_org_rep_phone']['field'] = 'field_org_rep_phone';
  $handler->display->display_options['fields']['field_org_rep_phone']['label'] = 'Teléfono de la organización del representante';
  $handler->display->display_options['fields']['field_org_rep_phone']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_org_rep_phone']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_org_rep_phone']['element_type'] = '0';
  $handler->display->display_options['fields']['field_org_rep_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_org_rep_phone']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_org_rep_phone']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_org_rep_phone']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_org_rep_phone']['field_api_classes'] = TRUE;
  /* Field: Content: ¿Cuál es el nombre de la organización? */
  $handler->display->display_options['fields']['field_organization_name']['id'] = 'field_organization_name';
  $handler->display->display_options['fields']['field_organization_name']['table'] = 'field_data_field_organization_name';
  $handler->display->display_options['fields']['field_organization_name']['field'] = 'field_organization_name';
  $handler->display->display_options['fields']['field_organization_name']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_organization_name']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_organization_name']['element_type'] = '0';
  $handler->display->display_options['fields']['field_organization_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_name']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_organization_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_name']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_organization_name']['field_api_classes'] = TRUE;
  /* Field: Content: ¿Cuáles son los logros alcanzados por el proyecto hasta el momento? */
  $handler->display->display_options['fields']['field_project_achievements']['id'] = 'field_project_achievements';
  $handler->display->display_options['fields']['field_project_achievements']['table'] = 'field_data_field_project_achievements';
  $handler->display->display_options['fields']['field_project_achievements']['field'] = 'field_project_achievements';
  $handler->display->display_options['fields']['field_project_achievements']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_project_achievements']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_project_achievements']['element_type'] = '0';
  $handler->display->display_options['fields']['field_project_achievements']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_achievements']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_project_achievements']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_project_achievements']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_project_achievements']['field_api_classes'] = TRUE;
  /* Field: Content: ¿Cómo generaría ingresos tu solución para ser sostenible en el tiempo? */
  $handler->display->display_options['fields']['field_idea_susteinability']['id'] = 'field_idea_susteinability';
  $handler->display->display_options['fields']['field_idea_susteinability']['table'] = 'field_data_field_idea_susteinability';
  $handler->display->display_options['fields']['field_idea_susteinability']['field'] = 'field_idea_susteinability';
  $handler->display->display_options['fields']['field_idea_susteinability']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_idea_susteinability']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_idea_susteinability']['element_type'] = '0';
  $handler->display->display_options['fields']['field_idea_susteinability']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_idea_susteinability']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_idea_susteinability']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_idea_susteinability']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_idea_susteinability']['field_api_classes'] = TRUE;
  /* Field: Content: ¿Cómo te enteraste de esta iniciativa? */
  $handler->display->display_options['fields']['field_heard']['id'] = 'field_heard';
  $handler->display->display_options['fields']['field_heard']['table'] = 'field_data_field_heard';
  $handler->display->display_options['fields']['field_heard']['field'] = 'field_heard';
  $handler->display->display_options['fields']['field_heard']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_heard']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_heard']['element_type'] = '0';
  $handler->display->display_options['fields']['field_heard']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_heard']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_heard']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_heard']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_heard']['field_api_classes'] = TRUE;
  /* Field: Content: ¿Cómo y cuándo se originó el proyecto? */
  $handler->display->display_options['fields']['field_project_origin']['id'] = 'field_project_origin';
  $handler->display->display_options['fields']['field_project_origin']['table'] = 'field_data_field_project_origin';
  $handler->display->display_options['fields']['field_project_origin']['field'] = 'field_project_origin';
  $handler->display->display_options['fields']['field_project_origin']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_project_origin']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_project_origin']['element_type'] = '0';
  $handler->display->display_options['fields']['field_project_origin']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_origin']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_project_origin']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_project_origin']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_project_origin']['field_api_classes'] = TRUE;
  /* Field: Content: ¿Esta solución es individual o grupal? */
  $handler->display->display_options['fields']['field_organization_way']['id'] = 'field_organization_way';
  $handler->display->display_options['fields']['field_organization_way']['table'] = 'field_data_field_organization_way';
  $handler->display->display_options['fields']['field_organization_way']['field'] = 'field_organization_way';
  $handler->display->display_options['fields']['field_organization_way']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_organization_way']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_organization_way']['element_type'] = '0';
  $handler->display->display_options['fields']['field_organization_way']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_way']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_organization_way']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_way']['field_api_classes'] = TRUE;
  /* Field: Content: ¿Quién y cómo se verá beneficiado por la idea? */
  $handler->display->display_options['fields']['field_project_audience']['id'] = 'field_project_audience';
  $handler->display->display_options['fields']['field_project_audience']['table'] = 'field_data_field_project_audience';
  $handler->display->display_options['fields']['field_project_audience']['field'] = 'field_project_audience';
  $handler->display->display_options['fields']['field_project_audience']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_project_audience']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_project_audience']['element_type'] = '0';
  $handler->display->display_options['fields']['field_project_audience']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_audience']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_project_audience']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_project_audience']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_project_audience']['field_api_classes'] = TRUE;
  /* Field: Content: ¿Qué destrezas y características tenés que te diferencien y te permitan incidir sobre el problema con la idea que planteás? */
  $handler->display->display_options['fields']['field_idea_features']['id'] = 'field_idea_features';
  $handler->display->display_options['fields']['field_idea_features']['table'] = 'field_data_field_idea_features';
  $handler->display->display_options['fields']['field_idea_features']['field'] = 'field_idea_features';
  $handler->display->display_options['fields']['field_idea_features']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_idea_features']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_idea_features']['element_type'] = '0';
  $handler->display->display_options['fields']['field_idea_features']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_idea_features']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_idea_features']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_idea_features']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_idea_features']['field_api_classes'] = TRUE;
  /* Field: Content: ¿Qué problemática deseás solucionar? */
  $handler->display->display_options['fields']['field_problem']['id'] = 'field_problem';
  $handler->display->display_options['fields']['field_problem']['table'] = 'field_data_field_problem';
  $handler->display->display_options['fields']['field_problem']['field'] = 'field_problem';
  $handler->display->display_options['fields']['field_problem']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_problem']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_problem']['element_type'] = '0';
  $handler->display->display_options['fields']['field_problem']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_problem']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_problem']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_problem']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_problem']['field_api_classes'] = TRUE;
  /* Field: Content: ¿Qué te motivó a proponer esta idea o a emprender en este tema? */
  $handler->display->display_options['fields']['field_idea_motivation']['id'] = 'field_idea_motivation';
  $handler->display->display_options['fields']['field_idea_motivation']['table'] = 'field_data_field_idea_motivation';
  $handler->display->display_options['fields']['field_idea_motivation']['field'] = 'field_idea_motivation';
  $handler->display->display_options['fields']['field_idea_motivation']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_idea_motivation']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_idea_motivation']['element_type'] = '0';
  $handler->display->display_options['fields']['field_idea_motivation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_idea_motivation']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_idea_motivation']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_idea_motivation']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_idea_motivation']['field_api_classes'] = TRUE;
  /* Field: Content: ¿Qué tipo de solución querés proponer? */
  $handler->display->display_options['fields']['field_solution_type']['id'] = 'field_solution_type';
  $handler->display->display_options['fields']['field_solution_type']['table'] = 'field_data_field_solution_type';
  $handler->display->display_options['fields']['field_solution_type']['field'] = 'field_solution_type';
  $handler->display->display_options['fields']['field_solution_type']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_solution_type']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_solution_type']['element_type'] = '0';
  $handler->display->display_options['fields']['field_solution_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_solution_type']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_solution_type']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_solution_type']['field_api_classes'] = TRUE;
  /* Field: Content: ¿Se encuentra en ejecución? */
  $handler->display->display_options['fields']['field_project_running']['id'] = 'field_project_running';
  $handler->display->display_options['fields']['field_project_running']['table'] = 'field_data_field_project_running';
  $handler->display->display_options['fields']['field_project_running']['field'] = 'field_project_running';
  $handler->display->display_options['fields']['field_project_running']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_project_running']['alter']['strip_tags'] = TRUE;
  /* Campo: Contenido: ¿Te gustaría compartir tu idea como parte de la campaña 1820 ideas y participar por premios adicionales? */
  $handler->display->display_options['fields']['field_share_idea_with_sponsors']['id'] = 'field_share_idea_with_sponsors';
  $handler->display->display_options['fields']['field_share_idea_with_sponsors']['table'] = 'field_data_field_share_idea_with_sponsors';
  $handler->display->display_options['fields']['field_share_idea_with_sponsors']['field'] = 'field_share_idea_with_sponsors';
  $handler->display->display_options['fields']['field_share_idea_with_sponsors']['label'] = 'Compartir idea con patrocinadores';
  $handler->display->display_options['fields']['field_share_idea_with_sponsors']['element_type'] = '0';
  $handler->display->display_options['fields']['field_share_idea_with_sponsors']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_share_idea_with_sponsors']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_share_idea_with_sponsors']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_share_idea_with_sponsors']['field_api_classes'] = TRUE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'proposal' => 'proposal',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Criterios de filtrado: Contenido: Correo electrónico (field_representative_email) */
  $handler->display->display_options['filters']['field_representative_email_email']['id'] = 'field_representative_email_email';
  $handler->display->display_options['filters']['field_representative_email_email']['table'] = 'field_data_field_representative_email';
  $handler->display->display_options['filters']['field_representative_email_email']['field'] = 'field_representative_email_email';
  $handler->display->display_options['filters']['field_representative_email_email']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_representative_email_email']['group'] = 1;
  /* Filter criterion: Flags: Flagged */
  $handler->display->display_options['filters']['flagged']['id'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['table'] = 'flagging';
  $handler->display->display_options['filters']['flagged']['field'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['filters']['flagged']['value'] = '1';
  $handler->display->display_options['filters']['flagged']['group'] = 1;
  /* Criterios de filtrado: Contenido: Fecha de mensaje */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'node';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = 'between';
  $handler->display->display_options['filters']['created']['value']['min'] = '01-01-2019';
  $handler->display->display_options['filters']['created']['value']['max'] = '31-12-2019';
  $handler->display->display_options['filters']['created']['value']['value'] = '2017';
  $handler->display->display_options['filters']['created']['group'] = 1;
  $handler->display->display_options['filters']['created']['expose']['operator_id'] = 'created_op';
  $handler->display->display_options['filters']['created']['expose']['label'] = 'Fecha de mensaje';
  $handler->display->display_options['filters']['created']['expose']['operator'] = 'created_op';
  $handler->display->display_options['filters']['created']['expose']['identifier'] = 'created';
  $handler->display->display_options['filters']['created']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%view-%timestamp-dd_%timestamp-mm_%timestamp-yy.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'admin/propuestas/exportar-propuestas';
  $handler->display->display_options['use_batch'] = 'batch';
  $handler->display->display_options['return_path'] = '<front>';
  $handler->display->display_options['segment_size'] = '100';

  /* Display: Compartir con patrocinadores */
  $handler = $view->new_display('views_data_export', 'Compartir con patrocinadores', 'views_data_export_2');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%view-share-with-sponsors-%timestamp-dd_%timestamp-mm_%timestamp-yy.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'proposal' => 'proposal',
  );
  /* Criterios de filtrado: Marcas: Marcado */
  $handler->display->display_options['filters']['flagged']['id'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['table'] = 'flagging';
  $handler->display->display_options['filters']['flagged']['field'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['filters']['flagged']['value'] = '1';
  /* Criterios de filtrado: Contenido: Fecha de mensaje */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'node';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = 'between';
  $handler->display->display_options['filters']['created']['value']['min'] = '01-01-2019';
  $handler->display->display_options['filters']['created']['value']['max'] = '31-12-2019';
  $handler->display->display_options['filters']['created']['value']['value'] = '2017';
  $handler->display->display_options['filters']['created']['expose']['operator_id'] = 'created_op';
  $handler->display->display_options['filters']['created']['expose']['label'] = 'Fecha de mensaje';
  $handler->display->display_options['filters']['created']['expose']['operator'] = 'created_op';
  $handler->display->display_options['filters']['created']['expose']['identifier'] = 'created';
  $handler->display->display_options['filters']['created']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );
  /* Criterios de filtrado: Contenido: ¿Te gustaría compartir tu idea como parte de la campaña 1820 ideas y participar por premios adicionales? (field_share_idea_with_sponsors) */
  $handler->display->display_options['filters']['field_share_idea_with_sponsors_value']['id'] = 'field_share_idea_with_sponsors_value';
  $handler->display->display_options['filters']['field_share_idea_with_sponsors_value']['table'] = 'field_data_field_share_idea_with_sponsors';
  $handler->display->display_options['filters']['field_share_idea_with_sponsors_value']['field'] = 'field_share_idea_with_sponsors_value';
  $handler->display->display_options['filters']['field_share_idea_with_sponsors_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'admin/propuestas/exportar-propuestas/compartir-con-patrocinadores';
  $handler->display->display_options['use_batch'] = 'batch';
  $handler->display->display_options['return_path'] = '<front>';
  $handler->display->display_options['segment_size'] = '100';
  $translatables['proposal_export'] = array(
    t('Master'),
    t('más'),
    t('Apply'),
    t('Reiniciar'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('elementos por página'),
    t('— Todo(s) —'),
    t('Desplazamiento'),
    t('« primero'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('flag'),
    t('Nombre de la solución'),
    t('Problemática a resolver'),
    t('Contanos de manera resumida de qué se trata tu idea y cómo resolverá la problemática'),
    t('Correo electrónico del representante'),
    t('Correo electrónico del responsable del proyecto'),
    t('Correo electrónico de la organización del represante'),
    t('Explicá cómo tu idea es innovadora'),
    t('Nombre completo del representante'),
    t('Nombre del representante legal de la organización'),
    t('Nombrá el cantón(es) o comunidad(es) donde tu idea o solución será ejecutada'),
    t('Número de cédula del representante'),
    t('Número de teléfono del representante'),
    t('Persona responsable del proyecto presentado'),
    t('Sitio web, Redes Sociales del proyecto'),
    t('Teléfono del responsable del proyecto'),
    t('Teléfono de la organización del representante'),
    t('¿Cuál es el nombre de la organización?'),
    t('¿Cuáles son los logros alcanzados por el proyecto hasta el momento?'),
    t('¿Cómo generaría ingresos tu solución para ser sostenible en el tiempo?'),
    t('¿Cómo te enteraste de esta iniciativa?'),
    t('¿Cómo y cuándo se originó el proyecto?'),
    t('¿Esta solución es individual o grupal?'),
    t('¿Quién y cómo se verá beneficiado por la idea?'),
    t('¿Qué destrezas y características tenés que te diferencien y te permitan incidir sobre el problema con la idea que planteás?'),
    t('¿Qué problemática deseás solucionar?'),
    t('¿Qué te motivó a proponer esta idea o a emprender en este tema?'),
    t('¿Qué tipo de solución querés proponer?'),
    t('¿Se encuentra en ejecución?'),
    t('Compartir idea con patrocinadores'),
    t('Fecha de mensaje'),
    t('Data export'),
    t('Compartir con patrocinadores'),
  );
  $export['proposal_export'] = $view;

  $view = new view();
  $view->name = 'proposals';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Proposals';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Propuestas';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'más';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'view proposals';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Aplicar';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordenar por';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'elementos por página';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '— Todo(s) —';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Desplazamiento';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primero';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Flags: invalidar_propuesta */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = 'marca';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'invalidar_propuesta';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Título';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: ¿Qué problemática deseás solucionar? */
  $handler->display->display_options['fields']['field_problem_to_solve']['id'] = 'field_problem_to_solve';
  $handler->display->display_options['fields']['field_problem_to_solve']['table'] = 'field_data_field_problem_to_solve';
  $handler->display->display_options['fields']['field_problem_to_solve']['field'] = 'field_problem_to_solve';
  $handler->display->display_options['fields']['field_problem_to_solve']['label'] = 'Problemática';
  $handler->display->display_options['fields']['field_problem_to_solve']['element_type'] = '0';
  $handler->display->display_options['fields']['field_problem_to_solve']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_problem_to_solve']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_problem_to_solve']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_problem_to_solve']['field_api_classes'] = TRUE;
  /* Field: Content: ¿Qué tipo de solución querés proponer? */
  $handler->display->display_options['fields']['field_solution_type']['id'] = 'field_solution_type';
  $handler->display->display_options['fields']['field_solution_type']['table'] = 'field_data_field_solution_type';
  $handler->display->display_options['fields']['field_solution_type']['field'] = 'field_solution_type';
  $handler->display->display_options['fields']['field_solution_type']['label'] = 'Tipo de solución';
  $handler->display->display_options['fields']['field_solution_type']['element_type'] = '0';
  $handler->display->display_options['fields']['field_solution_type']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_solution_type']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_solution_type']['field_api_classes'] = TRUE;
  /* Field: Content: ¿Esta solución es individual o grupal? */
  $handler->display->display_options['fields']['field_organization_way']['id'] = 'field_organization_way';
  $handler->display->display_options['fields']['field_organization_way']['table'] = 'field_data_field_organization_way';
  $handler->display->display_options['fields']['field_organization_way']['field'] = 'field_organization_way';
  $handler->display->display_options['fields']['field_organization_way']['label'] = 'Individual/grupal';
  $handler->display->display_options['fields']['field_organization_way']['element_type'] = '0';
  $handler->display->display_options['fields']['field_organization_way']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_organization_way']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_way']['field_api_classes'] = TRUE;
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = 'Preaprobación';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'proposal' => 'proposal',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Correo electrónico (field_representative_email) */
  $handler->display->display_options['filters']['field_representative_email_email']['id'] = 'field_representative_email_email';
  $handler->display->display_options['filters']['field_representative_email_email']['table'] = 'field_data_field_representative_email';
  $handler->display->display_options['filters']['field_representative_email_email']['field'] = 'field_representative_email_email';
  $handler->display->display_options['filters']['field_representative_email_email']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_representative_email_email']['group'] = 1;
  /* Filter criterion: Content: ¿Qué tipo de solución querés proponer? (field_solution_type) */
  $handler->display->display_options['filters']['field_solution_type_value']['id'] = 'field_solution_type_value';
  $handler->display->display_options['filters']['field_solution_type_value']['table'] = 'field_data_field_solution_type';
  $handler->display->display_options['filters']['field_solution_type_value']['field'] = 'field_solution_type_value';
  $handler->display->display_options['filters']['field_solution_type_value']['group'] = 1;
  $handler->display->display_options['filters']['field_solution_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_solution_type_value']['expose']['operator_id'] = 'field_solution_type_value_op';
  $handler->display->display_options['filters']['field_solution_type_value']['expose']['label'] = 'Tipo de solución';
  $handler->display->display_options['filters']['field_solution_type_value']['expose']['operator'] = 'field_solution_type_value_op';
  $handler->display->display_options['filters']['field_solution_type_value']['expose']['identifier'] = 'field_solution_type_value';
  $handler->display->display_options['filters']['field_solution_type_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: ¿Esta solución es individual o grupal? (field_organization_way) */
  $handler->display->display_options['filters']['field_organization_way_value']['id'] = 'field_organization_way_value';
  $handler->display->display_options['filters']['field_organization_way_value']['table'] = 'field_data_field_organization_way';
  $handler->display->display_options['filters']['field_organization_way_value']['field'] = 'field_organization_way_value';
  $handler->display->display_options['filters']['field_organization_way_value']['group'] = 1;
  $handler->display->display_options['filters']['field_organization_way_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_organization_way_value']['expose']['operator_id'] = 'field_organization_way_value_op';
  $handler->display->display_options['filters']['field_organization_way_value']['expose']['label'] = 'Tipo de organización';
  $handler->display->display_options['filters']['field_organization_way_value']['expose']['operator'] = 'field_organization_way_value_op';
  $handler->display->display_options['filters']['field_organization_way_value']['expose']['identifier'] = 'field_organization_way_value';
  $handler->display->display_options['filters']['field_organization_way_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Criterios de filtrado: Contenido: Fecha de mensaje */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'node';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = 'between';
  $handler->display->display_options['filters']['created']['value']['min'] = '01-01-2019';
  $handler->display->display_options['filters']['created']['value']['max'] = '31-12-2019';
  $handler->display->display_options['filters']['created']['group'] = 1;
  $handler->display->display_options['filters']['created']['expose']['operator_id'] = 'created_op';
  $handler->display->display_options['filters']['created']['expose']['label'] = 'Fecha de mensaje';
  $handler->display->display_options['filters']['created']['expose']['operator'] = 'created_op';
  $handler->display->display_options['filters']['created']['expose']['identifier'] = 'created';

  /* Display: Proposals review */
  $handler = $view->new_display('page', 'Proposals review', 'proposals');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '20';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::retopais_feature_proposals_judge_assignment' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Asignar a un juez',
      'settings' => array(
        'judge_name' => '0',
      ),
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Título';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Correo electrónico */
  $handler->display->display_options['fields']['field_representative_email']['id'] = 'field_representative_email';
  $handler->display->display_options['fields']['field_representative_email']['table'] = 'field_data_field_representative_email';
  $handler->display->display_options['fields']['field_representative_email']['field'] = 'field_representative_email';
  $handler->display->display_options['fields']['field_representative_email']['element_type'] = '0';
  $handler->display->display_options['fields']['field_representative_email']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_representative_email']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_representative_email']['field_api_classes'] = TRUE;
  /* Field: Content: ¿Qué problemática deseás solucionar? */
  $handler->display->display_options['fields']['field_problem_to_solve']['id'] = 'field_problem_to_solve';
  $handler->display->display_options['fields']['field_problem_to_solve']['table'] = 'field_data_field_problem_to_solve';
  $handler->display->display_options['fields']['field_problem_to_solve']['field'] = 'field_problem_to_solve';
  $handler->display->display_options['fields']['field_problem_to_solve']['label'] = 'Problemática';
  $handler->display->display_options['fields']['field_problem_to_solve']['element_type'] = '0';
  $handler->display->display_options['fields']['field_problem_to_solve']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_problem_to_solve']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_problem_to_solve']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_problem_to_solve']['field_api_classes'] = TRUE;
  /* Field: Content: ¿Qué tipo de solución querés proponer? */
  $handler->display->display_options['fields']['field_solution_type']['id'] = 'field_solution_type';
  $handler->display->display_options['fields']['field_solution_type']['table'] = 'field_data_field_solution_type';
  $handler->display->display_options['fields']['field_solution_type']['field'] = 'field_solution_type';
  $handler->display->display_options['fields']['field_solution_type']['label'] = 'Tipo de solución';
  $handler->display->display_options['fields']['field_solution_type']['element_type'] = '0';
  $handler->display->display_options['fields']['field_solution_type']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_solution_type']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_solution_type']['field_api_classes'] = TRUE;
  /* Field: Content: ¿Esta solución es individual o grupal? */
  $handler->display->display_options['fields']['field_organization_way']['id'] = 'field_organization_way';
  $handler->display->display_options['fields']['field_organization_way']['table'] = 'field_data_field_organization_way';
  $handler->display->display_options['fields']['field_organization_way']['field'] = 'field_organization_way';
  $handler->display->display_options['fields']['field_organization_way']['label'] = 'Individual/grupal';
  $handler->display->display_options['fields']['field_organization_way']['element_type'] = '0';
  $handler->display->display_options['fields']['field_organization_way']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_organization_way']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_way']['field_api_classes'] = TRUE;
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = 'Preaprobación';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'proposal' => 'proposal',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Correo electrónico (field_representative_email) */
  $handler->display->display_options['filters']['field_representative_email_email']['id'] = 'field_representative_email_email';
  $handler->display->display_options['filters']['field_representative_email_email']['table'] = 'field_data_field_representative_email';
  $handler->display->display_options['filters']['field_representative_email_email']['field'] = 'field_representative_email_email';
  $handler->display->display_options['filters']['field_representative_email_email']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_representative_email_email']['group'] = 1;
  /* Filter criterion: Content: ¿Qué tipo de solución querés proponer? (field_solution_type) */
  $handler->display->display_options['filters']['field_solution_type_value']['id'] = 'field_solution_type_value';
  $handler->display->display_options['filters']['field_solution_type_value']['table'] = 'field_data_field_solution_type';
  $handler->display->display_options['filters']['field_solution_type_value']['field'] = 'field_solution_type_value';
  $handler->display->display_options['filters']['field_solution_type_value']['group'] = 1;
  $handler->display->display_options['filters']['field_solution_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_solution_type_value']['expose']['operator_id'] = 'field_solution_type_value_op';
  $handler->display->display_options['filters']['field_solution_type_value']['expose']['label'] = 'Tipo de solución';
  $handler->display->display_options['filters']['field_solution_type_value']['expose']['operator'] = 'field_solution_type_value_op';
  $handler->display->display_options['filters']['field_solution_type_value']['expose']['identifier'] = 'field_solution_type_value';
  $handler->display->display_options['filters']['field_solution_type_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: ¿Esta solución es individual o grupal? (field_organization_way) */
  $handler->display->display_options['filters']['field_organization_way_value']['id'] = 'field_organization_way_value';
  $handler->display->display_options['filters']['field_organization_way_value']['table'] = 'field_data_field_organization_way';
  $handler->display->display_options['filters']['field_organization_way_value']['field'] = 'field_organization_way_value';
  $handler->display->display_options['filters']['field_organization_way_value']['group'] = 1;
  $handler->display->display_options['filters']['field_organization_way_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_organization_way_value']['expose']['operator_id'] = 'field_organization_way_value_op';
  $handler->display->display_options['filters']['field_organization_way_value']['expose']['label'] = 'Tipo de organización';
  $handler->display->display_options['filters']['field_organization_way_value']['expose']['operator'] = 'field_organization_way_value_op';
  $handler->display->display_options['filters']['field_organization_way_value']['expose']['identifier'] = 'field_organization_way_value';
  $handler->display->display_options['filters']['field_organization_way_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Flags: Flagged */
  $handler->display->display_options['filters']['flagged']['id'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['table'] = 'flagging';
  $handler->display->display_options['filters']['flagged']['field'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['filters']['flagged']['value'] = 'All';
  $handler->display->display_options['filters']['flagged']['exposed'] = TRUE;
  $handler->display->display_options['filters']['flagged']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['flagged']['expose']['label'] = 'Preaprobado';
  $handler->display->display_options['filters']['flagged']['expose']['operator'] = 'flagged_op';
  $handler->display->display_options['filters']['flagged']['expose']['identifier'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );
  /* Criterios de filtrado: Contenido: Fecha de mensaje */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'node';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = 'between';
  $handler->display->display_options['filters']['created']['value']['min'] = '01-01-2019';
  $handler->display->display_options['filters']['created']['value']['max'] = '31-12-2019';
  $handler->display->display_options['filters']['created']['group'] = 1;
  $handler->display->display_options['path'] = 'admin/propuestas';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Ver propuestas';
  $handler->display->display_options['menu']['weight'] = '-20';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Final proposals */
  $handler = $view->new_display('page', 'Final proposals', 'final_proposals');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'view final proposals';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Flags: invalidar_propuesta */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = 'marca';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'invalidar_propuesta';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_juez_asignado_target_id']['id'] = 'field_juez_asignado_target_id';
  $handler->display->display_options['relationships']['field_juez_asignado_target_id']['table'] = 'field_data_field_juez_asignado';
  $handler->display->display_options['relationships']['field_juez_asignado_target_id']['field'] = 'field_juez_asignado_target_id';
  $handler->display->display_options['relationships']['field_juez_asignado_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Título';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: ¿Qué problemática deseás solucionar? */
  $handler->display->display_options['fields']['field_problem_to_solve']['id'] = 'field_problem_to_solve';
  $handler->display->display_options['fields']['field_problem_to_solve']['table'] = 'field_data_field_problem_to_solve';
  $handler->display->display_options['fields']['field_problem_to_solve']['field'] = 'field_problem_to_solve';
  $handler->display->display_options['fields']['field_problem_to_solve']['label'] = 'Problemática';
  $handler->display->display_options['fields']['field_problem_to_solve']['element_type'] = '0';
  $handler->display->display_options['fields']['field_problem_to_solve']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_problem_to_solve']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_problem_to_solve']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_problem_to_solve']['field_api_classes'] = TRUE;
  /* Field: Content: ¿Qué tipo de solución querés proponer? */
  $handler->display->display_options['fields']['field_solution_type']['id'] = 'field_solution_type';
  $handler->display->display_options['fields']['field_solution_type']['table'] = 'field_data_field_solution_type';
  $handler->display->display_options['fields']['field_solution_type']['field'] = 'field_solution_type';
  $handler->display->display_options['fields']['field_solution_type']['label'] = 'Tipo de solución';
  $handler->display->display_options['fields']['field_solution_type']['element_type'] = '0';
  $handler->display->display_options['fields']['field_solution_type']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_solution_type']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_solution_type']['field_api_classes'] = TRUE;
  /* Field: Content: ¿Esta solución es individual o grupal? */
  $handler->display->display_options['fields']['field_organization_way']['id'] = 'field_organization_way';
  $handler->display->display_options['fields']['field_organization_way']['table'] = 'field_data_field_organization_way';
  $handler->display->display_options['fields']['field_organization_way']['field'] = 'field_organization_way';
  $handler->display->display_options['fields']['field_organization_way']['label'] = 'Individual/grupal';
  $handler->display->display_options['fields']['field_organization_way']['element_type'] = '0';
  $handler->display->display_options['fields']['field_organization_way']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_organization_way']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_way']['field_api_classes'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'proposal' => 'proposal',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Correo electrónico (field_representative_email) */
  $handler->display->display_options['filters']['field_representative_email_email']['id'] = 'field_representative_email_email';
  $handler->display->display_options['filters']['field_representative_email_email']['table'] = 'field_data_field_representative_email';
  $handler->display->display_options['filters']['field_representative_email_email']['field'] = 'field_representative_email_email';
  $handler->display->display_options['filters']['field_representative_email_email']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_representative_email_email']['group'] = 1;
  /* Filter criterion: Content: ¿Qué tipo de solución querés proponer? (field_solution_type) */
  $handler->display->display_options['filters']['field_solution_type_value']['id'] = 'field_solution_type_value';
  $handler->display->display_options['filters']['field_solution_type_value']['table'] = 'field_data_field_solution_type';
  $handler->display->display_options['filters']['field_solution_type_value']['field'] = 'field_solution_type_value';
  $handler->display->display_options['filters']['field_solution_type_value']['group'] = 1;
  $handler->display->display_options['filters']['field_solution_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_solution_type_value']['expose']['operator_id'] = 'field_solution_type_value_op';
  $handler->display->display_options['filters']['field_solution_type_value']['expose']['label'] = 'Tipo de solución';
  $handler->display->display_options['filters']['field_solution_type_value']['expose']['operator'] = 'field_solution_type_value_op';
  $handler->display->display_options['filters']['field_solution_type_value']['expose']['identifier'] = 'field_solution_type_value';
  $handler->display->display_options['filters']['field_solution_type_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: ¿Esta solución es individual o grupal? (field_organization_way) */
  $handler->display->display_options['filters']['field_organization_way_value']['id'] = 'field_organization_way_value';
  $handler->display->display_options['filters']['field_organization_way_value']['table'] = 'field_data_field_organization_way';
  $handler->display->display_options['filters']['field_organization_way_value']['field'] = 'field_organization_way_value';
  $handler->display->display_options['filters']['field_organization_way_value']['group'] = 1;
  $handler->display->display_options['filters']['field_organization_way_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_organization_way_value']['expose']['operator_id'] = 'field_organization_way_value_op';
  $handler->display->display_options['filters']['field_organization_way_value']['expose']['label'] = 'Tipo de organización';
  $handler->display->display_options['filters']['field_organization_way_value']['expose']['operator'] = 'field_organization_way_value_op';
  $handler->display->display_options['filters']['field_organization_way_value']['expose']['identifier'] = 'field_organization_way_value';
  $handler->display->display_options['filters']['field_organization_way_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Flags: Flagged */
  $handler->display->display_options['filters']['flagged']['id'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['table'] = 'flagging';
  $handler->display->display_options['filters']['flagged']['field'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['filters']['flagged']['value'] = '1';
  $handler->display->display_options['filters']['flagged']['group'] = 1;
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'field_juez_asignado_target_id';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  /* Criterios de filtrado: Contenido: Fecha de mensaje */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'node';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = 'between';
  $handler->display->display_options['filters']['created']['value']['min'] = '01-01-2019';
  $handler->display->display_options['filters']['created']['value']['max'] = '31-12-2019';
  $handler->display->display_options['path'] = 'admin/propuestas-finales';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Ver propuestas finales';
  $handler->display->display_options['menu']['weight'] = '-19';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Proposals review 2017 */
  $handler = $view->new_display('page', 'Proposals review 2017', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Propuestas 2017';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Operaciones en masa: Contenido */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '20';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::retopais_feature_proposals_judge_assignment' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Asignar a un juez',
      'settings' => array(
        'judge_name' => '0',
      ),
    ),
  );
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Campo: Contenido: Correo electrónico */
  $handler->display->display_options['fields']['field_representative_email']['id'] = 'field_representative_email';
  $handler->display->display_options['fields']['field_representative_email']['table'] = 'field_data_field_representative_email';
  $handler->display->display_options['fields']['field_representative_email']['field'] = 'field_representative_email';
  $handler->display->display_options['fields']['field_representative_email']['element_type'] = '0';
  $handler->display->display_options['fields']['field_representative_email']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_representative_email']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_representative_email']['field_api_classes'] = TRUE;
  /* Campo: Contenido: ¿Que problemática deseás solucionar? */
  $handler->display->display_options['fields']['field_problem']['id'] = 'field_problem';
  $handler->display->display_options['fields']['field_problem']['table'] = 'field_data_field_problem';
  $handler->display->display_options['fields']['field_problem']['field'] = 'field_problem';
  $handler->display->display_options['fields']['field_problem']['label'] = 'Problemática';
  $handler->display->display_options['fields']['field_problem']['element_type'] = '0';
  $handler->display->display_options['fields']['field_problem']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_problem']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_problem']['field_api_classes'] = TRUE;
  /* Campo: Contenido: ¿Qué tipo de solución querés proponer? */
  $handler->display->display_options['fields']['field_solution_type']['id'] = 'field_solution_type';
  $handler->display->display_options['fields']['field_solution_type']['table'] = 'field_data_field_solution_type';
  $handler->display->display_options['fields']['field_solution_type']['field'] = 'field_solution_type';
  $handler->display->display_options['fields']['field_solution_type']['label'] = 'Tipo de solución';
  $handler->display->display_options['fields']['field_solution_type']['element_type'] = '0';
  $handler->display->display_options['fields']['field_solution_type']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_solution_type']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_solution_type']['field_api_classes'] = TRUE;
  /* Campo: Contenido: ¿Esta solución es individual o grupal? */
  $handler->display->display_options['fields']['field_organization_way']['id'] = 'field_organization_way';
  $handler->display->display_options['fields']['field_organization_way']['table'] = 'field_data_field_organization_way';
  $handler->display->display_options['fields']['field_organization_way']['field'] = 'field_organization_way';
  $handler->display->display_options['fields']['field_organization_way']['label'] = 'Individual/grupal';
  $handler->display->display_options['fields']['field_organization_way']['element_type'] = '0';
  $handler->display->display_options['fields']['field_organization_way']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_organization_way']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_way']['field_api_classes'] = TRUE;
  /* Campo: Marcas: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = 'Preaprobación';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'proposal' => 'proposal',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Criterios de filtrado: Contenido: Correo electrónico (field_representative_email) */
  $handler->display->display_options['filters']['field_representative_email_email']['id'] = 'field_representative_email_email';
  $handler->display->display_options['filters']['field_representative_email_email']['table'] = 'field_data_field_representative_email';
  $handler->display->display_options['filters']['field_representative_email_email']['field'] = 'field_representative_email_email';
  $handler->display->display_options['filters']['field_representative_email_email']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_representative_email_email']['group'] = 1;
  /* Criterios de filtrado: Contenido: ¿Qué tipo de solución querés proponer? (field_solution_type) */
  $handler->display->display_options['filters']['field_solution_type_value']['id'] = 'field_solution_type_value';
  $handler->display->display_options['filters']['field_solution_type_value']['table'] = 'field_data_field_solution_type';
  $handler->display->display_options['filters']['field_solution_type_value']['field'] = 'field_solution_type_value';
  $handler->display->display_options['filters']['field_solution_type_value']['group'] = 1;
  $handler->display->display_options['filters']['field_solution_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_solution_type_value']['expose']['operator_id'] = 'field_solution_type_value_op';
  $handler->display->display_options['filters']['field_solution_type_value']['expose']['label'] = 'Tipo de solución';
  $handler->display->display_options['filters']['field_solution_type_value']['expose']['operator'] = 'field_solution_type_value_op';
  $handler->display->display_options['filters']['field_solution_type_value']['expose']['identifier'] = 'field_solution_type_value';
  $handler->display->display_options['filters']['field_solution_type_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Criterios de filtrado: Contenido: ¿Que problemática deseás solucionar? (field_problem) */
  $handler->display->display_options['filters']['field_problem_tid']['id'] = 'field_problem_tid';
  $handler->display->display_options['filters']['field_problem_tid']['table'] = 'field_data_field_problem';
  $handler->display->display_options['filters']['field_problem_tid']['field'] = 'field_problem_tid';
  $handler->display->display_options['filters']['field_problem_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_problem_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_problem_tid']['expose']['operator_id'] = 'field_problem_tid_op';
  $handler->display->display_options['filters']['field_problem_tid']['expose']['label'] = 'Problemática';
  $handler->display->display_options['filters']['field_problem_tid']['expose']['operator'] = 'field_problem_tid_op';
  $handler->display->display_options['filters']['field_problem_tid']['expose']['identifier'] = 'field_problem_tid';
  $handler->display->display_options['filters']['field_problem_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_problem_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_problem_tid']['vocabulary'] = 'problems';
  /* Criterios de filtrado: Contenido: ¿Esta solución es individual o grupal? (field_organization_way) */
  $handler->display->display_options['filters']['field_organization_way_value']['id'] = 'field_organization_way_value';
  $handler->display->display_options['filters']['field_organization_way_value']['table'] = 'field_data_field_organization_way';
  $handler->display->display_options['filters']['field_organization_way_value']['field'] = 'field_organization_way_value';
  $handler->display->display_options['filters']['field_organization_way_value']['group'] = 1;
  $handler->display->display_options['filters']['field_organization_way_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_organization_way_value']['expose']['operator_id'] = 'field_organization_way_value_op';
  $handler->display->display_options['filters']['field_organization_way_value']['expose']['label'] = 'Tipo de organización';
  $handler->display->display_options['filters']['field_organization_way_value']['expose']['operator'] = 'field_organization_way_value_op';
  $handler->display->display_options['filters']['field_organization_way_value']['expose']['identifier'] = 'field_organization_way_value';
  $handler->display->display_options['filters']['field_organization_way_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Criterios de filtrado: Marcas: Marcado */
  $handler->display->display_options['filters']['flagged']['id'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['table'] = 'flagging';
  $handler->display->display_options['filters']['flagged']['field'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['filters']['flagged']['value'] = 'All';
  $handler->display->display_options['filters']['flagged']['exposed'] = TRUE;
  $handler->display->display_options['filters']['flagged']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['flagged']['expose']['label'] = 'Preaprobado';
  $handler->display->display_options['filters']['flagged']['expose']['operator'] = 'flagged_op';
  $handler->display->display_options['filters']['flagged']['expose']['identifier'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );
  /* Criterios de filtrado: Contenido: Fecha de mensaje */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'node';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '<';
  $handler->display->display_options['filters']['created']['value']['value'] = '01-01-2018';
  $handler->display->display_options['path'] = 'admin/propuestas-2017';
  $handler->display->display_options['menu']['title'] = 'Ver propuestas';
  $handler->display->display_options['menu']['weight'] = '-20';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['proposals'] = array(
    t('Master'),
    t('Propuestas'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('elementos por página'),
    t('— Todo(s) —'),
    t('Desplazamiento'),
    t('« primero'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('flag'),
    t('Title'),
    t('Problemática'),
    t('Tipo de solución'),
    t('Individual/grupal'),
    t('Preaprobación'),
    t('Tipo de organización'),
    t('Fecha de mensaje'),
    t('Proposals review'),
    t('- Choose an operation -'),
    t('Asignar a un juez'),
    t('Correo electrónico'),
    t('Preaprobado'),
    t('Final proposals'),
    t('User entity referenced from field_juez_asignado'),
    t('Proposals review 2017'),
    t('Propuestas 2017'),
  );
  $export['proposals'] = $view;

  return $export;
}
