<?php
/**
 * @file
 * voc_sedici_menu.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function voc_sedici_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: navigation.
  $menus['navigation'] = array(
    'menu_name' => 'navigation',
    'title' => 'Navegación',
    'description' => 'El menú de <em>Navegación</em> contiene enlaces para los visitantes al sitio. Algunos módulos agregan enlaces al menú de <em>Navegación</em> automáticamente.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('El menú de <em>Navegación</em> contiene enlaces para los visitantes al sitio. Algunos módulos agregan enlaces al menú de <em>Navegación</em> automáticamente.');
  t('Navegación');

  return $menus;
}
