<?php
/**
 * @file
 * marcxml_export_components.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function marcxml_export_components_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_drupal_field_name'.
  $field_bases['field_drupal_field_name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_drupal_field_name',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'body' => 'body (Abstract)',
        'field_access_restrictions' => 'field_access_restrictions (Access Restrictions)',
        'field_access_rights' => 'field_access_rights (Access Rights)',
        'field_admin_audit' => 'field_admin_audit (Admin Audit)',
        'field_audience' => 'field_audience (Audience)',
        'field_bibid' => 'field_bibid (Bibid)',
        'field_cataloguing_agency' => 'field_cataloguing_agency (Cataloguing Agency)',
        'field_commercial_sources' => 'field_commercial_sources (Commercial Sources)',
        'field_completion_date' => 'field_completion_date (Completion Date)',
        'field_cover_art_url' => 'field_cover_art_url (Cover Art URL)',
        'field_daisy_2_file' => 'field_daisy_2_file (Daisy 2 file)',
        'field_daisy_file_available' => 'field_daisy_file_available (Daisy File Available)',
        'field_date' => 'field_date (Date)',
        'field_dc_contributor' => 'field_dc_contributor (DC Contributor)',
        'field_dc_coverage' => 'field_dc_coverage (DC Coverage)',
        'field_dc_creator' => 'field_dc_creator (Creator)',
        'field_dc_description' => 'field_dc_description (DC Description)',
        'field_dc_relation' => 'field_dc_relation (DC Relation)',
        'field_dc_type' => 'field_dc_type (DC Type)',
        'field_duplicate_managed_file' => 'field_duplicate_managed_file (Duplicate Managed File)',
        'field_encoding_level' => 'field_encoding_level (Encoding Level)',
        'field_file_description' => 'field_file_description (File Description)',
        'field_file_resource' => 'field_file_resource (File Resource)',
        'field_genre' => 'field_genre (Genre)',
        'field_isbn' => 'field_isbn (ISBN)',
        'field_isbn_audio' => 'field_isbn_audio (ISBN (Audio))',
        'field_iso_language' => 'field_iso_language (Language)',
        'field_keyword_index' => 'field_keyword_index (Keyword index)',
        'field_literary_format' => 'field_literary_format (Literary Format)',
        'field_marc_file' => 'field_marc_file (Marc File)',
        'field_nnels_856_tag' => 'field_nnels_856_tag (NNELS 856 tag)',
        'field_oclc_number' => 'field_oclc_number (OCLC NUmber)',
        'field_publisher' => 'field_publisher (Publisher)',
        'field_publisher_source' => 'field_publisher_source (Publisher Source)',
        'field_record_set' => 'field_record_set (Record Set)',
        'field_rights_holder' => 'field_rights_holder (Rights Holder)',
        'field_s3_path' => 'field_s3_path (S3 Path)',
        'field_source' => 'field_source (Source)',
        'field_subject' => 'field_subject (Subject)',
        'field_system_control_number' => 'field_system_control_number (System Control Number)',
        'field_title_alternate' => 'field_title_alternate (Alternate Title)',
        'field_type_content' => 'field_type_content (Content Type)',
        'field_type_media' => 'field_type_media (Media Type)',
        'field_uniform_title' => 'field_uniform_title (Uniform Title)',
        'field_uri' => 'field_uri (URI)',
        'field_xml_string' => 'field_xml_string (XML String)',
        'title_field' => 'title_field (Title)',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_field_name_generic'.
  $field_bases['field_field_name_generic'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_field_name_generic',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 120,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_implement_parser'.
  $field_bases['field_implement_parser'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_implement_parser',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'No',
        1 => 'Yes',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_integer',
  );

  // Exported field_base: 'field_nid_entry'.
  $field_bases['field_nid_entry'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_nid_entry',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'nid' => array(
        0 => 'nid',
      ),
    ),
    'locked' => 0,
    'module' => 'node_reference',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'referenceable_types' => array(
        'article' => 0,
        'content_builder' => 0,
        'faq' => 0,
        'forum' => 0,
        'frequently_asked_question' => 0,
        'group' => 0,
        'marc_export_set' => 0,
        'marc_mapper' => 0,
        'marc_tag_mapper' => 0,
        'organization' => 0,
        'page' => 0,
        'post' => 0,
        'record_set' => 0,
        'repository_item' => 'repository_item',
        's3_record_set' => 0,
        'tutorial_slideshow' => 0,
        'tutorial_video' => 0,
        'webform' => 0,
      ),
      'view' => array(
        'args' => array(),
        'display_name' => '',
        'view_name' => '',
      ),
    ),
    'translatable' => 0,
    'type' => 'node_reference',
  );

  // Exported field_base: 'field_parser_callback'.
  $field_bases['field_parser_callback'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_parser_callback',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_status_parser'.
  $field_bases['field_status_parser'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_status_parser',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        1 => 'Not implemented',
        2 => 'Implemented',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_integer',
  );

  // Exported field_base: 'field_urls_external'.
  $field_bases['field_urls_external'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_urls_external',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'entity_translation_sync' => FALSE,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 0,
    'type' => 'link_field',
  );

  return $field_bases;
}
