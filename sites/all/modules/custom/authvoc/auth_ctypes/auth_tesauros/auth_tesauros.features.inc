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

/**
 * Implements hook_default_search_api_index().
 */
function auth_tesauros_default_search_api_index() {
  $items = array();
  $items['acm_indexer'] = entity_import('search_api_index', '{
    "name" : "ACM Indexer",
    "machine_name" : "acm_indexer",
    "description" : null,
    "server" : "vocabularios_server",
    "item_type" : "taxonomy_term",
    "options" : {
      "datasource" : { "bundles" : [ "acm_ccs_2012" ] },
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : { "search_api_language" : { "type" : "string" } },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "rdf_indexer_alter_entity_public" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_language_control" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "lang_field" : "", "languages" : [] }
        }
      },
      "processors" : {
        "search_api_case_ignore" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : [],
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : { "fields" : [], "spaces" : "[^[:alnum:]]", "ignorable" : "[\\u0027]" }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : [],
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_porter_stemmer" : {
          "status" : 0,
          "weight" : "35",
          "settings" : { "fields" : [], "exceptions" : "texan=texa" }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "40",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always",
            "highlight_partial" : 0
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  $items['decs_2018_index'] = entity_import('search_api_index', '{
    "name" : "DeCS 2018 Index",
    "machine_name" : "decs_2018_index",
    "description" : null,
    "server" : "vocabularios_server",
    "item_type" : "taxonomy_term",
    "options" : {
      "datasource" : { "bundles" : [ "decs_2018" ] },
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : { "search_api_language" : { "type" : "string" } }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  $items['grados_index'] = entity_import('search_api_index', '{
    "name" : "Grados Index",
    "machine_name" : "grados_index",
    "description" : null,
    "server" : "vocabularios_server",
    "item_type" : "taxonomy_term",
    "options" : {
      "datasource" : { "bundles" : [ "grados" ] },
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : { "search_api_language" : { "type" : "string" } }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  $items['materias_index'] = entity_import('search_api_index', '{
    "name" : "Materias Index",
    "machine_name" : "materias_index",
    "description" : null,
    "server" : "vocabularios_server",
    "item_type" : "taxonomy_term",
    "options" : {
      "datasource" : { "bundles" : [ "materias" ] },
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : { "search_api_language" : { "type" : "string" } }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  $items['tesauro_indexer'] = entity_import('search_api_index', '{
    "name" : "Tesauro Indexer",
    "machine_name" : "tesauro_indexer",
    "description" : null,
    "server" : "rdf_indexing_server",
    "item_type" : "taxonomy_term",
    "options" : {
      "datasource" : { "bundles" : [] },
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : { "search_api_language" : { "type" : "string" } }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  $items['unesco_indexer'] = entity_import('search_api_index', '{
    "name" : "UNESCO indexer",
    "machine_name" : "unesco_indexer",
    "description" : null,
    "server" : "vocabularios_server",
    "item_type" : "taxonomy_term",
    "options" : {
      "datasource" : { "bundles" : [ "tesauro_unesco" ] },
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : { "search_api_language" : { "type" : "string" } }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function auth_tesauros_default_search_api_server() {
  $items = array();
  $items['vocabularios_server'] = entity_import('search_api_server', '{
    "name" : "Vocabularios Server",
    "machine_name" : "vocabularios_server",
    "description" : "",
    "class" : "rdf_indexer_service",
    "options" : { "store_id" : "vocabularios_store" },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
