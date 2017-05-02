<?php
/**
 * @file
 * feature_sub_sites_entities.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function feature_sub_sites_entities_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_fc_cards_projects|card_teaser';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_fc_cards_projects';
  $ds_layout->view_mode = 'card_teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_img_main',
        1 => 'field_text_fc_title',
        2 => 'field_text_description',
      ),
    ),
    'fields' => array(
      'field_img_main' => 'ds_content',
      'field_text_fc_title' => 'ds_content',
      'field_text_description' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => 'content',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['field_collection_item|field_fc_cards_projects|card_teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_fc_cards_projects|default';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_fc_cards_projects';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'panels-onecol';
  $ds_layout->settings = array(
    'regions' => array(
      'middle' => array(
        0 => 'field_text_fc_title',
      ),
    ),
    'fields' => array(
      'field_text_fc_title' => 'middle',
    ),
    'classes' => array(),
    'wrappers' => array(
      'middle' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['field_collection_item|field_fc_cards_projects|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_fc_researcher|default';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_fc_researcher';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_text_fc_title',
        1 => 'field_text_description',
      ),
      'right' => array(
        2 => 'field_img_main',
        3 => 'field_link_featured_content',
        4 => 'field_eref_school',
      ),
    ),
    'fields' => array(
      'field_text_fc_title' => 'left',
      'field_text_description' => 'left',
      'field_img_main' => 'right',
      'field_link_featured_content' => 'right',
      'field_eref_school' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['field_collection_item|field_fc_researcher|default'] = $ds_layout;

  return $export;
}
