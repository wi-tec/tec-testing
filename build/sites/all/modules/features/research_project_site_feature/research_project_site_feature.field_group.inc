<?php
/**
 * @file
 * research_project_site_feature.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function research_project_site_feature_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact|node|site_research_project|form';
  $field_group->group_name = 'group_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'research_project_site';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_project';
  $field_group->data = array(
    'label' => 'Contacto',
    'weight' => '34',
    'children' => array(
      0 => 'field_relation_contacts',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-contact field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_contact|node|site_research_project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_documents_links|node|site_research_project|form';
  $field_group->group_name = 'group_documents_links';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'research_project_site';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_project';
  $field_group->data = array(
    'label' => 'Documentos y enlaces',
    'weight' => '35',
    'children' => array(
      0 => 'field_parg_additional_info',
      1 => 'field_file_attachment',
      2 => 'field_parg_featured_content',
      3 => 'field_link_related',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-documents-links field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_documents_links|node|site_research_project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general|node|site_research_project|form';
  $field_group->group_name = 'group_general';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'research_project_site';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_project';
  $field_group->data = array(
    'label' => 'General',
    'weight' => '31',
    'children' => array(
      0 => 'field_text_description',
      1 => 'field_img_gallery',
      2 => 'group_group',
      3 => 'og_group_ref',
      4 => 'field_img_main',
      5 => 'field_text_objectives',
      6 => 'field_video_embed',
      7 => 'title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-general field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_general|node|site_research_project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_participants|node|site_research_project|form';
  $field_group->group_name = 'group_participants';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'research_project_site';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_project';
  $field_group->data = array(
    'label' => 'Participantes',
    'weight' => '32',
    'children' => array(
      0 => 'field_eref_school',
      1 => 'field_paragraph_researchers',
      2 => 'field_paragraph_organizations',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-participants field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_participants|node|site_research_project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_resultados|node|site_research_project|form';
  $field_group->group_name = 'group_resultados';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'research_project_site';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_project';
  $field_group->data = array(
    'label' => 'Resultados',
    'weight' => '33',
    'children' => array(
      0 => 'field_text_publications',
      1 => 'field_eref_document',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-resultados field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_resultados|node|site_research_project|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Contacto');
  t('Documentos y enlaces');
  t('General');
  t('Participantes');
  t('Resultados');

  return $field_groups;
}
