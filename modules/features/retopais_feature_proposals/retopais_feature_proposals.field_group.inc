<?php
/**
 * @file
 * retopais_feature_proposals.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function retopais_feature_proposals_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_datos_representante|node|proposal|form';
  $field_group->group_name = 'group_datos_representante';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'proposal';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Datos del representante',
    'weight' => '5',
    'children' => array(
      0 => 'field_representative_email',
      1 => 'field_representative_full_name',
      2 => 'field_representative_id_number',
      3 => 'field_representative_phone',
      4 => 'field_needs',
      5 => 'field_representative_age',
      6 => 'field_representative_sex',
      7 => 'field_heard',
      8 => 'field_representative_prov_canton',
    ),
    'format_type' => 'multistep',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => NULL,
    ),
  );
  $field_groups['group_datos_representante|node|proposal|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_info_idea|node|proposal|form';
  $field_group->group_name = 'group_info_idea';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'proposal';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contanos de tu idea',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_canton',
      2 => 'field_idea_susteinability',
      3 => 'field_innovative_idea',
      4 => 'field_project_audience',
      5 => 'title',
    ),
    'format_type' => 'multistep',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => NULL,
    ),
  );
  $field_groups['group_info_idea|node|proposal|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_info_organizacion|node|proposal|form';
  $field_group->group_name = 'group_info_organizacion';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'proposal';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contanos más sobre tu organización',
    'weight' => '3',
    'children' => array(
      0 => 'field_org_rep_email',
      1 => 'field_org_rep_name',
      2 => 'field_org_rep_phone',
      3 => 'field_organization_name',
      4 => 'field_proj_resp_email',
      5 => 'field_proj_resp_name',
      6 => 'field_proj_resp_phone',
      7 => 'field_org_prov_canton',
    ),
    'format_type' => 'multistep',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => NULL,
    ),
  );
  $field_groups['group_info_organizacion|node|proposal|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_info_solucion_info|node|proposal|form';
  $field_group->group_name = 'group_info_solucion_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'proposal';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contanos más sobre el proyecto',
    'weight' => '2',
    'children' => array(
      0 => 'field_project_achievements',
      1 => 'field_project_links',
      2 => 'field_project_origin',
      3 => 'field_project_running',
    ),
    'format_type' => 'multistep',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => NULL,
    ),
  );
  $field_groups['group_info_solucion_info|node|proposal|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_inicio|node|proposal|form';
  $field_group->group_name = 'group_inicio';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'proposal';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '¿Qué deseás proponer?',
    'weight' => '0',
    'children' => array(
      0 => 'field_organization_way',
      1 => 'field_problem',
      2 => 'field_solution_type',
      3 => 'field_juez_asignado',
    ),
    'format_type' => 'multistep',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => NULL,
    ),
  );
  $field_groups['group_inicio|node|proposal|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_porque_debo_ganar|node|proposal|form';
  $field_group->group_name = 'group_porque_debo_ganar';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'proposal';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contanos más sobre por qué deberías ganar este reto',
    'weight' => '4',
    'children' => array(
      0 => 'field_idea_features',
      1 => 'field_idea_motivation',
    ),
    'format_type' => 'multistep',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => NULL,
    ),
  );
  $field_groups['group_porque_debo_ganar|node|proposal|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Contanos de tu idea');
  t('Contanos más sobre el proyecto');
  t('Contanos más sobre por qué deberías ganar este reto');
  t('Contanos más sobre tu organización');
  t('Datos del representante');
  t('¿Qué deseás proponer?');

  return $field_groups;
}
