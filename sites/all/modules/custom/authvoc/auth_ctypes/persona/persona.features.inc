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
