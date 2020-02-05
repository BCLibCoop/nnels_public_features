<?php

/**
 * @file
 * nnels_tutorials_faqs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nnels_tutorials_faqs_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "taxonomy_display" && $api == "taxonomy_display") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function nnels_tutorials_faqs_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function nnels_tutorials_faqs_node_info() {
  $items = array(
    'frequently_asked_question' => array(
      'name' => t('Frequently Asked Question'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Question'),
      'help' => '',
    ),
    'tutorial_slideshow' => array(
      'name' => t('Tutorial Slideshow'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'tutorial_video' => array(
      'name' => t('Tutorial Video'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_rdf_default_mappings().
 */
function nnels_tutorials_faqs_rdf_default_mappings() {
  $schemaorg = array();

  // Exported RDF mapping: tutorial_slideshow
  $schemaorg['node']['tutorial_slideshow'] = array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
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
    'field_categories' => array(
      'predicates' => array(),
      'type' => 'rel',
    ),
  );

  // Exported RDF mapping: tutorial_video
  $schemaorg['node']['tutorial_video'] = array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
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
    'field_categories' => array(
      'predicates' => array(),
      'type' => 'rel',
    ),
  );

  // Exported RDF mapping: faq_categories
  $schemaorg['taxonomy_term']['faq_categories'] = array(
    'rdftype' => array(
      0 => 'skos:Concept',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'rdfs:label',
        1 => 'skos:prefLabel',
      ),
    ),
    'description' => array(
      'predicates' => array(
        0 => 'skos:definition',
      ),
    ),
    'vid' => array(
      'predicates' => array(
        0 => 'skos:inScheme',
      ),
      'type' => 'rel',
    ),
    'parent' => array(
      'predicates' => array(
        0 => 'skos:broader',
      ),
      'type' => 'rel',
    ),
  );

  return $schemaorg;
}
