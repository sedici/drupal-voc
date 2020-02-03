<?php

/**
 * @file
 * filiaci_n_importer.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function filiaci_n_importer_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'filiacion_importer';
  $feeds_importer->config = array(
    'name' => 'Filiacion Importer',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'delete_uploaded_file' => 1,
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'encoding' => 'UTF-8',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsFieldCollectionProcessor',
      'config' => array(
        'field_name' => 'field_filiaci_n_compuesta',
        'host_entity_type' => 'node',
        'host_entity_importer_id' => '',
        'host_entity_importer_nid' => NULL,
        'guid_field_name' => 'nid',
        'is_field' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'nid',
            'target' => 'host_entity_guid',
            'unique' => FALSE,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'filiacion',
            'target' => 'field_institucion:etid',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '0',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'field_filiaci_n_compuesta',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['filiacion_importer'] = $feeds_importer;

  return $export;
}
