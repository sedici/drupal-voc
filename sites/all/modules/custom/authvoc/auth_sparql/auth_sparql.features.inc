<?php

/**
 * @file
 * auth_sparql.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function auth_sparql_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "arc2_store" && $api == "arc2_store") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_rdf_default_mappings().
 */
function auth_sparql_rdf_default_mappings() {
  $rdf_mappings = array();

  // Exported RDF mapping: taxonomy_vocabulary
  $rdf_mappings['taxonomy_vocabulary']['taxonomy_vocabulary'] = array(
    'rdftype' => array(
      0 => 'skos:ConceptScheme',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'description' => array(
      'predicates' => array(
        0 => 'rdfs:comment',
      ),
    ),
  );

  // Exported RDF mapping: field_filiaci_n_compuesta
  $rdf_mappings['field_collection_item']['field_filiaci_n_compuesta'] = array(
    'field_fecha_de_fin' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'cerif:endDate',
      ),
    ),
    'field_fecha_de_inicio' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'cerif:startDate',
      ),
    ),
    'field_institucion' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'foaf:Organization',
      ),
    ),
    'field_rol' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'cerif:role',
      ),
    ),
  );

  // Exported RDF mapping: tesauro_decs
  $rdf_mappings['taxonomy_term']['tesauro_decs'] = array(
    'rdftype' => array(
      0 => 'skos:Concept',
      1 => 'sedici:Decs',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'rdfs:label',
        1 => 'skos:prefLabel',
      ),
    ),
    'description' => array(
      'predicates' => array(
        0 => 'skos:definition',
      ),
    ),
    'vid' => array(
      'predicates' => array(
        0 => 'skos:inScheme',
      ),
      'type' => 'rel',
    ),
    'parent' => array(
      'predicates' => array(
        0 => 'skos:broader',
      ),
      'type' => 'rel',
    ),
    'field_id_decs' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'skos:notation',
      ),
    ),
  );

  // Exported RDF mapping: descriptores_sedici
  $rdf_mappings['taxonomy_term']['descriptores_sedici'] = array(
    'rdftype' => array(
      0 => 'skos:Concept',
      1 => 'sedici:Descriptor',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'rdfs:label',
        1 => 'skos:prefLabel',
      ),
    ),
    'description' => array(
      'predicates' => array(
        0 => 'skos:definition',
      ),
    ),
    'vid' => array(
      'predicates' => array(
        0 => 'skos:inScheme',
      ),
      'type' => 'rel',
    ),
    'parent' => array(
      'predicates' => array(
        0 => 'skos:broader',
      ),
      'type' => 'rel',
    ),
    'field_id_sedici_desc' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'skos:notation',
      ),
    ),
  );

  // Exported RDF mapping: tesauro_eurovoc
  $rdf_mappings['taxonomy_term']['tesauro_eurovoc'] = array(
    'rdftype' => array(
      0 => 'skos:Concept',
      1 => 'sedici:Eurovoc',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'rdfs:label',
        1 => 'skos:prefLabel',
      ),
    ),
    'description' => array(
      'predicates' => array(
        0 => 'skos:definition',
      ),
    ),
    'vid' => array(
      'predicates' => array(
        0 => 'skos:inScheme',
      ),
      'type' => 'rel',
    ),
    'parent' => array(
      'predicates' => array(
        0 => 'skos:broader',
      ),
      'type' => 'rel',
    ),
    'field_id_eurovoc' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'skos:notation',
      ),
    ),
  );

  // Exported RDF mapping: grados
  $rdf_mappings['taxonomy_term']['grados'] = array(
    'rdftype' => array(
      0 => 'skos:Concept',
      1 => 'sedici:Grado',
      2 => 'sedici:Subject',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'rdfs:label',
        1 => 'skos:prefLabel',
      ),
    ),
    'description' => array(
      'predicates' => array(
        0 => 'skos:definition',
      ),
    ),
    'vid' => array(
      'predicates' => array(
        0 => 'skos:inScheme',
      ),
      'type' => 'rel',
    ),
    'parent' => array(
      'predicates' => array(
        0 => 'skos:broader',
      ),
      'type' => 'rel',
    ),
    'field_id_grado' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'skos:notation',
      ),
    ),
  );

  // Exported RDF mapping: materias
  $rdf_mappings['taxonomy_term']['materias'] = array(
    'rdftype' => array(
      0 => 'skos:Concept',
      1 => 'sedici:Materia',
      2 => 'sedici:Subject',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'rdfs:label',
        1 => 'skos:prefLabel',
      ),
    ),
    'description' => array(
      'predicates' => array(
        0 => 'skos:definition',
      ),
    ),
    'vid' => array(
      'predicates' => array(
        0 => 'skos:inScheme',
      ),
      'type' => 'rel',
    ),
    'parent' => array(
      'predicates' => array(
        0 => 'skos:broader',
      ),
      'type' => 'rel',
    ),
    'field_id_materia' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'skos:notation',
      ),
    ),
  );

  // Exported RDF mapping: acm_ccs_2012
  $rdf_mappings['taxonomy_term']['acm_ccs_2012'] = array(
    'rdftype' => array(
      0 => 'sedici:Subject',
      1 => 'sedici:ACM',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'rdfs:label',
        1 => 'skos:prefLabel',
      ),
    ),
    'description' => array(
      'predicates' => array(
        0 => 'skos:definition',
      ),
    ),
    'vid' => array(
      'predicates' => array(
        0 => 'skos:inScheme',
      ),
      'type' => 'rel',
    ),
    'parent' => array(
      'predicates' => array(
        0 => 'skos:broader',
      ),
      'type' => 'rel',
    ),
    'field_label_spanish' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'rdfs:label',
      ),
    ),
    'field_sedici_id' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'owl:sameAs',
      ),
    ),
  );

  // Exported RDF mapping: tesauro_unesco
  $rdf_mappings['taxonomy_term']['tesauro_unesco'] = array(
    'rdftype' => array(
      0 => 'sedici:UNESCO',
      1 => 'sedici:Subject',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'rdfs:label',
        1 => 'skos:prefLabel',
      ),
    ),
    'description' => array(
      'predicates' => array(
        0 => 'skos:definition',
      ),
    ),
    'vid' => array(
      'predicates' => array(
        0 => 'skos:inScheme',
      ),
      'type' => 'rel',
    ),
    'parent' => array(
      'predicates' => array(
        0 => 'skos:broader',
      ),
      'type' => 'rel',
    ),
    'field_id_unesco' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'skos:notation',
      ),
    ),
    'field_uri' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'owl:sameAs',
      ),
    ),
  );

  // Exported RDF mapping: decs_2018
  $rdf_mappings['taxonomy_term']['decs_2018'] = array(
    'rdftype' => array(
      0 => 'sedici:Subject',
      1 => 'sedici:DeCS',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'rdfs:label',
        1 => 'skos:prefLabel',
      ),
    ),
    'description' => array(
      'predicates' => array(
        0 => 'skos:definition',
      ),
    ),
    'vid' => array(
      'predicates' => array(
        0 => 'skos:inScheme',
      ),
      'type' => 'rel',
    ),
    'parent' => array(
      'predicates' => array(
        0 => 'skos:broader',
      ),
      'type' => 'rel',
    ),
    'field_id_decs2018' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'owl:sameAs',
      ),
    ),
    'field_label_english' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'skos:notation',
      ),
    ),
    'field_synonyms' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'skos:hiddenLabel',
      ),
    ),
  );

  // Exported RDF mapping: instituci_n
  $rdf_mappings['node']['instituci_n'] = array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Organization',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
      'type' => 'property',
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'field_abreviatura' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'sioc:id',
      ),
    ),
    'field_nombre_institucion' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'field_padre' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'skos:broader',
      ),
    ),
  );

  // Exported RDF mapping: persona
  $rdf_mappings['node']['persona'] = array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Person',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
      'type' => 'property',
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'field_apellido' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'foaf:surname',
      ),
    ),
    'field_filiaci_n_compuesta' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'cerif:linksToOrganisationUnit',
      ),
    ),
    'field_nombre' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'foaf:givenName',
      ),
    ),
  );

  return $rdf_mappings;
}

/**
 * Implements hook_default_search_api_index().
 */
function auth_sparql_default_search_api_index() {
  $items = array();
  $items['default_node_index'] = entity_import('search_api_index', '{
    "name" : "Default node index",
    "machine_name" : "default_node_index",
    "description" : "An automatically created search index for indexing node data. Might be configured to specific needs.",
    "server" : "rdf_indexing_server",
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [] },
      "index_directly" : 1,
      "cron_limit" : "50",
      "data_alter_callbacks" : { "search_api_alter_node_access" : { "status" : 1, "weight" : "0", "settings" : [] } },
      "processors" : {
        "search_api_case_ignore" : { "status" : 1, "weight" : "0", "settings" : { "strings" : 0 } },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\nh2 = 3\\nh3 = 2\\nstrong = 2\\nb = 2\\nem = 1.5\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 1,
          "weight" : "20",
          "settings" : { "spaces" : "[^\\\\p{L}\\\\p{N}]", "ignorable" : "[-]" }
        }
      },
      "fields" : {
        "author" : { "type" : "integer", "entity_type" : "user" },
        "body:value" : { "type" : "text" },
        "changed" : { "type" : "date" },
        "created" : { "type" : "date" },
        "promote" : { "type" : "boolean" },
        "search_api_language" : { "type" : "string" },
        "sticky" : { "type" : "boolean" },
        "title" : { "type" : "text", "boost" : "5.0" },
        "type" : { "type" : "string" }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  $items['filiacion_indexer'] = entity_import('search_api_index', '{
    "name" : "Filiacion indexer",
    "machine_name" : "filiacion_indexer",
    "description" : null,
    "server" : "rdf_indexing_server",
    "item_type" : "field_collection_item",
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
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function auth_sparql_default_search_api_server() {
  $items = array();
  $items['rdf_indexing_server'] = entity_import('search_api_server', '{
    "name" : "RDF Indexing Server",
    "machine_name" : "rdf_indexing_server",
    "description" : "",
    "class" : "rdf_indexer_service",
    "options" : { "store_id" : "default" },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
