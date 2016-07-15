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
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
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
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['label'] = 'Proposal CTA';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<a href="propone-idea" class="cta-propone button-red">Proponé ideas</a>';
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
    t('Proposal CTA'),
    t('<a href="propone-idea" class="cta-propone button-red">Proponé ideas</a>'),
    t('Problem Prizes'),
    t('Content entity referenced from field_prize_image'),
    t('Problems with Abstract - Finalistas'),
    t('¿En cuáles problemáticas nos enfocamos?'),
  );
  $export['problems'] = $view;

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
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'view proposals';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Aplicar';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
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
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'invalidar_propuesta';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: ¿Qué problemática deseás solucionar? */
  $handler->display->display_options['fields']['field_problem']['id'] = 'field_problem';
  $handler->display->display_options['fields']['field_problem']['table'] = 'field_data_field_problem';
  $handler->display->display_options['fields']['field_problem']['field'] = 'field_problem';
  $handler->display->display_options['fields']['field_problem']['label'] = 'Problemática';
  $handler->display->display_options['fields']['field_problem']['element_type'] = '0';
  $handler->display->display_options['fields']['field_problem']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_problem']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_problem']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_problem']['field_api_classes'] = TRUE;
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
  /* Filter criterion: Content: ¿Qué problemática deseás solucionar? (field_problem) */
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

  /* Display: Proposals review */
  $handler = $view->new_display('page', 'Proposals review', 'proposals');
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
  /* Filter criterion: Content: ¿Qué problemática deseás solucionar? (field_problem) */
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: ¿Qué problemática deseás solucionar? */
  $handler->display->display_options['fields']['field_problem']['id'] = 'field_problem';
  $handler->display->display_options['fields']['field_problem']['table'] = 'field_data_field_problem';
  $handler->display->display_options['fields']['field_problem']['field'] = 'field_problem';
  $handler->display->display_options['fields']['field_problem']['label'] = 'Problemática';
  $handler->display->display_options['fields']['field_problem']['element_type'] = '0';
  $handler->display->display_options['fields']['field_problem']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_problem']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_problem']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_problem']['field_api_classes'] = TRUE;
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
  /* Filter criterion: Content: ¿Qué problemática deseás solucionar? (field_problem) */
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
  $handler->display->display_options['path'] = 'admin/propuestas-finales';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Ver propuestas finales';
  $handler->display->display_options['menu']['weight'] = '-19';
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
    t('Proposals review'),
    t('Final proposals'),
  );
  $export['proposals'] = $view;

  return $export;
}
