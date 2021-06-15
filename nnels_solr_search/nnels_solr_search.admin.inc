<?php

/**
 * Settings Form.
 *
 * @return array
 */
function nnels_solr_search_settings_form() {
  $form = array();

  $form['settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('Settings'),
  );
  $form['settings']['nnels_certified_accessibility_taxonomy'] = array(
    '#type' => 'checkbox',
    '#title' => t('Control the NNELS Certified Accessibility icon by the Accessibility Tags taxonomy.'),
    '#default_value' => variable_get('nnels_certified_accessibility_taxonomy', FALSE),
  );

  return system_settings_form($form);
}
