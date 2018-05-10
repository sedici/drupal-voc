<?php
/**
 * @file
 * instituci_n.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function instituci_n_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_instituci_n';
  $strongarm->value = 0;
  $export['comment_anonymous_instituci_n'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_instituci_n';
  $strongarm->value = 1;
  $export['comment_default_mode_instituci_n'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_instituci_n';
  $strongarm->value = '50';
  $export['comment_default_per_page_instituci_n'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_instituci_n';
  $strongarm->value = 1;
  $export['comment_form_location_instituci_n'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_instituci_n';
  $strongarm->value = '2';
  $export['comment_instituci_n'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_instituci_n';
  $strongarm->value = '1';
  $export['comment_preview_instituci_n'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_instituci_n';
  $strongarm->value = 1;
  $export['comment_subject_field_instituci_n'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_instituci_n';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_instituci_n'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_instituci_n';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_instituci_n'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_instituci_n';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_instituci_n'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_instituci_n';
  $strongarm->value = '0';
  $export['language_content_type_instituci_n'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_instituci_n';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_instituci_n'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_instituci_n';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_instituci_n'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_instituci_n';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_instituci_n'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_instituci_n';
  $strongarm->value = '1';
  $export['node_preview_instituci_n'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_instituci_n';
  $strongarm->value = 1;
  $export['node_submitted_instituci_n'] = $strongarm;

  return $export;
}
