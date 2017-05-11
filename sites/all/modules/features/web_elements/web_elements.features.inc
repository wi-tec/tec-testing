<?php
/**
 * @file
 * web_elements.features.inc
 */

/**
 * Implements hook_views_api().
 */
function web_elements_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function web_elements_node_info() {
  $items = array(
    'web_element' => array(
      'name' => t('Web Element'),
      'base' => 'node_content',
      'description' => t('Content type for <strong>Documentation Site</strong> only.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
