<?php

/**
 * @file
 * instituci_n.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function instituci_n_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function instituci_n_node_info() {
  $items = array(
    'instituci_n' => array(
      'name' => t('Institución'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
