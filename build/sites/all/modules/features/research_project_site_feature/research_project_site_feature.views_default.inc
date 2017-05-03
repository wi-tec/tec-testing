<?php
/**
 * @file
 * research_project_site_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function research_project_site_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'objectives_per_research_project_site';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Research Project Site - Subpages';
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
  /* Criterio de filtrado: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criterio de filtrado: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'research_project_site' => 'research_project_site',
  );

  /* Display: Objectives per Research Project Site */
  $handler = $view->new_display('page', 'Objectives per Research Project Site', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Objectives';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Objectives */
  $handler->display->display_options['fields']['field_text_objectives']['id'] = 'field_text_objectives';
  $handler->display->display_options['fields']['field_text_objectives']['table'] = 'field_data_field_text_objectives';
  $handler->display->display_options['fields']['field_text_objectives']['field'] = 'field_text_objectives';
  $handler->display->display_options['fields']['field_text_objectives']['label'] = '';
  $handler->display->display_options['fields']['field_text_objectives']['element_type'] = '0';
  $handler->display->display_options['fields']['field_text_objectives']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_text_objectives']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_text_objectives']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_text_objectives']['field_api_classes'] = TRUE;
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
  $handler->display->display_options['path'] = 'node/%/objetivos';

  /* Display: Participants per Research Project Site */
  $handler = $view->new_display('page', 'Participants per Research Project Site', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Participants';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Researchers */
  $handler->display->display_options['fields']['field_paragraph_researchers']['id'] = 'field_paragraph_researchers';
  $handler->display->display_options['fields']['field_paragraph_researchers']['table'] = 'field_data_field_paragraph_researchers';
  $handler->display->display_options['fields']['field_paragraph_researchers']['field'] = 'field_paragraph_researchers';
  $handler->display->display_options['fields']['field_paragraph_researchers']['element_type'] = '0';
  $handler->display->display_options['fields']['field_paragraph_researchers']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_paragraph_researchers']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_paragraph_researchers']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_paragraph_researchers']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_paragraph_researchers']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_paragraph_researchers']['field_api_classes'] = TRUE;
  /* Campo: Contenido: Organizations */
  $handler->display->display_options['fields']['field_paragraph_organizations']['id'] = 'field_paragraph_organizations';
  $handler->display->display_options['fields']['field_paragraph_organizations']['table'] = 'field_data_field_paragraph_organizations';
  $handler->display->display_options['fields']['field_paragraph_organizations']['field'] = 'field_paragraph_organizations';
  $handler->display->display_options['fields']['field_paragraph_organizations']['element_type'] = '0';
  $handler->display->display_options['fields']['field_paragraph_organizations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_paragraph_organizations']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_paragraph_organizations']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_paragraph_organizations']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_paragraph_organizations']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_paragraph_organizations']['field_api_classes'] = TRUE;
  $handler->display->display_options['path'] = 'node/%/participantes';

  /* Display: Results per Research Project Site */
  $handler = $view->new_display('page', 'Results per Research Project Site', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Results';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Campo: Results in document */
  $handler->display->display_options['fields']['field_eref_document']['id'] = 'field_eref_document';
  $handler->display->display_options['fields']['field_eref_document']['table'] = 'field_data_field_eref_document';
  $handler->display->display_options['fields']['field_eref_document']['field'] = 'field_eref_document';
  $handler->display->display_options['fields']['field_eref_document']['label'] = 'Results';
  $handler->display->display_options['fields']['field_eref_document']['element_type'] = '0';
  $handler->display->display_options['fields']['field_eref_document']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_eref_document']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_eref_document']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_eref_document']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_eref_document']['field_api_classes'] = TRUE;
  /* Campo: Contenido: Publications */
  $handler->display->display_options['fields']['field_text_publications']['id'] = 'field_text_publications';
  $handler->display->display_options['fields']['field_text_publications']['table'] = 'field_data_field_text_publications';
  $handler->display->display_options['fields']['field_text_publications']['field'] = 'field_text_publications';
  $handler->display->display_options['fields']['field_text_publications']['element_type'] = '0';
  $handler->display->display_options['fields']['field_text_publications']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_text_publications']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_text_publications']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_text_publications']['field_api_classes'] = TRUE;
  $handler->display->display_options['path'] = 'node/%/resultados';

  /* Display: Schools per Research Project Site */
  $handler = $view->new_display('panel_pane', 'Schools per Research Project Site', 'panel_pane_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Associated school */
  $handler->display->display_options['fields']['field_eref_school']['id'] = 'field_eref_school';
  $handler->display->display_options['fields']['field_eref_school']['table'] = 'field_data_field_eref_school';
  $handler->display->display_options['fields']['field_eref_school']['field'] = 'field_eref_school';
  $handler->display->display_options['fields']['field_eref_school']['label'] = '';
  $handler->display->display_options['fields']['field_eref_school']['element_type'] = '0';
  $handler->display->display_options['fields']['field_eref_school']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_eref_school']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_eref_school']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_eref_school']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_eref_school']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_eref_school']['field_api_classes'] = TRUE;
  $handler->display->display_options['pane_category']['name'] = 'Paneles de vista';
  $export['objectives_per_research_project_site'] = $view;

  return $export;
}
