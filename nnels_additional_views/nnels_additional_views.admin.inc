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

  // Filter form:
  //  - file format (query for all possible formats) - select field
  //  - file publisher (query for all possible publishers) - select field

  // Page 1:
  // Query the database for repo items.
  // Build table select table.

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