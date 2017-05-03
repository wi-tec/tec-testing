<?php
/**
 * @file
 * research_program_site_feature.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function research_program_site_feature_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'field_collection_item|field_fc_card_collaborations|card_teaser';
  $ds_fieldsetting->entity_type = 'field_collection_item';
  $ds_fieldsetting->bundle = 'field_fc_card_collaborations';
  $ds_fieldsetting->view_mode = 'card_teaser';
  $ds_fieldsetting->settings = array(
    'field_text_fc_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'a',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => 'href=[field_collection_item:url]',
          'ow-def-at' => FALSE,
          'fis' => TRUE,
          'fis-el' => 'h3',
          'fis-cl' => '',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['field_collection_item|field_fc_card_collaborations|card_teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'field_collection_item|field_fc_cards_projects|default';
  $ds_fieldsetting->entity_type = 'field_collection_item';
  $ds_fieldsetting->bundle = 'field_fc_cards_projects';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_text_fc_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'a',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => 'href=[field_collection_item:url]',
          'ow-def-at' => FALSE,
          'fis' => TRUE,
          'fis-el' => 'h3',
          'fis-cl' => '',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['field_collection_item|field_fc_cards_projects|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'field_collection_item|field_fc_researcher|card_teaser';
  $ds_fieldsetting->entity_type = 'field_collection_item';
  $ds_fieldsetting->bundle = 'field_fc_researcher';
  $ds_fieldsetting->view_mode = 'card_teaser';
  $ds_fieldsetting->settings = array(
    'field_text_fc_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'a',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => 'href=[field_collection_item:url]',
          'ow-def-at' => FALSE,
          'fis' => TRUE,
          'fis-el' => 'h3',
          'fis-cl' => '',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['field_collection_item|field_fc_researcher|card_teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function research_program_site_feature_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'menu_collaborations';
  $ds_field->label = 'menu';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'field_collection_item' => 'field_collection_item',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'menu_block|3',
    'block_render' => '1',
  );
  $export['menu_collaborations'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function research_program_site_feature_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_fc_card_collaborations|card_teaser';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_fc_card_collaborations';
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
  $export['field_collection_item|field_fc_card_collaborations|card_teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_fc_card_collaborations|default';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_fc_card_collaborations';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'panels-tec_threecol';
  $ds_layout->settings = array(
    'regions' => array(
      'featured' => array(
        0 => 'field_text_fc_title',
      ),
      'main_content' => array(
        1 => 'field_text_description',
      ),
      'sidebar_second' => array(
        2 => 'field_link_related',
      ),
    ),
    'fields' => array(
      'field_text_fc_title' => 'featured',
      'field_text_description' => 'main_content',
      'field_link_related' => 'sidebar_second',
    ),
    'classes' => array(),
    'wrappers' => array(
      'featured' => 'div',
      'sidebar_first' => 'div',
      'main_content' => 'div',
      'sidebar_second' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => 'content',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['field_collection_item|field_fc_card_collaborations|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_fc_card_collaborations|full';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_fc_card_collaborations';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'panels-twocol';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_text_fc_title',
        1 => 'field_text_description',
      ),
      'right' => array(
        2 => 'field_img_main',
        3 => 'field_link_related',
      ),
    ),
    'fields' => array(
      'field_text_fc_title' => 'left',
      'field_text_description' => 'left',
      'field_img_main' => 'right',
      'field_link_related' => 'right',
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
  $export['field_collection_item|field_fc_card_collaborations|full'] = $ds_layout;

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
  $ds_layout->id = 'field_collection_item|field_fc_researcher|card_teaser';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_fc_researcher';
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
  $export['field_collection_item|field_fc_researcher|card_teaser'] = $ds_layout;

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
        5 => 'field_link_paragraph_link',
      ),
    ),
    'fields' => array(
      'field_text_fc_title' => 'left',
      'field_text_description' => 'left',
      'field_img_main' => 'right',
      'field_link_featured_content' => 'right',
      'field_eref_school' => 'right',
      'field_link_paragraph_link' => 'right',
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

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_fc_researcher|full';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_fc_researcher';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'panels-twocol';
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
        5 => 'field_parg_sidebar_items',
      ),
    ),
    'fields' => array(
      'field_text_fc_title' => 'left',
      'field_text_description' => 'left',
      'field_img_main' => 'right',
      'field_link_featured_content' => 'right',
      'field_eref_school' => 'right',
      'field_parg_sidebar_items' => 'right',
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
  $export['field_collection_item|field_fc_researcher|full'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function research_program_site_feature_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'card_teaser';
  $ds_view_mode->label = 'Card Teaser';
  $ds_view_mode->entities = array(
    'field_collection_item' => 'field_collection_item',
  );
  $export['card_teaser'] = $ds_view_mode;

  return $export;
}
