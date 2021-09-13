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

  // Whenever the form is submitted get rid of the page query string.
  $form['#action'] = '/' . request_path();

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
  $form['filters'] = array(
    '#type' => 'fieldset',
    '#title' => t('Filters'),
  );
  $form['filters']['format_filter'] = array(
    '#type' => 'select',
    '#title' => t('File Formats'),
    '#options' => array('' => t('-- All --')) + $file_formats,
    '#default_value' => (isset($_SESSION['a11y_filter']['format']) ? $_SESSION['a11y_filter']['format'] : ''),
  );
  $form['filters']['publisher_filter'] = array(
    '#type' => 'select',
    '#title' => t('File Publisher'),
    '#options' => array('' => t('-- All --')) + $publishers,
    '#default_value' => (isset($_SESSION['a11y_filter']['publisher']) ? $_SESSION['a11y_filter']['publisher'] : ''),
  );
  $form['filters']['actions'] = array(
    '#type' => 'actions',
  );
  $form['filters']['actions']['filter'] = array(
    '#type' => 'submit',
    '#value' => t('Filter Data'),
  );
  if (isset($_SESSION['a11y_filter'])) {
    $form['filters']['actions']['reset'] = array(
      '#type' => 'submit',
      '#value' => t('Reset'),
    );
  }

  // Operations form:
  $form['operations'] = array(
    '#type' => 'fieldset',
    '#title' => t('Operations'),
  );
  $form['operations']['actions'] = array(
    '#type' => 'actions',
  );
  $form['operations']['actions']['update'] = array(
    '#type' => 'submit',
    '#value' => t('Update Selected'),
  );

  // Page 1 - select repo items to update:
  $query = db_select('node', 'n')
    ->extend('PagerDefault')
    ->limit(50);
  $query->join('field_data_field_file_resource', 'fr', 'n.nid = fr.entity_id');
  $query->leftJoin('field_data_field_file_format', 'ff', 'fr.field_file_resource_value = ff.entity_id');
  $query->leftJoin('field_data_field_publisher_format', 'fp', 'fr.field_file_resource_value = fp.entity_id');
  $query->leftJoin('field_data_field_accessibility_summary', 'fs', 'fr.field_file_resource_value = fs.entity_id');
  $query->fields('n', array('nid', 'title'))
    ->fields('fr', array('field_file_resource_value'))
    ->fields('ff', array('field_file_format_value'))
    ->fields('fp', array('field_publisher_format_value'))
    ->fields('fs', array('field_accessibility_summary_value'))
    ->condition('n.type', 'repository_item')
    ->orderBy('n.title');
  if (!empty($_SESSION['a11y_filter']['format'])) {
    $query->condition('ff.field_file_format_value', $_SESSION['a11y_filter']['format']);
  }
  if (!empty($_SESSION['a11y_filter']['publisher'])) {
    $query->condition('fp.field_publisher_format_value', $publishers[$_SESSION['a11y_filter']['publisher']]);
  }
  $results = $query->execute()->fetchAll();

  // Build table rows.
  $rows = [];
  foreach ($results as $result) {

    // Get accessibility terms.
    $query = db_select('field_data_field_accessibility_tags', 'ft');
    $query->join('taxonomy_term_data', 't', 't.tid = ft.field_accessibility_tags_tid');
    $terms = $query->fields('t', array('name'))
      ->condition('ft.entity_id', $result->field_file_resource_value)
      ->orderBy('t.name')
      ->execute()
      ->fetchCol();

    // Build row.
    $rows[$result->field_file_resource_value] = [
      'title' => l($result->title, 'node/' . $result->nid),
      'file_format' => $file_formats[$result->field_file_format_value],
      'file_publisher' => $result->field_publisher_format_value,
      'accessibility_tags' => implode(', ', $terms),
      'accessibility_summary' => $result->field_accessibility_summary_value,
      'operations' => l('Edit', 'field-collection/field-file-resource/' . $result->field_file_resource_value . '/edit', array('query' => array('destination' => request_path()))),
    ];
  }

  // Build table select table.
  $form['table'] = array(
    '#type' => 'tableselect',
    '#header' => array(
      'title' => t('Title'),
      'file_format' => t('File Format'),
      'file_publisher' => t('File Publisher'),
      'accessibility_tags' => t('Accessibility Tags'),
      'accessibility_summary' => t('Accessibility Summary'),
      'operations' => t('Operations'),
    ),
    '#options' => $rows,
    '#empty' => t('No records retrieved.'),
  );
  $form['pager'] = array(
    '#theme' => 'pager',
  );

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
  switch ($form_state['triggering_element']['#id']) {

    // Filter results.
    case 'edit-filter':
      $form_state['#rebuild'] = TRUE;
      if (isset($form_state['values']['format_filter']) || isset($form_state['values']['publisher_filter'])) {
        $_SESSION['a11y_filter']['format'] = $form_state['values']['format_filter'];
        $_SESSION['a11y_filter']['publisher'] = $form_state['values']['publisher_filter'];
      }
      break;

    // Reset filter.
    case 'edit-reset':
      $form_state['#rebuild'] = TRUE;
      unset($_SESSION['a11y_filter']);
      break;
  }

  // Submit:
  // Use the batch API to process each repo item
}