<?php
/**
 * @file
 * voc_sedici_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function voc_sedici_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation_add-content:node/add.
  $menu_links['navigation_add-content:node/add'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add',
    'router_path' => 'node/add',
    'link_title' => 'Add content',
    'options' => array(
      'identifier' => 'navigation_add-content:node/add',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: navigation_agregar-grado:admin/structure/taxonomy/grados/add.
  $menu_links['navigation_agregar-grado:admin/structure/taxonomy/grados/add'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'admin/structure/taxonomy/grados/add',
    'router_path' => 'admin/structure/taxonomy/%/add',
    'link_title' => 'Agregar Grado',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'navigation_agregar-grado:admin/structure/taxonomy/grados/add',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: navigation_argentinas-sin-siglas:instituciones-argentinas-sin-siglas.
  $menu_links['navigation_argentinas-sin-siglas:instituciones-argentinas-sin-siglas'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'instituciones-argentinas-sin-siglas',
    'router_path' => 'instituciones-argentinas-sin-siglas',
    'link_title' => 'Argentinas sin siglas',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'navigation_argentinas-sin-siglas:instituciones-argentinas-sin-siglas',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: navigation_institucin:node/add/instituci-n.
  $menu_links['navigation_institucin:node/add/instituci-n'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/instituci-n',
    'router_path' => 'node/add/instituci-n',
    'link_title' => 'Institución',
    'options' => array(
      'identifier' => 'navigation_institucin:node/add/instituci-n',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: navigation_instituciones-sin-siglas:instituciones-sin-siglas.
  $menu_links['navigation_instituciones-sin-siglas:instituciones-sin-siglas'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'instituciones-sin-siglas',
    'router_path' => 'instituciones-sin-siglas',
    'link_title' => 'Instituciones sin siglas',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'navigation_instituciones-sin-siglas:instituciones-sin-siglas',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: navigation_persona:node/add/persona.
  $menu_links['navigation_persona:node/add/persona'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/persona',
    'router_path' => 'node/add/persona',
    'link_title' => 'Persona',
    'options' => array(
      'identifier' => 'navigation_persona:node/add/persona',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: navigation_personas-duplicadas:personas-duplicadas.
  $menu_links['navigation_personas-duplicadas:personas-duplicadas'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'personas-duplicadas',
    'router_path' => 'personas-duplicadas',
    'link_title' => 'Personas duplicadas',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'navigation_personas-duplicadas:personas-duplicadas',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: navigation_rbol-de-instituciones:arbol-de-instituciones.
  $menu_links['navigation_rbol-de-instituciones:arbol-de-instituciones'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'arbol-de-instituciones',
    'router_path' => 'arbol-de-instituciones',
    'link_title' => 'Árbol de instituciones',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'navigation_rbol-de-instituciones:arbol-de-instituciones',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: navigation_taxonomy-manager:admin/structure/taxonomy_manager/voc.
  $menu_links['navigation_taxonomy-manager:admin/structure/taxonomy_manager/voc'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'admin/structure/taxonomy_manager/voc',
    'router_path' => 'admin/structure/taxonomy_manager/voc',
    'link_title' => 'Taxonomy Manager',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'navigation_taxonomy-manager:admin/structure/taxonomy_manager/voc',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add content');
  t('Agregar Grado');
  t('Argentinas sin siglas');
  t('Instituciones sin siglas');
  t('Institución');
  t('Persona');
  t('Personas duplicadas');
  t('Taxonomy Manager');
  t('Árbol de instituciones');

  return $menu_links;
}
