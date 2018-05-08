<?php
/**
 * @file
 * persona.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function persona_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function persona_node_info() {
  $items = array(
    'persona' => array(
      'name' => t('Persona'),
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

/**
 * Implements hook_rdf_default_mappings().
 */
function persona_rdf_default_mappings() {
  $rdf_mappings = array();

  // Exported RDF mapping: persona
  $rdf_mappings['node']['persona'] = array(
    'rdftype' => array(
      0 => 'foaf:Person',
      1 => 'schema:Person',
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
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
      'type' => 'property',
    ),
    'field_apellido' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'foaf:familyName',
      ),
    ),
    'field_nombre' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'foaf:givenName',
      ),
    ),
    'field_cuil' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'dc:identifier',
      ),
    ),
    'field_mail' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'foaf:mbox',
      ),
    ),
    'field_filiaci_n' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'foaf:Organization',
      ),
    ),
    'field_filiaci_n_compuesta' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'cerif:linksToOrganisationUnit',
      ),
    ),
  );

  return $rdf_mappings;
}
