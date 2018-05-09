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

  return $rdf_mappings;
}
