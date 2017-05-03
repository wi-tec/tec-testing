<?php
/**
 * @file
 * teacher_content_type_view_teacher_contact_v2.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function teacher_content_type_view_teacher_contact_v2_views_default_views() {
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

  return $export;
}
