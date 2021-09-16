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

  // Page 2 of the form.
  if (!empty($form_state['storage']['step']) && $form_state['storage']['step'] == 2) {
    drupal_set_title('Bulk Edit for Accessibility Fields - Step 2');

    // load terms.
    $vocabulary = taxonomy_vocabulary_machine_name_load('accessibility_tags');
    $terms = db_select('taxonomy_term_data', 't')
      ->fields('t', array('tid', 'name'))
      ->condition('t.vid', $vocabulary->vid)
      ->execute()
      ->fetchAllKeyed();

    $form['accessibility'] = array(
      '#type' => 'fieldset',
      '#title' => t('Accessibility Fields'),
    );
    $form['accessibility']['tags'] = array(
      '#type' => 'checkboxes',
      '#title' => t('Accessibility Tags'),
      '#options' => $terms,
    );
    $form['accessibility']['summary'] = array(
      '#type' => 'textarea',
      '#title' => t('Accessibility Summary'),
    );

    $form['operations']['actions'] = array(
      '#type' => 'actions',
    );
    $form['operations']['actions']['save'] = array(
      '#type' => 'submit',
      '#value' => t('Save'),
    );
    $form['operations']['actions']['cancel'] = array(
      '#markup' => l(t('Cancel'), request_path()),
    );
  }

  // Page 1 of the form.
  else {
      drupal_set_title('Bulk Edit for Accessibility Fields - Step 1');

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
    $form['operations']['actions']['select'] = array(
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
  }

  return $form;
}

/**
 * Form Submit Callback: A11y Bulk Edit.
 */
function nnels_additional_views_a11y_bulk_edit_form_submit($form, &$form_state) {
  switch ($form_state['triggering_element']['#id']) {

    // Filter results.
    case 'edit-filter':
      $form_state['rebuild'] = TRUE;
      if (isset($form_state['values']['format_filter']) || isset($form_state['values']['publisher_filter'])) {
        $_SESSION['a11y_filter']['format'] = $form_state['values']['format_filter'];
        $_SESSION['a11y_filter']['publisher'] = $form_state['values']['publisher_filter'];
      }
      break;

    // Reset filter.
    case 'edit-reset':
      $form_state['rebuild'] = TRUE;
      unset($_SESSION['a11y_filter']);
      break;

    // Select.
    case 'edit-select':
      $form_state['rebuild'] = TRUE;
      $form_state['storage']['step'] = 2;
      $form_state['storage']['repo_items'] = array_keys(array_filter($form_state['values']['table']));
      break;

    // Save.
    case 'edit-save':

      // Set up the batch for processing.
      $batch =  array(
        'operations' => array(),
        'title' => t('Updating Repo Items with accessibility data.'),
        'init_message' => t('Batch is starting.'),
        'progress_message' => t('Processed @current out of @total.'),
        'error_message' => t('Batch has encountered an error.'),
        'file' => drupal_get_path('module', 'nnels_additional_views') . '/nnels_additional_views.admin.inc',
      );
      foreach ($form_state['storage']['repo_items'] as $item_id) {
        $batch['operations'][] = array(
          '_nnels_additional_views_a11y_process_item',
          array(
            $item_id,
            array_keys(array_filter($form_state['values']['tags'])),
            $form_state['values']['summary'],
          )
        );
      }
      batch_set($batch);

      unset($form_state['storage']);
      break;
  }
}

function _nnels_additional_views_a11y_process_item($item_id, $tags, $summary, &$context) {
  
  $context['message'] = t('Updating %item_id', array('%item_id' => $item_id));
  sleep(1);
}