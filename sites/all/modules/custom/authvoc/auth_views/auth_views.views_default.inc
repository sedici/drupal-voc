<?php
/**
 * @file
 * auth_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function auth_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'acmccs';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'ACMCCS';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'ACMCCS';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Restablecer';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primero';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'ds';
  /* Campo: Término de taxonomía: Nombre */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Filter criterion: Término de taxonomía: id (field_id) */
  $handler->display->display_options['filters']['field_id_value']['id'] = 'field_id_value';
  $handler->display->display_options['filters']['field_id_value']['table'] = 'field_data_field_id';
  $handler->display->display_options['filters']['field_id_value']['field'] = 'field_id_value';
  $handler->display->display_options['filters']['field_id_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_id_value']['expose']['operator_id'] = 'field_id_value_op';
  $handler->display->display_options['filters']['field_id_value']['expose']['label'] = 'ACMCCS id';
  $handler->display->display_options['filters']['field_id_value']['expose']['operator'] = 'field_id_value_op';
  $handler->display->display_options['filters']['field_id_value']['expose']['identifier'] = 'field_id_value';
  $handler->display->display_options['filters']['field_id_value']['expose']['remember_roles'] = array(
    2 => '2',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'acmccs';
  $translatables['acmccs'] = array(
    t('Master'),
    t('ACMCCS'),
    t('more'),
    t('Apply'),
    t('Restablecer'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« primero'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('ACMCCS id'),
    t('Page'),
  );
  $export['acmccs'] = $view;

  $view = new view();
  $view->name = 'arbol_de_instituciones';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Arbol de instituciones';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Arbol de instituciones';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Restablecer';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Rango';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primero';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'tree';
  $handler->display->display_options['style_options']['main_field'] = 'nid';
  $handler->display->display_options['style_options']['parent_field'] = 'field_padre';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'field_abreviatura' => 'field_abreviatura',
  );
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Campo: Contenido: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Campo: Contenido: Padre */
  $handler->display->display_options['fields']['field_padre']['id'] = 'field_padre';
  $handler->display->display_options['fields']['field_padre']['table'] = 'field_data_field_padre';
  $handler->display->display_options['fields']['field_padre']['field'] = 'field_padre';
  $handler->display->display_options['fields']['field_padre']['label'] = '';
  $handler->display->display_options['fields']['field_padre']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_padre']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_padre']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_padre']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_padre']['delta_offset'] = '0';
  /* Campo: Contenido: Abreviatura */
  $handler->display->display_options['fields']['field_abreviatura']['id'] = 'field_abreviatura';
  $handler->display->display_options['fields']['field_abreviatura']['table'] = 'field_data_field_abreviatura';
  $handler->display->display_options['fields']['field_abreviatura']['field'] = 'field_abreviatura';
  $handler->display->display_options['fields']['field_abreviatura']['label'] = '';
  $handler->display->display_options['fields']['field_abreviatura']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_abreviatura']['alter']['text'] = '([field_abreviatura])';
  $handler->display->display_options['fields']['field_abreviatura']['element_label_colon'] = FALSE;
  /* Sort criterion: Contenido: Nombre institucion (field_nombre_institucion) */
  $handler->display->display_options['sorts']['field_nombre_institucion_value']['id'] = 'field_nombre_institucion_value';
  $handler->display->display_options['sorts']['field_nombre_institucion_value']['table'] = 'field_data_field_nombre_institucion';
  $handler->display->display_options['sorts']['field_nombre_institucion_value']['field'] = 'field_nombre_institucion_value';
  $handler->display->display_options['sorts']['field_nombre_institucion_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_nombre_institucion_value']['expose']['label'] = 'Nombre';
  /* Sort criterion: Contenido: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  $handler->display->display_options['sorts']['nid']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['nid']['expose']['label'] = 'ID';
  /* Sort criterion: Contenido: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  $handler->display->display_options['sorts']['changed']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['changed']['expose']['label'] = 'Fecha de actualización';
  $handler->display->display_options['sorts']['changed']['granularity'] = 'minute';
  /* Filter criterion: Contenido: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenido: Nombre institucion (field_nombre_institucion) */
  $handler->display->display_options['filters']['field_nombre_institucion_value']['id'] = 'field_nombre_institucion_value';
  $handler->display->display_options['filters']['field_nombre_institucion_value']['table'] = 'field_data_field_nombre_institucion';
  $handler->display->display_options['filters']['field_nombre_institucion_value']['field'] = 'field_nombre_institucion_value';
  $handler->display->display_options['filters']['field_nombre_institucion_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_nombre_institucion_value']['group'] = 1;
  $handler->display->display_options['filters']['field_nombre_institucion_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_nombre_institucion_value']['expose']['operator_id'] = 'field_nombre_institucion_value_op';
  $handler->display->display_options['filters']['field_nombre_institucion_value']['expose']['label'] = 'Nombre institucion';
  $handler->display->display_options['filters']['field_nombre_institucion_value']['expose']['operator'] = 'field_nombre_institucion_value_op';
  $handler->display->display_options['filters']['field_nombre_institucion_value']['expose']['identifier'] = 'field_nombre_institucion_value';
  $handler->display->display_options['filters']['field_nombre_institucion_value']['expose']['remember_roles'] = array(
    2 => '2',
  );
  /* Filter criterion: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'instituci_n' => 'instituci_n',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Contenido: Abreviatura (field_abreviatura) */
  $handler->display->display_options['filters']['field_abreviatura_value']['id'] = 'field_abreviatura_value';
  $handler->display->display_options['filters']['field_abreviatura_value']['table'] = 'field_data_field_abreviatura';
  $handler->display->display_options['filters']['field_abreviatura_value']['field'] = 'field_abreviatura_value';
  $handler->display->display_options['filters']['field_abreviatura_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_abreviatura_value']['group'] = 1;
  $handler->display->display_options['filters']['field_abreviatura_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_abreviatura_value']['expose']['operator_id'] = 'field_abreviatura_value_op';
  $handler->display->display_options['filters']['field_abreviatura_value']['expose']['label'] = 'Abreviatura';
  $handler->display->display_options['filters']['field_abreviatura_value']['expose']['operator'] = 'field_abreviatura_value_op';
  $handler->display->display_options['filters']['field_abreviatura_value']['expose']['identifier'] = 'field_abreviatura_value';
  $handler->display->display_options['filters']['field_abreviatura_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'arbol-de-instituciones';
  $translatables['arbol_de_instituciones'] = array(
    t('Master'),
    t('Arbol de instituciones'),
    t('more'),
    t('Apply'),
    t('Restablecer'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Rango'),
    t('« primero'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('([field_abreviatura])'),
    t('Nombre'),
    t('ID'),
    t('Fecha de actualización'),
    t('Nombre institucion'),
    t('Abreviatura'),
    t('Page'),
  );
  $export['arbol_de_instituciones'] = $view;

  $view = new view();
  $view->name = 'buscador_de_personas';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Buscador de personas';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Buscador de personas';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Restablecer';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primero';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Campo: Contenido: DNI */
  $handler->display->display_options['fields']['field_dni']['id'] = 'field_dni';
  $handler->display->display_options['fields']['field_dni']['table'] = 'field_data_field_dni';
  $handler->display->display_options['fields']['field_dni']['field'] = 'field_dni';
  /* Campo: Contenido: Mail */
  $handler->display->display_options['fields']['field_mail']['id'] = 'field_mail';
  $handler->display->display_options['fields']['field_mail']['table'] = 'field_data_field_mail';
  $handler->display->display_options['fields']['field_mail']['field'] = 'field_mail';
  /* Sort criterion: Contenido: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  /* Filter criterion: Contenido: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'persona' => 'persona',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Contenido: Apellido (field_apellido) */
  $handler->display->display_options['filters']['field_apellido_value']['id'] = 'field_apellido_value';
  $handler->display->display_options['filters']['field_apellido_value']['table'] = 'field_data_field_apellido';
  $handler->display->display_options['filters']['field_apellido_value']['field'] = 'field_apellido_value';
  $handler->display->display_options['filters']['field_apellido_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_apellido_value']['group'] = 1;
  $handler->display->display_options['filters']['field_apellido_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_apellido_value']['expose']['operator_id'] = 'field_apellido_value_op';
  $handler->display->display_options['filters']['field_apellido_value']['expose']['label'] = 'Apellido';
  $handler->display->display_options['filters']['field_apellido_value']['expose']['operator'] = 'field_apellido_value_op';
  $handler->display->display_options['filters']['field_apellido_value']['expose']['identifier'] = 'field_apellido_value';
  $handler->display->display_options['filters']['field_apellido_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Contenido: Nombre (field_nombre) */
  $handler->display->display_options['filters']['field_nombre_value']['id'] = 'field_nombre_value';
  $handler->display->display_options['filters']['field_nombre_value']['table'] = 'field_data_field_nombre';
  $handler->display->display_options['filters']['field_nombre_value']['field'] = 'field_nombre_value';
  $handler->display->display_options['filters']['field_nombre_value']['operator'] = 'starts';
  $handler->display->display_options['filters']['field_nombre_value']['group'] = 1;
  $handler->display->display_options['filters']['field_nombre_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_nombre_value']['expose']['operator_id'] = 'field_nombre_value_op';
  $handler->display->display_options['filters']['field_nombre_value']['expose']['label'] = 'Nombre';
  $handler->display->display_options['filters']['field_nombre_value']['expose']['operator'] = 'field_nombre_value_op';
  $handler->display->display_options['filters']['field_nombre_value']['expose']['identifier'] = 'field_nombre_value';
  $handler->display->display_options['filters']['field_nombre_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Contenido: DNI (field_dni) */
  $handler->display->display_options['filters']['field_dni_value']['id'] = 'field_dni_value';
  $handler->display->display_options['filters']['field_dni_value']['table'] = 'field_data_field_dni';
  $handler->display->display_options['filters']['field_dni_value']['field'] = 'field_dni_value';
  $handler->display->display_options['filters']['field_dni_value']['group'] = 1;
  $handler->display->display_options['filters']['field_dni_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_dni_value']['expose']['operator_id'] = 'field_dni_value_op';
  $handler->display->display_options['filters']['field_dni_value']['expose']['label'] = 'DNI';
  $handler->display->display_options['filters']['field_dni_value']['expose']['operator'] = 'field_dni_value_op';
  $handler->display->display_options['filters']['field_dni_value']['expose']['identifier'] = 'field_dni_value';
  $handler->display->display_options['filters']['field_dni_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Contenido: Mail (field_mail) */
  $handler->display->display_options['filters']['field_mail_value']['id'] = 'field_mail_value';
  $handler->display->display_options['filters']['field_mail_value']['table'] = 'field_data_field_mail';
  $handler->display->display_options['filters']['field_mail_value']['field'] = 'field_mail_value';
  $handler->display->display_options['filters']['field_mail_value']['group'] = 1;
  $handler->display->display_options['filters']['field_mail_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_mail_value']['expose']['operator_id'] = 'field_mail_value_op';
  $handler->display->display_options['filters']['field_mail_value']['expose']['label'] = 'Mail';
  $handler->display->display_options['filters']['field_mail_value']['expose']['operator'] = 'field_mail_value_op';
  $handler->display->display_options['filters']['field_mail_value']['expose']['identifier'] = 'field_mail_value';
  $handler->display->display_options['filters']['field_mail_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'buscador-de-personas';
  $translatables['buscador_de_personas'] = array(
    t('Master'),
    t('Buscador de personas'),
    t('more'),
    t('Apply'),
    t('Restablecer'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« primero'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('DNI'),
    t('Mail'),
    t('Apellido'),
    t('Nombre'),
    t('Page'),
  );
  $export['buscador_de_personas'] = $view;

  $view = new view();
  $view->name = 'decs';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'DeCS';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'DeCS';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Restablecer';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primero';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'tree';
  $handler->display->display_options['style_options']['main_field'] = 'tid';
  $handler->display->display_options['style_options']['parent_field'] = 'tid_1';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Término de taxonomía: Término padre */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  /* Campo: Término de taxonomía: Nombre */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Campo: Término de taxonomía: ID del término */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Campo: Término de taxonomía: ID del término */
  $handler->display->display_options['fields']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['fields']['tid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid_1']['field'] = 'tid';
  $handler->display->display_options['fields']['tid_1']['relationship'] = 'parent';
  $handler->display->display_options['fields']['tid_1']['label'] = '';
  $handler->display->display_options['fields']['tid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid_1']['separator'] = '';
  /* Sort criterion: Término de taxonomía: ID del término */
  $handler->display->display_options['sorts']['tid']['id'] = 'tid';
  $handler->display->display_options['sorts']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['tid']['field'] = 'tid';
  /* Filter criterion: Vocabulario de taxonomía: Nombre de sistema */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'tesauro_decs' => 'tesauro_decs',
  );
  /* Filter criterion: Término de taxonomía: Nombre */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['operator'] = 'contains';
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Nombre';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'decs';
  $translatables['decs'] = array(
    t('Master'),
    t('DeCS'),
    t('more'),
    t('Apply'),
    t('Restablecer'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« primero'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('Padre'),
    t('.'),
    t('Nombre'),
    t('Page'),
  );
  $export['decs'] = $view;

  $view = new view();
  $view->name = 'descriptores_sedici';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Descriptores SEDICI';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Descriptores SEDICI';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Restablecer';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primero';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'tree';
  $handler->display->display_options['style_options']['main_field'] = 'tid';
  $handler->display->display_options['style_options']['parent_field'] = 'tid_1';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Término de taxonomía: Término padre */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  /* Campo: Término de taxonomía: Nombre */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Campo: Término de taxonomía: ID del término */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Campo: Término de taxonomía: ID del término */
  $handler->display->display_options['fields']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['fields']['tid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid_1']['field'] = 'tid';
  $handler->display->display_options['fields']['tid_1']['relationship'] = 'parent';
  $handler->display->display_options['fields']['tid_1']['label'] = '';
  $handler->display->display_options['fields']['tid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid_1']['separator'] = '';
  /* Sort criterion: Término de taxonomía: ID del término */
  $handler->display->display_options['sorts']['tid']['id'] = 'tid';
  $handler->display->display_options['sorts']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['tid']['field'] = 'tid';
  /* Filter criterion: Vocabulario de taxonomía: Nombre de sistema */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'descriptores_sedici' => 'descriptores_sedici',
  );
  /* Filter criterion: Término de taxonomía: Nombre */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['operator'] = 'contains';
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Nombre';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'descriptores-sedici';
  $translatables['descriptores_sedici'] = array(
    t('Master'),
    t('Descriptores SEDICI'),
    t('more'),
    t('Apply'),
    t('Restablecer'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« primero'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('Padre'),
    t('.'),
    t('Nombre'),
    t('Page'),
  );
  $export['descriptores_sedici'] = $view;

  $view = new view();
  $view->name = 'eurovoc';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Eurovoc';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Eurovoc';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Restablecer';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primero';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'tree';
  $handler->display->display_options['style_options']['main_field'] = 'tid';
  $handler->display->display_options['style_options']['parent_field'] = 'tid_1';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Término de taxonomía: Término padre */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  /* Campo: Término de taxonomía: Nombre */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Campo: Término de taxonomía: ID del término */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Campo: Término de taxonomía: ID del término */
  $handler->display->display_options['fields']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['fields']['tid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid_1']['field'] = 'tid';
  $handler->display->display_options['fields']['tid_1']['relationship'] = 'parent';
  $handler->display->display_options['fields']['tid_1']['label'] = '';
  $handler->display->display_options['fields']['tid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid_1']['separator'] = '';
  /* Sort criterion: Término de taxonomía: ID del término */
  $handler->display->display_options['sorts']['tid']['id'] = 'tid';
  $handler->display->display_options['sorts']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['tid']['field'] = 'tid';
  /* Filter criterion: Vocabulario de taxonomía: Nombre de sistema */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'tesauro_eurovoc' => 'tesauro_eurovoc',
  );
  /* Filter criterion: Término de taxonomía: Nombre */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['operator'] = 'contains';
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Nombre';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'eurovoc';
  $translatables['eurovoc'] = array(
    t('Master'),
    t('Eurovoc'),
    t('more'),
    t('Apply'),
    t('Restablecer'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« primero'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('Padre'),
    t('.'),
    t('Nombre'),
    t('Page'),
  );
  $export['eurovoc'] = $view;

  $view = new view();
  $view->name = 'filiaciones_vacias';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'filiaciones vacias';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'filiaciones vacias';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Restablecer';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primero';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'item_id' => 'item_id',
    'field_institucion' => 'field_institucion',
    'field_apellido' => 'field_apellido',
    'field_nombre' => 'field_nombre',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'item_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_institucion' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_apellido' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_nombre' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Field collection item: Entity with the Filiación (field_filiaci_n_compuesta) */
  $handler->display->display_options['relationships']['field_filiaci_n_compuesta_node']['id'] = 'field_filiaci_n_compuesta_node';
  $handler->display->display_options['relationships']['field_filiaci_n_compuesta_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_filiaci_n_compuesta_node']['field'] = 'field_filiaci_n_compuesta_node';
  /* Campo: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  /* Campo: Field collection item: Institucion */
  $handler->display->display_options['fields']['field_institucion']['id'] = 'field_institucion';
  $handler->display->display_options['fields']['field_institucion']['table'] = 'field_data_field_institucion';
  $handler->display->display_options['fields']['field_institucion']['field'] = 'field_institucion';
  $handler->display->display_options['fields']['field_institucion']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_filiaci_n_compuesta_node';
  /* Filter criterion: Field collection item: Institucion (field_institucion) */
  $handler->display->display_options['filters']['field_institucion_target_id']['id'] = 'field_institucion_target_id';
  $handler->display->display_options['filters']['field_institucion_target_id']['table'] = 'field_data_field_institucion';
  $handler->display->display_options['filters']['field_institucion_target_id']['field'] = 'field_institucion_target_id';
  $handler->display->display_options['filters']['field_institucion_target_id']['operator'] = 'empty';
  /* Filter criterion: Contenido: Apellido (field_apellido) */
  $handler->display->display_options['filters']['field_apellido_value']['id'] = 'field_apellido_value';
  $handler->display->display_options['filters']['field_apellido_value']['table'] = 'field_data_field_apellido';
  $handler->display->display_options['filters']['field_apellido_value']['field'] = 'field_apellido_value';
  $handler->display->display_options['filters']['field_apellido_value']['relationship'] = 'field_filiaci_n_compuesta_node';
  $handler->display->display_options['filters']['field_apellido_value']['operator'] = 'starts';
  $handler->display->display_options['filters']['field_apellido_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_apellido_value']['expose']['operator_id'] = 'field_apellido_value_op';
  $handler->display->display_options['filters']['field_apellido_value']['expose']['label'] = 'Apellido (field_apellido)';
  $handler->display->display_options['filters']['field_apellido_value']['expose']['operator'] = 'field_apellido_value_op';
  $handler->display->display_options['filters']['field_apellido_value']['expose']['identifier'] = 'field_apellido_value';
  $handler->display->display_options['filters']['field_apellido_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'filiaciones-vacias';
  $translatables['filiaciones_vacias'] = array(
    t('Master'),
    t('filiaciones vacias'),
    t('more'),
    t('Apply'),
    t('Restablecer'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« primero'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('field_filiaci_n_compuesta'),
    t('Field collection item ID'),
    t('.'),
    t(','),
    t('Institucion'),
    t('Título'),
    t('Apellido (field_apellido)'),
    t('Page'),
  );
  $export['filiaciones_vacias'] = $view;

  $view = new view();
  $view->name = 'instituciones_argentinas_sin_siglas';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Instituciones argentinas sin siglas';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Instituciones argentinas sin abreviaturas';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Restablecer';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '200';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primero';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Campo: Contenido: Padre */
  $handler->display->display_options['fields']['field_padre']['id'] = 'field_padre';
  $handler->display->display_options['fields']['field_padre']['table'] = 'field_data_field_padre';
  $handler->display->display_options['fields']['field_padre']['field'] = 'field_padre';
  $handler->display->display_options['fields']['field_padre']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_padre']['delta_offset'] = '0';
  /* Sort criterion: Contenido: Nombre institucion (field_nombre_institucion) */
  $handler->display->display_options['sorts']['field_nombre_institucion_value']['id'] = 'field_nombre_institucion_value';
  $handler->display->display_options['sorts']['field_nombre_institucion_value']['table'] = 'field_data_field_nombre_institucion';
  $handler->display->display_options['sorts']['field_nombre_institucion_value']['field'] = 'field_nombre_institucion_value';
  $handler->display->display_options['sorts']['field_nombre_institucion_value']['expose']['label'] = 'Ordenar por Nombre';
  /* Filter criterion: Contenido: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'instituci_n' => 'instituci_n',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Contenido: Abreviatura (field_abreviatura) */
  $handler->display->display_options['filters']['field_abreviatura_value']['id'] = 'field_abreviatura_value';
  $handler->display->display_options['filters']['field_abreviatura_value']['table'] = 'field_data_field_abreviatura';
  $handler->display->display_options['filters']['field_abreviatura_value']['field'] = 'field_abreviatura_value';
  $handler->display->display_options['filters']['field_abreviatura_value']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_abreviatura_value']['group'] = 1;
  /* Filter criterion: Contenido: Nombre institucion (field_nombre_institucion) */
  $handler->display->display_options['filters']['field_nombre_institucion_value']['id'] = 'field_nombre_institucion_value';
  $handler->display->display_options['filters']['field_nombre_institucion_value']['table'] = 'field_data_field_nombre_institucion';
  $handler->display->display_options['filters']['field_nombre_institucion_value']['field'] = 'field_nombre_institucion_value';
  $handler->display->display_options['filters']['field_nombre_institucion_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_nombre_institucion_value']['group'] = 1;
  $handler->display->display_options['filters']['field_nombre_institucion_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_nombre_institucion_value']['expose']['operator_id'] = 'field_nombre_institucion_value_op';
  $handler->display->display_options['filters']['field_nombre_institucion_value']['expose']['label'] = 'Nombre institución';
  $handler->display->display_options['filters']['field_nombre_institucion_value']['expose']['operator'] = 'field_nombre_institucion_value_op';
  $handler->display->display_options['filters']['field_nombre_institucion_value']['expose']['identifier'] = 'field_nombre_institucion_value';
  $handler->display->display_options['filters']['field_nombre_institucion_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Contenido: id_termino (field_id_termino) */
  $handler->display->display_options['filters']['field_id_termino_value']['id'] = 'field_id_termino_value';
  $handler->display->display_options['filters']['field_id_termino_value']['table'] = 'field_data_field_id_termino';
  $handler->display->display_options['filters']['field_id_termino_value']['field'] = 'field_id_termino_value';
  $handler->display->display_options['filters']['field_id_termino_value']['operator'] = 'starts';
  $handler->display->display_options['filters']['field_id_termino_value']['value'] = '1.';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'instituciones-argentinas-sin-siglas';
  $translatables['instituciones_argentinas_sin_siglas'] = array(
    t('Master'),
    t('Instituciones argentinas sin abreviaturas'),
    t('more'),
    t('Apply'),
    t('Restablecer'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« primero'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('Padre'),
    t('Ordenar por Nombre'),
    t('Nombre institución'),
    t('Page'),
  );
  $export['instituciones_argentinas_sin_siglas'] = $view;

  $view = new view();
  $view->name = 'instituciones_sin_siglas';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Instituciones sin siglas';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Instituciones sin abreviaturas';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Restablecer';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primero';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Campo: Contenido: Padre */
  $handler->display->display_options['fields']['field_padre']['id'] = 'field_padre';
  $handler->display->display_options['fields']['field_padre']['table'] = 'field_data_field_padre';
  $handler->display->display_options['fields']['field_padre']['field'] = 'field_padre';
  $handler->display->display_options['fields']['field_padre']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_padre']['delta_offset'] = '0';
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Contenido: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Contenido: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'instituci_n' => 'instituci_n',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Contenido: Abreviatura (field_abreviatura) */
  $handler->display->display_options['filters']['field_abreviatura_value']['id'] = 'field_abreviatura_value';
  $handler->display->display_options['filters']['field_abreviatura_value']['table'] = 'field_data_field_abreviatura';
  $handler->display->display_options['filters']['field_abreviatura_value']['field'] = 'field_abreviatura_value';
  $handler->display->display_options['filters']['field_abreviatura_value']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_abreviatura_value']['group'] = 1;
  /* Filter criterion: Contenido: Nombre institucion (field_nombre_institucion) */
  $handler->display->display_options['filters']['field_nombre_institucion_value']['id'] = 'field_nombre_institucion_value';
  $handler->display->display_options['filters']['field_nombre_institucion_value']['table'] = 'field_data_field_nombre_institucion';
  $handler->display->display_options['filters']['field_nombre_institucion_value']['field'] = 'field_nombre_institucion_value';
  $handler->display->display_options['filters']['field_nombre_institucion_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_nombre_institucion_value']['group'] = 1;
  $handler->display->display_options['filters']['field_nombre_institucion_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_nombre_institucion_value']['expose']['operator_id'] = 'field_nombre_institucion_value_op';
  $handler->display->display_options['filters']['field_nombre_institucion_value']['expose']['label'] = 'Nombre institución';
  $handler->display->display_options['filters']['field_nombre_institucion_value']['expose']['operator'] = 'field_nombre_institucion_value_op';
  $handler->display->display_options['filters']['field_nombre_institucion_value']['expose']['identifier'] = 'field_nombre_institucion_value';
  $handler->display->display_options['filters']['field_nombre_institucion_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'instituciones-sin-siglas';
  $translatables['instituciones_sin_siglas'] = array(
    t('Master'),
    t('Instituciones sin abreviaturas'),
    t('more'),
    t('Apply'),
    t('Restablecer'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« primero'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('Padre'),
    t('Nombre institución'),
    t('Page'),
  );
  $export['instituciones_sin_siglas'] = $view;

  $view = new view();
  $view->name = 'instituciones_update';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Instituciones update';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Instituciones update';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Restablecer';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primero';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Campo: Contenido: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Campo: Contenido: id_termino */
  $handler->display->display_options['fields']['field_id_termino']['id'] = 'field_id_termino';
  $handler->display->display_options['fields']['field_id_termino']['table'] = 'field_data_field_id_termino';
  $handler->display->display_options['fields']['field_id_termino']['field'] = 'field_id_termino';
  /* Sort criterion: Contenido: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Contenido: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'instituci_n' => 'instituci_n',
  );
  /* Filter criterion: Contenido: id_termino (field_id_termino) */
  $handler->display->display_options['filters']['field_id_termino_value']['id'] = 'field_id_termino_value';
  $handler->display->display_options['filters']['field_id_termino_value']['table'] = 'field_data_field_id_termino';
  $handler->display->display_options['filters']['field_id_termino_value']['field'] = 'field_id_termino_value';
  $handler->display->display_options['filters']['field_id_termino_value']['operator'] = 'not empty';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'instituciones-update';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'instituciones-update.csv';
  $translatables['instituciones_update'] = array(
    t('Master'),
    t('Instituciones update'),
    t('more'),
    t('Apply'),
    t('Restablecer'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« primero'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('Nid'),
    t('Título'),
    t('id_termino'),
    t('Page'),
    t('Data export'),
  );
  $export['instituciones_update'] = $view;

  $view = new view();
  $view->name = 'materias';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Materias';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Materias';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Restablecer';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primero';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'tree';
  $handler->display->display_options['style_options']['main_field'] = 'tid';
  $handler->display->display_options['style_options']['parent_field'] = 'tid_1';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Término de taxonomía: Término padre */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  /* Campo: Término de taxonomía: Nombre */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Campo: Término de taxonomía: ID del término */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Campo: Término de taxonomía: ID del término */
  $handler->display->display_options['fields']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['fields']['tid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid_1']['field'] = 'tid';
  $handler->display->display_options['fields']['tid_1']['relationship'] = 'parent';
  $handler->display->display_options['fields']['tid_1']['label'] = '';
  $handler->display->display_options['fields']['tid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid_1']['separator'] = '';
  /* Sort criterion: Término de taxonomía: ID del término */
  $handler->display->display_options['sorts']['tid']['id'] = 'tid';
  $handler->display->display_options['sorts']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['tid']['field'] = 'tid';
  /* Filter criterion: Vocabulario de taxonomía: Nombre de sistema */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'materias' => 'materias',
  );
  /* Filter criterion: Término de taxonomía: Nombre */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['operator'] = 'contains';
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Nombre';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'materias';
  $translatables['materias'] = array(
    t('Master'),
    t('Materias'),
    t('more'),
    t('Apply'),
    t('Restablecer'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« primero'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('Padre'),
    t('.'),
    t('Nombre'),
    t('Page'),
  );
  $export['materias'] = $view;

  $view = new view();
  $view->name = 'padre_institucion';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Padre e institucion';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Padre e institucion';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Restablecer';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primero';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_padre_target_id']['id'] = 'field_padre_target_id';
  $handler->display->display_options['relationships']['field_padre_target_id']['table'] = 'field_data_field_padre';
  $handler->display->display_options['relationships']['field_padre_target_id']['field'] = 'field_padre_target_id';
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Contenido: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Contenido: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'instituci_n' => 'instituci_n',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'padre-e-institucion';

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['padre_institucion'] = array(
    t('Master'),
    t('Padre e institucion'),
    t('more'),
    t('Apply'),
    t('Restablecer'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« primero'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('Contenido entity referenced from field_padre'),
    t('Page'),
    t('Entity Reference'),
  );
  $export['padre_institucion'] = $view;

  $view = new view();
  $view->name = 'personas';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Personas';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Personas';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Restablecer';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primero';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Contenido: Filiación (field_filiaci_n_compuesta) */
  $handler->display->display_options['relationships']['field_filiaci_n_compuesta_value']['id'] = 'field_filiaci_n_compuesta_value';
  $handler->display->display_options['relationships']['field_filiaci_n_compuesta_value']['table'] = 'field_data_field_filiaci_n_compuesta';
  $handler->display->display_options['relationships']['field_filiaci_n_compuesta_value']['field'] = 'field_filiaci_n_compuesta_value';
  $handler->display->display_options['relationships']['field_filiaci_n_compuesta_value']['delta'] = '-1';
  /* Campo: Contenido: Apellido */
  $handler->display->display_options['fields']['field_apellido']['id'] = 'field_apellido';
  $handler->display->display_options['fields']['field_apellido']['table'] = 'field_data_field_apellido';
  $handler->display->display_options['fields']['field_apellido']['field'] = 'field_apellido';
  /* Campo: Contenido: Nombre */
  $handler->display->display_options['fields']['field_nombre']['id'] = 'field_nombre';
  $handler->display->display_options['fields']['field_nombre']['table'] = 'field_data_field_nombre';
  $handler->display->display_options['fields']['field_nombre']['field'] = 'field_nombre';
  /* Campo: Field collection item: Institucion */
  $handler->display->display_options['fields']['field_institucion']['id'] = 'field_institucion';
  $handler->display->display_options['fields']['field_institucion']['table'] = 'field_data_field_institucion';
  $handler->display->display_options['fields']['field_institucion']['field'] = 'field_institucion';
  $handler->display->display_options['fields']['field_institucion']['relationship'] = 'field_filiaci_n_compuesta_value';
  $handler->display->display_options['fields']['field_institucion']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Sort criterion: Contenido: Apellido (field_apellido) */
  $handler->display->display_options['sorts']['field_apellido_value']['id'] = 'field_apellido_value';
  $handler->display->display_options['sorts']['field_apellido_value']['table'] = 'field_data_field_apellido';
  $handler->display->display_options['sorts']['field_apellido_value']['field'] = 'field_apellido_value';
  /* Sort criterion: Contenido: Nombre (field_nombre) */
  $handler->display->display_options['sorts']['field_nombre_value']['id'] = 'field_nombre_value';
  $handler->display->display_options['sorts']['field_nombre_value']['table'] = 'field_data_field_nombre';
  $handler->display->display_options['sorts']['field_nombre_value']['field'] = 'field_nombre_value';
  /* Filter criterion: Contenido: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'persona' => 'persona',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'personas';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'export-personas.csv';
  $handler->display->display_options['use_batch'] = 'batch';
  $handler->display->display_options['segment_size'] = '100';
  $translatables['personas'] = array(
    t('Master'),
    t('Personas'),
    t('more'),
    t('Apply'),
    t('Restablecer'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« primero'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('field collection item from field_filiaci_n_compuesta'),
    t('Apellido'),
    t('Nombre'),
    t('Institucion'),
    t('Page'),
    t('Data export'),
  );
  $export['personas'] = $view;

  $view = new view();
  $view->name = 'personas_duplicadas';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Personas duplicadas';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Personas duplicadas';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Restablecer';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primero';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['class'] = '';
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Campo: Contenido: Filiación */
  $handler->display->display_options['fields']['field_filiaci_n_compuesta']['id'] = 'field_filiaci_n_compuesta';
  $handler->display->display_options['fields']['field_filiaci_n_compuesta']['table'] = 'field_data_field_filiaci_n_compuesta';
  $handler->display->display_options['fields']['field_filiaci_n_compuesta']['field'] = 'field_filiaci_n_compuesta';
  $handler->display->display_options['fields']['field_filiaci_n_compuesta']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_filiaci_n_compuesta']['settings'] = array(
    'view_mode' => 'instituci_n_solo',
  );
  $handler->display->display_options['fields']['field_filiaci_n_compuesta']['delta_offset'] = '0';
  /* Campo: Contenido: Link to delete content */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = 'Borrar';
  /* Campo: Contenido: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Editar';
  /* Sort criterion: Contenido: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Contenido: Título */
  $handler->display->display_options['arguments']['title']['id'] = 'title';
  $handler->display->display_options['arguments']['title']['table'] = 'node';
  $handler->display->display_options['arguments']['title']['field'] = 'title';
  $handler->display->display_options['arguments']['title']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['title']['exception']['title'] = 'Todo';
  $handler->display->display_options['arguments']['title']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['title']['summary']['sort_order'] = 'desc';
  $handler->display->display_options['arguments']['title']['summary']['number_of_records'] = '1';
  $handler->display->display_options['arguments']['title']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['title']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['title']['limit'] = '0';
  /* Filter criterion: Contenido: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'persona' => 'persona',
  );
  /* Filter criterion: Contenido: Apellido (field_apellido) */
  $handler->display->display_options['filters']['field_apellido_value']['id'] = 'field_apellido_value';
  $handler->display->display_options['filters']['field_apellido_value']['table'] = 'field_data_field_apellido';
  $handler->display->display_options['filters']['field_apellido_value']['field'] = 'field_apellido_value';
  $handler->display->display_options['filters']['field_apellido_value']['operator'] = 'starts';
  $handler->display->display_options['filters']['field_apellido_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_apellido_value']['expose']['operator_id'] = 'field_apellido_value_op';
  $handler->display->display_options['filters']['field_apellido_value']['expose']['label'] = 'Apellido';
  $handler->display->display_options['filters']['field_apellido_value']['expose']['operator'] = 'field_apellido_value_op';
  $handler->display->display_options['filters']['field_apellido_value']['expose']['identifier'] = 'field_apellido_value';
  $handler->display->display_options['filters']['field_apellido_value']['expose']['remember_roles'] = array(
    2 => '2',
  );
  /* Filter criterion: Contenido: Nombre (field_nombre) */
  $handler->display->display_options['filters']['field_nombre_value']['id'] = 'field_nombre_value';
  $handler->display->display_options['filters']['field_nombre_value']['table'] = 'field_data_field_nombre';
  $handler->display->display_options['filters']['field_nombre_value']['field'] = 'field_nombre_value';
  $handler->display->display_options['filters']['field_nombre_value']['operator'] = 'starts';
  $handler->display->display_options['filters']['field_nombre_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_nombre_value']['expose']['operator_id'] = 'field_nombre_value_op';
  $handler->display->display_options['filters']['field_nombre_value']['expose']['label'] = 'Nombre';
  $handler->display->display_options['filters']['field_nombre_value']['expose']['operator'] = 'field_nombre_value_op';
  $handler->display->display_options['filters']['field_nombre_value']['expose']['identifier'] = 'field_nombre_value';
  $handler->display->display_options['filters']['field_nombre_value']['expose']['remember_roles'] = array(
    2 => '2',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'personas-duplicadas';
  $translatables['personas_duplicadas'] = array(
    t('Master'),
    t('Personas duplicadas'),
    t('more'),
    t('Apply'),
    t('Restablecer'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« primero'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('Filiación'),
    t('Borrar'),
    t('Editar'),
    t('Todo'),
    t('Apellido'),
    t('Nombre'),
    t('Page'),
  );
  $export['personas_duplicadas'] = $view;

  $view = new view();
  $view->name = 'personas_sin_filiacion_y_con_observaciones';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Personas sin filiacion y con observaciones';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Personas sin filiacion y con observaciones';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Restablecer';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primero';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Campo: Contenido: Filiación */
  $handler->display->display_options['fields']['field_filiaci_n_compuesta']['id'] = 'field_filiaci_n_compuesta';
  $handler->display->display_options['fields']['field_filiaci_n_compuesta']['table'] = 'field_data_field_filiaci_n_compuesta';
  $handler->display->display_options['fields']['field_filiaci_n_compuesta']['field'] = 'field_filiaci_n_compuesta';
  $handler->display->display_options['fields']['field_filiaci_n_compuesta']['settings'] = array(
    'add' => 'Agregar',
    'edit' => 'Editar',
    'translate' => '',
    'delete' => 'Eliminar',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_filiaci_n_compuesta']['delta_offset'] = '0';
  /* Campo: Contenido: Observaciones */
  $handler->display->display_options['fields']['field_obs']['id'] = 'field_obs';
  $handler->display->display_options['fields']['field_obs']['table'] = 'field_data_field_obs';
  $handler->display->display_options['fields']['field_obs']['field'] = 'field_obs';
  /* Sort criterion: Contenido: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Contenido: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'persona' => 'persona',
  );
  /* Filter criterion: Contenido: Filiación (field_filiaci_n_compuesta) */
  $handler->display->display_options['filters']['field_filiaci_n_compuesta_value']['id'] = 'field_filiaci_n_compuesta_value';
  $handler->display->display_options['filters']['field_filiaci_n_compuesta_value']['table'] = 'field_data_field_filiaci_n_compuesta';
  $handler->display->display_options['filters']['field_filiaci_n_compuesta_value']['field'] = 'field_filiaci_n_compuesta_value';
  $handler->display->display_options['filters']['field_filiaci_n_compuesta_value']['operator'] = 'empty';
  /* Filter criterion: Contenido: Observaciones (field_obs) */
  $handler->display->display_options['filters']['field_obs_value']['id'] = 'field_obs_value';
  $handler->display->display_options['filters']['field_obs_value']['table'] = 'field_data_field_obs';
  $handler->display->display_options['filters']['field_obs_value']['field'] = 'field_obs_value';
  $handler->display->display_options['filters']['field_obs_value']['operator'] = 'not empty';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'personas-sin-filiacion-y-con-observaciones';
  $translatables['personas_sin_filiacion_y_con_observaciones'] = array(
    t('Master'),
    t('Personas sin filiacion y con observaciones'),
    t('more'),
    t('Apply'),
    t('Restablecer'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« primero'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('Título'),
    t('Filiación'),
    t('Observaciones'),
    t('Page'),
  );
  $export['personas_sin_filiacion_y_con_observaciones'] = $view;

  $view = new view();
  $view->name = 'personas_unlp';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Personas UNLP';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Personas';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Restablecer';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primero';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Contenido: Filiación (field_filiaci_n_compuesta) */
  $handler->display->display_options['relationships']['field_filiaci_n_compuesta_value']['id'] = 'field_filiaci_n_compuesta_value';
  $handler->display->display_options['relationships']['field_filiaci_n_compuesta_value']['table'] = 'field_data_field_filiaci_n_compuesta';
  $handler->display->display_options['relationships']['field_filiaci_n_compuesta_value']['field'] = 'field_filiaci_n_compuesta_value';
  $handler->display->display_options['relationships']['field_filiaci_n_compuesta_value']['delta'] = '-1';
  /* Campo: Contenido: Apellido */
  $handler->display->display_options['fields']['field_apellido']['id'] = 'field_apellido';
  $handler->display->display_options['fields']['field_apellido']['table'] = 'field_data_field_apellido';
  $handler->display->display_options['fields']['field_apellido']['field'] = 'field_apellido';
  /* Campo: Contenido: Nombre */
  $handler->display->display_options['fields']['field_nombre']['id'] = 'field_nombre';
  $handler->display->display_options['fields']['field_nombre']['table'] = 'field_data_field_nombre';
  $handler->display->display_options['fields']['field_nombre']['field'] = 'field_nombre';
  /* Campo: Field collection item: Institucion */
  $handler->display->display_options['fields']['field_institucion']['id'] = 'field_institucion';
  $handler->display->display_options['fields']['field_institucion']['table'] = 'field_data_field_institucion';
  $handler->display->display_options['fields']['field_institucion']['field'] = 'field_institucion';
  $handler->display->display_options['fields']['field_institucion']['relationship'] = 'field_filiaci_n_compuesta_value';
  $handler->display->display_options['fields']['field_institucion']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Sort criterion: Contenido: Apellido (field_apellido) */
  $handler->display->display_options['sorts']['field_apellido_value']['id'] = 'field_apellido_value';
  $handler->display->display_options['sorts']['field_apellido_value']['table'] = 'field_data_field_apellido';
  $handler->display->display_options['sorts']['field_apellido_value']['field'] = 'field_apellido_value';
  /* Sort criterion: Contenido: Nombre (field_nombre) */
  $handler->display->display_options['sorts']['field_nombre_value']['id'] = 'field_nombre_value';
  $handler->display->display_options['sorts']['field_nombre_value']['table'] = 'field_data_field_nombre';
  $handler->display->display_options['sorts']['field_nombre_value']['field'] = 'field_nombre_value';
  /* Filter criterion: Contenido: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'persona' => 'persona',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'personas_unlp';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'export-personas-unlp.csv';
  $handler->display->display_options['use_batch'] = 'batch';
  $handler->display->display_options['segment_size'] = '100';
  $translatables['personas_unlp'] = array(
    t('Master'),
    t('Personas'),
    t('more'),
    t('Apply'),
    t('Restablecer'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« primero'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('field collection item from field_filiaci_n_compuesta'),
    t('Apellido'),
    t('Nombre'),
    t('Institucion'),
    t('Page'),
    t('Data export'),
  );
  $export['personas_unlp'] = $view;

  $view = new view();
  $view->name = 'personas_update';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'personas update';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Personas update';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Restablecer';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primero';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Campo: Contenido: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Campo: Contenido: old id */
  $handler->display->display_options['fields']['field_old_id']['id'] = 'field_old_id';
  $handler->display->display_options['fields']['field_old_id']['table'] = 'field_data_field_old_id';
  $handler->display->display_options['fields']['field_old_id']['field'] = 'field_old_id';
  /* Sort criterion: Contenido: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Contenido: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'persona' => 'persona',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'personas-update';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'personas-update.csv';
  $handler->display->display_options['use_batch'] = 'batch';
  $handler->display->display_options['segment_size'] = '100';
  $translatables['personas_update'] = array(
    t('Master'),
    t('Personas update'),
    t('more'),
    t('Apply'),
    t('Restablecer'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« primero'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('Nid'),
    t('old id'),
    t('Page'),
    t('Data export'),
  );
  $export['personas_update'] = $view;

  $view = new view();
  $view->name = 'tesauros';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Tesauros';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Tesauros';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Restablecer';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primero';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'ds';
  /* Campo: Término de taxonomía: Nombre */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'OR',
  );
  /* Filter criterion: Término de taxonomía: Nombre */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['operator'] = 'contains';
  $handler->display->display_options['filters']['name']['group'] = 1;
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Nombre';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
    2 => '2',
  );
  /* Filter criterion: Término de taxonomía: ID del término */
  $handler->display->display_options['filters']['tid_raw']['id'] = 'tid_raw';
  $handler->display->display_options['filters']['tid_raw']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['tid_raw']['field'] = 'tid_raw';
  $handler->display->display_options['filters']['tid_raw']['group'] = 1;
  $handler->display->display_options['filters']['tid_raw']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid_raw']['expose']['operator_id'] = 'tid_raw_op';
  $handler->display->display_options['filters']['tid_raw']['expose']['label'] = 'ID del término';
  $handler->display->display_options['filters']['tid_raw']['expose']['description'] = 'Buscar por id de tesauro';
  $handler->display->display_options['filters']['tid_raw']['expose']['operator'] = 'tid_raw_op';
  $handler->display->display_options['filters']['tid_raw']['expose']['identifier'] = 'tid_raw';
  $handler->display->display_options['filters']['tid_raw']['expose']['remember_roles'] = array(
    2 => '2',
  );
  /* Filter criterion: Término de taxonomía: id decs (field_id_decs) */
  $handler->display->display_options['filters']['field_id_decs_value']['id'] = 'field_id_decs_value';
  $handler->display->display_options['filters']['field_id_decs_value']['table'] = 'field_data_field_id_decs';
  $handler->display->display_options['filters']['field_id_decs_value']['field'] = 'field_id_decs_value';
  $handler->display->display_options['filters']['field_id_decs_value']['group'] = 1;
  $handler->display->display_options['filters']['field_id_decs_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_id_decs_value']['expose']['operator_id'] = 'field_id_decs_value_op';
  $handler->display->display_options['filters']['field_id_decs_value']['expose']['label'] = 'id decs';
  $handler->display->display_options['filters']['field_id_decs_value']['expose']['operator'] = 'field_id_decs_value_op';
  $handler->display->display_options['filters']['field_id_decs_value']['expose']['identifier'] = 'field_id_decs_value';
  $handler->display->display_options['filters']['field_id_decs_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Término de taxonomía: id eurovoc (field_id_eurovoc) */
  $handler->display->display_options['filters']['field_id_eurovoc_value']['id'] = 'field_id_eurovoc_value';
  $handler->display->display_options['filters']['field_id_eurovoc_value']['table'] = 'field_data_field_id_eurovoc';
  $handler->display->display_options['filters']['field_id_eurovoc_value']['field'] = 'field_id_eurovoc_value';
  $handler->display->display_options['filters']['field_id_eurovoc_value']['group'] = 1;
  $handler->display->display_options['filters']['field_id_eurovoc_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_id_eurovoc_value']['expose']['operator_id'] = 'field_id_eurovoc_value_op';
  $handler->display->display_options['filters']['field_id_eurovoc_value']['expose']['label'] = 'id eurovoc';
  $handler->display->display_options['filters']['field_id_eurovoc_value']['expose']['operator'] = 'field_id_eurovoc_value_op';
  $handler->display->display_options['filters']['field_id_eurovoc_value']['expose']['identifier'] = 'field_id_eurovoc_value';
  $handler->display->display_options['filters']['field_id_eurovoc_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Término de taxonomía: id grado (field_id_grado) */
  $handler->display->display_options['filters']['field_id_grado_value']['id'] = 'field_id_grado_value';
  $handler->display->display_options['filters']['field_id_grado_value']['table'] = 'field_data_field_id_grado';
  $handler->display->display_options['filters']['field_id_grado_value']['field'] = 'field_id_grado_value';
  $handler->display->display_options['filters']['field_id_grado_value']['group'] = 1;
  $handler->display->display_options['filters']['field_id_grado_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_id_grado_value']['expose']['operator_id'] = 'field_id_grado_value_op';
  $handler->display->display_options['filters']['field_id_grado_value']['expose']['label'] = ' (field_id_grado)';
  $handler->display->display_options['filters']['field_id_grado_value']['expose']['operator'] = 'field_id_grado_value_op';
  $handler->display->display_options['filters']['field_id_grado_value']['expose']['identifier'] = 'field_id_grado_value';
  $handler->display->display_options['filters']['field_id_grado_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Término de taxonomía: id materia (field_id_materia) */
  $handler->display->display_options['filters']['field_id_materia_value']['id'] = 'field_id_materia_value';
  $handler->display->display_options['filters']['field_id_materia_value']['table'] = 'field_data_field_id_materia';
  $handler->display->display_options['filters']['field_id_materia_value']['field'] = 'field_id_materia_value';
  $handler->display->display_options['filters']['field_id_materia_value']['group'] = 1;
  $handler->display->display_options['filters']['field_id_materia_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_id_materia_value']['expose']['operator_id'] = 'field_id_materia_value_op';
  $handler->display->display_options['filters']['field_id_materia_value']['expose']['label'] = 'id materia';
  $handler->display->display_options['filters']['field_id_materia_value']['expose']['operator'] = 'field_id_materia_value_op';
  $handler->display->display_options['filters']['field_id_materia_value']['expose']['identifier'] = 'field_id_materia_value';
  $handler->display->display_options['filters']['field_id_materia_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Término de taxonomía: id sedici desc (field_id_sedici_desc) */
  $handler->display->display_options['filters']['field_id_sedici_desc_value']['id'] = 'field_id_sedici_desc_value';
  $handler->display->display_options['filters']['field_id_sedici_desc_value']['table'] = 'field_data_field_id_sedici_desc';
  $handler->display->display_options['filters']['field_id_sedici_desc_value']['field'] = 'field_id_sedici_desc_value';
  $handler->display->display_options['filters']['field_id_sedici_desc_value']['group'] = 1;
  $handler->display->display_options['filters']['field_id_sedici_desc_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_id_sedici_desc_value']['expose']['operator_id'] = 'field_id_sedici_desc_value_op';
  $handler->display->display_options['filters']['field_id_sedici_desc_value']['expose']['label'] = 'id sedici desc';
  $handler->display->display_options['filters']['field_id_sedici_desc_value']['expose']['operator'] = 'field_id_sedici_desc_value_op';
  $handler->display->display_options['filters']['field_id_sedici_desc_value']['expose']['identifier'] = 'field_id_sedici_desc_value';
  $handler->display->display_options['filters']['field_id_sedici_desc_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'tesauros-search';
  $translatables['tesauros'] = array(
    t('Master'),
    t('Tesauros'),
    t('more'),
    t('Apply'),
    t('Restablecer'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« primero'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('Nombre'),
    t('ID del término'),
    t('Buscar por id de tesauro'),
    t('id decs'),
    t('id eurovoc'),
    t(' (field_id_grado)'),
    t('id materia'),
    t('id sedici desc'),
    t('Page'),
  );
  $export['tesauros'] = $view;

  $view = new view();
  $view->name = 'unesco';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'UNESCO';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'UNESCO';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Restablecer';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primero';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'tree';
  $handler->display->display_options['style_options']['main_field'] = 'tid';
  $handler->display->display_options['style_options']['parent_field'] = 'tid_1';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Término de taxonomía: Término padre */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  /* Campo: Término de taxonomía: Nombre */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Campo: Término de taxonomía: ID del término */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Campo: Término de taxonomía: ID del término */
  $handler->display->display_options['fields']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['fields']['tid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid_1']['field'] = 'tid';
  $handler->display->display_options['fields']['tid_1']['relationship'] = 'parent';
  $handler->display->display_options['fields']['tid_1']['label'] = '';
  $handler->display->display_options['fields']['tid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid_1']['separator'] = '';
  /* Sort criterion: Término de taxonomía: ID del término */
  $handler->display->display_options['sorts']['tid']['id'] = 'tid';
  $handler->display->display_options['sorts']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['tid']['field'] = 'tid';
  /* Filter criterion: Vocabulario de taxonomía: Nombre de sistema */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'tesauro_unesco' => 'tesauro_unesco',
  );
  /* Filter criterion: Término de taxonomía: Nombre */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['operator'] = 'contains';
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Nombre';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'unesco';
  $translatables['unesco'] = array(
    t('Master'),
    t('UNESCO'),
    t('more'),
    t('Apply'),
    t('Restablecer'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« primero'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('Padre'),
    t('.'),
    t('Nombre'),
    t('Page'),
  );
  $export['unesco'] = $view;

  $view = new view();
  $view->name = 'unidades_academicas';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Unidades academicas';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Unidades academicas';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Restablecer';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primero';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'nid' => 'nid',
    'field_id_termino_padre' => 'field_id_termino_padre',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_id_termino_padre' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_padre_target_id']['id'] = 'field_padre_target_id';
  $handler->display->display_options['relationships']['field_padre_target_id']['table'] = 'field_data_field_padre';
  $handler->display->display_options['relationships']['field_padre_target_id']['field'] = 'field_padre_target_id';
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Campo: Contenido: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Sort criterion: Contenido: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Contenido: Nombre (field_nombre) */
  $handler->display->display_options['sorts']['field_nombre_value']['id'] = 'field_nombre_value';
  $handler->display->display_options['sorts']['field_nombre_value']['table'] = 'field_data_field_nombre';
  $handler->display->display_options['sorts']['field_nombre_value']['field'] = 'field_nombre_value';
  /* Filter criterion: Contenido: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'instituci_n' => 'instituci_n',
  );
  /* Filter criterion: Contenido: id_termino_padre (field_id_termino_padre) */
  $handler->display->display_options['filters']['field_id_termino_padre_value']['id'] = 'field_id_termino_padre_value';
  $handler->display->display_options['filters']['field_id_termino_padre_value']['table'] = 'field_data_field_id_termino_padre';
  $handler->display->display_options['filters']['field_id_termino_padre_value']['field'] = 'field_id_termino_padre_value';
  $handler->display->display_options['filters']['field_id_termino_padre_value']['value'] = '1.1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'unidades-academicas';
  $translatables['unidades_academicas'] = array(
    t('Master'),
    t('Unidades academicas'),
    t('more'),
    t('Apply'),
    t('Restablecer'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« primero'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('Contenido entity referenced from field_padre'),
    t('Nid'),
    t('Page'),
  );
  $export['unidades_academicas'] = $view;

  return $export;
}
