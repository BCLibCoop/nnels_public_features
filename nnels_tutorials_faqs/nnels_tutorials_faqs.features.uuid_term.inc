<?php

/**
 * @file
 * nnels_tutorials_faqs.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function nnels_tutorials_faqs_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'FAQ for Library Staff',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 7,
    'uuid' => '0b8c5e3f-a6b2-444a-b897-1a53adc4f209',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'faq_categories',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Finding Books',
    'description' => NULL,
    'format' => NULL,
    'weight' => 1,
    'uuid' => '1ea0be07-2ad0-4e69-8577-17c1df4190fa',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'faq_categories',
  );
  $terms[] = array(
    'name' => 'Contribute and Record Books',
    'description' => '',
    'format' => 'full_html',
    'weight' => 3,
    'uuid' => '60c29c51-20d7-49c4-af30-2587226f088f',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'faq_categories',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Getting Started',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '896889f9-ed86-469a-be07-86f7a572151f',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'faq_categories',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Downloading and Reading Books',
    'description' => NULL,
    'format' => NULL,
    'weight' => 2,
    'uuid' => 'b0be16dd-48f3-4753-940f-899f1c428cf5',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'faq_categories',
  );
  $terms[] = array(
    'name' => 'Other Questions',
    'description' => NULL,
    'format' => NULL,
    'weight' => 5,
    'uuid' => 'ba8913aa-b146-4f5a-b144-b303bd241097',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'faq_categories',
  );
  $terms[] = array(
    'name' => 'Legal',
    'description' => NULL,
    'format' => NULL,
    'weight' => 4,
    'uuid' => 'd5e93d88-b09d-403b-88d4-a47eda5f344f',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'faq_categories',
  );
  $terms[] = array(
    'name' => 'Personnel de bibliothèque',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'd5f5bda4-abe2-4bbb-85b3-965b0fd752f1',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'faq_categories',
  );
  return $terms;
}
