<?php
/**
 * @file
 * feature_sub_sites_entities.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_sub_sites_entities_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'contacts_professor_contact';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Contacts: Professor Contact';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Contact';
  $handler->display->display_options['css_class'] = 'v-administrative-contacts';
  $handler->display->display_options['use_ajax'] = TRUE;
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
  /* Criterio de ordenación: Contenido: Fecha de publicación */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Criterio de filtrado: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Professor Contact */
  $handler = $view->new_display('panel_pane', 'Professor Contact', 'panel_pane_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relación: Referencia a entidades: Entidad referenciada */
  $handler->display->display_options['relationships']['field_eref_contact_target_id']['id'] = 'field_eref_contact_target_id';
  $handler->display->display_options['relationships']['field_eref_contact_target_id']['table'] = 'field_data_field_eref_contact';
  $handler->display->display_options['relationships']['field_eref_contact_target_id']['field'] = 'field_eref_contact_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Ruta */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['relationship'] = 'field_eref_contact_target_id';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  /* Campo: Contenido: Name */
  $handler->display->display_options['fields']['field_name_person']['id'] = 'field_name_person';
  $handler->display->display_options['fields']['field_name_person']['table'] = 'field_data_field_name_person';
  $handler->display->display_options['fields']['field_name_person']['field'] = 'field_name_person';
  $handler->display->display_options['fields']['field_name_person']['relationship'] = 'field_eref_contact_target_id';
  $handler->display->display_options['fields']['field_name_person']['label'] = '';
  $handler->display->display_options['fields']['field_name_person']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_name_person']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_name_person']['element_type'] = '0';
  $handler->display->display_options['fields']['field_name_person']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_name_person']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_name_person']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_name_person']['click_sort_column'] = 'title';
  $handler->display->display_options['fields']['field_name_person']['settings'] = array(
    'format' => 'default',
    'markup' => 0,
    'output' => 'default',
    'multiple' => 'default',
    'multiple_delimiter' => ', ',
    'multiple_and' => 'text',
    'multiple_delimiter_precedes_last' => 'never',
    'multiple_el_al_min' => '3',
    'multiple_el_al_first' => '1',
  );
  $handler->display->display_options['fields']['field_name_person']['field_api_classes'] = TRUE;
  /* Campo: Campo: Rol */
  $handler->display->display_options['fields']['field_text_rol']['id'] = 'field_text_rol';
  $handler->display->display_options['fields']['field_text_rol']['table'] = 'field_data_field_text_rol';
  $handler->display->display_options['fields']['field_text_rol']['field'] = 'field_text_rol';
  $handler->display->display_options['fields']['field_text_rol']['label'] = '';
  $handler->display->display_options['fields']['field_text_rol']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_text_rol']['element_class'] = 'rol';
  $handler->display->display_options['fields']['field_text_rol']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_text_rol']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_text_rol']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_text_rol']['field_api_classes'] = TRUE;
  /* Campo: Campo: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['label'] = '';
  $handler->display->display_options['fields']['field_email']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_email']['element_class'] = 'email';
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_email']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_email']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_email']['field_api_classes'] = TRUE;
  /* Campo: Campo: Telephone */
  $handler->display->display_options['fields']['field_telephone']['id'] = 'field_telephone';
  $handler->display->display_options['fields']['field_telephone']['table'] = 'field_data_field_telephone';
  $handler->display->display_options['fields']['field_telephone']['field'] = 'field_telephone';
  $handler->display->display_options['fields']['field_telephone']['label'] = '';
  $handler->display->display_options['fields']['field_telephone']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_telephone']['element_class'] = 'telephone';
  $handler->display->display_options['fields']['field_telephone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_telephone']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_telephone']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_telephone']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_telephone']['field_api_classes'] = TRUE;
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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterio de filtrado: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'Paneles de vista';
  $export['contacts_professor_contact'] = $view;

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
    'research_program' => 'research_program',
  );

  /* Display: Objectives per Research Project Site */
  $handler = $view->new_display('page', 'Objectives per Research Project Site', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Objectives';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Objectives */
  $handler->display->display_options['fields']['field_text_objetivo_1']['id'] = 'field_text_objetivo_1';
  $handler->display->display_options['fields']['field_text_objetivo_1']['table'] = 'field_data_field_text_objetivo';
  $handler->display->display_options['fields']['field_text_objetivo_1']['field'] = 'field_text_objetivo';
  $handler->display->display_options['fields']['field_text_objetivo_1']['label'] = '';
  $handler->display->display_options['fields']['field_text_objetivo_1']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['fields']['field_paragraph_organizations']['label'] = 'Organizaciones';
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
  /* Campo: Campo: Document Nodes */
  $handler->display->display_options['fields']['field_eref_document']['id'] = 'field_eref_document';
  $handler->display->display_options['fields']['field_eref_document']['table'] = 'field_data_field_eref_document';
  $handler->display->display_options['fields']['field_eref_document']['field'] = 'field_eref_document';
  $handler->display->display_options['fields']['field_eref_document']['label'] = 'Results';
  $handler->display->display_options['fields']['field_eref_document']['element_type'] = '0';
  $handler->display->display_options['fields']['field_eref_document']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_eref_document']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_eref_document']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_eref_document']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_eref_document']['settings'] = array(
    'view_mode' => 'default',
    'links' => 1,
    'use_content_language' => 1,
  );
  $handler->display->display_options['fields']['field_eref_document']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_eref_document']['field_api_classes'] = TRUE;
  /* Campo: Contenido: Publications */
  $handler->display->display_options['fields']['field_eref_publications']['id'] = 'field_eref_publications';
  $handler->display->display_options['fields']['field_eref_publications']['table'] = 'field_data_field_eref_publications';
  $handler->display->display_options['fields']['field_eref_publications']['field'] = 'field_eref_publications';
  $handler->display->display_options['fields']['field_eref_publications']['label'] = 'Publicaciones';
  $handler->display->display_options['fields']['field_eref_publications']['element_type'] = '0';
  $handler->display->display_options['fields']['field_eref_publications']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_eref_publications']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_eref_publications']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_eref_publications']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_eref_publications']['settings'] = array(
    'view_mode' => 'full',
    'links' => 1,
    'use_content_language' => 1,
  );
  $handler->display->display_options['fields']['field_eref_publications']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_eref_publications']['field_api_classes'] = TRUE;
  $handler->display->display_options['path'] = 'node/%/resultados';

  /* Display: Schools per Research Project Site */
  $handler = $view->new_display('panel_pane', 'Schools per Research Project Site', 'panel_pane_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Campo: Associated school */
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

  $view = new view();
  $view->name = 'project_cards_per_node';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Project Cards - Per node';
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
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Todo';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  /* Criterio de filtrado: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Project Cards - Page */
  $handler = $view->new_display('page', 'Project Cards - Page', 'project_cards_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Projects';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Projects Description */
  $handler->display->display_options['fields']['field_text_projects_description']['id'] = 'field_text_projects_description';
  $handler->display->display_options['fields']['field_text_projects_description']['table'] = 'field_data_field_text_projects_description';
  $handler->display->display_options['fields']['field_text_projects_description']['field'] = 'field_text_projects_description';
  $handler->display->display_options['fields']['field_text_projects_description']['label'] = '';
  $handler->display->display_options['fields']['field_text_projects_description']['element_type'] = '0';
  $handler->display->display_options['fields']['field_text_projects_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_text_projects_description']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_text_projects_description']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_text_projects_description']['field_api_classes'] = TRUE;
  /* Campo: Contenido: Project Cards */
  $handler->display->display_options['fields']['field_fc_cards_projects']['id'] = 'field_fc_cards_projects';
  $handler->display->display_options['fields']['field_fc_cards_projects']['table'] = 'field_data_field_fc_cards_projects';
  $handler->display->display_options['fields']['field_fc_cards_projects']['field'] = 'field_fc_cards_projects';
  $handler->display->display_options['fields']['field_fc_cards_projects']['label'] = '';
  $handler->display->display_options['fields']['field_fc_cards_projects']['element_type'] = '0';
  $handler->display->display_options['fields']['field_fc_cards_projects']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fc_cards_projects']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_fc_cards_projects']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_fc_cards_projects']['type'] = 'field_collection_view';
  $handler->display->display_options['fields']['field_fc_cards_projects']['settings'] = array(
    'add' => '',
    'edit' => 'Edit',
    'translate' => '',
    'delete' => 'Delete',
    'description' => 0,
    'view_mode' => 'card_teaser',
  );
  $handler->display->display_options['fields']['field_fc_cards_projects']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_fc_cards_projects']['field_api_classes'] = TRUE;
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
  $handler->display->display_options['path'] = 'node/%/proyectos';
  $export['project_cards_per_node'] = $view;

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
  $handler->display->display_options['title'] = 'Proyectos';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Projects Description */
  $handler->display->display_options['fields']['field_text_projects_description']['id'] = 'field_text_projects_description';
  $handler->display->display_options['fields']['field_text_projects_description']['table'] = 'field_data_field_text_projects_description';
  $handler->display->display_options['fields']['field_text_projects_description']['field'] = 'field_text_projects_description';
  $handler->display->display_options['fields']['field_text_projects_description']['label'] = '';
  $handler->display->display_options['fields']['field_text_projects_description']['element_type'] = '0';
  $handler->display->display_options['fields']['field_text_projects_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_text_projects_description']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_text_projects_description']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_text_projects_description']['field_api_classes'] = TRUE;
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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterio de filtrado: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['path'] = 'node/%/proyectos';
  $export['research_program_site'] = $view;

  return $export;
}
