<?php
/**
 * @file
 * research_program_site_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function research_program_site_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'research_program_site';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Research Program Site - Subpages';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'más';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Aplicar';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordenar por';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementos por página';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Todo -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Desplazamiento';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primera';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Criterio de ordenación: Contenido: Fecha de publicación */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filtro contextual: Contenido: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Todo';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Criterio de filtrado: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'research_program' => 'research_program',
  );

  /* Display: Objectives per Research Program Site */
  $handler = $view->new_display('page', 'Objectives per Research Program Site', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Objectives';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Objectives */
  $handler->display->display_options['fields']['field_text_objetivo']['id'] = 'field_text_objetivo';
  $handler->display->display_options['fields']['field_text_objetivo']['table'] = 'field_data_field_text_objetivo';
  $handler->display->display_options['fields']['field_text_objetivo']['field'] = 'field_text_objetivo';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Contenido: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Todo';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'node/%/objetivo';

  /* Display: Collaborations per Research Program Site */
  $handler = $view->new_display('page', 'Collaborations per Research Program Site', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Colaboraciones';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Collaborations */
  $handler->display->display_options['fields']['field_fc_card_collaborations']['id'] = 'field_fc_card_collaborations';
  $handler->display->display_options['fields']['field_fc_card_collaborations']['table'] = 'field_data_field_fc_card_collaborations';
  $handler->display->display_options['fields']['field_fc_card_collaborations']['field'] = 'field_fc_card_collaborations';
  $handler->display->display_options['fields']['field_fc_card_collaborations']['label'] = '';
  $handler->display->display_options['fields']['field_fc_card_collaborations']['element_type'] = '0';
  $handler->display->display_options['fields']['field_fc_card_collaborations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fc_card_collaborations']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_fc_card_collaborations']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_fc_card_collaborations']['type'] = 'field_collection_view';
  $handler->display->display_options['fields']['field_fc_card_collaborations']['settings'] = array(
    'add' => '',
    'edit' => 'Edit',
    'translate' => '',
    'delete' => 'Delete',
    'description' => 0,
    'view_mode' => 'card_teaser',
  );
  $handler->display->display_options['fields']['field_fc_card_collaborations']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_fc_card_collaborations']['field_api_classes'] = TRUE;
  $handler->display->display_options['path'] = 'node/%/colaboraciones';

  /* Display: Researchers per Research Program Site */
  $handler = $view->new_display('page', 'Researchers per Research Program Site', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Researchers';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Researcher */
  $handler->display->display_options['fields']['field_fc_researcher']['id'] = 'field_fc_researcher';
  $handler->display->display_options['fields']['field_fc_researcher']['table'] = 'field_data_field_fc_researcher';
  $handler->display->display_options['fields']['field_fc_researcher']['field'] = 'field_fc_researcher';
  $handler->display->display_options['fields']['field_fc_researcher']['label'] = '';
  $handler->display->display_options['fields']['field_fc_researcher']['element_type'] = '0';
  $handler->display->display_options['fields']['field_fc_researcher']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fc_researcher']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_fc_researcher']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_fc_researcher']['type'] = 'field_collection_view';
  $handler->display->display_options['fields']['field_fc_researcher']['settings'] = array(
    'add' => '',
    'edit' => 'Editar',
    'translate' => 'Traducir',
    'delete' => 'Eliminar',
    'description' => 0,
    'view_mode' => 'card_teaser',
  );
  $handler->display->display_options['fields']['field_fc_researcher']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_fc_researcher']['field_api_classes'] = TRUE;
  $handler->display->display_options['path'] = 'node/%/investigadores';

  /* Display: Project per Research Program Site */
  $handler = $view->new_display('page', 'Project per Research Program Site', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Projects';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Project Cards */
  $handler->display->display_options['fields']['field_fc_cards_projects']['id'] = 'field_fc_cards_projects';
  $handler->display->display_options['fields']['field_fc_cards_projects']['table'] = 'field_data_field_fc_cards_projects';
  $handler->display->display_options['fields']['field_fc_cards_projects']['field'] = 'field_fc_cards_projects';
  $handler->display->display_options['fields']['field_fc_cards_projects']['label'] = '';
  $handler->display->display_options['fields']['field_fc_cards_projects']['element_type'] = '0';
  $handler->display->display_options['fields']['field_fc_cards_projects']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fc_cards_projects']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_fc_cards_projects']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_fc_cards_projects']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_fc_cards_projects']['type'] = 'field_collection_view';
  $handler->display->display_options['fields']['field_fc_cards_projects']['settings'] = array(
    'add' => '',
    'edit' => 'Editar',
    'translate' => '',
    'delete' => 'Eliminar',
    'description' => 0,
    'view_mode' => 'card_teaser',
  );
  $handler->display->display_options['fields']['field_fc_cards_projects']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_fc_cards_projects']['field_api_classes'] = TRUE;
  $handler->display->display_options['path'] = 'node/%/project';
  $export['research_program_site'] = $view;

  return $export;
}
