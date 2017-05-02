<?php
/**
 * @file
 * research_program_site_feature.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function research_program_site_feature_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'field_collection_item-field_fc_card_collaborations-field_img_main'.
  $field_instances['field_collection_item-field_fc_card_collaborations-field_img_main'] = array(
    'bundle' => 'field_fc_card_collaborations',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'card_teaser' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'content',
          'image_style' => 'teaser',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'div',
    'field_name' => 'field_img_main',
    'label' => 'Main image',
    'required' => 1,
    'rubik_edit_field_display' => 'rubik_sidebar_field',
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => 'media/img/main',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'filefield_sources' => array(
          'filefield_sources' => array(
            'attach' => 0,
            'clipboard' => 0,
            'imce' => 0,
            'plupload' => 0,
            'reference' => 0,
            'remote' => 0,
            'upload' => 'upload',
          ),
          'source_attach' => array(
            'absolute' => 0,
            'attach_mode' => 'move',
            'path' => 'file_attach',
          ),
          'source_imce' => array(
            'imce_mode' => 0,
          ),
          'source_reference' => array(
            'autocomplete' => 0,
            'search_all_fields' => 0,
          ),
        ),
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_fc_card_collaborations-field_link_related'.
  $field_instances['field_collection_item-field_fc_card_collaborations-field_link_related'] = array(
    'bundle' => 'field_fc_card_collaborations',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'card_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'div',
    'field_name' => 'field_link_related',
    'label' => 'Related links',
    'required' => 0,
    'rubik_edit_field_display' => 'rubik_sidebar_field',
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 1,
        'profile' => 'fields_internal_external',
      ),
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_fc_card_collaborations-field_relation_coordinator'.
  $field_instances['field_collection_item-field_fc_card_collaborations-field_relation_coordinator'] = array(
    'bundle' => 'field_fc_card_collaborations',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'card_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'relation_add',
        'settings' => array(),
        'type' => 'relation_add_endpoints_and_fields',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'section',
    'field_name' => 'field_relation_coordinator',
    'label' => 'Coordinator',
    'required' => 0,
    'rubik_edit_field_display' => 'default',
    'settings' => array(
      'relation_target_bundles' => array(),
      'relation_type' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'relation_add',
      'settings' => array(
        'relation_endpoint_bundle_display' => 0,
        'relation_endpoint_custom_label' => '',
        'relation_endpoint_iso_language_codes' => 0,
        'relation_endpoint_label' => 'endpoint',
        'relation_endpoint_label_delta' => 0,
        'relation_endpoint_search_by_id' => 0,
      ),
      'type' => 'relation_add',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_fc_card_collaborations-field_text_description'.
  $field_instances['field_collection_item-field_fc_card_collaborations-field_text_description'] = array(
    'bundle' => 'field_fc_card_collaborations',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'card_teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 200,
        ),
        'type' => 'text_trimmed',
        'weight' => 2,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'div',
    'field_name' => 'field_text_description',
    'label' => 'Description',
    'required' => 0,
    'rubik_edit_field_display' => 'default',
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_fc_card_collaborations-field_text_fc_title'.
  $field_instances['field_collection_item-field_fc_card_collaborations-field_text_fc_title'] = array(
    'bundle' => 'field_fc_card_collaborations',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'card_teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'h2',
    'field_name' => 'field_text_fc_title',
    'label' => 'Título',
    'required' => 1,
    'rubik_edit_field_display' => 'default',
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_fc_cards_projects-field_date_period'.
  $field_instances['field_collection_item-field_fc_cards_projects-field_date_period'] = array(
    'bundle' => 'field_fc_cards_projects',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'card_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'section',
    'field_name' => 'field_date_period',
    'label' => 'Period',
    'required' => 0,
    'rubik_edit_field_display' => 'default',
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'M j Y - g:i:sa',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_fc_cards_projects-field_img_main'.
  $field_instances['field_collection_item-field_fc_cards_projects-field_img_main'] = array(
    'bundle' => 'field_fc_cards_projects',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'card_teaser' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'content',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'div',
    'field_name' => 'field_img_main',
    'label' => 'Photo',
    'required' => 0,
    'rubik_edit_field_display' => 'default',
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'filefield_sources' => array(
          'filefield_sources' => array(
            'attach' => 0,
            'clipboard' => 0,
            'imce' => 0,
            'plupload' => 0,
            'reference' => 0,
            'remote' => 0,
            'upload' => 'upload',
          ),
          'source_attach' => array(
            'absolute' => 0,
            'attach_mode' => 'move',
            'path' => 'file_attach',
          ),
          'source_imce' => array(
            'imce_mode' => 0,
          ),
          'source_reference' => array(
            'autocomplete' => 0,
            'search_all_fields' => 0,
          ),
        ),
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_fc_cards_projects-field_link_featured_content'.
  $field_instances['field_collection_item-field_fc_cards_projects-field_link_featured_content'] = array(
    'bundle' => 'field_fc_cards_projects',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'card_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 4,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'div',
    'field_name' => 'field_link_featured_content',
    'label' => 'Featured content',
    'required' => 0,
    'rubik_edit_field_display' => 'default',
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'linkit' => array(
        'button_text' => 'Buscar',
        'enable' => 1,
        'profile' => 'fields_internal_external',
      ),
      'rel_remove' => 'default',
      'title' => 'required',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_fc_cards_projects-field_text_description'.
  $field_instances['field_collection_item-field_fc_cards_projects-field_text_description'] = array(
    'bundle' => 'field_fc_cards_projects',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'card_teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 200,
        ),
        'type' => 'text_trimmed',
        'weight' => 2,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'section',
    'field_name' => 'field_text_description',
    'label' => 'Description',
    'required' => 0,
    'rubik_edit_field_display' => 'default',
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Buscar',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_fc_cards_projects-field_text_fc_title'.
  $field_instances['field_collection_item-field_fc_cards_projects-field_text_fc_title'] = array(
    'bundle' => 'field_fc_cards_projects',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'card_teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'div',
    'field_name' => 'field_text_fc_title',
    'label' => 'Título',
    'required' => 1,
    'rubik_edit_field_display' => 'default',
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Buscar',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_fc_researcher-field_eref_school'.
  $field_instances['field_collection_item-field_fc_researcher-field_eref_school'] = array(
    'bundle' => 'field_fc_researcher',
    'default_value' => NULL,
    'default_value_function' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'card_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 4,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'div',
    'field_name' => 'field_eref_school',
    'label' => 'Associated school',
    'required' => 0,
    'rubik_edit_field_display' => 'rubik_sidebar_field',
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'status' => 0,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete_tags',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_fc_researcher-field_img_main'.
  $field_instances['field_collection_item-field_fc_researcher-field_img_main'] = array(
    'bundle' => 'field_fc_researcher',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'card_teaser' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'content',
          'image_style' => 'teaser',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'colorbox',
        'settings' => array(
          'colorbox_caption' => 'auto',
          'colorbox_caption_custom' => '',
          'colorbox_gallery' => 'post',
          'colorbox_gallery_custom' => '',
          'colorbox_image_style' => '',
          'colorbox_multivalue_index' => NULL,
          'colorbox_node_style' => '',
          'colorbox_node_style_first' => '',
        ),
        'type' => 'colorbox',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'div',
    'field_name' => 'field_img_main',
    'label' => 'Main image',
    'required' => 1,
    'rubik_edit_field_display' => 'rubik_sidebar_field',
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'filefield_sources' => array(
          'filefield_sources' => array(
            'attach' => 0,
            'clipboard' => 0,
            'imce' => 0,
            'plupload' => 0,
            'reference' => 0,
            'remote' => 0,
            'upload' => 'upload',
          ),
          'source_attach' => array(
            'absolute' => 0,
            'attach_mode' => 'move',
            'path' => 'file_attach',
          ),
          'source_imce' => array(
            'imce_mode' => 0,
          ),
          'source_reference' => array(
            'autocomplete' => 0,
            'search_all_fields' => 0,
          ),
        ),
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_fc_researcher-field_link_featured_content'.
  $field_instances['field_collection_item-field_fc_researcher-field_link_featured_content'] = array(
    'bundle' => 'field_fc_researcher',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'card_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'div',
    'field_name' => 'field_link_featured_content',
    'label' => 'Featured content',
    'required' => 0,
    'rubik_edit_field_display' => 'rubik_sidebar_field',
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 1,
        'profile' => 'fields_internal_external',
      ),
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_fc_researcher-field_parg_sidebar_items'.
  $field_instances['field_collection_item-field_fc_researcher-field_parg_sidebar_items'] = array(
    'bundle' => 'field_fc_researcher',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'card_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'div',
    'field_name' => 'field_parg_sidebar_items',
    'label' => 'Sidebar items',
    'required' => 0,
    'rubik_edit_field_display' => 'default',
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        'banner' => -1,
        'call' => -1,
        'paragraph_banks_and_atms' => -1,
        'paragraph_bicicletas' => -1,
        'paragraph_buses' => -1,
        'paragraph_cta' => -1,
        'paragraph_document' => -1,
        'paragraph_embedded_document' => -1,
        'paragraph_event' => -1,
        'paragraph_faq' => -1,
        'paragraph_feeding' => -1,
        'paragraph_gallery' => -1,
        'paragraph_image' => -1,
        'paragraph_links' => 'paragraph_links',
        'paragraph_organizations' => -1,
        'paragraph_other_services' => -1,
        'paragraph_quote' => -1,
        'paragraph_related' => -1,
        'paragraph_researcher' => -1,
        'paragraph_soundcloud_audio' => -1,
        'paragraph_text' => -1,
        'paragraph_train' => -1,
        'paragraph_video' => -1,
      ),
      'bundle_weights' => array(
        'banner' => 2,
        'call' => 3,
        'paragraph_banks_and_atms' => 4,
        'paragraph_bicicletas' => 5,
        'paragraph_buses' => 6,
        'paragraph_cta' => 7,
        'paragraph_document' => 8,
        'paragraph_embedded_document' => 9,
        'paragraph_event' => 10,
        'paragraph_faq' => 11,
        'paragraph_feeding' => 12,
        'paragraph_gallery' => 13,
        'paragraph_image' => 14,
        'paragraph_links' => 15,
        'paragraph_organizations' => 16,
        'paragraph_other_services' => 17,
        'paragraph_quote' => 18,
        'paragraph_related' => 19,
        'paragraph_researcher' => 20,
        'paragraph_soundcloud_audio' => 21,
        'paragraph_text' => 22,
        'paragraph_train' => 23,
        'paragraph_video' => 24,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Paragraph',
      'title_multiple' => 'Paragraphs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_fc_researcher-field_relation_coordinator'.
  $field_instances['field_collection_item-field_fc_researcher-field_relation_coordinator'] = array(
    'bundle' => 'field_fc_researcher',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'card_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'relation_add',
        'settings' => array(),
        'type' => 'relation_add_endpoints_and_fields',
        'weight' => 6,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'section',
    'field_name' => 'field_relation_coordinator',
    'label' => 'Coordinator',
    'required' => 0,
    'rubik_edit_field_display' => 'default',
    'settings' => array(
      'relation_target_bundles' => array(),
      'relation_type' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'relation_add',
      'settings' => array(
        'relation_endpoint_bundle_display' => 0,
        'relation_endpoint_custom_label' => '',
        'relation_endpoint_iso_language_codes' => 0,
        'relation_endpoint_label' => 'endpoint',
        'relation_endpoint_label_delta' => 0,
        'relation_endpoint_search_by_id' => 0,
      ),
      'type' => 'relation_add',
      'weight' => 9,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_fc_researcher-field_text_description'.
  $field_instances['field_collection_item-field_fc_researcher-field_text_description'] = array(
    'bundle' => 'field_fc_researcher',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'card_teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 200,
        ),
        'type' => 'text_trimmed',
        'weight' => 2,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'div',
    'field_name' => 'field_text_description',
    'label' => 'Description',
    'required' => 0,
    'rubik_edit_field_display' => 'default',
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_fc_researcher-field_text_fc_title'.
  $field_instances['field_collection_item-field_fc_researcher-field_text_fc_title'] = array(
    'bundle' => 'field_fc_researcher',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'card_teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'h2',
    'field_name' => 'field_text_fc_title',
    'label' => 'Título',
    'required' => 1,
    'rubik_edit_field_display' => 'default',
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Buscar',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-research_program-body'.
  $field_instances['node-research_program-body'] = array(
    'bundle' => 'research_program',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-research_program-field_bool_vie_program'.
  $field_instances['node-research_program-field_bool_vie_program'] = array(
    'bundle' => 'research_program',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_bool_vie_program',
    'label' => 'VIE Program',
    'required' => 0,
    'rubik_edit_field_display' => 'default',
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-research_program-field_eref_parent_node'.
  $field_instances['node-research_program-field_eref_parent_node'] = array(
    'bundle' => 'research_program',
    'default_value' => NULL,
    'default_value_function' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_eref_parent_node',
    'label' => 'Parent Node',
    'required' => 0,
    'rubik_edit_field_display' => 'rubik_sidebar_field',
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'status' => 0,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'references_dialog_add' => 0,
        'references_dialog_edit' => 0,
        'references_dialog_search' => 0,
        'references_dialog_search_view' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 19,
    ),
  );

  // Exported field_instance:
  // 'node-research_program-field_fc_card_collaborations'.
  $field_instances['node-research_program-field_fc_card_collaborations'] = array(
    'bundle' => 'research_program',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_fields',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_fc_card_collaborations',
    'label' => 'Collaborations',
    'required' => 0,
    'rubik_edit_field_display' => 'default',
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-research_program-field_fc_cards_projects'.
  $field_instances['node-research_program-field_fc_cards_projects'] = array(
    'bundle' => 'research_program',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_fields',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_fc_cards_projects',
    'label' => 'Project Cards',
    'required' => 0,
    'rubik_edit_field_display' => 'default',
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-research_program-field_fc_researcher'.
  $field_instances['node-research_program-field_fc_researcher'] = array(
    'bundle' => 'research_program',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_fields',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_fc_researcher',
    'label' => 'Researcher',
    'required' => 0,
    'rubik_edit_field_display' => 'default',
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'node-research_program-field_link_featured_content'.
  $field_instances['node-research_program-field_link_featured_content'] = array(
    'bundle' => 'research_program',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_link_featured_content',
    'label' => 'Featured content',
    'required' => 0,
    'rubik_edit_field_display' => 'rubik_sidebar_field',
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'linkit' => array(
        'button_text' => 'Buscar',
        'enable' => 1,
        'profile' => 'fields_internal_external',
      ),
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-research_program-field_link_related'.
  $field_instances['node-research_program-field_link_related'] = array(
    'bundle' => 'research_program',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_link_related',
    'label' => 'Related links',
    'required' => 0,
    'rubik_edit_field_display' => 'default',
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'linkit' => array(
        'button_text' => 'Buscar',
        'enable' => 1,
        'profile' => 'fields_internal_external',
      ),
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 9,
    ),
  );

  // Exported field_instance:
  // 'node-research_program-field_parg_additional_info'.
  $field_instances['node-research_program-field_parg_additional_info'] = array(
    'bundle' => 'research_program',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_parg_additional_info',
    'label' => 'Additional information',
    'required' => 0,
    'rubik_edit_field_display' => 'default',
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        'banner' => -1,
        'call' => -1,
        'paragraph_banks_and_atms' => -1,
        'paragraph_bicicletas' => -1,
        'paragraph_buses' => -1,
        'paragraph_cta' => 'paragraph_cta',
        'paragraph_document' => 'paragraph_document',
        'paragraph_embedded_document' => -1,
        'paragraph_event' => 'paragraph_event',
        'paragraph_faq' => 'paragraph_faq',
        'paragraph_feeding' => -1,
        'paragraph_gallery' => 'paragraph_gallery',
        'paragraph_image' => 'paragraph_image',
        'paragraph_links' => -1,
        'paragraph_other_services' => -1,
        'paragraph_quote' => -1,
        'paragraph_related' => 'paragraph_related',
        'paragraph_soundcloud_audio' => -1,
        'paragraph_text' => 'paragraph_text',
        'paragraph_train' => -1,
        'paragraph_video' => 'paragraph_video',
      ),
      'bundle_weights' => array(
        'banner' => 2,
        'call' => 3,
        'paragraph_banks_and_atms' => 4,
        'paragraph_bicicletas' => 5,
        'paragraph_buses' => 6,
        'paragraph_cta' => 7,
        'paragraph_document' => 8,
        'paragraph_embedded_document' => 9,
        'paragraph_event' => 10,
        'paragraph_faq' => 11,
        'paragraph_feeding' => 12,
        'paragraph_gallery' => 13,
        'paragraph_image' => 14,
        'paragraph_links' => 15,
        'paragraph_other_services' => 16,
        'paragraph_quote' => 17,
        'paragraph_related' => 18,
        'paragraph_soundcloud_audio' => 19,
        'paragraph_text' => 20,
        'paragraph_train' => 21,
        'paragraph_video' => 22,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Paragraph',
      'title_multiple' => 'Paragraphs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 10,
    ),
  );

  // Exported field_instance:
  // 'node-research_program-field_relation_coordinator'.
  $field_instances['node-research_program-field_relation_coordinator'] = array(
    'bundle' => 'research_program',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'relation_add',
        'settings' => array(),
        'type' => 'relation_add_endpoints_and_fields',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'section',
    'field_name' => 'field_relation_coordinator',
    'label' => 'Coordinator',
    'required' => 0,
    'rubik_edit_field_display' => 'default',
    'settings' => array(
      'relation_target_bundles' => array(
        'node:contact' => 'node:contact',
      ),
      'relation_type' => array(
        'coordinated_by' => 'coordinated_by',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'relation_add',
      'settings' => array(
        'relation_endpoint_bundle_display' => 0,
        'relation_endpoint_custom_label' => '',
        'relation_endpoint_iso_language_codes' => 0,
        'relation_endpoint_label' => 'endpoint',
        'relation_endpoint_label_delta' => 0,
        'relation_endpoint_search_by_id' => 0,
      ),
      'type' => 'relation_add',
      'weight' => 14,
    ),
  );

  // Exported field_instance:
  // 'node-research_program-field_tax_research_program_type'.
  $field_instances['node-research_program-field_tax_research_program_type'] = array(
    'bundle' => 'research_program',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'i18n_taxonomy',
        'settings' => array(),
        'type' => 'i18n_taxonomy_term_reference_link',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_tax_research_program_type',
    'label' => 'Research program type',
    'required' => 0,
    'rubik_edit_field_display' => 'rubik_sidebar_field',
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-research_program-field_text_objetivo'.
  $field_instances['node-research_program-field_text_objetivo'] = array(
    'bundle' => 'research_program',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_text_objetivo',
    'label' => 'Objectives',
    'required' => 0,
    'rubik_edit_field_display' => 'default',
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Buscar',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-research_program-field_text_research_areas'.
  $field_instances['node-research_program-field_text_research_areas'] = array(
    'bundle' => 'research_program',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_text_research_areas',
    'label' => 'Research areas',
    'required' => 0,
    'rubik_edit_field_display' => 'default',
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Buscar',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-research_program-group_group'.
  $field_instances['node-research_program-group_group'] = array(
    'bundle' => 'research_program',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'group_group',
    'label' => 'Group',
    'required' => 0,
    'rubik_edit_field_display' => 'default',
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
        'og_hide' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 7,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Additional information');
  t('Associated school');
  t('Body');
  t('Collaborations');
  t('Coordinator');
  t('Description');
  t('Featured content');
  t('Group');
  t('Main image');
  t('Objectives');
  t('Parent Node');
  t('Period');
  t('Photo');
  t('Project Cards');
  t('Related links');
  t('Research areas');
  t('Research program type');
  t('Researcher');
  t('Sidebar items');
  t('Título');
  t('VIE Program');

  return $field_instances;
}
