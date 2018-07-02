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

  return $rdf_mappings;
}
