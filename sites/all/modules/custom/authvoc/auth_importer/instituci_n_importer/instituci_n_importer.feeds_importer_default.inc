<?php

/**
 * @file
 * instituci_n_importer.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function instituci_n_importer_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'institution_importer';
  $feeds_importer->config = array(
    'name' => 'Institution Importer',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
        'delete_uploaded_file' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
        'encoding' => 'UTF-8',
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'nid',
            'target' => 'nid',
            'unique' => FALSE,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'nid_padre',
            'target' => 'field_padre:etid',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'nombre',
            'target' => 'field_nombre_institucion',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'abreviatura',
            'target' => 'field_abreviatura',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'id_pidu',
            'target' => 'field_id_pidu',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'id_pidu_padre',
            'target' => 'field_id_pidu_padre',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'id_termino',
            'target' => 'field_id_termino',
            'unique' => FALSE,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'id_termino_padre',
            'target' => 'field_id_termino_padre',
            'unique' => FALSE,
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '0',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'instituci_n',
        'language' => 'es',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['institution_importer'] = $feeds_importer;

  return $export;
}
