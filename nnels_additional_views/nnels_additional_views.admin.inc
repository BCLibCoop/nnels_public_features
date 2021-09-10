<?php

/**
 * @file
 * Code for the NNELS Additional Views non-feature functionality.
 */

 /**
  * Form Callback: A11y Bulk Edit.
  */
function nnels_additional_views_a11y_bulk_edit_form($form, &$form_state) {
  $form = array();

  // Labels for file formats are stored directly on the field, so pull them
  // from the field config.
  $file_format_config = db_select('field_config', 'c')
    ->fields('c')
    ->condition('c.field_name', 'field_file_format')
    ->execute()
    ->fetchObject();
  $file_format_config_data = unserialize($file_format_config->data);
  $file_formats = $file_format_config_data['settings']['allowed_values'];
  asort($file_formats);

  // Pull possible values from the publisher table.
  $publishers = db_select('field_data_field_publisher_format', 'fp')
    ->fields('fp', ['field_publisher_format_value'])
    ->groupBy('fp.field_publisher_format_value')
    ->orderBy('fp.field_publisher_format_value')
    ->execute()
    ->fetchCol();

  // Filter form:
  //  - file format (query for all possible formats) - select field
  //  - file publisher (query for all possible publishers) - select field
  // select field_publisher_format_value from field_data_field_publisher_format group by field_publisher_format_value order by field_publisher_format_value;

  // Page 1:
  $query = db_select('node', 'n');
  $query = $query->join('field_data_field_file_resource', 'fr', 'n.nid = fr.entity_id');
  $query = $query->leftJoin('field_data_field_file_format', 'ff', 'fr.field_file_resource_value = ff.entity_id');
  $query = $query->leftJoin('field_data_field_publisher_format', 'fp', 'fr.field_file_resource_value = fp.entity_id');
  $query->fields('n', array('nid'));
  $query->fields('ff', array('field_file_format_value'));
  $query->fields('fp', array('field_publisher_format_value'));
  $query->condition('n.type', 'respository_item');
  // Add pager
  // Add filter options

  // Build table select table.
  // Columns:
  //  - Checkbox
  //  - Node Title
  //  - File Format
  //  - File Publisher
  //  - Accessibility Tags
  //  - Accessibility Summary
  //  - Operations: Edit

  // Page 2:
  // Select data to add:
  //   - accessibility tags
  //   - accessibility summary

  return $form;
}

/**
 * Form Submit Callback: A11y Bulk Edit.
 */
function nnels_additional_views_a11y_bulk_edit_form_submit($form, &$form_state) {
  // Submit:
  // Use the batch API to process each repo item
}