<?php
/**
 * @file
 * feature_sub_sites_entities.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function feature_sub_sites_entities_default_page_manager_handlers() {
  $export = array();

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
            'paths' => 'node/*/proyectos/*',
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
            'paths' => 'node/*/investigadores/*',
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
  $pane = new stdClass();
  $pane->pid = 'new-9e2d3ecf-5b4b-4dbe-99ec-398534833e80';
  $pane->panel = 'sidebar_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'field_collection_item:field_relation_contacts';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'relation_add_endpoints_and_fields',
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
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '9e2d3ecf-5b4b-4dbe-99ec-398534833e80';
  $display->content['new-9e2d3ecf-5b4b-4dbe-99ec-398534833e80'] = $pane;
  $display->panels['sidebar_second'][5] = 'new-9e2d3ecf-5b4b-4dbe-99ec-398534833e80';
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
  $display->title = 'Proyectos';
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
  $pane->style = array(
    'settings' => NULL,
  );
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
  $handler->disabled = TRUE; /* Edit this to true to make a default handler disabled initially */
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
    'contexts' => array(),
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
  $handler->disabled = TRUE; /* Edit this to true to make a default handler disabled initially */
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
    'contexts' => array(),
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

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'pm_existing_pages_research_project_site__objectives';
  $handler->task = 'pm_existing_pages';
  $handler->subtask = 'research_project_site';
  $handler->handler = 'panel_context';
  $handler->weight = -4;
  $handler->conf = array(
    'title' => 'Objectives',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'objectives',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => '*/objetivos',
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
      'sidebar_second' => NULL,
      'main_content' => NULL,
    ),
    'main_content' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = 'Objetivos';
  $display->uuid = '0e6a02e5-05d3-4829-8816-803e59141c7c';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'pm_existing_pages_research_project_site__objectives';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-581c29dd-ed29-4d96-9eca-8474a9564b07';
  $pane->panel = 'main_content';
  $pane->type = 'pm_existing_pages';
  $pane->subtype = 'pm_existing_pages';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    0 => 'task_id',
    'task_id' => 'research_project_site',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'element_title' => array(
        'type' => '',
        'class_enable' => 0,
        'class' => '',
        'attributes' => array(),
        'link_enabled' => 0,
        'link' => array(
          'path' => '',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'attributes_array' => array(),
      ),
      'element_content' => array(
        'type' => '',
        'class_enable' => 0,
        'class' => '',
        'attributes' => array(),
        'link_enabled' => 0,
        'link' => array(
          'path' => '',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'attributes_array' => array(),
      ),
      'element_wrapper' => array(
        'type' => '',
        'class_enable' => 0,
        'class' => '',
        'attributes' => array(),
        'attributes_array' => array(),
      ),
      'add_default_classes' => 1,
    ),
    'style' => 'semantic_panels',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '581c29dd-ed29-4d96-9eca-8474a9564b07';
  $display->content['new-581c29dd-ed29-4d96-9eca-8474a9564b07'] = $pane;
  $display->panels['main_content'][0] = 'new-581c29dd-ed29-4d96-9eca-8474a9564b07';
  $pane = new stdClass();
  $pane->pid = 'new-7f094084-b186-4142-ae58-c8815dfaca75';
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
  $pane->uuid = '7f094084-b186-4142-ae58-c8815dfaca75';
  $display->content['new-7f094084-b186-4142-ae58-c8815dfaca75'] = $pane;
  $display->panels['sidebar_first'][0] = 'new-7f094084-b186-4142-ae58-c8815dfaca75';
  $pane = new stdClass();
  $pane->pid = 'new-c5ade19d-2c3c-4abf-a30a-d75af20e7624';
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
  $pane->uuid = 'c5ade19d-2c3c-4abf-a30a-d75af20e7624';
  $display->content['new-c5ade19d-2c3c-4abf-a30a-d75af20e7624'] = $pane;
  $display->panels['sidebar_first'][1] = 'new-c5ade19d-2c3c-4abf-a30a-d75af20e7624';
  $pane = new stdClass();
  $pane->pid = 'new-cf138d4f-40f8-4bff-b9c5-663fea500a46';
  $pane->panel = 'sidebar_second';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'vid:2264';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'element_title' => array(
        'type' => '0',
        'class_enable' => 0,
        'class' => '',
        'attributes' => array(),
        'link_enabled' => 0,
        'link' => array(
          'path' => '',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'attributes_array' => array(),
      ),
      'element_content' => array(
        'type' => '0',
        'class_enable' => 0,
        'class' => '',
        'attributes' => array(),
        'link_enabled' => 0,
        'link' => array(
          'path' => '',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'attributes_array' => array(),
      ),
      'element_wrapper' => array(
        'type' => '0',
        'class_enable' => 0,
        'class' => '',
        'attributes' => array(),
        'attributes_array' => array(),
      ),
      'add_default_classes' => 0,
    ),
    'style' => 'semantic_panels',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'cf138d4f-40f8-4bff-b9c5-663fea500a46';
  $display->content['new-cf138d4f-40f8-4bff-b9c5-663fea500a46'] = $pane;
  $display->panels['sidebar_second'][0] = 'new-cf138d4f-40f8-4bff-b9c5-663fea500a46';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-581c29dd-ed29-4d96-9eca-8474a9564b07';
  $handler->conf['display'] = $display;
  $export['pm_existing_pages_research_project_site__objectives'] = $handler;

  $handler = new stdClass();
  $handler->disabled = TRUE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'pm_existing_pages_research_project_site__panel_context_3d3778be-93f5-466f-bc1f-de9cc26098c4';
  $handler->task = 'pm_existing_pages';
  $handler->subtask = 'research_project_site';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Participants',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => '*/participantes',
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
  $display->title = 'Participantes';
  $display->uuid = '45e25522-c5eb-4394-9526-1b2b3cb25d94';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'pm_existing_pages_research_project_site__panel_context_3d3778be-93f5-466f-bc1f-de9cc26098c4';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-2352abe0-030e-466f-a9e4-1c21cfc966e4';
  $pane->panel = 'main_content';
  $pane->type = 'pm_existing_pages';
  $pane->subtype = 'pm_existing_pages';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    0 => 'task_id',
    'task_id' => 'research_project_site',
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
  $pane->uuid = '2352abe0-030e-466f-a9e4-1c21cfc966e4';
  $display->content['new-2352abe0-030e-466f-a9e4-1c21cfc966e4'] = $pane;
  $display->panels['main_content'][0] = 'new-2352abe0-030e-466f-a9e4-1c21cfc966e4';
  $pane = new stdClass();
  $pane->pid = 'new-98ebfd70-8a78-469d-aad3-42bc3de67c6e';
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
  $pane->uuid = '98ebfd70-8a78-469d-aad3-42bc3de67c6e';
  $display->content['new-98ebfd70-8a78-469d-aad3-42bc3de67c6e'] = $pane;
  $display->panels['sidebar_first'][0] = 'new-98ebfd70-8a78-469d-aad3-42bc3de67c6e';
  $pane = new stdClass();
  $pane->pid = 'new-b77b1efc-26b6-473c-90ab-1abab01e19ec';
  $pane->panel = 'sidebar_first';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'vid:2087';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'b77b1efc-26b6-473c-90ab-1abab01e19ec';
  $display->content['new-b77b1efc-26b6-473c-90ab-1abab01e19ec'] = $pane;
  $display->panels['sidebar_first'][1] = 'new-b77b1efc-26b6-473c-90ab-1abab01e19ec';
  $pane = new stdClass();
  $pane->pid = 'new-2e3e32d7-2bb3-4291-9e38-a48bde754fa7';
  $pane->panel = 'sidebar_second';
  $pane->type = 'views_panes';
  $pane->subtype = 'objectives_per_research_project_site-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '2e3e32d7-2bb3-4291-9e38-a48bde754fa7';
  $display->content['new-2e3e32d7-2bb3-4291-9e38-a48bde754fa7'] = $pane;
  $display->panels['sidebar_second'][0] = 'new-2e3e32d7-2bb3-4291-9e38-a48bde754fa7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['pm_existing_pages_research_project_site__panel_context_3d3778be-93f5-466f-bc1f-de9cc26098c4'] = $handler;

  $handler = new stdClass();
  $handler->disabled = TRUE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'pm_existing_pages_research_project_site__panel_context_523a8849-dd12-49d5-a73f-496945133a3a';
  $handler->task = 'pm_existing_pages';
  $handler->subtask = 'research_project_site';
  $handler->handler = 'panel_context';
  $handler->weight = -1;
  $handler->conf = array(
    'title' => 'Objectives',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => '*/objetivos',
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
      'sidebar_second' => NULL,
      'main_content' => NULL,
    ),
    'main_content' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = 'Objetivos';
  $display->uuid = '0e6a02e5-05d3-4829-8816-803e59141c7c';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'pm_existing_pages_research_project_site__panel_context_523a8849-dd12-49d5-a73f-496945133a3a';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-581c29dd-ed29-4d96-9eca-8474a9564b07';
  $pane->panel = 'main_content';
  $pane->type = 'pm_existing_pages';
  $pane->subtype = 'pm_existing_pages';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    0 => 'task_id',
    'task_id' => 'research_project_site',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'element_title' => array(
        'type' => '',
        'class_enable' => 0,
        'class' => '',
        'attributes' => array(),
        'link_enabled' => 0,
        'link' => array(
          'path' => '',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'attributes_array' => array(),
      ),
      'element_content' => array(
        'type' => '',
        'class_enable' => 0,
        'class' => '',
        'attributes' => array(),
        'link_enabled' => 0,
        'link' => array(
          'path' => '',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'attributes_array' => array(),
      ),
      'element_wrapper' => array(
        'type' => '',
        'class_enable' => 0,
        'class' => '',
        'attributes' => array(),
        'attributes_array' => array(),
      ),
      'add_default_classes' => 1,
    ),
    'style' => 'semantic_panels',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '581c29dd-ed29-4d96-9eca-8474a9564b07';
  $display->content['new-581c29dd-ed29-4d96-9eca-8474a9564b07'] = $pane;
  $display->panels['main_content'][0] = 'new-581c29dd-ed29-4d96-9eca-8474a9564b07';
  $pane = new stdClass();
  $pane->pid = 'new-7f094084-b186-4142-ae58-c8815dfaca75';
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
  $pane->uuid = '7f094084-b186-4142-ae58-c8815dfaca75';
  $display->content['new-7f094084-b186-4142-ae58-c8815dfaca75'] = $pane;
  $display->panels['sidebar_first'][0] = 'new-7f094084-b186-4142-ae58-c8815dfaca75';
  $pane = new stdClass();
  $pane->pid = 'new-5a46ff0a-a3ed-4349-a0d2-c31b2f796956';
  $pane->panel = 'sidebar_first';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'vid:2084';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '5a46ff0a-a3ed-4349-a0d2-c31b2f796956';
  $display->content['new-5a46ff0a-a3ed-4349-a0d2-c31b2f796956'] = $pane;
  $display->panels['sidebar_first'][1] = 'new-5a46ff0a-a3ed-4349-a0d2-c31b2f796956';
  $pane = new stdClass();
  $pane->pid = 'new-02cb6455-7c5e-4045-91b9-83e6fc697b99';
  $pane->panel = 'sidebar_second';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'vid:2089';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'element_title' => array(
        'type' => '0',
        'class_enable' => 0,
        'class' => '',
        'attributes' => array(),
        'link_enabled' => 0,
        'link' => array(
          'path' => '',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'attributes_array' => array(),
      ),
      'element_content' => array(
        'type' => '0',
        'class_enable' => 0,
        'class' => '',
        'attributes' => array(),
        'link_enabled' => 0,
        'link' => array(
          'path' => '',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'attributes_array' => array(),
      ),
      'element_wrapper' => array(
        'type' => '0',
        'class_enable' => 0,
        'class' => '',
        'attributes' => array(),
        'attributes_array' => array(),
      ),
      'add_default_classes' => 0,
    ),
    'style' => 'semantic_panels',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '02cb6455-7c5e-4045-91b9-83e6fc697b99';
  $display->content['new-02cb6455-7c5e-4045-91b9-83e6fc697b99'] = $pane;
  $display->panels['sidebar_second'][0] = 'new-02cb6455-7c5e-4045-91b9-83e6fc697b99';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-581c29dd-ed29-4d96-9eca-8474a9564b07';
  $handler->conf['display'] = $display;
  $export['pm_existing_pages_research_project_site__panel_context_523a8849-dd12-49d5-a73f-496945133a3a'] = $handler;

  $handler = new stdClass();
  $handler->disabled = TRUE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'pm_existing_pages_research_project_site__panel_context_fa4aeaad-ebe8-4b94-80eb-71c1ce94f6ab';
  $handler->task = 'pm_existing_pages';
  $handler->subtask = 'research_project_site';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Results',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => '*/resultados',
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
  $display->title = 'Resultados';
  $display->uuid = '0eee4519-5068-48d1-9318-0f9f929db67a';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'pm_existing_pages_research_project_site__panel_context_fa4aeaad-ebe8-4b94-80eb-71c1ce94f6ab';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-030777ae-9555-4100-b1bd-150090037b56';
  $pane->panel = 'main_content';
  $pane->type = 'pm_existing_pages';
  $pane->subtype = 'pm_existing_pages';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    0 => 'task_id',
    'task_id' => 'research_project_site',
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
  $pane->uuid = '030777ae-9555-4100-b1bd-150090037b56';
  $display->content['new-030777ae-9555-4100-b1bd-150090037b56'] = $pane;
  $display->panels['main_content'][0] = 'new-030777ae-9555-4100-b1bd-150090037b56';
  $pane = new stdClass();
  $pane->pid = 'new-6a2d81b1-0a35-4320-ab17-5f209aa80977';
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
  $pane->uuid = '6a2d81b1-0a35-4320-ab17-5f209aa80977';
  $display->content['new-6a2d81b1-0a35-4320-ab17-5f209aa80977'] = $pane;
  $display->panels['sidebar_first'][0] = 'new-6a2d81b1-0a35-4320-ab17-5f209aa80977';
  $pane = new stdClass();
  $pane->pid = 'new-ca7862df-f56f-48e3-9707-633075eef1eb';
  $pane->panel = 'sidebar_first';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'vid:2088';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'ca7862df-f56f-48e3-9707-633075eef1eb';
  $display->content['new-ca7862df-f56f-48e3-9707-633075eef1eb'] = $pane;
  $display->panels['sidebar_first'][1] = 'new-ca7862df-f56f-48e3-9707-633075eef1eb';
  $pane = new stdClass();
  $pane->pid = 'new-e4d32100-f815-4f2b-a3b0-c11fa3c095a0';
  $pane->panel = 'sidebar_second';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'vid:2090';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'element_title' => array(
        'type' => '0',
        'class_enable' => 0,
        'class' => '',
        'attributes' => array(),
        'link_enabled' => 0,
        'link' => array(
          'path' => '',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'attributes_array' => array(),
      ),
      'element_content' => array(
        'type' => '0',
        'class_enable' => 0,
        'class' => '',
        'attributes' => array(),
        'link_enabled' => 0,
        'link' => array(
          'path' => '',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'attributes_array' => array(),
      ),
      'element_wrapper' => array(
        'type' => '0',
        'class_enable' => 0,
        'class' => '',
        'attributes' => array(),
        'attributes_array' => array(),
      ),
      'add_default_classes' => 0,
    ),
    'style' => 'semantic_panels',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e4d32100-f815-4f2b-a3b0-c11fa3c095a0';
  $display->content['new-e4d32100-f815-4f2b-a3b0-c11fa3c095a0'] = $pane;
  $display->panels['sidebar_second'][0] = 'new-e4d32100-f815-4f2b-a3b0-c11fa3c095a0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['pm_existing_pages_research_project_site__panel_context_fa4aeaad-ebe8-4b94-80eb-71c1ce94f6ab'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'pm_existing_pages_research_project_site__participants';
  $handler->task = 'pm_existing_pages';
  $handler->subtask = 'research_project_site';
  $handler->handler = 'panel_context';
  $handler->weight = -3;
  $handler->conf = array(
    'title' => 'Participants',
    'no_blocks' => 0,
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
        'entity_id' => '15136',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'name' => 'participants',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => '*/participantes',
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
  $display->title = 'Participantes';
  $display->uuid = '45e25522-c5eb-4394-9526-1b2b3cb25d94';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'pm_existing_pages_research_project_site__participants';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-2352abe0-030e-466f-a9e4-1c21cfc966e4';
  $pane->panel = 'main_content';
  $pane->type = 'pm_existing_pages';
  $pane->subtype = 'pm_existing_pages';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    0 => 'task_id',
    'task_id' => 'research_project_site',
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
  $pane->uuid = '2352abe0-030e-466f-a9e4-1c21cfc966e4';
  $display->content['new-2352abe0-030e-466f-a9e4-1c21cfc966e4'] = $pane;
  $display->panels['main_content'][0] = 'new-2352abe0-030e-466f-a9e4-1c21cfc966e4';
  $pane = new stdClass();
  $pane->pid = 'new-98ebfd70-8a78-469d-aad3-42bc3de67c6e';
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
  $pane->uuid = '98ebfd70-8a78-469d-aad3-42bc3de67c6e';
  $display->content['new-98ebfd70-8a78-469d-aad3-42bc3de67c6e'] = $pane;
  $display->panels['sidebar_first'][0] = 'new-98ebfd70-8a78-469d-aad3-42bc3de67c6e';
  $pane = new stdClass();
  $pane->pid = 'new-000738a3-1265-402c-a74d-f68fb1cf6e64';
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
  $pane->uuid = '000738a3-1265-402c-a74d-f68fb1cf6e64';
  $display->content['new-000738a3-1265-402c-a74d-f68fb1cf6e64'] = $pane;
  $display->panels['sidebar_first'][1] = 'new-000738a3-1265-402c-a74d-f68fb1cf6e64';
  $pane = new stdClass();
  $pane->pid = 'new-2e3e32d7-2bb3-4291-9e38-a48bde754fa7';
  $pane->panel = 'sidebar_second';
  $pane->type = 'views_panes';
  $pane->subtype = 'objectives_per_research_project_site-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '2e3e32d7-2bb3-4291-9e38-a48bde754fa7';
  $display->content['new-2e3e32d7-2bb3-4291-9e38-a48bde754fa7'] = $pane;
  $display->panels['sidebar_second'][0] = 'new-2e3e32d7-2bb3-4291-9e38-a48bde754fa7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['pm_existing_pages_research_project_site__participants'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'pm_existing_pages_research_project_site__results';
  $handler->task = 'pm_existing_pages';
  $handler->subtask = 'research_project_site';
  $handler->handler = 'panel_context';
  $handler->weight = -2;
  $handler->conf = array(
    'title' => 'Results',
    'no_blocks' => 0,
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
        'entity_id' => '14766',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'name' => 'results',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => '*/resultados',
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
  $display->title = 'Resultados';
  $display->uuid = '0eee4519-5068-48d1-9318-0f9f929db67a';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'pm_existing_pages_research_project_site__results';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-030777ae-9555-4100-b1bd-150090037b56';
  $pane->panel = 'main_content';
  $pane->type = 'pm_existing_pages';
  $pane->subtype = 'pm_existing_pages';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    0 => 'task_id',
    'task_id' => 'research_project_site',
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
  $pane->uuid = '030777ae-9555-4100-b1bd-150090037b56';
  $display->content['new-030777ae-9555-4100-b1bd-150090037b56'] = $pane;
  $display->panels['main_content'][0] = 'new-030777ae-9555-4100-b1bd-150090037b56';
  $pane = new stdClass();
  $pane->pid = 'new-6a2d81b1-0a35-4320-ab17-5f209aa80977';
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
  $pane->uuid = '6a2d81b1-0a35-4320-ab17-5f209aa80977';
  $display->content['new-6a2d81b1-0a35-4320-ab17-5f209aa80977'] = $pane;
  $display->panels['sidebar_first'][0] = 'new-6a2d81b1-0a35-4320-ab17-5f209aa80977';
  $pane = new stdClass();
  $pane->pid = 'new-fb588bed-7252-4034-8308-dd90330fb88a';
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
  $pane->uuid = 'fb588bed-7252-4034-8308-dd90330fb88a';
  $display->content['new-fb588bed-7252-4034-8308-dd90330fb88a'] = $pane;
  $display->panels['sidebar_first'][1] = 'new-fb588bed-7252-4034-8308-dd90330fb88a';
  $pane = new stdClass();
  $pane->pid = 'new-92b977a7-6874-4b1b-a084-a16c8815ca4d';
  $pane->panel = 'sidebar_second';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'vid:2265';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'element_title' => array(
        'type' => '0',
        'class_enable' => 0,
        'class' => '',
        'attributes' => array(),
        'link_enabled' => 0,
        'link' => array(
          'path' => '',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'attributes_array' => array(),
      ),
      'element_content' => array(
        'type' => '0',
        'class_enable' => 0,
        'class' => '',
        'attributes' => array(),
        'link_enabled' => 0,
        'link' => array(
          'path' => '',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'attributes_array' => array(),
      ),
      'element_wrapper' => array(
        'type' => '0',
        'class_enable' => 0,
        'class' => '',
        'attributes' => array(),
        'attributes_array' => array(),
      ),
      'add_default_classes' => 0,
    ),
    'style' => 'semantic_panels',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '92b977a7-6874-4b1b-a084-a16c8815ca4d';
  $display->content['new-92b977a7-6874-4b1b-a084-a16c8815ca4d'] = $pane;
  $display->panels['sidebar_second'][0] = 'new-92b977a7-6874-4b1b-a084-a16c8815ca4d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['pm_existing_pages_research_project_site__results'] = $handler;

  return $export;
}
