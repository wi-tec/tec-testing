<?php
/**
 * @file
 * feature_sub_sites_entities.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function feature_sub_sites_entities_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Predeterminado';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'subsite_project';
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'node:subsite_project:default';
  $panelizer->css_id = '';
  $panelizer->css_class = '';
  $panelizer->css = '';
  $panelizer->no_blocks = FALSE;
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $display = new panels_display();
  $display->layout = 'tec_threecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'featured' => NULL,
      'sidebar_first' => NULL,
      'main_content' => NULL,
      'sidebar_second' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '1294be25-bd2b-4cea-bce3-da97ca0bfb47';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:subsite_project:default';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-ab072fb0-54ec-4c8a-8064-958ddb6d994c';
  $pane->panel = 'main_content';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_text_description';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ab072fb0-54ec-4c8a-8064-958ddb6d994c';
  $display->content['new-ab072fb0-54ec-4c8a-8064-958ddb6d994c'] = $pane;
  $display->panels['main_content'][0] = 'new-ab072fb0-54ec-4c8a-8064-958ddb6d994c';
  $pane = new stdClass();
  $pane->pid = 'new-51547792-ace7-4e88-9b3e-3eb48c90e7a9';
  $pane->panel = 'main_content';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_parg_additional_info';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'paragraphs_view',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'view_mode' => 'full',
    ),
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'accordion-style',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '51547792-ace7-4e88-9b3e-3eb48c90e7a9';
  $display->content['new-51547792-ace7-4e88-9b3e-3eb48c90e7a9'] = $pane;
  $display->panels['main_content'][1] = 'new-51547792-ace7-4e88-9b3e-3eb48c90e7a9';
  $pane = new stdClass();
  $pane->pid = 'new-5acc2600-a225-4ef4-a07f-259c1728a3e2';
  $pane->panel = 'main_content';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_video_embed';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'video_embed_field',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'description' => 1,
      'description_position' => 'bottom',
      'video_style' => 'normal',
    ),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '5acc2600-a225-4ef4-a07f-259c1728a3e2';
  $display->content['new-5acc2600-a225-4ef4-a07f-259c1728a3e2'] = $pane;
  $display->panels['main_content'][2] = 'new-5acc2600-a225-4ef4-a07f-259c1728a3e2';
  $pane = new stdClass();
  $pane->pid = 'new-1f5a18c4-cdaa-4c9b-87dd-ecdcef2b64ca';
  $pane->panel = 'main_content';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_img_gallery';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'slick',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'asnavfor_auto' => 1,
      'asnavfor_main' => '',
      'asnavfor_thumbnail' => '',
      'aspect_ratio' => '',
      'cache' => '',
      'color_field' => '',
      'colorbox_style' => 'colorbox',
      'current_display' => 'main',
      'current_view_mode' => 'default',
      'grid' => '',
      'grid_medium' => '',
      'grid_small' => '',
      'iframe_lazy' => FALSE,
      'image_style' => 'node',
      'lightbox_ready' => FALSE,
      'markup' => 0,
      'media_switch' => 'colorbox-switch',
      'mousewheel' => 0,
      'nested_optionset' => '',
      'nested_slick' => FALSE,
      'nested_style' => '',
      'optionset' => 'slick_for',
      'optionset_thumbnail' => 'slick_nav',
      'overridables' => array(
        'arrows' => 0,
        'autoplay' => 0,
        'dots' => 0,
        'draggable' => 0,
      ),
      'override' => 0,
      'picture' => FALSE,
      'picture_fallback' => '',
      'picture_ready' => FALSE,
      'picture_style' => '',
      'preserve_keys' => FALSE,
      'skin' => 'default',
      'skin_arrows' => '',
      'skin_dots' => '',
      'skin_thumbnail' => 'asnavfor',
      'slide_caption' => array(
        'alt_field' => 'alt_field',
        'title_field' => 'title_field',
      ),
      'slide_classes' => '',
      'slide_image' => '',
      'slide_layout' => 'stage-zebra',
      'slide_link' => '',
      'slide_overlay' => array(),
      'slide_title' => '',
      'thumbnail_caption' => '',
      'thumbnail_hover' => 0,
      'thumbnail_style' => 'thumb',
      'type' => '',
      'use_ajax' => FALSE,
      'view_mode' => '',
      'visible_slides' => '',
    ),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '1f5a18c4-cdaa-4c9b-87dd-ecdcef2b64ca';
  $display->content['new-1f5a18c4-cdaa-4c9b-87dd-ecdcef2b64ca'] = $pane;
  $display->panels['main_content'][3] = 'new-1f5a18c4-cdaa-4c9b-87dd-ecdcef2b64ca';
  $pane = new stdClass();
  $pane->pid = 'new-7f39cec7-67f8-4064-9947-964215b1636e';
  $pane->panel = 'sidebar_first';
  $pane->type = 'block';
  $pane->subtype = 'menu_block-1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7f39cec7-67f8-4064-9947-964215b1636e';
  $display->content['new-7f39cec7-67f8-4064-9947-964215b1636e'] = $pane;
  $display->panels['sidebar_first'][0] = 'new-7f39cec7-67f8-4064-9947-964215b1636e';
  $pane = new stdClass();
  $pane->pid = 'new-14d6ad6d-07f6-4e42-94e7-739454b6076c';
  $pane->panel = 'sidebar_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_img_main';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_link' => '',
      'image_style' => '',
    ),
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '14d6ad6d-07f6-4e42-94e7-739454b6076c';
  $display->content['new-14d6ad6d-07f6-4e42-94e7-739454b6076c'] = $pane;
  $display->panels['sidebar_second'][0] = 'new-14d6ad6d-07f6-4e42-94e7-739454b6076c';
  $pane = new stdClass();
  $pane->pid = 'new-a7592c04-e04a-4b6b-addb-f2f5753de35a';
  $pane->panel = 'sidebar_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_parg_featured_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'paragraphs_view',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'view_mode' => 'full',
    ),
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'a7592c04-e04a-4b6b-addb-f2f5753de35a';
  $display->content['new-a7592c04-e04a-4b6b-addb-f2f5753de35a'] = $pane;
  $display->panels['sidebar_second'][1] = 'new-a7592c04-e04a-4b6b-addb-f2f5753de35a';
  $pane = new stdClass();
  $pane->pid = 'new-68df50b0-2e56-44c7-bcbc-674ed5e670f5';
  $pane->panel = 'sidebar_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_file_attachment';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'file_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '68df50b0-2e56-44c7-bcbc-674ed5e670f5';
  $display->content['new-68df50b0-2e56-44c7-bcbc-674ed5e670f5'] = $pane;
  $display->panels['sidebar_second'][2] = 'new-68df50b0-2e56-44c7-bcbc-674ed5e670f5';
  $pane = new stdClass();
  $pane->pid = 'new-e33f2631-2ac8-4598-bcaf-f314fbb71955';
  $pane->panel = 'sidebar_second';
  $pane->type = 'views_panes';
  $pane->subtype = 'news_article_per_dependency-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'e33f2631-2ac8-4598-bcaf-f314fbb71955';
  $display->content['new-e33f2631-2ac8-4598-bcaf-f314fbb71955'] = $pane;
  $display->panels['sidebar_second'][3] = 'new-e33f2631-2ac8-4598-bcaf-f314fbb71955';
  $pane = new stdClass();
  $pane->pid = 'new-d3961c85-389d-40e3-b690-3eeb6784faf9';
  $pane->panel = 'sidebar_second';
  $pane->type = 'views_panes';
  $pane->subtype = 'relation_unit_administrative_contacts-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'd3961c85-389d-40e3-b690-3eeb6784faf9';
  $display->content['new-d3961c85-389d-40e3-b690-3eeb6784faf9'] = $pane;
  $display->panels['sidebar_second'][4] = 'new-d3961c85-389d-40e3-b690-3eeb6784faf9';
  $pane = new stdClass();
  $pane->pid = 'new-3e0360d6-de51-4f69-a1ae-32231ac29cee';
  $pane->panel = 'sidebar_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_link_related';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'link_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '3e0360d6-de51-4f69-a1ae-32231ac29cee';
  $display->content['new-3e0360d6-de51-4f69-a1ae-32231ac29cee'] = $pane;
  $display->panels['sidebar_second'][5] = 'new-3e0360d6-de51-4f69-a1ae-32231ac29cee';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:subsite_project:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Predeterminado';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'subsite_research_program';
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'node:subsite_research_program:default';
  $panelizer->css_id = '';
  $panelizer->css_class = '';
  $panelizer->css = '';
  $panelizer->no_blocks = FALSE;
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $display = new panels_display();
  $display->layout = 'tec_threecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'featured' => NULL,
      'sidebar_first' => NULL,
      'main_content' => NULL,
      'sidebar_second' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'cc1da4f6-135d-4d38-a929-9d52fd810d32';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:subsite_research_program:default';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-e22ce1c6-d587-4678-90a2-13d11ea9ef44';
  $pane->panel = 'main_content';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e22ce1c6-d587-4678-90a2-13d11ea9ef44';
  $display->content['new-e22ce1c6-d587-4678-90a2-13d11ea9ef44'] = $pane;
  $display->panels['main_content'][0] = 'new-e22ce1c6-d587-4678-90a2-13d11ea9ef44';
  $pane = new stdClass();
  $pane->pid = 'new-b8d7e3f9-7a19-4c96-b944-a70b0d0e5649';
  $pane->panel = 'main_content';
  $pane->type = 'views_panes';
  $pane->subtype = 'mission_vision_values_per_node-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'b8d7e3f9-7a19-4c96-b944-a70b0d0e5649';
  $display->content['new-b8d7e3f9-7a19-4c96-b944-a70b0d0e5649'] = $pane;
  $display->panels['main_content'][1] = 'new-b8d7e3f9-7a19-4c96-b944-a70b0d0e5649';
  $pane = new stdClass();
  $pane->pid = 'new-159ac553-5759-477a-ae19-ff6026734b64';
  $pane->panel = 'sidebar_first';
  $pane->type = 'block';
  $pane->subtype = 'menu_block-1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '159ac553-5759-477a-ae19-ff6026734b64';
  $display->content['new-159ac553-5759-477a-ae19-ff6026734b64'] = $pane;
  $display->panels['sidebar_first'][0] = 'new-159ac553-5759-477a-ae19-ff6026734b64';
  $pane = new stdClass();
  $pane->pid = 'new-b6d1fd65-2bc8-4f38-8961-0b1d6220d046';
  $pane->panel = 'sidebar_first';
  $pane->type = 'block';
  $pane->subtype = 'menu_block-3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'b6d1fd65-2bc8-4f38-8961-0b1d6220d046';
  $display->content['new-b6d1fd65-2bc8-4f38-8961-0b1d6220d046'] = $pane;
  $display->panels['sidebar_first'][1] = 'new-b6d1fd65-2bc8-4f38-8961-0b1d6220d046';
  $pane = new stdClass();
  $pane->pid = 'new-7d3ee615-1429-4b6d-a9fd-4926e48c7c27';
  $pane->panel = 'sidebar_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_link_featured_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'link_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7d3ee615-1429-4b6d-a9fd-4926e48c7c27';
  $display->content['new-7d3ee615-1429-4b6d-a9fd-4926e48c7c27'] = $pane;
  $display->panels['sidebar_second'][0] = 'new-7d3ee615-1429-4b6d-a9fd-4926e48c7c27';
  $pane = new stdClass();
  $pane->pid = 'new-e60d9369-53f6-4b30-944c-c3a9c4b23ee1';
  $pane->panel = 'sidebar_second';
  $pane->type = 'node_links';
  $pane->subtype = 'node_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => FALSE,
    'override_title_text' => '',
    'build_mode' => 'page_manager',
    'identifier' => '',
    'link' => TRUE,
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'link-wrapper',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'e60d9369-53f6-4b30-944c-c3a9c4b23ee1';
  $display->content['new-e60d9369-53f6-4b30-944c-c3a9c4b23ee1'] = $pane;
  $display->panels['sidebar_second'][1] = 'new-e60d9369-53f6-4b30-944c-c3a9c4b23ee1';
  $pane = new stdClass();
  $pane->pid = 'new-5bc4e70d-3c0c-4aa7-991b-46893b0d7866';
  $pane->panel = 'sidebar_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_link_related';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'link_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '5bc4e70d-3c0c-4aa7-991b-46893b0d7866';
  $display->content['new-5bc4e70d-3c0c-4aa7-991b-46893b0d7866'] = $pane;
  $display->panels['sidebar_second'][2] = 'new-5bc4e70d-3c0c-4aa7-991b-46893b0d7866';
  $pane = new stdClass();
  $pane->pid = 'new-391319f9-0ebb-4c13-a12b-781cf7ad4497';
  $pane->panel = 'sidebar_second';
  $pane->type = 'views_panes';
  $pane->subtype = 'relation_unit_administrative_contacts-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '391319f9-0ebb-4c13-a12b-781cf7ad4497';
  $display->content['new-391319f9-0ebb-4c13-a12b-781cf7ad4497'] = $pane;
  $display->panels['sidebar_second'][3] = 'new-391319f9-0ebb-4c13-a12b-781cf7ad4497';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-e22ce1c6-d587-4678-90a2-13d11ea9ef44';
  $panelizer->display = $display;
  $export['node:subsite_research_program:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Predeterminado';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'teacher';
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'node:teacher:default';
  $panelizer->css_id = '';
  $panelizer->css_class = '';
  $panelizer->css = '';
  $panelizer->no_blocks = TRUE;
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $display = new panels_display();
  $display->layout = 'tec_threecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'featured' => NULL,
      'sidebar_first' => NULL,
      'main_content' => NULL,
      'sidebar_second' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '8961179e-991c-4b9c-8e0d-e0a38582c333';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:teacher:default';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-82456361-4932-4650-90d4-6ad5f5550e08';
  $pane->panel = 'main_content';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_eref_school';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'entityreference_label',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'link' => 1,
    ),
    'context' => 'panelizer',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '82456361-4932-4650-90d4-6ad5f5550e08';
  $display->content['new-82456361-4932-4650-90d4-6ad5f5550e08'] = $pane;
  $display->panels['main_content'][0] = 'new-82456361-4932-4650-90d4-6ad5f5550e08';
  $pane = new stdClass();
  $pane->pid = 'new-af7b9b72-fd6b-4e4c-a201-e7926f4015dc';
  $pane->panel = 'main_content';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_text_description';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'af7b9b72-fd6b-4e4c-a201-e7926f4015dc';
  $display->content['new-af7b9b72-fd6b-4e4c-a201-e7926f4015dc'] = $pane;
  $display->panels['main_content'][1] = 'new-af7b9b72-fd6b-4e4c-a201-e7926f4015dc';
  $pane = new stdClass();
  $pane->pid = 'new-f0cc5622-280a-49b6-81b0-3a57005f2939';
  $pane->panel = 'main_content';
  $pane->type = 'views_panes';
  $pane->subtype = 'mission_vision_values_per_node-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'f0cc5622-280a-49b6-81b0-3a57005f2939';
  $display->content['new-f0cc5622-280a-49b6-81b0-3a57005f2939'] = $pane;
  $display->panels['main_content'][2] = 'new-f0cc5622-280a-49b6-81b0-3a57005f2939';
  $pane = new stdClass();
  $pane->pid = 'new-3412937b-93c6-4bdf-89fd-9b3cf144d310';
  $pane->panel = 'sidebar_first';
  $pane->type = 'block';
  $pane->subtype = 'menu_block-1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '3412937b-93c6-4bdf-89fd-9b3cf144d310';
  $display->content['new-3412937b-93c6-4bdf-89fd-9b3cf144d310'] = $pane;
  $display->panels['sidebar_first'][0] = 'new-3412937b-93c6-4bdf-89fd-9b3cf144d310';
  $pane = new stdClass();
  $pane->pid = 'new-3f4b5c8f-2e55-4224-958f-a4e08eb67aca';
  $pane->panel = 'sidebar_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_img_main';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_link' => '',
      'image_style' => 'medium',
    ),
    'context' => 'panelizer',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '3f4b5c8f-2e55-4224-958f-a4e08eb67aca';
  $display->content['new-3f4b5c8f-2e55-4224-958f-a4e08eb67aca'] = $pane;
  $display->panels['sidebar_second'][0] = 'new-3f4b5c8f-2e55-4224-958f-a4e08eb67aca';
  $pane = new stdClass();
  $pane->pid = 'new-53e2f953-9794-4e1c-896d-467aaf83c74c';
  $pane->panel = 'sidebar_second';
  $pane->type = 'views_panes';
  $pane->subtype = 'contacts_professor_contact-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '53e2f953-9794-4e1c-896d-467aaf83c74c';
  $display->content['new-53e2f953-9794-4e1c-896d-467aaf83c74c'] = $pane;
  $display->panels['sidebar_second'][1] = 'new-53e2f953-9794-4e1c-896d-467aaf83c74c';
  $pane = new stdClass();
  $pane->pid = 'new-4c361dbb-d889-48a7-91b3-ba7d074d51d8';
  $pane->panel = 'sidebar_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_link_social_networks';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'link_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '4c361dbb-d889-48a7-91b3-ba7d074d51d8';
  $display->content['new-4c361dbb-d889-48a7-91b3-ba7d074d51d8'] = $pane;
  $display->panels['sidebar_second'][2] = 'new-4c361dbb-d889-48a7-91b3-ba7d074d51d8';
  $pane = new stdClass();
  $pane->pid = 'new-1ee0f4d2-3eac-4ec7-8085-f5608df676fe';
  $pane->panel = 'sidebar_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_link_related';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'link_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '1ee0f4d2-3eac-4ec7-8085-f5608df676fe';
  $display->content['new-1ee0f4d2-3eac-4ec7-8085-f5608df676fe'] = $pane;
  $display->panels['sidebar_second'][3] = 'new-1ee0f4d2-3eac-4ec7-8085-f5608df676fe';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:teacher:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'taxonomy_term';
  $panelizer->panelizer_key = 'research_program_type';
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'taxonomy_term:research_program_type:default';
  $panelizer->css_id = '';
  $panelizer->css_class = '';
  $panelizer->css = '';
  $panelizer->no_blocks = FALSE;
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $display = new panels_display();
  $display->layout = 'tec_threecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'featured' => NULL,
      'sidebar_first' => NULL,
      'main_content' => NULL,
      'sidebar_second' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a8580c0b-a6ba-499a-9719-ed2307fcca57';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'taxonomy_term:research_program_type:default';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['taxonomy_term:research_program_type:default'] = $panelizer;

  return $export;
}
