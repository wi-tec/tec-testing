<?php
/**
 * @file
 * feature_sub_sites_entities.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_sub_sites_entities_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "pm_existing_pages" && $api == "pm_existing_pages") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function feature_sub_sites_entities_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function feature_sub_sites_entities_node_info() {
  $items = array(
    'subsite_project' => array(
      'name' => t('Subsite Project'),
      'base' => 'node_content',
      'description' => t('Content type for the sub sites of Research Projects'),
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
    'subsite_research_program' => array(
      'name' => t('Subsite Research Program'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
    'teacher' => array(
      'name' => t('Subsite Teacher'),
      'base' => 'node_content',
      'description' => t('<p>Content type for information about <strong>Teachers</strong> or <strong>Researchers</strong> only.</p>'),
      'has_title' => '1',
      'title_label' => t('Nombre'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_paragraphs_info().
 */
function feature_sub_sites_entities_paragraphs_info() {
  $items = array(
    'paragraph_organizations' => array(
      'name' => 'Organizations',
      'bundle' => 'paragraph_organizations',
      'locked' => '1',
    ),
    'paragraph_researcher' => array(
      'name' => 'Researcher',
      'bundle' => 'paragraph_researcher',
      'locked' => '1',
    ),
  );
  return $items;
}
