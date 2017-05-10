<?php
/**
 * @file
 * research_project_site_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function research_project_site_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "pm_existing_pages" && $api == "pm_existing_pages") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function research_project_site_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function research_project_site_feature_node_info() {
  $items = array(
    'research_project_site' => array(
      'name' => t('Research Project Site'),
      'base' => 'node_content',
      'description' => t('Content type for the sites of Research Projects'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_paragraphs_info().
 */
function research_project_site_feature_paragraphs_info() {
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
