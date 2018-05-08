<?php
/**
 * @file
 * instituci_n.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function instituci_n_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function instituci_n_node_info() {
  $items = array(
    'instituci_n' => array(
      'name' => t('Institución'),
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
function instituci_n_rdf_default_mappings() {
  $rdf_mappings = array();

  // Exported RDF mapping: field_filiaci_n_compuesta
  $rdf_mappings['field_collection_item']['field_filiaci_n_compuesta'] = array(
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
    'field_fecha_de_inicio' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'cerif:startDate',
      ),
    ),
    'field_fecha_de_fin' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'cerif:endDate',
      ),
    ),
  );

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
