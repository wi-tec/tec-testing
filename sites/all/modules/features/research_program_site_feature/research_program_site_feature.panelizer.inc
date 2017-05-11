<?php
/**
 * @file
 * research_program_site_feature.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function research_program_site_feature_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Predeterminado';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'research_program';
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'node:research_program:default';
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
  $display->title = '%node:title';
  $display->uuid = 'cc1da4f6-135d-4d38-a929-9d52fd810d32';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:research_program:default';
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
  $export['node:research_program:default'] = $panelizer;

  return $export;
}
