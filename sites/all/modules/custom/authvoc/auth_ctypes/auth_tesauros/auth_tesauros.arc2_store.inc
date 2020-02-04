<?php

/**
 * @file
 * auth_tesauros.arc2_store.inc
 */

/**
 * Implements hook_default_arc2_store_settings().
 */
function auth_tesauros_default_arc2_store_settings() {
  $export = array();

  $arc2_store_settings = new stdClass();
  $arc2_store_settings->disabled = FALSE; /* Edit this to true to make a default arc2_store_settings disabled initially */
  $arc2_store_settings->api_version = 1;
  $arc2_store_settings->store_id = 'vocabularios_store';
  $arc2_store_settings->label = 'Vocabularios Store';
  $arc2_store_settings->settings = array(
    'endpoint_enabled' => 1,
    'endpoint_path' => 'vocabularios',
    'endpoint_read_features' => array(
      'select' => 'select',
      'construct' => 'construct',
      'ask' => 'ask',
      'describe' => 'describe',
      'dump' => 0,
    ),
    'endpoint_max_limit' => '500',
    'endpoint_timeout' => '60',
    'endpoint_read_key' => '',
    'endpoint_write_enabled' => 0,
    'endpoint_write_key' => '4bb7985d01e7780711c5c02f573c924ceb57cd82',
    'endpoint_write_features' => array(
      'load' => 0,
      'insert' => 0,
      'delete' => 0,
    ),
  );
  $export['vocabularios_store'] = $arc2_store_settings;

  return $export;
}
