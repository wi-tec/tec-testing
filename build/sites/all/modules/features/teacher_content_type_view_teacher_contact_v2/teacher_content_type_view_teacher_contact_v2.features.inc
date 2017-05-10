<?php
/**
 * @file
 * teacher_content_type_view_teacher_contact_v2.features.inc
 */

/**
 * Implements hook_views_api().
 */
function teacher_content_type_view_teacher_contact_v2_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function teacher_content_type_view_teacher_contact_v2_node_info() {
  $items = array(
    'teacher' => array(
      'name' => t('Teacher'),
      'base' => 'node_content',
      'description' => t('<p>Content type for information about <strong>Teachers</strong> or <strong>Researchers</strong> only.</p>'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
