<?php
/**
 * @file
 * auth_sparql.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function auth_sparql_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rdf_rdftype_instituci_n';
  $strongarm->value = 'sioc:Item, foaf:Organization';
  $export['rdf_rdftype_instituci_n'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rdf_rdftype_persona';
  $strongarm->value = 'sioc:Item, foaf:Person';
  $export['rdf_rdftype_persona'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rdf_title_datatype_instituci_n';
  $strongarm->value = '';
  $export['rdf_title_datatype_instituci_n'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rdf_title_datatype_persona';
  $strongarm->value = '';
  $export['rdf_title_datatype_persona'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rdf_title_predicates_instituci_n';
  $strongarm->value = 'dc:title';
  $export['rdf_title_predicates_instituci_n'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rdf_title_predicates_persona';
  $strongarm->value = 'dc:title';
  $export['rdf_title_predicates_persona'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rdf_title_type_instituci_n';
  $strongarm->value = 'property';
  $export['rdf_title_type_instituci_n'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rdf_title_type_persona';
  $strongarm->value = 'property';
  $export['rdf_title_type_persona'] = $strongarm;

  return $export;
}
