<?php

/**
 * Implements hook_action_info().
 */
function nnels_taxonomy_features_action_info() {
  return array(
    'nnels_taxonomy_features_add_to_collection' => array(
      'type' => 'node',
      'label' => t('Add to Collection'),
      'configurable' => TRUE,
      'triggers' => array('any'),
      'pass_rows' => TRUE,
      'vbo_configurable' => TRUE,
    )
  );
}

/**
 * @param $settings
 * @param $form_state
 * @return mixed
 */
function nnels_taxonomy_features_add_to_collection_form($settings,
                                                        &$form_state){
  //Perform EFQ to get all Collection terms in Relations vocabulary
  $vocabulary = taxonomy_vocabulary_machine_name_load('relations');
  $query = new EntityFieldQuery();
  $term_ids = $query->entityCondition('entity_type', 'taxonomy_term')
    ->propertyCondition('vid', $vocabulary->vid)
    ->propertyOrderBy('weight')
    ->execute();
  $loaded_terms = taxonomy_term_load_multiple(array_keys
  ($term_ids['taxonomy_term']));

  $options = array();
  //Add this before we start keying by term ID
  array_unshift($options, "---");

  foreach ($loaded_terms as $term) $options[$term->tid] =
    $term->name;

  //Form arrays
  $form['add_collections_autocomplete'] = array(
    '#type' => 'textfield',
    '#title' => t('Find or Create a Collection'),
    '#required' => FALSE,
    '#description' => t("Find an existing Collection by name or enter a new Collection name to create."),
    '#autocomplete_path' => 'taxonomy/autocomplete/field_dc_relation_term_value',
  );

  $form['add_collections_select'] = array(
    '#type' => 'select',
    '#title' => t('Existing Collection(s)'),
    '#options' => $options,
    '#required' => FALSE,
    '#description' => t("NB: MSG"),
    '#default_value' => $options[0],
  );

  return $form;
}

function nnels_taxonomy_features_add_to_collection_validate($form,
                                                            $form_state) {
  if (! empty($form_state['values']['add_collections_autocomplete'])
    && $form_state['values']['add_collections_select'] != 0) {
    //reject and redirect back to form, can't have both
    form_set_error('form',
      'Cannot proceed with conflicting selections, choose from only
           one selector.');
    $form_state['redirect'] = FALSE;
    $form_state['rebuild'] = TRUE;
  }
}

/**
 * @param $form
 * @param $form_state
 * @return array
 */
function nnels_taxonomy_features_add_to_collection_submit($form, $form_state) {

  $returnable['selected_items'] = $form_state['selection'];
  $returnable['collection_target'] = ($form_state['values']['add_collections_autocomplete']
    ? $form_state['values']['add_collections_autocomplete']
    : $form_state['values']['add_collections_select']
  );
  $returnable['dc_relation_qualifier'] = 'IsPartOf';

  //Load relations vocabulary ID
  $collection_vocab_name = 'relations';
  $returnable['relations_vid'] = taxonomy_vocabulary_machine_name_load
  ($collection_vocab_name)
    ->vid;

  //If we have a numeric collection target from the select form, it's a TID.
  //Otherwise, it's an autocomplete-selected name so try to load its tid.
  //An empty array ensures a new term will be created in next step
  $returnable['collection_tid'] = ( is_numeric($returnable['collection_target'])
    ? $returnable['collection_target'] : taxonomy_get_term_by_name
    ($returnable['collection_target'], 'relations')
  );

  //Only create new term if we didn't get term loaded and we haven't created a
  // new term this batch
  if ( empty($returnable['collection_tid']) ) {
    //Create the term and save a copy of resulting object
    taxonomy_term_save( $term = (object) array(
      'name' => $returnable['collection_target'],
      'vid' => $returnable['relations_vid'],
      'weight' => 0,
    ));
    //Store the new term ID
    $returnable['collection_tid'] = $term->tid;
  }

  return $returnable;
}

function nnels_taxonomy_features_add_to_collection(&$node, $context) {

  //Create new field collection and attach to node
  $fc_instance = entity_create( 'field_collection_item', array('field_name'
  => 'field_dc_relation') );
  $fc_instance->setHostEntity('node', $node);

  $fc_inst_wrap = entity_metadata_wrapper ( 'field_collection_item',
    $fc_instance  );
  $fc_inst_wrap->field_dc_relation_qualifiers->set( $context['dc_relation_qualifier'] );
  $fc_inst_wrap->field_dc_relation_term_value->set( $context['collection_tid'] );
  $fc_instance->save();

}