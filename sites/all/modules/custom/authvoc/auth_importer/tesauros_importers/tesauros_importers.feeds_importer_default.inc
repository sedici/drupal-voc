<?php

/**
 * @file
 * tesauros_importers.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function tesauros_importers_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'descriptores_sedici_importer';
  $feeds_importer->config = array(
    'name' => 'Descriptores SEDICI Importer',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'delete_uploaded_file' => FALSE,
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
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
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'nid',
            'target' => 'guid',
            'unique' => FALSE,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'nombre',
            'target' => 'name',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'id',
            'target' => 'field_id_sedici_desc',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'padre',
            'target' => 'parentguid',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '0',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'descriptores_sedici',
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
  $export['descriptores_sedici_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'materias_importer';
  $feeds_importer->config = array(
    'name' => 'Tesauro Materias Importer',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'delete_uploaded_file' => FALSE,
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
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
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'nid',
            'target' => 'guid',
            'unique' => FALSE,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'nombre',
            'target' => 'name',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'id',
            'target' => 'field_id_materia',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'padre',
            'target' => 'parentguid',
            'unique' => FALSE,
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '0',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'materias',
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
  $export['materias_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'tesauro_eurovoc_importer';
  $feeds_importer->config = array(
    'name' => 'Tesauro Eurovoc Importer',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'delete_uploaded_file' => FALSE,
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
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
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'nid',
            'target' => 'guid',
            'unique' => FALSE,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'nombre',
            'target' => 'name',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'id',
            'target' => 'field_id_eurovoc',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'padre',
            'target' => 'parentguid',
            'unique' => FALSE,
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '0',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'tesauro_eurovoc',
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
  $export['tesauro_eurovoc_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = TRUE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'tesauro_sedici_importer';
  $feeds_importer->config = array(
    'name' => 'Tesauro SEDICI Importer',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'delete_uploaded_file' => FALSE,
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
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
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'nid',
            'target' => 'guid',
            'unique' => FALSE,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'nid padre',
            'target' => 'parentguid',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'nombre',
            'target' => 'name',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'padre',
            'target' => 'parent',
            'unique' => FALSE,
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '0',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'tesauro_sedici',
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
  $export['tesauro_sedici_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'tesauro_unesco_importer';
  $feeds_importer->config = array(
    'name' => 'Tesauro UNESCO Importer',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'delete_uploaded_file' => FALSE,
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
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
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'Tipo',
            'target' => 'field_tipo',
            'unique' => FALSE,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'english',
            'target' => 'field_label_english_',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'sin',
            'target' => 'field_sin_nimos',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'nombre',
            'target' => 'name',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'padre',
            'target' => 'parent',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'uri',
            'target' => 'field_uri',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'peso',
            'target' => 'weight',
            'unique' => FALSE,
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '0',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'tesauro_unesco',
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
  $export['tesauro_unesco_importer'] = $feeds_importer;

  return $export;
}
