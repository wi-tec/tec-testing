<?php
/**
 * @file
 * research_project_site_feature.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function research_project_site_feature_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'pm_existing_pages_research_project_site__panel_context_3d3778be-93f5-466f-bc1f-de9cc26098c4';
  $handler->task = 'pm_existing_pages';
  $handler->subtask = 'research_project_site';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
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
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'pm_existing_pages_research_project_site__panel_context_523a8849-dd12-49d5-a73f-496945133a3a';
  $handler->task = 'pm_existing_pages';
  $handler->subtask = 'research_project_site';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
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
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'pm_existing_pages_research_project_site__panel_context_fa4aeaad-ebe8-4b94-80eb-71c1ce94f6ab';
  $handler->task = 'pm_existing_pages';
  $handler->subtask = 'research_project_site';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
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

  return $export;
}
