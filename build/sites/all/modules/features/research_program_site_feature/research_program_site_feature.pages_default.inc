<?php
/**
 * @file
 * research_program_site_feature.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function research_program_site_feature_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'entity_panels_field_collection_item_field_fc_card_collaborations_full__panel_context_d83fbb1b-c611-4d34-8631-44fc919deba3';
  $handler->task = 'entity_panels';
  $handler->subtask = 'field_collection_item-field_fc_card_collaborations-full';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'collaboration',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'programa-investigacion/*/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'grupo-investigacion/*/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
    ),
  );
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
  $display->title = '%field_collection_item:field-text-fc-title';
  $display->uuid = 'd83bdc95-007f-4307-8dc6-a7eefa6e0ab6';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'entity_panels_field_collection_item_field_fc_card_collaborations_full__panel_context_d83fbb1b-c611-4d34-8631-44fc919deba3';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-4ffd7c4f-ee47-4bc7-b320-e5447183f39d';
  $pane->panel = 'main_content';
  $pane->type = 'entity_field';
  $pane->subtype = 'field_collection_item:field_text_description';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_panels_entity_id:field_collection_item_1',
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
  $pane->uuid = '4ffd7c4f-ee47-4bc7-b320-e5447183f39d';
  $display->content['new-4ffd7c4f-ee47-4bc7-b320-e5447183f39d'] = $pane;
  $display->panels['main_content'][0] = 'new-4ffd7c4f-ee47-4bc7-b320-e5447183f39d';
  $pane = new stdClass();
  $pane->pid = 'new-b793ce58-3cfa-47b7-8c0b-8f812883e067';
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
  $pane->uuid = 'b793ce58-3cfa-47b7-8c0b-8f812883e067';
  $display->content['new-b793ce58-3cfa-47b7-8c0b-8f812883e067'] = $pane;
  $display->panels['sidebar_first'][0] = 'new-b793ce58-3cfa-47b7-8c0b-8f812883e067';
  $pane = new stdClass();
  $pane->pid = 'new-591f1104-654d-4f84-86ad-7fb028e1ab79';
  $pane->panel = 'sidebar_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'field_collection_item:field_img_main';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => '',
      'image_link' => '',
    ),
    'context' => 'argument_entity_panels_entity_id:field_collection_item_1',
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
  $pane->uuid = '591f1104-654d-4f84-86ad-7fb028e1ab79';
  $display->content['new-591f1104-654d-4f84-86ad-7fb028e1ab79'] = $pane;
  $display->panels['sidebar_second'][0] = 'new-591f1104-654d-4f84-86ad-7fb028e1ab79';
  $pane = new stdClass();
  $pane->pid = 'new-d3794f36-d027-4f39-822d-5fd846d36414';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'd3794f36-d027-4f39-822d-5fd846d36414';
  $display->content['new-d3794f36-d027-4f39-822d-5fd846d36414'] = $pane;
  $display->panels['sidebar_second'][1] = 'new-d3794f36-d027-4f39-822d-5fd846d36414';
  $pane = new stdClass();
  $pane->pid = 'new-e1b86de4-c613-42c1-9bed-eaa7764654a3';
  $pane->panel = 'sidebar_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'field_collection_item:field_link_related';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'link_default',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_panels_entity_id:field_collection_item_1',
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'e1b86de4-c613-42c1-9bed-eaa7764654a3';
  $display->content['new-e1b86de4-c613-42c1-9bed-eaa7764654a3'] = $pane;
  $display->panels['sidebar_second'][2] = 'new-e1b86de4-c613-42c1-9bed-eaa7764654a3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['entity_panels_field_collection_item_field_fc_card_collaborations_full__panel_context_d83fbb1b-c611-4d34-8631-44fc919deba3'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'entity_panels_field_collection_item_field_fc_cards_projects_default__panel_context_3d6eaa30-8d65-4457-927a-ce29fb6fb0dc';
  $handler->task = 'entity_panels';
  $handler->subtask = 'field_collection_item-field_fc_cards_projects-default';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Variante1',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'docentes/*/',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'tec_onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'featured' => NULL,
      'main_above' => NULL,
      'main_content' => NULL,
      'main_below' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '371c4899-bb97-4704-bc92-0b0ac5ccb758';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'entity_panels_field_collection_item_field_fc_cards_projects_default__panel_context_3d6eaa30-8d65-4457-927a-ce29fb6fb0dc';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-3ad68672-0b58-4e35-9afe-1f63f1129095';
  $pane->panel = 'main_content';
  $pane->type = 'entity_field';
  $pane->subtype = 'field_collection_item:field_text_fc_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_panels_entity_id:field_collection_item_1',
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
  $pane->uuid = '3ad68672-0b58-4e35-9afe-1f63f1129095';
  $display->content['new-3ad68672-0b58-4e35-9afe-1f63f1129095'] = $pane;
  $display->panels['main_content'][0] = 'new-3ad68672-0b58-4e35-9afe-1f63f1129095';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-3ad68672-0b58-4e35-9afe-1f63f1129095';
  $handler->conf['display'] = $display;
  $export['entity_panels_field_collection_item_field_fc_cards_projects_default__panel_context_3d6eaa30-8d65-4457-927a-ce29fb6fb0dc'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'entity_panels_field_collection_item_field_fc_cards_projects_default__panel_context_a3336f24-160c-4bad-9beb-1c9bbc2e2b23';
  $handler->task = 'entity_panels';
  $handler->subtask = 'field_collection_item-field_fc_cards_projects-default';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Variante2',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'docentes/*/investigacion/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
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
  $display->title = '%field_collection_item:field-text-fc-title';
  $display->uuid = 'cf4b9482-c186-40cb-89f9-88de045240a7';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'entity_panels_field_collection_item_field_fc_cards_projects_default__panel_context_a3336f24-160c-4bad-9beb-1c9bbc2e2b23';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-19140f6e-5d40-4a20-abce-e672fb63a816';
  $pane->panel = 'main_content';
  $pane->type = 'entity_field';
  $pane->subtype = 'field_collection_item:field_date_period';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'date_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'format_type' => 'panopoly_day',
      'multiple_number' => '',
      'multiple_from' => '',
      'multiple_to' => '',
      'fromto' => 'both',
      'show_remaining_days' => 0,
    ),
    'context' => 'argument_entity_panels_entity_id:field_collection_item_1',
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
  $pane->uuid = '19140f6e-5d40-4a20-abce-e672fb63a816';
  $display->content['new-19140f6e-5d40-4a20-abce-e672fb63a816'] = $pane;
  $display->panels['main_content'][0] = 'new-19140f6e-5d40-4a20-abce-e672fb63a816';
  $pane = new stdClass();
  $pane->pid = 'new-3539449d-3701-452c-b2ea-88139704663b';
  $pane->panel = 'main_content';
  $pane->type = 'entity_field';
  $pane->subtype = 'field_collection_item:field_text_description';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_panels_entity_id:field_collection_item_1',
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
  $pane->uuid = '3539449d-3701-452c-b2ea-88139704663b';
  $display->content['new-3539449d-3701-452c-b2ea-88139704663b'] = $pane;
  $display->panels['main_content'][1] = 'new-3539449d-3701-452c-b2ea-88139704663b';
  $pane = new stdClass();
  $pane->pid = 'new-ee38e059-362b-4577-82f2-21f5d5747955';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ee38e059-362b-4577-82f2-21f5d5747955';
  $display->content['new-ee38e059-362b-4577-82f2-21f5d5747955'] = $pane;
  $display->panels['sidebar_first'][0] = 'new-ee38e059-362b-4577-82f2-21f5d5747955';
  $pane = new stdClass();
  $pane->pid = 'new-ef190ebd-934b-4524-884b-2d0442a5c32a';
  $pane->panel = 'sidebar_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'field_collection_item:field_img_main';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => 'medium',
      'image_link' => '',
    ),
    'context' => 'argument_entity_panels_entity_id:field_collection_item_1',
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
  $pane->uuid = 'ef190ebd-934b-4524-884b-2d0442a5c32a';
  $display->content['new-ef190ebd-934b-4524-884b-2d0442a5c32a'] = $pane;
  $display->panels['sidebar_second'][0] = 'new-ef190ebd-934b-4524-884b-2d0442a5c32a';
  $pane = new stdClass();
  $pane->pid = 'new-d334a218-35d2-4601-90f1-ab4c99c7217b';
  $pane->panel = 'sidebar_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'field_collection_item:field_link_featured_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'link_default',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_panels_entity_id:field_collection_item_1',
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
  $pane->uuid = 'd334a218-35d2-4601-90f1-ab4c99c7217b';
  $display->content['new-d334a218-35d2-4601-90f1-ab4c99c7217b'] = $pane;
  $display->panels['sidebar_second'][1] = 'new-d334a218-35d2-4601-90f1-ab4c99c7217b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['entity_panels_field_collection_item_field_fc_cards_projects_default__panel_context_a3336f24-160c-4bad-9beb-1c9bbc2e2b23'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'entity_panels_field_collection_item_field_fc_researcher_full__panel_context_699edb0a-ac7e-4aee-b56d-f6722c7cbdac';
  $handler->task = 'entity_panels';
  $handler->subtask = 'field_collection_item-field_fc_researcher-full';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Variante2',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'programa-investigacion/*/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'grupo-investigacion/*/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
    ),
  );
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
  $display->title = '%field_collection_item:field-text-fc-title';
  $display->uuid = 'cf4b9482-c186-40cb-89f9-88de045240a7';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'entity_panels_field_collection_item_field_fc_researcher_full__panel_context_699edb0a-ac7e-4aee-b56d-f6722c7cbdac';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-3539449d-3701-452c-b2ea-88139704663b';
  $pane->panel = 'main_content';
  $pane->type = 'entity_field';
  $pane->subtype = 'field_collection_item:field_text_description';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_panels_entity_id:field_collection_item_1',
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
  $pane->uuid = '3539449d-3701-452c-b2ea-88139704663b';
  $display->content['new-3539449d-3701-452c-b2ea-88139704663b'] = $pane;
  $display->panels['main_content'][0] = 'new-3539449d-3701-452c-b2ea-88139704663b';
  $pane = new stdClass();
  $pane->pid = 'new-4d762a78-e5ce-4b7f-a92a-dbf968977eb8';
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
  $pane->uuid = '4d762a78-e5ce-4b7f-a92a-dbf968977eb8';
  $display->content['new-4d762a78-e5ce-4b7f-a92a-dbf968977eb8'] = $pane;
  $display->panels['sidebar_first'][0] = 'new-4d762a78-e5ce-4b7f-a92a-dbf968977eb8';
  $pane = new stdClass();
  $pane->pid = 'new-13214095-a1ad-4c7a-8c19-3973b2d0cfff';
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
  $pane->uuid = '13214095-a1ad-4c7a-8c19-3973b2d0cfff';
  $display->content['new-13214095-a1ad-4c7a-8c19-3973b2d0cfff'] = $pane;
  $display->panels['sidebar_first'][1] = 'new-13214095-a1ad-4c7a-8c19-3973b2d0cfff';
  $pane = new stdClass();
  $pane->pid = 'new-ef190ebd-934b-4524-884b-2d0442a5c32a';
  $pane->panel = 'sidebar_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'field_collection_item:field_img_main';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => 'medium',
      'image_link' => '',
    ),
    'context' => 'argument_entity_panels_entity_id:field_collection_item_1',
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
  $pane->uuid = 'ef190ebd-934b-4524-884b-2d0442a5c32a';
  $display->content['new-ef190ebd-934b-4524-884b-2d0442a5c32a'] = $pane;
  $display->panels['sidebar_second'][0] = 'new-ef190ebd-934b-4524-884b-2d0442a5c32a';
  $pane = new stdClass();
  $pane->pid = 'new-d334a218-35d2-4601-90f1-ab4c99c7217b';
  $pane->panel = 'sidebar_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'field_collection_item:field_link_featured_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'link_default',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_panels_entity_id:field_collection_item_1',
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
  $pane->uuid = 'd334a218-35d2-4601-90f1-ab4c99c7217b';
  $display->content['new-d334a218-35d2-4601-90f1-ab4c99c7217b'] = $pane;
  $display->panels['sidebar_second'][1] = 'new-d334a218-35d2-4601-90f1-ab4c99c7217b';
  $pane = new stdClass();
  $pane->pid = 'new-ced6a8b5-08a2-4802-860e-3f90157c45e6';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'ced6a8b5-08a2-4802-860e-3f90157c45e6';
  $display->content['new-ced6a8b5-08a2-4802-860e-3f90157c45e6'] = $pane;
  $display->panels['sidebar_second'][2] = 'new-ced6a8b5-08a2-4802-860e-3f90157c45e6';
  $pane = new stdClass();
  $pane->pid = 'new-35e840f7-74f7-437f-a93a-8b66c7412194';
  $pane->panel = 'sidebar_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'field_collection_item:field_eref_school';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'entityreference_label',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'link' => 1,
    ),
    'context' => 'argument_entity_panels_entity_id:field_collection_item_1',
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '35e840f7-74f7-437f-a93a-8b66c7412194';
  $display->content['new-35e840f7-74f7-437f-a93a-8b66c7412194'] = $pane;
  $display->panels['sidebar_second'][3] = 'new-35e840f7-74f7-437f-a93a-8b66c7412194';
  $pane = new stdClass();
  $pane->pid = 'new-b8198b0d-de48-4dd7-b73e-833a25581184';
  $pane->panel = 'sidebar_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'field_collection_item:field_parg_sidebar_items';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'paragraphs_view',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'view_mode' => 'full',
    ),
    'context' => 'argument_entity_panels_entity_id:field_collection_item_1',
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'b8198b0d-de48-4dd7-b73e-833a25581184';
  $display->content['new-b8198b0d-de48-4dd7-b73e-833a25581184'] = $pane;
  $display->panels['sidebar_second'][4] = 'new-b8198b0d-de48-4dd7-b73e-833a25581184';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['entity_panels_field_collection_item_field_fc_researcher_full__panel_context_699edb0a-ac7e-4aee-b56d-f6722c7cbdac'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'pm_existing_pages_project_cards__panel_context_3aaead92-66cb-4c72-9e6a-e2b28f9a4e8a';
  $handler->task = 'pm_existing_pages';
  $handler->subtask = 'project_cards';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
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
  $display->title = 'Investigación';
  $display->uuid = '6ae5edb8-06a3-4a56-bc32-cdfe912f797c';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'pm_existing_pages_project_cards__panel_context_3aaead92-66cb-4c72-9e6a-e2b28f9a4e8a';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-961caff5-06bd-40ca-a847-7088cba09be2';
  $pane->panel = 'main_content';
  $pane->type = 'pm_existing_pages';
  $pane->subtype = 'pm_existing_pages';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    0 => 'task_id',
    'task_id' => 'project_cards',
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
  $pane->uuid = '961caff5-06bd-40ca-a847-7088cba09be2';
  $display->content['new-961caff5-06bd-40ca-a847-7088cba09be2'] = $pane;
  $display->panels['main_content'][0] = 'new-961caff5-06bd-40ca-a847-7088cba09be2';
  $pane = new stdClass();
  $pane->pid = 'new-859522aa-f184-49da-be5c-8c14445a7d73';
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
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '859522aa-f184-49da-be5c-8c14445a7d73';
  $display->content['new-859522aa-f184-49da-be5c-8c14445a7d73'] = $pane;
  $display->panels['sidebar_first'][0] = 'new-859522aa-f184-49da-be5c-8c14445a7d73';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['pm_existing_pages_project_cards__panel_context_3aaead92-66cb-4c72-9e6a-e2b28f9a4e8a'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'pm_existing_pages_research_program_site__objetivo';
  $handler->task = 'pm_existing_pages';
  $handler->subtask = 'research_program_site';
  $handler->handler = 'panel_context';
  $handler->weight = 3;
  $handler->conf = array(
    'title' => 'Objetivo',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Contenido',
        'keyword' => 'node',
        'name' => 'entity:node',
        'entity_id' => '14764',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'name' => 'objetivo',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => '*/objetivo',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'entity_bundle:node',
          'settings' => array(
            'type' => array(
              'research_program' => 'research_program',
            ),
          ),
          'context' => 'context_entity:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
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
  $display->title = 'Objetivos';
  $display->uuid = '1374cc21-f895-474d-a262-e012042eb453';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'pm_existing_pages_research_program_site__objetivo';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-469a0bcd-fe94-4470-bb8a-67909c008602';
  $pane->panel = 'main_content';
  $pane->type = 'pm_existing_pages';
  $pane->subtype = 'pm_existing_pages';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    0 => 'task_id',
    'task_id' => 'research_program_site',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(),
    'style' => 'semantic_panels',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '469a0bcd-fe94-4470-bb8a-67909c008602';
  $display->content['new-469a0bcd-fe94-4470-bb8a-67909c008602'] = $pane;
  $display->panels['main_content'][0] = 'new-469a0bcd-fe94-4470-bb8a-67909c008602';
  $pane = new stdClass();
  $pane->pid = 'new-e03cab89-cb09-4116-99da-51d20296b08e';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e03cab89-cb09-4116-99da-51d20296b08e';
  $display->content['new-e03cab89-cb09-4116-99da-51d20296b08e'] = $pane;
  $display->panels['sidebar_first'][0] = 'new-e03cab89-cb09-4116-99da-51d20296b08e';
  $pane = new stdClass();
  $pane->pid = 'new-669fbab1-8427-425f-89a4-c35abaaa330c';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '669fbab1-8427-425f-89a4-c35abaaa330c';
  $display->content['new-669fbab1-8427-425f-89a4-c35abaaa330c'] = $pane;
  $display->panels['sidebar_first'][1] = 'new-669fbab1-8427-425f-89a4-c35abaaa330c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-469a0bcd-fe94-4470-bb8a-67909c008602';
  $handler->conf['display'] = $display;
  $export['pm_existing_pages_research_program_site__objetivo'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'pm_existing_pages_research_program_site__panel_context_a2b3fefd-eccd-495d-9652-8070a4e8e78a';
  $handler->task = 'pm_existing_pages';
  $handler->subtask = 'research_program_site';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Collaborations',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Contenido',
        'keyword' => 'node',
        'name' => 'entity:node',
        'entity_id' => '14764',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => '*/colaboraciones',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'entity_bundle:node',
          'settings' => array(
            'type' => array(
              'research_program' => 'research_program',
            ),
          ),
          'context' => 'context_entity:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_everywhere_site_template' => '',
  );
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
  $display->title = 'Colaboraciones';
  $display->uuid = '1374cc21-f895-474d-a262-e012042eb453';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'pm_existing_pages_research_program_site__panel_context_a2b3fefd-eccd-495d-9652-8070a4e8e78a';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-469a0bcd-fe94-4470-bb8a-67909c008602';
  $pane->panel = 'main_content';
  $pane->type = 'pm_existing_pages';
  $pane->subtype = 'pm_existing_pages';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    0 => 'task_id',
    'task_id' => 'research_program_site',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(),
    'style' => 'semantic_panels',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '469a0bcd-fe94-4470-bb8a-67909c008602';
  $display->content['new-469a0bcd-fe94-4470-bb8a-67909c008602'] = $pane;
  $display->panels['main_content'][0] = 'new-469a0bcd-fe94-4470-bb8a-67909c008602';
  $pane = new stdClass();
  $pane->pid = 'new-e03cab89-cb09-4116-99da-51d20296b08e';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e03cab89-cb09-4116-99da-51d20296b08e';
  $display->content['new-e03cab89-cb09-4116-99da-51d20296b08e'] = $pane;
  $display->panels['sidebar_first'][0] = 'new-e03cab89-cb09-4116-99da-51d20296b08e';
  $pane = new stdClass();
  $pane->pid = 'new-669fbab1-8427-425f-89a4-c35abaaa330c';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '669fbab1-8427-425f-89a4-c35abaaa330c';
  $display->content['new-669fbab1-8427-425f-89a4-c35abaaa330c'] = $pane;
  $display->panels['sidebar_first'][1] = 'new-669fbab1-8427-425f-89a4-c35abaaa330c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-469a0bcd-fe94-4470-bb8a-67909c008602';
  $handler->conf['display'] = $display;
  $export['pm_existing_pages_research_program_site__panel_context_a2b3fefd-eccd-495d-9652-8070a4e8e78a'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'pm_existing_pages_research_program_site__project';
  $handler->task = 'pm_existing_pages';
  $handler->subtask = 'research_program_site';
  $handler->handler = 'panel_context';
  $handler->weight = 4;
  $handler->conf = array(
    'title' => 'Project',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Contenido',
        'keyword' => 'node',
        'name' => 'entity:node',
        'entity_id' => '14764',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'name' => 'project',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => '*/project',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'entity_bundle:node',
          'settings' => array(
            'type' => array(
              'research_program' => 'research_program',
            ),
          ),
          'context' => 'context_entity:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_everywhere_site_template' => '',
  );
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
  $display->title = 'Projectos';
  $display->uuid = '1374cc21-f895-474d-a262-e012042eb453';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'pm_existing_pages_research_program_site__project';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-469a0bcd-fe94-4470-bb8a-67909c008602';
  $pane->panel = 'main_content';
  $pane->type = 'pm_existing_pages';
  $pane->subtype = 'pm_existing_pages';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    0 => 'task_id',
    'task_id' => 'research_program_site',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(),
    'style' => 'semantic_panels',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '469a0bcd-fe94-4470-bb8a-67909c008602';
  $display->content['new-469a0bcd-fe94-4470-bb8a-67909c008602'] = $pane;
  $display->panels['main_content'][0] = 'new-469a0bcd-fe94-4470-bb8a-67909c008602';
  $pane = new stdClass();
  $pane->pid = 'new-e03cab89-cb09-4116-99da-51d20296b08e';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e03cab89-cb09-4116-99da-51d20296b08e';
  $display->content['new-e03cab89-cb09-4116-99da-51d20296b08e'] = $pane;
  $display->panels['sidebar_first'][0] = 'new-e03cab89-cb09-4116-99da-51d20296b08e';
  $pane = new stdClass();
  $pane->pid = 'new-669fbab1-8427-425f-89a4-c35abaaa330c';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '669fbab1-8427-425f-89a4-c35abaaa330c';
  $display->content['new-669fbab1-8427-425f-89a4-c35abaaa330c'] = $pane;
  $display->panels['sidebar_first'][1] = 'new-669fbab1-8427-425f-89a4-c35abaaa330c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-469a0bcd-fe94-4470-bb8a-67909c008602';
  $handler->conf['display'] = $display;
  $export['pm_existing_pages_research_program_site__project'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'pm_existing_pages_research_program_site__researchers';
  $handler->task = 'pm_existing_pages';
  $handler->subtask = 'research_program_site';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Researchers',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Contenido',
        'keyword' => 'node',
        'name' => 'entity:node',
        'entity_id' => '14764',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'name' => 'researchers',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => '*/investigadores',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'entity_bundle:node',
          'settings' => array(
            'type' => array(
              'research_program' => 'research_program',
            ),
          ),
          'context' => 'context_entity:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
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
  $display->title = 'Investigadores';
  $display->uuid = '1374cc21-f895-474d-a262-e012042eb453';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'pm_existing_pages_research_program_site__researchers';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-469a0bcd-fe94-4470-bb8a-67909c008602';
  $pane->panel = 'main_content';
  $pane->type = 'pm_existing_pages';
  $pane->subtype = 'pm_existing_pages';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    0 => 'task_id',
    'task_id' => 'research_program_site',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(),
    'style' => 'semantic_panels',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '469a0bcd-fe94-4470-bb8a-67909c008602';
  $display->content['new-469a0bcd-fe94-4470-bb8a-67909c008602'] = $pane;
  $display->panels['main_content'][0] = 'new-469a0bcd-fe94-4470-bb8a-67909c008602';
  $pane = new stdClass();
  $pane->pid = 'new-e03cab89-cb09-4116-99da-51d20296b08e';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e03cab89-cb09-4116-99da-51d20296b08e';
  $display->content['new-e03cab89-cb09-4116-99da-51d20296b08e'] = $pane;
  $display->panels['sidebar_first'][0] = 'new-e03cab89-cb09-4116-99da-51d20296b08e';
  $pane = new stdClass();
  $pane->pid = 'new-669fbab1-8427-425f-89a4-c35abaaa330c';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '669fbab1-8427-425f-89a4-c35abaaa330c';
  $display->content['new-669fbab1-8427-425f-89a4-c35abaaa330c'] = $pane;
  $display->panels['sidebar_first'][1] = 'new-669fbab1-8427-425f-89a4-c35abaaa330c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-469a0bcd-fe94-4470-bb8a-67909c008602';
  $handler->conf['display'] = $display;
  $export['pm_existing_pages_research_program_site__researchers'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function research_program_site_feature_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = TRUE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'custom_page_collaborations';
  $page->task = 'page';
  $page->admin_title = 'Collaborations';
  $page->admin_description = '';
  $page->path = 'node/%node/colaboraciones';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Contenido: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_custom_page_collaborations__panel';
  $handler->task = 'page';
  $handler->subtask = 'custom_page_collaborations';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
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
  $display->title = '%node:title - Colaboraciones';
  $display->uuid = '9cf3e9a5-b966-4bd7-b3b4-bdab67c34d3a';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_custom_page_collaborations__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-d4f94c02-8c85-49a9-acde-8e190f61d1fa';
  $pane->panel = 'main_content';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_fc_card_collaborations';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'field_collection_view',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'edit' => 'Editar',
      'translate' => 'Traducir',
      'delete' => 'Eliminar',
      'add' => 'Agregar',
      'description' => 1,
      'view_mode' => 'card_teaser',
    ),
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = 'd4f94c02-8c85-49a9-acde-8e190f61d1fa';
  $display->content['new-d4f94c02-8c85-49a9-acde-8e190f61d1fa'] = $pane;
  $display->panels['main_content'][0] = 'new-d4f94c02-8c85-49a9-acde-8e190f61d1fa';
  $pane = new stdClass();
  $pane->pid = 'new-f2c2816e-be9b-4602-96d7-b7b76d3024d6';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f2c2816e-be9b-4602-96d7-b7b76d3024d6';
  $display->content['new-f2c2816e-be9b-4602-96d7-b7b76d3024d6'] = $pane;
  $display->panels['sidebar_first'][0] = 'new-f2c2816e-be9b-4602-96d7-b7b76d3024d6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-d4f94c02-8c85-49a9-acde-8e190f61d1fa';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['custom_page_collaborations'] = $page;

  return $pages;

}
