<?php
/**
 * @file
 * research_program_site_feature.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function research_program_site_feature_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_collaborations|node|research_program|form';
  $field_group->group_name = 'group_collaborations';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'research_program';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_research_program';
  $field_group->data = array(
    'label' => 'Collaborations',
    'weight' => '2',
    'children' => array(
      0 => 'field_fc_card_collaborations',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_collaborations|node|research_program|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact|node|research_program|form';
  $field_group->group_name = 'group_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'research_program';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_research_program';
  $field_group->data = array(
    'label' => 'Contactos',
    'weight' => '5',
    'children' => array(
      0 => 'field_relation_coordinator',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-contact field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_contact|node|research_program|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general_research_program|node|research_program|form';
  $field_group->group_name = 'group_general_research_program';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'research_program';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_research_program';
  $field_group->data = array(
    'label' => 'General',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_parg_additional_info',
      2 => 'field_link_featured_content',
      3 => 'group_group',
      4 => 'field_link_related',
      5 => 'field_text_research_areas',
      6 => 'field_tax_research_program_type',
      7 => 'field_bool_vie_program',
      8 => 'field_text_objetivo',
      9 => 'title',
      10 => 'redirect',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_general_research_program|node|research_program|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_projects|node|research_program|form';
  $field_group->group_name = 'group_projects';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'research_program';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_research_program';
  $field_group->data = array(
    'label' => 'Projects',
    'weight' => '4',
    'children' => array(
      0 => 'field_fc_cards_projects',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-projects field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_projects|node|research_program|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_research_program|node|research_program|form';
  $field_group->group_name = 'group_research_program';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'research_program';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Research program',
    'weight' => '0',
    'children' => array(
      0 => 'group_collaborations',
      1 => 'group_general_research_program',
      2 => 'group_researchers_program',
      3 => 'group_contact',
      4 => 'group_projects',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_research_program|node|research_program|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_researchers_program|node|research_program|form';
  $field_group->group_name = 'group_researchers_program';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'research_program';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_research_program';
  $field_group->data = array(
    'label' => 'Researchers',
    'weight' => '3',
    'children' => array(
      0 => 'field_fc_researcher',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_researchers_program|node|research_program|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Collaborations');
  t('Contactos');
  t('General');
  t('Projects');
  t('Research program');
  t('Researchers');

  return $field_groups;
}
