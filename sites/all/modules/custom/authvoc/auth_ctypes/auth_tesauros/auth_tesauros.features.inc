<?php
/**
 * @file
 * auth_tesauros.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function auth_tesauros_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "arc2_store" && $api == "arc2_store") {
    return array("version" => "1");
  }
}
