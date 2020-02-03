<?php

/**
 * @file
 * auth_sparql.arc2_store.inc
 */

/**
 * Implements hook_default_arc2_store_settings().
 */
function auth_sparql_default_arc2_store_settings() {
  $export = array();

  $arc2_store_settings = new stdClass();
  $arc2_store_settings->disabled = FALSE; /* Edit this to true to make a default arc2_store_settings disabled initially */
  $arc2_store_settings->api_version = 1;
  $arc2_store_settings->store_id = 'default';
  $arc2_store_settings->label = 'default';
  $arc2_store_settings->settings = array(
    'endpoint_enabled' => 1,
    'endpoint_path' => 'sparql',
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
    'endpoint_write_key' => 'd9cb720c6c4fd069bea8823ee5acebb5546e9daa',
    'endpoint_write_features' => array(
      'load' => 0,
      'insert' => 0,
      'delete' => 0,
    ),
  );
  $export['default'] = $arc2_store_settings;

  return $export;
}
