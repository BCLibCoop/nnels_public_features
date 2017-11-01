<?php
/**
 * @file
 * marc_tag_entities.features.uuid_entities.inc
 */

/**
 * Implements hook_uuid_default_entities().
 */
function marc_tag_entities_uuid_default_entities() {
  $entities = array();

  $entities['entity_views_deploy'][] = (object) array(
    '__metadata' => array(
      'type' => 'marc_tag',
      'uri' => 'marc_tag/4',
      'cause' => FALSE,
    ),
    'field_code' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'value' => 1,
        ),
      ),
    ),
    'field_description' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'value' => 'This should be the System Control Number in Drupal.
This field is NOT-REPEATABLE. If there is more than one system control number in Drupal, then pick the first one?',
        ),
      ),
    ),
    'field_development_status' => array(
      'und' => array(
        0 => array(
          'value' => 4,
        ),
      ),
    ),
    'field_export_type' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_functions' => array(),
    'field_include_in_export' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_ind2' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'value' => 'n/a',
        ),
      ),
    ),
    'field_indc1' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'value' => 'n/a',
        ),
      ),
    ),
    'field_marc_subfield_collection' => array(),
    'field_marc_tag' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => '001',
        ),
      ),
    ),
    'field_marc_tag_type' => array(
      'und' => array(
        0 => array(
          'value' => 2,
        ),
      ),
    ),
    'field_source_value' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_subfield_code' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'value' => 'n/a',
        ),
      ),
    ),
    'rdf_mapping' => array(
      'field_marc_tag' => array(
        'predicates' => array(),
      ),
    ),
    'title' => 'control number',
    'type' => 'marc_tag',
    'uid' => 0,
  );
  $entities['entity_views_deploy'][] = (object) array(
    '__metadata' => array(
      'type' => 'marc_tag',
      'uri' => 'marc_tag/5',
      'cause' => FALSE,
    ),
    'field_code' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'value' => 3,
        ),
      ),
    ),
    'field_description' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'value' => 'Default code: BVNNELS
',
        ),
      ),
    ),
    'field_development_status' => array(
      'und' => array(
        0 => array(
          'value' => 5,
        ),
      ),
    ),
    'field_export_type' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_functions' => array(),
    'field_include_in_export' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_ind2' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'value' => 'n/a',
        ),
      ),
    ),
    'field_indc1' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'value' => 'n/a',
        ),
      ),
    ),
    'field_marc_subfield_collection' => array(),
    'field_marc_tag' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => '003',
        ),
      ),
    ),
    'field_marc_tag_type' => array(
      'und' => array(
        0 => array(
          'value' => 2,
        ),
      ),
    ),
    'field_source_value' => array(),
    'field_subfield_code' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'value' => 'n/a',
        ),
      ),
    ),
    'rdf_mapping' => array(
      'field_marc_tag' => array(
        'predicates' => array(),
      ),
    ),
    'title' => 'control number identifier',
    'type' => 'marc_tag',
    'uid' => 0,
  );
  $entities['entity_views_deploy'][] = (object) array(
    '__metadata' => array(
      'type' => 'marc_tag',
      'uri' => 'marc_tag/6',
      'cause' => FALSE,
    ),
    'field_code' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'value' => 5,
        ),
      ),
    ),
    'field_description' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'value' => 'Automatically generate upon export of record. Format must be:
yyyymmddhhmmss.f',
        ),
      ),
    ),
    'field_development_status' => array(
      'und' => array(
        0 => array(
          'value' => 5,
        ),
      ),
    ),
    'field_export_type' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_functions' => array(),
    'field_include_in_export' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_ind2' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'value' => 'n/a',
        ),
      ),
    ),
    'field_indc1' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'value' => 'n/a',
        ),
      ),
    ),
    'field_marc_subfield_collection' => array(),
    'field_marc_tag' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => '005',
        ),
      ),
    ),
    'field_marc_tag_type' => array(
      'und' => array(
        0 => array(
          'value' => 2,
        ),
      ),
    ),
    'field_source_value' => array(),
    'field_subfield_code' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'value' => 'n/a',
        ),
      ),
    ),
    'rdf_mapping' => array(
      'field_marc_tag' => array(
        'predicates' => array(),
      ),
    ),
    'title' => 'date and time of latest transaction',
    'type' => 'marc_tag',
    'uid' => 0,
  );
  $entities['entity_views_deploy'][] = (object) array(
    '__metadata' => array(
      'type' => 'field_collection_item',
      'uri' => 'field_collection_item/497924',
      'cause' => 'marc_tag/31',
    ),
    'archived' => 0,
    'default_revision' => 1,
    'field_description' => array(),
    'field_drupal_fieldname' => array(),
    'field_export_type' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_include_in_export' => array(),
    'field_name' => 'field_marc_subfield_collection',
    'field_source_value' => array(),
    'field_static_value' => array(),
    'field_subfield_code' => array(),
    'rdf_mapping' => array(),
    'uuid' => '203dda1c-cd3c-427e-8ec1-d6bf54026a65',
  );
  $entities['entity_views_deploy'][] = (object) array(
    '__metadata' => array(
      'type' => 'marc_tag',
      'uri' => 'marc_tag/31',
      'cause' => FALSE,
    ),
    'field_code' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => '007',
        ),
      ),
    ),
    'field_description' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'OCLC recommended field. Don\'t need to implement right now. For future reference, data would be: 

007 Physical Description Fixed Field
		• DAISY, EPUB, AZW3, E-TEXT, PDF (Electronic resource): Field 007 for the category of material electronic resource currently has 14 character positions defined for it. 
			• 007/00 = c 
			• 007/01 = r 
			• 007/02 = contains a fill (|) character
			• 007/03 = contains a fill (|) character
			• 007/04 = n 
			• 007/05 = a (for DAISY202, DAISY3, EPUB3 media overlays); blank (for AZW3, E-TEXT, PDF) 
			• 007/06-08 = ||| (fill characters for each position)
			• 007/09 = contains a fill (|) character
			• 007/10 = contains a fill (|) character
			• 007/11 = contains a fill (|) character
			• 007/12 = contains a fill (|) character
			• 007/13 = contains a fill (|) character
		• BRAILLE (Tactile material): Field 007 for the category of material tactile material currently has 10 character positions defined for it.
			• 007/00 = f
			• 007/01 = b
			• 007/02 = contains a fill (|) character
			• 007/03-04 = a
			• 007/05 = a 
			• 007/06-08 = nnn (in all 3 positions)
			• 007/09 = contains a fill (|) character
		• MP3 (Sound recording):   Field 007 for the category of material sound recording currently has 14 character positions defined for it.
			• 007/00 = s
			• 007/01 = r
			• 007/02 = contains a fill (|) character
			• 007/03 = n
			• 007/04 = contains a fill (|) character
			• 007/05 = n
			• 007/06 = n
			• 007/07 = n
			• 007/08 = n
			• 007/09 = n
			• 007/10 = n
			• 007/11 = n
			• 007/12 = n
			• 007/13 = d ',
        ),
      ),
    ),
    'field_development_status' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_export_type' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_functions' => array(),
    'field_include_in_export' => array(
      'und' => array(
        0 => array(
          'value' => 5,
        ),
      ),
    ),
    'field_ind2' => array(),
    'field_indc1' => array(),
    'field_marc_subfield_collection' => array(),
    'field_marc_tag' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => '007',
        ),
      ),
    ),
    'field_marc_tag_type' => array(
      'und' => array(
        0 => array(
          'value' => 3,
        ),
      ),
    ),
    'field_source_value' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_subfield_code' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'n/a',
        ),
      ),
    ),
    'rdf_mapping' => array(
      'field_marc_tag' => array(
        'predicates' => array(),
      ),
    ),
    'title' => 'physical description fixed field',
    'type' => 'marc_tag',
    'uid' => 10666,
  );
  $entities['entity_views_deploy'][] = (object) array(
    '__metadata' => array(
      'type' => 'field_collection_item',
      'uri' => 'field_collection_item/497633',
      'cause' => 'marc_tag/7',
    ),
    'archived' => 0,
    'default_revision' => 1,
    'field_description' => array(),
    'field_drupal_fieldname' => array(),
    'field_export_type' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_include_in_export' => array(),
    'field_name' => 'field_marc_subfield_collection',
    'field_source_value' => array(),
    'field_static_value' => array(),
    'field_subfield_code' => array(),
    'rdf_mapping' => array(),
    'uuid' => 'b7ed05ef-e6e3-4699-9bc7-7931a1d52794',
  );
  $entities['entity_views_deploy'][] = (object) array(
    '__metadata' => array(
      'type' => 'marc_tag',
      'uri' => 'marc_tag/7',
      'cause' => FALSE,
    ),
    'field_code' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 8,
        ),
      ),
    ),
    'field_description' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'There are 40 character positions. There are differences between MP3 files and the other files. See github for up-to-date codes.',
        ),
      ),
    ),
    'field_development_status' => array(
      'und' => array(
        0 => array(
          'value' => 4,
        ),
      ),
    ),
    'field_export_type' => array(
      'und' => array(
        0 => array(
          'value' => 2,
        ),
      ),
    ),
    'field_functions' => array(),
    'field_include_in_export' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_ind2' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'n/a',
        ),
      ),
    ),
    'field_indc1' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'n/a',
        ),
      ),
    ),
    'field_marc_subfield_collection' => array(),
    'field_marc_tag' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => '008',
        ),
      ),
    ),
    'field_marc_tag_type' => array(
      'und' => array(
        0 => array(
          'value' => 2,
        ),
      ),
    ),
    'field_source_value' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_subfield_code' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'n/a',
        ),
      ),
    ),
    'rdf_mapping' => array(
      'field_marc_tag' => array(
        'predicates' => array(),
      ),
    ),
    'title' => 'fixed length data elements',
    'type' => 'marc_tag',
    'uid' => 0,
  );
  $entities['entity_views_deploy'][] = (object) array(
    '__metadata' => array(
      'type' => 'field_collection_item',
      'uri' => 'field_collection_item/497560',
      'cause' => 'marc_tag/9',
    ),
    'archived' => 0,
    'default_revision' => 1,
    'field_description' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Default code for Field 040 subfield c (transcribing agency) is: BVNNELS
',
        ),
      ),
    ),
    'field_drupal_fieldname' => array(),
    'field_export_type' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_include_in_export' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_name' => 'field_marc_subfield_collection',
    'field_source_value' => array(),
    'field_static_value' => array(),
    'field_subfield_code' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'c',
        ),
      ),
    ),
    'rdf_mapping' => array(),
    'uuid' => 'ed972dc0-38e1-4883-a541-62969ac91304',
  );
  $entities['entity_views_deploy'][] = (object) array(
    '__metadata' => array(
      'type' => 'field_collection_item',
      'uri' => 'field_collection_item/497596',
      'cause' => 'marc_tag/9',
    ),
    'archived' => 0,
    'default_revision' => 1,
    'field_description' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Field 040 subfield b is Language of cataloguing. It contains a MARC code for the language of cataloging in the record.  The source of the code is MARC Code List for Languages that is maintained by the Library of Congress: http://www.loc.gov/marc/languages/language_code.html',
        ),
      ),
    ),
    'field_drupal_fieldname' => array(),
    'field_export_type' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_include_in_export' => array(
      'und' => array(
        0 => array(
          'value' => 2,
        ),
      ),
    ),
    'field_name' => 'field_marc_subfield_collection',
    'field_source_value' => array(
      'und' => array(
        0 => array(
          'value' => 2,
        ),
      ),
    ),
    'field_static_value' => array(),
    'field_subfield_code' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'b',
        ),
      ),
    ),
    'rdf_mapping' => array(),
    'uuid' => 'f8a38145-f809-4b62-ba84-9831e01a6e14',
  );
  $entities['entity_views_deploy'][] = (object) array(
    '__metadata' => array(
      'type' => 'field_collection_item',
      'uri' => 'field_collection_item/497597',
      'cause' => 'marc_tag/9',
    ),
    'archived' => 0,
    'default_revision' => 1,
    'field_description' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Field 040 subfield a is Original cataloguing agency (contains the code or name of the organization that created the original record).',
        ),
      ),
    ),
    'field_drupal_fieldname' => array(),
    'field_export_type' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_include_in_export' => array(
      'und' => array(
        0 => array(
          'value' => 2,
        ),
      ),
    ),
    'field_name' => 'field_marc_subfield_collection',
    'field_source_value' => array(
      'und' => array(
        0 => array(
          'value' => 2,
        ),
      ),
    ),
    'field_static_value' => array(),
    'field_subfield_code' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'a',
        ),
      ),
    ),
    'rdf_mapping' => array(),
    'uuid' => '3166c552-3c41-4b8f-8895-b97341a5d90f',
  );
  $entities['entity_views_deploy'][] = (object) array(
    '__metadata' => array(
      'type' => 'field_collection_item',
      'uri' => 'field_collection_item/497598',
      'cause' => 'marc_tag/9',
    ),
    'archived' => 0,
    'default_revision' => 1,
    'field_description' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Default code for Field 040 subfield d (transcribing agency) is: BVNNELS',
        ),
      ),
    ),
    'field_drupal_fieldname' => array(),
    'field_export_type' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_include_in_export' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_name' => 'field_marc_subfield_collection',
    'field_source_value' => array(),
    'field_static_value' => array(),
    'field_subfield_code' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'd',
        ),
      ),
    ),
    'rdf_mapping' => array(),
    'uuid' => 'c46d5f25-3bd2-4f84-8797-97e65dbeabdd',
  );
  $entities['entity_views_deploy'][] = (object) array(
    '__metadata' => array(
      'type' => 'marc_tag',
      'uri' => 'marc_tag/9',
      'cause' => FALSE,
    ),
    'field_code' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 40,
        ),
      ),
    ),
    'field_description' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Use this default code for subfields c and d: BVNNELS
For subfields a (original cataloguing agency) and b (language of cataloguing) - include if present in MarcXML',
        ),
      ),
    ),
    'field_development_status' => array(
      'und' => array(
        0 => array(
          'value' => 4,
        ),
      ),
    ),
    'field_export_type' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_functions' => array(),
    'field_include_in_export' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_ind2' => array(),
    'field_indc1' => array(),
    'field_marc_subfield_collection' => array(),
    'field_marc_tag' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => '040',
        ),
      ),
    ),
    'field_marc_tag_type' => array(
      'und' => array(
        0 => array(
          'value' => 3,
        ),
      ),
    ),
    'field_source_value' => array(
      'und' => array(
        0 => array(
          'value' => 2,
        ),
      ),
    ),
    'field_subfield_code' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'a, b, c, d',
        ),
      ),
    ),
    'rdf_mapping' => array(
      'field_marc_tag' => array(
        'predicates' => array(),
      ),
    ),
    'title' => 'cataloguing source',
    'type' => 'marc_tag',
    'uid' => 0,
  );
  $entities['entity_views_deploy'][] = (object) array(
    '__metadata' => array(
      'type' => 'field_collection_item',
      'uri' => 'field_collection_item/497562',
      'cause' => 'marc_tag/11',
    ),
    'archived' => 0,
    'default_revision' => 1,
    'field_description' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Field 240 subfield a is the Uniform title.',
        ),
      ),
    ),
    'field_drupal_fieldname' => array(),
    'field_export_type' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_include_in_export' => array(
      'und' => array(
        0 => array(
          'value' => 2,
        ),
      ),
    ),
    'field_name' => 'field_marc_subfield_collection',
    'field_source_value' => array(
      'und' => array(
        0 => array(
          'value' => 2,
        ),
      ),
    ),
    'field_static_value' => array(),
    'field_subfield_code' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'a',
        ),
      ),
    ),
    'rdf_mapping' => array(),
    'uuid' => 'd5383452-cbe5-4f02-a9e7-6b28224ba80a',
  );
  $entities['entity_views_deploy'][] = (object) array(
    '__metadata' => array(
      'type' => 'marc_tag',
      'uri' => 'marc_tag/11',
      'cause' => FALSE,
    ),
    'field_code' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 240,
        ),
      ),
    ),
    'field_description' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Include if present in MarcXML',
        ),
      ),
    ),
    'field_development_status' => array(
      'und' => array(
        0 => array(
          'value' => 5,
        ),
      ),
    ),
    'field_export_type' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_functions' => array(),
    'field_include_in_export' => array(
      'und' => array(
        0 => array(
          'value' => 2,
        ),
      ),
    ),
    'field_ind2' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'use 245 ind2 rules',
        ),
      ),
    ),
    'field_indc1' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'use MarcXML indicators',
        ),
      ),
    ),
    'field_marc_subfield_collection' => array(),
    'field_marc_tag' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 240,
        ),
      ),
    ),
    'field_marc_tag_type' => array(
      'und' => array(
        0 => array(
          'value' => 3,
        ),
      ),
    ),
    'field_source_value' => array(
      'und' => array(
        0 => array(
          'value' => 2,
        ),
      ),
    ),
    'field_subfield_code' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'a',
        ),
      ),
    ),
    'rdf_mapping' => array(
      'field_marc_tag' => array(
        'predicates' => array(),
      ),
    ),
    'title' => 'uniform title',
    'type' => 'marc_tag',
    'uid' => 0,
  );
  $entities['entity_views_deploy'][] = (object) array(
    '__metadata' => array(
      'type' => 'field_collection_item',
      'uri' => 'field_collection_item/497545',
      'cause' => 'marc_tag/12',
    ),
    'archived' => 0,
    'default_revision' => 1,
    'field_description' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Field 245 subfield a is the Title.',
        ),
      ),
    ),
    'field_drupal_fieldname' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'title',
        ),
      ),
    ),
    'field_export_type' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_include_in_export' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_name' => 'field_marc_subfield_collection',
    'field_source_value' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_static_value' => array(),
    'field_subfield_code' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'a',
        ),
      ),
    ),
    'rdf_mapping' => array(),
    'uuid' => '1a5abbbf-786f-4bb6-a769-d0f77bd970cd',
  );
  $entities['entity_views_deploy'][] = (object) array(
    '__metadata' => array(
      'type' => 'marc_tag',
      'uri' => 'marc_tag/12',
      'cause' => FALSE,
    ),
    'field_code' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 245,
        ),
      ),
    ),
    'field_description' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'This should be the Title field in Drupal.
ind2 will be either 0 (no nonfiling characters present) or 1-9 (# of nonfiling characters present).',
        ),
      ),
    ),
    'field_development_status' => array(
      'und' => array(
        0 => array(
          'value' => 5,
        ),
      ),
    ),
    'field_export_type' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_functions' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'cals_exporter_generate_title',
        ),
      ),
    ),
    'field_include_in_export' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_ind2' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => '0-9',
        ),
      ),
    ),
    'field_indc1' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 0,
        ),
      ),
    ),
    'field_marc_subfield_collection' => array(),
    'field_marc_tag' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 245,
        ),
      ),
    ),
    'field_marc_tag_type' => array(
      'und' => array(
        0 => array(
          'value' => 3,
        ),
      ),
    ),
    'field_source_value' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_subfield_code' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'a',
        ),
      ),
    ),
    'rdf_mapping' => array(
      'field_marc_tag' => array(
        'predicates' => array(),
      ),
    ),
    'title' => 'title',
    'type' => 'marc_tag',
    'uid' => 0,
  );
  $entities['entity_views_deploy'][] = (object) array(
    '__metadata' => array(
      'type' => 'field_collection_item',
      'uri' => 'field_collection_item/497564',
      'cause' => 'marc_tag/13',
    ),
    'archived' => 0,
    'default_revision' => 1,
    'field_description' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Field 246 subfield a is the Variant form of the title (that should differ substantially from the Title).',
        ),
      ),
    ),
    'field_drupal_fieldname' => array(),
    'field_export_type' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_include_in_export' => array(
      'und' => array(
        0 => array(
          'value' => 2,
        ),
      ),
    ),
    'field_name' => 'field_marc_subfield_collection',
    'field_source_value' => array(
      'und' => array(
        0 => array(
          'value' => 2,
        ),
      ),
    ),
    'field_static_value' => array(),
    'field_subfield_code' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'value' => 'a',
        ),
      ),
    ),
    'rdf_mapping' => array(),
    'uuid' => '48d52d56-8b53-488e-a6f1-2e0fcc0bb5a3',
  );
  $entities['entity_views_deploy'][] = (object) array(
    '__metadata' => array(
      'type' => 'marc_tag',
      'uri' => 'marc_tag/13',
      'cause' => FALSE,
    ),
    'field_code' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'value' => 246,
        ),
      ),
    ),
    'field_description' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'value' => 'Include if present in MarcXML',
        ),
      ),
    ),
    'field_development_status' => array(
      'und' => array(
        0 => array(
          'value' => 5,
        ),
      ),
    ),
    'field_export_type' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_functions' => array(),
    'field_include_in_export' => array(
      'und' => array(
        0 => array(
          'value' => 2,
        ),
      ),
    ),
    'field_ind2' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => '"',
        ),
      ),
    ),
    'field_indc1' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 2,
        ),
      ),
    ),
    'field_marc_subfield_collection' => array(),
    'field_marc_tag' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 246,
        ),
      ),
    ),
    'field_marc_tag_type' => array(
      'und' => array(
        0 => array(
          'value' => 3,
        ),
      ),
    ),
    'field_source_value' => array(
      'und' => array(
        0 => array(
          'value' => 2,
        ),
      ),
    ),
    'field_subfield_code' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'value' => 'a',
        ),
      ),
    ),
    'rdf_mapping' => array(
      'field_marc_tag' => array(
        'predicates' => array(),
      ),
    ),
    'title' => 'title - variant form',
    'type' => 'marc_tag',
    'uid' => 0,
  );
  $entities['entity_views_deploy'][] = (object) array(
    '__metadata' => array(
      'type' => 'field_collection_item',
      'uri' => 'field_collection_item/497565',
      'cause' => 'marc_tag/14',
    ),
    'archived' => 0,
    'default_revision' => 1,
    'field_description' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Field 250 subfield a is the Edition statement.',
        ),
      ),
    ),
    'field_drupal_fieldname' => array(),
    'field_export_type' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_include_in_export' => array(
      'und' => array(
        0 => array(
          'value' => 2,
        ),
      ),
    ),
    'field_name' => 'field_marc_subfield_collection',
    'field_source_value' => array(
      'und' => array(
        0 => array(
          'value' => 2,
        ),
      ),
    ),
    'field_static_value' => array(),
    'field_subfield_code' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'value' => 'a',
        ),
      ),
    ),
    'rdf_mapping' => array(),
    'uuid' => 'a883a56d-861f-4ced-a1ce-bc94428e1304',
  );
  $entities['entity_views_deploy'][] = (object) array(
    '__metadata' => array(
      'type' => 'marc_tag',
      'uri' => 'marc_tag/14',
      'cause' => FALSE,
    ),
    'field_code' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'value' => 250,
        ),
      ),
    ),
    'field_description' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'value' => 'Include if present in MarcXML',
        ),
      ),
    ),
    'field_development_status' => array(
      'und' => array(
        0 => array(
          'value' => 5,
        ),
      ),
    ),
    'field_export_type' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_functions' => array(),
    'field_include_in_export' => array(
      'und' => array(
        0 => array(
          'value' => 2,
        ),
      ),
    ),
    'field_ind2' => array(),
    'field_indc1' => array(),
    'field_marc_subfield_collection' => array(),
    'field_marc_tag' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 250,
        ),
      ),
    ),
    'field_marc_tag_type' => array(
      'und' => array(
        0 => array(
          'value' => 3,
        ),
      ),
    ),
    'field_source_value' => array(
      'und' => array(
        0 => array(
          'value' => 2,
        ),
      ),
    ),
    'field_subfield_code' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'value' => 'a',
        ),
      ),
    ),
    'rdf_mapping' => array(
      'field_marc_tag' => array(
        'predicates' => array(),
      ),
    ),
    'title' => 'edition statement',
    'type' => 'marc_tag',
    'uid' => 0,
  );
  $entities['entity_views_deploy'][] = (object) array(
    '__metadata' => array(
      'type' => 'field_collection_item',
      'uri' => 'field_collection_item/497546',
      'cause' => 'marc_tag/15',
    ),
    'archived' => 0,
    'default_revision' => 1,
    'field_description' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Field 264 subfield a is the Place of Publication.',
        ),
      ),
    ),
    'field_drupal_fieldname' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Publisher',
        ),
      ),
    ),
    'field_export_type' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_include_in_export' => array(
      'und' => array(
        0 => array(
          'value' => 3,
        ),
      ),
    ),
    'field_name' => 'field_marc_subfield_collection',
    'field_source_value' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_static_value' => array(),
    'field_subfield_code' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'a',
        ),
      ),
    ),
    'rdf_mapping' => array(),
    'uuid' => 'cb7beefc-653b-48a5-a964-a9d30fb6e416',
  );
  $entities['entity_views_deploy'][] = (object) array(
    '__metadata' => array(
      'type' => 'field_collection_item',
      'uri' => 'field_collection_item/497547',
      'cause' => 'marc_tag/15',
    ),
    'archived' => 0,
    'default_revision' => 1,
    'field_description' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Field 264 subfield b is the Name of Publisher.
',
        ),
      ),
    ),
    'field_drupal_fieldname' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Publisher',
        ),
      ),
    ),
    'field_export_type' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_include_in_export' => array(
      'und' => array(
        0 => array(
          'value' => 3,
        ),
      ),
    ),
    'field_name' => 'field_marc_subfield_collection',
    'field_source_value' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_static_value' => array(),
    'field_subfield_code' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'b',
        ),
      ),
    ),
    'rdf_mapping' => array(),
    'uuid' => '97c3b641-649e-4202-a66c-241bce13b5f7',
  );
  $entities['entity_views_deploy'][] = (object) array(
    '__metadata' => array(
      'type' => 'field_collection_item',
      'uri' => 'field_collection_item/497548',
      'cause' => 'marc_tag/15',
    ),
    'archived' => 0,
    'default_revision' => 1,
    'field_description' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Field 264 subfield c is the Date of Publication.
It should be DC Date Created (if it exists) or else DC Date Issued or DC Date Copyrighted (if DC Date Created doesn’t exist).',
        ),
      ),
    ),
    'field_drupal_fieldname' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'DC Date Created',
        ),
        1 => array(
          'format' => NULL,
          'value' => 'DC Date Issued',
        ),
        2 => array(
          'format' => NULL,
          'value' => 'DC Date Copyrighted',
        ),
      ),
    ),
    'field_export_type' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_include_in_export' => array(
      'und' => array(
        0 => array(
          'value' => 3,
        ),
      ),
    ),
    'field_name' => 'field_marc_subfield_collection',
    'field_source_value' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_static_value' => array(),
    'field_subfield_code' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'c',
        ),
      ),
    ),
    'rdf_mapping' => array(),
    'uuid' => '9b763bd2-0246-430a-9755-14fc48302fb6',
  );
  $entities['entity_views_deploy'][] = (object) array(
    '__metadata' => array(
      'type' => 'marc_tag',
      'uri' => 'marc_tag/15',
      'cause' => FALSE,
    ),
    'field_code' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 264,
        ),
      ),
    ),
    'field_description' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Currently 264$a and $b currently aren’t separated out when all the data is in one Publisher field in Drupal. Is there a way to separate them out, maybe based on the colon? (everything before & including the colon should be in $a, and after should be $b). 
- https://dev.nnels.ca/node/36788/view-xml-stub',
        ),
      ),
    ),
    'field_development_status' => array(
      'und' => array(
        0 => array(
          'value' => 4,
        ),
      ),
    ),
    'field_export_type' => array(
      'und' => array(
        0 => array(
          'value' => 2,
        ),
      ),
    ),
    'field_functions' => array(),
    'field_include_in_export' => array(
      'und' => array(
        0 => array(
          'value' => 3,
        ),
      ),
    ),
    'field_ind2' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 1,
        ),
      ),
    ),
    'field_indc1' => array(),
    'field_marc_subfield_collection' => array(),
    'field_marc_tag' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 264,
        ),
      ),
    ),
    'field_marc_tag_type' => array(
      'und' => array(
        0 => array(
          'value' => 3,
        ),
      ),
    ),
    'field_source_value' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_subfield_code' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'b, c',
        ),
      ),
    ),
    'rdf_mapping' => array(
      'field_marc_tag' => array(
        'predicates' => array(),
      ),
    ),
    'title' => 'publication details',
    'type' => 'marc_tag',
    'uid' => 0,
  );
  $entities['entity_views_deploy'][] = (object) array(
    '__metadata' => array(
      'type' => 'field_collection_item',
      'uri' => 'field_collection_item/497579',
      'cause' => 'marc_tag/28',
    ),
    'archived' => 0,
    'default_revision' => 1,
    'field_description' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => '300$a can follow the below format:

300$a = 1 [insert file format, i.e. DAISY 2.02, DAISY 3, EPUB 2, EPUB 3 (use for EPUB 3 & EPUB 3 media overlays), AZW3, PDF, e-text, MP3] file [insert file size]
for example: 
300$a = 1 DAISY 2.02 file (90.18MB)
300$a = 1 MP3 file (243.67MB) 
',
        ),
      ),
    ),
    'field_drupal_fieldname' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'File Format',
        ),
      ),
    ),
    'field_export_type' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_include_in_export' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_name' => 'field_marc_subfield_collection',
    'field_source_value' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_static_value' => array(),
    'field_subfield_code' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'a',
        ),
      ),
    ),
    'rdf_mapping' => array(),
    'uuid' => '7484ee7a-4f54-4710-917e-ff1bb131ba01',
  );
  $entities['entity_views_deploy'][] = (object) array(
    '__metadata' => array(
      'type' => 'marc_tag',
      'uri' => 'marc_tag/28',
      'cause' => FALSE,
    ),
    'field_code' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 300,
        ),
      ),
    ),
    'field_description' => array(),
    'field_development_status' => array(
      'und' => array(
        0 => array(
          'value' => 4,
        ),
      ),
    ),
    'field_export_type' => array(
      'und' => array(
        0 => array(
          'value' => 2,
        ),
      ),
    ),
    'field_functions' => array(),
    'field_include_in_export' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_ind2' => array(),
    'field_indc1' => array(),
    'field_marc_subfield_collection' => array(),
    'field_marc_tag' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 300,
        ),
      ),
    ),
    'field_marc_tag_type' => array(
      'und' => array(
        0 => array(
          'value' => 3,
        ),
      ),
    ),
    'field_source_value' => array(),
    'field_subfield_code' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'a, b',
        ),
      ),
    ),
    'rdf_mapping' => array(
      'field_marc_tag' => array(
        'predicates' => array(),
      ),
    ),
    'title' => 'physical description',
    'type' => 'marc_tag',
    'uid' => 0,
  );
  $entities['entity_views_deploy'][] = (object) array(
    '__metadata' => array(
      'type' => 'field_collection_item',
      'uri' => 'field_collection_item/497567',
      'cause' => 'marc_tag/16',
    ),
    'archived' => 0,
    'default_revision' => 1,
    'field_description' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Field 306 subfield a is the Playing time.
Format must be: hhmmss',
        ),
      ),
    ),
    'field_drupal_fieldname' => array(),
    'field_export_type' => array(
      'und' => array(
        0 => array(
          'value' => 2,
        ),
      ),
    ),
    'field_include_in_export' => array(
      'und' => array(
        0 => array(
          'value' => 3,
        ),
      ),
    ),
    'field_name' => 'field_marc_subfield_collection',
    'field_source_value' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_static_value' => array(),
    'field_subfield_code' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'a',
        ),
      ),
    ),
    'rdf_mapping' => array(),
    'uuid' => 'c1880ea6-5dcc-4460-a189-c0f3e936901f',
  );
  $entities['entity_views_deploy'][] = (object) array(
    '__metadata' => array(
      'type' => 'marc_tag',
      'uri' => 'marc_tag/16',
      'cause' => FALSE,
    ),
    'field_code' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 306,
        ),
      ),
    ),
    'field_description' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'This should be the Runtime field in Drupal. Format must be: hhmmss',
        ),
      ),
    ),
    'field_development_status' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_export_type' => array(
      'und' => array(
        0 => array(
          'value' => 2,
        ),
      ),
    ),
    'field_functions' => array(),
    'field_include_in_export' => array(
      'und' => array(
        0 => array(
          'value' => 3,
        ),
      ),
    ),
    'field_ind2' => array(),
    'field_indc1' => array(),
    'field_marc_subfield_collection' => array(),
    'field_marc_tag' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 306,
        ),
      ),
    ),
    'field_marc_tag_type' => array(
      'und' => array(
        0 => array(
          'value' => 3,
        ),
      ),
    ),
    'field_source_value' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_subfield_code' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'a',
        ),
      ),
    ),
    'rdf_mapping' => array(
      'field_marc_tag' => array(
        'predicates' => array(),
      ),
    ),
    'title' => 'playing time',
    'type' => 'marc_tag',
    'uid' => 0,
  );
  $entities['entity_views_deploy'][] = (object) array(
    '__metadata' => array(
      'type' => 'field_collection_item',
      'uri' => 'field_collection_item/497568',
      'cause' => 'marc_tag/17',
    ),
    'archived' => 0,
    'default_revision' => 1,
    'field_description' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Fixed data depending on file format:
Etext/PDF/EPUB 2/EPUB 3/AZW3: $a text $b txt $2 rdacontent
MP3: $a spoken word  $b spw $2 rdacontent
DAISY/EPUB 3 (media overlays)
$a spoken word $b spw $2 rdacontent
$a text $b txt $2 rdacontent
Association for the Blind of W.A. (Braille content): use 336-338 data from MarcXML',
        ),
      ),
    ),
    'field_drupal_fieldname' => array(),
    'field_export_type' => array(
      'und' => array(
        0 => array(
          'value' => 2,
        ),
      ),
    ),
    'field_include_in_export' => array(
      'und' => array(
        0 => array(
          'value' => 3,
        ),
      ),
    ),
    'field_name' => 'field_marc_subfield_collection',
    'field_source_value' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_static_value' => array(),
    'field_subfield_code' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'b',
        ),
      ),
    ),
    'rdf_mapping' => array(),
    'uuid' => 'a625004a-cf48-46ed-ad91-c3bd5701ccf2',
  );
  $entities['entity_views_deploy'][] = (object) array(
    '__metadata' => array(
      'type' => 'field_collection_item',
      'uri' => 'field_collection_item/497587',
      'cause' => 'marc_tag/17',
    ),
    'archived' => 0,
    'default_revision' => 1,
    'field_description' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Fixed data depending on file format:
Etext/PDF/EPUB 2/EPUB 3/AZW3: $a text
MP3: $a spoken word
DAISY/EPUB 3 (media overlays)
$a spoken word
$a text
Association for the Blind of W.A. (Braille content): use 336-338 data from MarcXML
',
        ),
      ),
    ),
    'field_drupal_fieldname' => array(),
    'field_export_type' => array(
      'und' => array(
        0 => array(
          'value' => 2,
        ),
      ),
    ),
    'field_include_in_export' => array(
      'und' => array(
        0 => array(
          'value' => 3,
        ),
      ),
    ),
    'field_name' => 'field_marc_subfield_collection',
    'field_source_value' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_static_value' => array(),
    'field_subfield_code' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'a',
        ),
      ),
    ),
    'rdf_mapping' => array(),
    'uuid' => '49696fb8-304f-45a1-b661-2022ee3d45ac',
  );
  $entities['entity_views_deploy'][] = (object) array(
    '__metadata' => array(
      'type' => 'field_collection_item',
      'uri' => 'field_collection_item/497591',
      'cause' => 'marc_tag/17',
    ),
    'archived' => 0,
    'default_revision' => 1,
    'field_description' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'For all formats Field 336 subfield 2 is: rdacontent
',
        ),
      ),
    ),
    'field_drupal_fieldname' => array(),
    'field_export_type' => array(
      'und' => array(
        0 => array(
          'value' => 2,
        ),
      ),
    ),
    'field_include_in_export' => array(
      'und' => array(
        0 => array(
          'value' => 3,
        ),
      ),
    ),
    'field_name' => 'field_marc_subfield_collection',
    'field_source_value' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_static_value' => array(),
    'field_subfield_code' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 2,
        ),
      ),
    ),
    'rdf_mapping' => array(),
    'uuid' => 'ce64d986-0791-450b-97ad-20ee46b2b53b',
  );
  $entities['entity_views_deploy'][] = (object) array(
    '__metadata' => array(
      'type' => 'marc_tag',
      'uri' => 'marc_tag/17',
      'cause' => FALSE,
    ),
    'field_code' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 336,
        ),
      ),
    ),
    'field_description' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Fixed data depending on file format:
Etext/PDF/EPUB 2/EPUB 3 (text only)/AZW3: $a txt $2 rdacontent
MP3: $a spoken word $b spw $2 rdacontent 
DAISY/EPUB 3 (media overlays)
$a spoken word $b spw $2 rdacontent 
$a txt $2 rdacontent
Braille: 
$a txt $b t $2 rdacontent',
        ),
      ),
    ),
    'field_development_status' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_export_type' => array(
      'und' => array(
        0 => array(
          'value' => 2,
        ),
      ),
    ),
    'field_functions' => array(),
    'field_include_in_export' => array(
      'und' => array(
        0 => array(
          'value' => 3,
        ),
      ),
    ),
    'field_ind2' => array(),
    'field_indc1' => array(),
    'field_marc_subfield_collection' => array(),
    'field_marc_tag' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 336,
        ),
      ),
    ),
    'field_marc_tag_type' => array(
      'und' => array(
        0 => array(
          'value' => 3,
        ),
      ),
    ),
    'field_source_value' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_subfield_code' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'a, b, 2',
        ),
      ),
    ),
    'rdf_mapping' => array(
      'field_marc_tag' => array(
        'predicates' => array(),
      ),
    ),
    'title' => 'content type',
    'type' => 'marc_tag',
    'uid' => 0,
  );
  $entities['entity_views_deploy'][] = (object) array(
    '__metadata' => array(
      'type' => 'field_collection_item',
      'uri' => 'field_collection_item/497569',
      'cause' => 'marc_tag/18',
    ),
    'archived' => 0,
    'default_revision' => 1,
    'field_description' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Fixed data depending on file format: 
Etext/PDF/EPUB 2/EPUB 3/AZW3: 
$a computer $b c $2 rdamedia 
MP3: 
$a audio $b s $2 rdamedia
$a computer $b c $2 rdamedia
DAISY/EPUB 3 (media overlays):
$a audio $b s $2 rdamedia
$a computer $b c $2 rdamedia
Association for the Blind of W.A. (Braille content): use 336-338 data from MarcXML',
        ),
      ),
    ),
    'field_drupal_fieldname' => array(),
    'field_export_type' => array(
      'und' => array(
        0 => array(
          'value' => 2,
        ),
      ),
    ),
    'field_include_in_export' => array(
      'und' => array(
        0 => array(
          'value' => 3,
        ),
      ),
    ),
    'field_name' => 'field_marc_subfield_collection',
    'field_source_value' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_static_value' => array(),
    'field_subfield_code' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'b',
        ),
      ),
    ),
    'rdf_mapping' => array(),
    'uuid' => 'eb458be2-b7b6-4c27-a762-779f85b9d5ef',
  );
  $entities['entity_views_deploy'][] = (object) array(
    '__metadata' => array(
      'type' => 'field_collection_item',
      'uri' => 'field_collection_item/497592',
      'cause' => 'marc_tag/18',
    ),
    'archived' => 0,
    'default_revision' => 1,
    'field_description' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Fixed data depending on file format: 
Etext/PDF/EPUB 2/EPUB 3/AZW3: 
$a computer $b c $2 rdamedia 
MP3: 
$a audio $b s $2 rdamedia
$a computer $b c $2 rdamedia
DAISY/EPUB 3 (media overlays):
$a audio $b s $2 rdamedia
$a computer $b c $2 rdamedia
Association for the Blind of W.A. (Braille content): use 336-338 data from MarcXML',
        ),
      ),
    ),
    'field_drupal_fieldname' => array(),
    'field_export_type' => array(
      'und' => array(
        0 => array(
          'value' => 2,
        ),
      ),
    ),
    'field_include_in_export' => array(
      'und' => array(
        0 => array(
          'value' => 3,
        ),
      ),
    ),
    'field_name' => 'field_marc_subfield_collection',
    'field_source_value' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_static_value' => array(),
    'field_subfield_code' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'a',
        ),
      ),
    ),
    'rdf_mapping' => array(),
    'uuid' => '2fcc3f27-6b8f-446d-9d4b-521f1faf062d',
  );
  $entities['entity_views_deploy'][] = (object) array(
    '__metadata' => array(
      'type' => 'field_collection_item',
      'uri' => 'field_collection_item/497593',
      'cause' => 'marc_tag/18',
    ),
    'archived' => 0,
    'default_revision' => 1,
    'field_description' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'For all formats Field 337 subfield 2 is: rdamedia',
        ),
      ),
    ),
    'field_drupal_fieldname' => array(),
    'field_export_type' => array(
      'und' => array(
        0 => array(
          'value' => 2,
        ),
      ),
    ),
    'field_include_in_export' => array(
      'und' => array(
        0 => array(
          'value' => 3,
        ),
      ),
    ),
    'field_name' => 'field_marc_subfield_collection',
    'field_source_value' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_static_value' => array(),
    'field_subfield_code' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 2,
        ),
      ),
    ),
    'rdf_mapping' => array(),
    'uuid' => '231c019c-7d23-4aac-93fa-abcdc5d3e11a',
  );
  $entities['entity_views_deploy'][] = (object) array(
    '__metadata' => array(
      'type' => 'marc_tag',
      'uri' => 'marc_tag/18',
      'cause' => FALSE,
    ),
    'field_code' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 337,
        ),
      ),
    ),
    'field_description' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Fixed data depending on file format:
Etext/PDF/EPUB 2/ EPUB 3 (text only)/AZW3: 
$a computer $2 rdamedia
MP3: 
$a audio $b s $2 rdamedia 
$a computer $b c $2 rdamedia
DAISY/EPUB 3 (media overlays):
$a audio $b s $2 rdamedia 
$a computer $b c $2 rdamedia
Braille: 
$a computer $b c $2 rdamedia',
        ),
      ),
    ),
    'field_development_status' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_export_type' => array(
      'und' => array(
        0 => array(
          'value' => 2,
        ),
      ),
    ),
    'field_functions' => array(),
    'field_include_in_export' => array(
      'und' => array(
        0 => array(
          'value' => 3,
        ),
      ),
    ),
    'field_ind2' => array(),
    'field_indc1' => array(),
    'field_marc_subfield_collection' => array(),
    'field_marc_tag' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 337,
        ),
      ),
    ),
    'field_marc_tag_type' => array(
      'und' => array(
        0 => array(
          'value' => 3,
        ),
      ),
    ),
    'field_source_value' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_subfield_code' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'a, b, 2',
        ),
      ),
    ),
    'rdf_mapping' => array(
      'field_marc_tag' => array(
        'predicates' => array(),
      ),
    ),
    'title' => 'media type',
    'type' => 'marc_tag',
    'uid' => 0,
  );
  $entities['entity_views_deploy'][] = (object) array(
    '__metadata' => array(
      'type' => 'field_collection_item',
      'uri' => 'field_collection_item/497570',
      'cause' => 'marc_tag/19',
    ),
    'archived' => 0,
    'default_revision' => 1,
    'field_description' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Fixed data depending on file format:
Etext/PDF/EPUB 2/EPUB 3/AZW3: 
$a online resource $b cr $2 rdacarrier
MP3:
$a other $b sz $2 rdacarrier 
$a online resource $b cr $2 rdacarrier
DAISY/EPUB 3 (media overlays)
$a other $b sz $2 rdacarrier 
$a online resource $b cr $2 rdacarrier
Association for the Blind of W.A. (Braille content): use 336-338 data from MarcXML',
        ),
      ),
    ),
    'field_drupal_fieldname' => array(),
    'field_export_type' => array(
      'und' => array(
        0 => array(
          'value' => 2,
        ),
      ),
    ),
    'field_include_in_export' => array(
      'und' => array(
        0 => array(
          'value' => 3,
        ),
      ),
    ),
    'field_name' => 'field_marc_subfield_collection',
    'field_source_value' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_static_value' => array(),
    'field_subfield_code' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'b',
        ),
      ),
    ),
    'rdf_mapping' => array(),
    'uuid' => '6dd7846f-c42c-446c-ab46-b9c29844787b',
  );
  $entities['entity_views_deploy'][] = (object) array(
    '__metadata' => array(
      'type' => 'field_collection_item',
      'uri' => 'field_collection_item/497594',
      'cause' => 'marc_tag/19',
    ),
    'archived' => 0,
    'default_revision' => 1,
    'field_description' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Fixed data depending on file format:
Etext/PDF/EPUB 2/EPUB 3/AZW3: 
$a online resource $b cr $2 rdacarrier
MP3:
$a other $b sz $2 rdacarrier 
$a online resource $b cr $2 rdacarrier
DAISY/EPUB 3 (media overlays)
$a other $b sz $2 rdacarrier 
$a online resource $b cr $2 rdacarrier
Association for the Blind of W.A. (Braille content): use 336-338 data from MarcXML',
        ),
      ),
    ),
    'field_drupal_fieldname' => array(),
    'field_export_type' => array(
      'und' => array(
        0 => array(
          'value' => 2,
        ),
      ),
    ),
    'field_include_in_export' => array(
      'und' => array(
        0 => array(
          'value' => 3,
        ),
      ),
    ),
    'field_name' => 'field_marc_subfield_collection',
    'field_source_value' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_static_value' => array(),
    'field_subfield_code' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'a',
        ),
      ),
    ),
    'rdf_mapping' => array(),
    'uuid' => 'e9d213ee-5720-4f40-955f-c9e611d5cb5a',
  );
  $entities['entity_views_deploy'][] = (object) array(
    '__metadata' => array(
      'type' => 'field_collection_item',
      'uri' => 'field_collection_item/497595',
      'cause' => 'marc_tag/19',
    ),
    'archived' => 0,
    'default_revision' => 1,
    'field_description' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'For all formats Field 338 subfield 2 is: rdacarrier',
        ),
      ),
    ),
    'field_drupal_fieldname' => array(),
    'field_export_type' => array(
      'und' => array(
        0 => array(
          'value' => 2,
        ),
      ),
    ),
    'field_include_in_export' => array(
      'und' => array(
        0 => array(
          'value' => 3,
        ),
      ),
    ),
    'field_name' => 'field_marc_subfield_collection',
    'field_source_value' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_static_value' => array(),
    'field_subfield_code' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 2,
        ),
      ),
    ),
    'rdf_mapping' => array(),
    'uuid' => '55450db2-9e20-4f47-819e-26239670c0d4',
  );
  $entities['entity_views_deploy'][] = (object) array(
    '__metadata' => array(
      'type' => 'marc_tag',
      'uri' => 'marc_tag/19',
      'cause' => FALSE,
    ),
    'field_code' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 338,
        ),
      ),
    ),
    'field_description' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Fixed data depending on file format:
Etext/PDF/EPUB 2/EPUB 3 (text only)/AZW3: 
$a online resource $2 rdacarrier
MP3:
$a other $b sz $2 rdacarrier 
$a online resource $b cr $2 rdacarrier
DAISY/EPUB 3 (media overlays)
$a other $b sz $2 rdacarrier 
$a online resource $b cr $2 rdacarrier
Braille: 
$a online resource $b cr $2 rdacarrier',
        ),
      ),
    ),
    'field_development_status' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_export_type' => array(
      'und' => array(
        0 => array(
          'value' => 2,
        ),
      ),
    ),
    'field_functions' => array(),
    'field_include_in_export' => array(
      'und' => array(
        0 => array(
          'value' => 3,
        ),
      ),
    ),
    'field_ind2' => array(),
    'field_indc1' => array(),
    'field_marc_subfield_collection' => array(),
    'field_marc_tag' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 338,
        ),
      ),
    ),
    'field_marc_tag_type' => array(
      'und' => array(
        0 => array(
          'value' => 3,
        ),
      ),
    ),
    'field_source_value' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_subfield_code' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'a, b, 2',
        ),
      ),
    ),
    'rdf_mapping' => array(
      'field_marc_tag' => array(
        'predicates' => array(),
      ),
    ),
    'title' => 'carrier type',
    'type' => 'marc_tag',
    'uid' => 0,
  );
  $entities['entity_views_deploy'][] = (object) array(
    '__metadata' => array(
      'type' => 'field_collection_item',
      'uri' => 'field_collection_item/497571',
      'cause' => 'marc_tag/20',
    ),
    'archived' => 0,
    'default_revision' => 1,
    'field_description' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Field 490 subfield a contains the series title.',
        ),
      ),
    ),
    'field_drupal_fieldname' => array(),
    'field_export_type' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_include_in_export' => array(
      'und' => array(
        0 => array(
          'value' => 2,
        ),
      ),
    ),
    'field_name' => 'field_marc_subfield_collection',
    'field_source_value' => array(
      'und' => array(
        0 => array(
          'value' => 2,
        ),
      ),
    ),
    'field_static_value' => array(),
    'field_subfield_code' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'a ',
        ),
      ),
    ),
    'rdf_mapping' => array(),
    'uuid' => '1e7f85d4-7498-492b-8695-5e10dae8e076',
  );
  $entities['entity_views_deploy'][] = (object) array(
    '__metadata' => array(
      'type' => 'marc_tag',
      'uri' => 'marc_tag/20',
      'cause' => FALSE,
    ),
    'field_code' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 490,
        ),
      ),
    ),
    'field_description' => array(),
    'field_development_status' => array(
      'und' => array(
        0 => array(
          'value' => 5,
        ),
      ),
    ),
    'field_export_type' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_functions' => array(),
    'field_include_in_export' => array(
      'und' => array(
        0 => array(
          'value' => 2,
        ),
      ),
    ),
    'field_ind2' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => '"',
        ),
      ),
    ),
    'field_indc1' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 0,
        ),
      ),
    ),
    'field_marc_subfield_collection' => array(),
    'field_marc_tag' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 490,
        ),
      ),
    ),
    'field_marc_tag_type' => array(
      'und' => array(
        0 => array(
          'value' => 3,
        ),
      ),
    ),
    'field_source_value' => array(
      'und' => array(
        0 => array(
          'value' => 2,
        ),
      ),
    ),
    'field_subfield_code' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'a ',
        ),
      ),
    ),
    'rdf_mapping' => array(
      'field_marc_tag' => array(
        'predicates' => array(),
      ),
    ),
    'title' => 'series statement ',
    'type' => 'marc_tag',
    'uid' => 0,
  );
  $entities['entity_views_deploy'][] = (object) array(
    '__metadata' => array(
      'type' => 'field_collection_item',
      'uri' => 'field_collection_item/497572',
      'cause' => 'marc_tag/21',
    ),
    'archived' => 0,
    'default_revision' => 1,
    'field_description' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Field 506 subfield a identifies restrictions imposed on individuals wishing to see the materials.
Field 506 data will be based on the Access Restrictions field in Drupal. Field 506 subfield a should state one of:
1) Open access (if “always available” is checked in Drupal)
2) Restricted to use by people with a documented print impairment (if “requires login” is checked in Drupal)
Indicator data:
If it’s open access than ind1 = 0
If it’s restricted than ind1 = 1',
        ),
      ),
    ),
    'field_drupal_fieldname' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Access restrictions',
        ),
        1 => array(
          'format' => NULL,
          'value' => 'Access rights',
        ),
      ),
    ),
    'field_export_type' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_include_in_export' => array(
      'und' => array(
        0 => array(
          'value' => 3,
        ),
      ),
    ),
    'field_name' => 'field_marc_subfield_collection',
    'field_source_value' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_static_value' => array(),
    'field_subfield_code' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'a',
        ),
      ),
    ),
    'rdf_mapping' => array(),
    'uuid' => 'd55d8ffe-e53a-4a5a-8237-0335f9eabf70',
  );
  $entities['entity_views_deploy'][] = (object) array(
    '__metadata' => array(
      'type' => 'marc_tag',
      'uri' => 'marc_tag/21',
      'cause' => FALSE,
    ),
    'field_code' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 506,
        ),
      ),
    ),
    'field_description' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'The data should be from the Access Restrictions field in Drupal. The 506 subfield a should state either:
 Open access (if “always available” is checked in Drupal), or 
Restricted to use by people with a documented print impairment (if “login required” is checked in Drupal).
If it’s open access than ind2 = 0
If it’s restricted than ind2 = 1',
        ),
      ),
    ),
    'field_development_status' => array(
      'und' => array(
        0 => array(
          'value' => 5,
        ),
      ),
    ),
    'field_export_type' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_functions' => array(),
    'field_include_in_export' => array(
      'und' => array(
        0 => array(
          'value' => 3,
        ),
      ),
    ),
    'field_ind2' => array(),
    'field_indc1' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => '0 or 1',
        ),
      ),
    ),
    'field_marc_subfield_collection' => array(),
    'field_marc_tag' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 506,
        ),
      ),
    ),
    'field_marc_tag_type' => array(
      'und' => array(
        0 => array(
          'value' => 3,
        ),
      ),
    ),
    'field_source_value' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_subfield_code' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'a',
        ),
      ),
    ),
    'rdf_mapping' => array(
      'field_marc_tag' => array(
        'predicates' => array(),
      ),
    ),
    'title' => 'restrictions on access note',
    'type' => 'marc_tag',
    'uid' => 0,
  );
  $entities['entity_views_deploy'][] = (object) array(
    '__metadata' => array(
      'type' => 'field_collection_item',
      'uri' => 'field_collection_item/497573',
      'cause' => 'marc_tag/22',
    ),
    'archived' => 0,
    'default_revision' => 1,
    'field_description' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'For Field 511 subfield a, use the format: "Narrator: Name"',
        ),
      ),
    ),
    'field_drupal_fieldname' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Narrator',
        ),
      ),
    ),
    'field_export_type' => array(
      'und' => array(
        0 => array(
          'value' => 2,
        ),
      ),
    ),
    'field_include_in_export' => array(
      'und' => array(
        0 => array(
          'value' => 3,
        ),
      ),
    ),
    'field_name' => 'field_marc_subfield_collection',
    'field_source_value' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_static_value' => array(),
    'field_subfield_code' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'a',
        ),
      ),
    ),
    'rdf_mapping' => array(),
    'uuid' => '805bc71f-3e71-49e9-b9df-c9782888c7ee',
  );
  $entities['entity_views_deploy'][] = (object) array(
    '__metadata' => array(
      'type' => 'marc_tag',
      'uri' => 'marc_tag/22',
      'cause' => FALSE,
    ),
    'field_code' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 511,
        ),
      ),
    ),
    'field_description' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'This should be the Narrator as specified in Drupal. Use the format: 
"Narrator: Name"',
        ),
      ),
    ),
    'field_development_status' => array(
      'und' => array(
        0 => array(
          'value' => 2,
        ),
      ),
    ),
    'field_export_type' => array(
      'und' => array(
        0 => array(
          'value' => 2,
        ),
      ),
    ),
    'field_functions' => array(),
    'field_include_in_export' => array(
      'und' => array(
        0 => array(
          'value' => 3,
        ),
      ),
    ),
    'field_ind2' => array(),
    'field_indc1' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 0,
        ),
      ),
    ),
    'field_marc_subfield_collection' => array(),
    'field_marc_tag' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 511,
        ),
      ),
    ),
    'field_marc_tag_type' => array(
      'und' => array(
        0 => array(
          'value' => 3,
        ),
      ),
    ),
    'field_source_value' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_subfield_code' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'a',
        ),
      ),
    ),
    'rdf_mapping' => array(
      'field_marc_tag' => array(
        'predicates' => array(),
      ),
    ),
    'title' => 'performer note',
    'type' => 'marc_tag',
    'uid' => 0,
  );
  $entities['entity_views_deploy'][] = (object) array(
    '__metadata' => array(
      'type' => 'field_collection_item',
      'uri' => 'field_collection_item/497574',
      'cause' => 'marc_tag/23',
    ),
    'archived' => 0,
    'default_revision' => 1,
    'field_description' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Field 520 subfield a is the Summary.',
        ),
      ),
    ),
    'field_drupal_fieldname' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'body',
        ),
      ),
    ),
    'field_export_type' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_include_in_export' => array(
      'und' => array(
        0 => array(
          'value' => 3,
        ),
      ),
    ),
    'field_name' => 'field_marc_subfield_collection',
    'field_source_value' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_static_value' => array(),
    'field_subfield_code' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'a',
        ),
      ),
    ),
    'rdf_mapping' => array(),
    'uuid' => 'a86f8923-4dfc-40dd-9cae-d2449c9a716d',
  );
  $entities['entity_views_deploy'][] = (object) array(
    '__metadata' => array(
      'type' => 'marc_tag',
      'uri' => 'marc_tag/23',
      'cause' => FALSE,
    ),
    'field_code' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'value' => 520,
        ),
      ),
    ),
    'field_description' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'value' => 'This should be the Abstract field in Drupal',
        ),
      ),
    ),
    'field_development_status' => array(
      'und' => array(
        0 => array(
          'value' => 5,
        ),
      ),
    ),
    'field_export_type' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_functions' => array(),
    'field_include_in_export' => array(
      'und' => array(
        0 => array(
          'value' => 3,
        ),
      ),
    ),
    'field_ind2' => array(),
    'field_indc1' => array(),
    'field_marc_subfield_collection' => array(),
    'field_marc_tag' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 520,
        ),
      ),
    ),
    'field_marc_tag_type' => array(
      'und' => array(
        0 => array(
          'value' => 3,
        ),
      ),
    ),
    'field_source_value' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_subfield_code' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'value' => 'a',
        ),
      ),
    ),
    'rdf_mapping' => array(
      'field_marc_tag' => array(
        'predicates' => array(),
      ),
    ),
    'title' => 'summary, etc.',
    'type' => 'marc_tag',
    'uid' => 0,
  );
  $entities['entity_views_deploy'][] = (object) array(
    '__metadata' => array(
      'type' => 'field_collection_item',
      'uri' => 'field_collection_item/497576',
      'cause' => 'marc_tag/25',
    ),
    'archived' => 0,
    'default_revision' => 1,
    'field_description' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Field 534 subfield c contains the publication and distribution information of the original work.
Field 534 subfield c is the Publisher (Source) field in Drupal.
For example:
$c Englewood Cliffs, N.J. : Prentice Hall, 1974.
Ideally, we would include the date from the DC Date Issued field in Drupal if the date doesn’t exist in the Publisher (Source) field in Drupal.',
        ),
      ),
    ),
    'field_drupal_fieldname' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Publisher (Source)',
        ),
        1 => array(
          'format' => NULL,
          'value' => 'DC Date Issued',
        ),
      ),
    ),
    'field_export_type' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_include_in_export' => array(
      'und' => array(
        0 => array(
          'value' => 3,
        ),
      ),
    ),
    'field_name' => 'field_marc_subfield_collection',
    'field_source_value' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_static_value' => array(),
    'field_subfield_code' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'c',
        ),
      ),
    ),
    'rdf_mapping' => array(),
    'uuid' => '20e661d2-6508-40a9-82ef-ae02c2c499c6',
  );
  $entities['entity_views_deploy'][] = (object) array(
    '__metadata' => array(
      'type' => 'field_collection_item',
      'uri' => 'field_collection_item/497923',
      'cause' => 'marc_tag/25',
    ),
    'archived' => 0,
    'default_revision' => 1,
    'field_description' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Field 534 subfield z contains the ISBN of the original. This subfield is repeatable. Use ISBN and ISBN (Audio) in Drupal.',
        ),
      ),
    ),
    'field_drupal_fieldname' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'ISBN',
        ),
        1 => array(
          'format' => NULL,
          'value' => 'ISBN (Audio)',
        ),
      ),
    ),
    'field_export_type' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_include_in_export' => array(
      'und' => array(
        0 => array(
          'value' => 3,
        ),
      ),
    ),
    'field_name' => 'field_marc_subfield_collection',
    'field_source_value' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_static_value' => array(),
    'field_subfield_code' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'z',
        ),
      ),
    ),
    'rdf_mapping' => array(),
    'uuid' => 'a8c4ad88-4d73-481a-8cc2-dc6b071e1195',
  );
  $entities['entity_views_deploy'][] = (object) array(
    '__metadata' => array(
      'type' => 'marc_tag',
      'uri' => 'marc_tag/25',
      'cause' => FALSE,
    ),
    'field_code' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 534,
        ),
      ),
    ),
    'field_description' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'This should be the Publisher (Source) field in Drupal. For example:
$c Englewood Cliffs, N.J. : Prentice Hall, 1974.
Ideally, we would include the date from the DC Date Issued field in Drupal if the date doesn’t exist in the Publisher (Source) field in Drupal.',
        ),
      ),
    ),
    'field_development_status' => array(
      'und' => array(
        0 => array(
          'value' => 4,
        ),
      ),
    ),
    'field_export_type' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_functions' => array(),
    'field_include_in_export' => array(
      'und' => array(
        0 => array(
          'value' => 3,
        ),
      ),
    ),
    'field_ind2' => array(),
    'field_indc1' => array(),
    'field_marc_subfield_collection' => array(),
    'field_marc_tag' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 534,
        ),
      ),
    ),
    'field_marc_tag_type' => array(
      'und' => array(
        0 => array(
          'value' => 3,
        ),
      ),
    ),
    'field_source_value' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_subfield_code' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'c',
        ),
      ),
    ),
    'rdf_mapping' => array(
      'field_marc_tag' => array(
        'predicates' => array(),
      ),
    ),
    'title' => 'original version',
    'type' => 'marc_tag',
    'uid' => 0,
  );
  $entities['entity_views_deploy'][] = (object) array(
    '__metadata' => array(
      'type' => 'field_collection_item',
      'uri' => 'field_collection_item/497577',
      'cause' => 'marc_tag/26',
    ),
    'archived' => 0,
    'default_revision' => 1,
    'field_description' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Field 653 subfield a contains an index term from an uncontrolled subject heading system or thesaurus.',
        ),
      ),
    ),
    'field_drupal_fieldname' => array(),
    'field_export_type' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_include_in_export' => array(
      'und' => array(
        0 => array(
          'value' => 5,
        ),
      ),
    ),
    'field_name' => 'field_marc_subfield_collection',
    'field_source_value' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_static_value' => array(),
    'field_subfield_code' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'a',
        ),
      ),
    ),
    'rdf_mapping' => array(),
    'uuid' => 'd4dc5370-fb9d-4ae4-a7f7-ca3ad25f8251',
  );
  $entities['entity_views_deploy'][] = (object) array(
    '__metadata' => array(
      'type' => 'marc_tag',
      'uri' => 'marc_tag/26',
      'cause' => FALSE,
    ),
    'field_code' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'value' => 653,
        ),
      ),
    ),
    'field_description' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'value' => 'This should be the Subject field in Drupal ',
        ),
      ),
    ),
    'field_development_status' => array(
      'und' => array(
        0 => array(
          'value' => 5,
        ),
      ),
    ),
    'field_export_type' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_functions' => array(),
    'field_include_in_export' => array(
      'und' => array(
        0 => array(
          'value' => 5,
        ),
      ),
    ),
    'field_ind2' => array(),
    'field_indc1' => array(),
    'field_marc_subfield_collection' => array(),
    'field_marc_tag' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 653,
        ),
      ),
    ),
    'field_marc_tag_type' => array(
      'und' => array(
        0 => array(
          'value' => 3,
        ),
      ),
    ),
    'field_source_value' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_subfield_code' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'value' => 'a',
        ),
      ),
    ),
    'rdf_mapping' => array(
      'field_marc_tag' => array(
        'predicates' => array(),
      ),
    ),
    'title' => 'subject - index term uncontrolled',
    'type' => 'marc_tag',
    'uid' => 0,
  );
  $entities['entity_views_deploy'][] = (object) array(
    '__metadata' => array(
      'type' => 'field_collection_item',
      'uri' => 'field_collection_item/497578',
      'cause' => 'marc_tag/27',
    ),
    'archived' => 0,
    'default_revision' => 1,
    'field_description' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Field 655 subfield a contains all genre, form, or physical characteristics data.',
        ),
      ),
    ),
    'field_drupal_fieldname' => array(),
    'field_export_type' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_include_in_export' => array(
      'und' => array(
        0 => array(
          'value' => 5,
        ),
      ),
    ),
    'field_name' => 'field_marc_subfield_collection',
    'field_source_value' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_static_value' => array(),
    'field_subfield_code' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'a',
        ),
      ),
    ),
    'rdf_mapping' => array(),
    'uuid' => '0555be70-dd46-4df6-8729-6b9f0866dfd6',
  );
  $entities['entity_views_deploy'][] = (object) array(
    '__metadata' => array(
      'type' => 'marc_tag',
      'uri' => 'marc_tag/27',
      'cause' => FALSE,
    ),
    'field_code' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 655,
        ),
      ),
    ),
    'field_description' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Include if present in the Genre field in Drupal. ',
        ),
      ),
    ),
    'field_development_status' => array(
      'und' => array(
        0 => array(
          'value' => 5,
        ),
      ),
    ),
    'field_export_type' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_functions' => array(),
    'field_include_in_export' => array(
      'und' => array(
        0 => array(
          'value' => 5,
        ),
      ),
    ),
    'field_ind2' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 4,
        ),
      ),
    ),
    'field_indc1' => array(),
    'field_marc_subfield_collection' => array(),
    'field_marc_tag' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 655,
        ),
      ),
    ),
    'field_marc_tag_type' => array(
      'und' => array(
        0 => array(
          'value' => 3,
        ),
      ),
    ),
    'field_source_value' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_subfield_code' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'a',
        ),
      ),
    ),
    'rdf_mapping' => array(
      'field_marc_tag' => array(
        'predicates' => array(),
      ),
    ),
    'title' => 'genre/form heading',
    'type' => 'marc_tag',
    'uid' => 0,
  );
  $entities['entity_views_deploy'][] = (object) array(
    '__metadata' => array(
      'type' => 'field_collection_item',
      'uri' => 'field_collection_item/497561',
      'cause' => 'marc_tag/10',
    ),
    'archived' => 0,
    'default_revision' => 1,
    'field_description' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Field 720 subfield a contains an uncontrolled name (name is not controlled in an authority file or list, or names have not been formulated according to cataloging rules).',
        ),
      ),
    ),
    'field_drupal_fieldname' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'field_dc_creator',
        ),
        1 => array(
          'format' => NULL,
          'value' => 'field_dc_contributor',
        ),
      ),
    ),
    'field_export_type' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_include_in_export' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_name' => 'field_marc_subfield_collection',
    'field_source_value' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_static_value' => array(),
    'field_subfield_code' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'a',
        ),
      ),
    ),
    'rdf_mapping' => array(),
    'uuid' => 'cf2e0b03-8a0e-4dca-ae14-43b9123b99a6',
  );
  $entities['entity_views_deploy'][] = (object) array(
    '__metadata' => array(
      'type' => 'field_collection_item',
      'uri' => 'field_collection_item/497586',
      'cause' => 'marc_tag/10',
    ),
    'archived' => 0,
    'default_revision' => 1,
    'field_description' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Default code for Field 720 subfield e is: author (for Creator field) and contributor (for Contributor field)',
        ),
      ),
    ),
    'field_drupal_fieldname' => array(),
    'field_export_type' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_include_in_export' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_name' => 'field_marc_subfield_collection',
    'field_source_value' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_static_value' => array(),
    'field_subfield_code' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'e',
        ),
      ),
    ),
    'rdf_mapping' => array(),
    'uuid' => '97a61aae-501e-4caa-b0b2-1f23d2acb468',
  );
  $entities['entity_views_deploy'][] = (object) array(
    '__metadata' => array(
      'type' => 'marc_tag',
      'uri' => 'marc_tag/10',
      'cause' => FALSE,
    ),
    'field_code' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 720,
        ),
      ),
    ),
    'field_description' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Subfield a should be the Creator and Contributor field (if it exists) in Drupal. 
When subfield a refers to the Creator, subfield e=author
When subfield a refers to the Contributor, subfield e=contributor',
        ),
      ),
    ),
    'field_development_status' => array(
      'und' => array(
        0 => array(
          'value' => 4,
        ),
      ),
    ),
    'field_export_type' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_functions' => array(),
    'field_include_in_export' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_ind2' => array(),
    'field_indc1' => array(),
    'field_marc_subfield_collection' => array(),
    'field_marc_tag' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 720,
        ),
      ),
    ),
    'field_marc_tag_type' => array(
      'und' => array(
        0 => array(
          'value' => 3,
        ),
      ),
    ),
    'field_source_value' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_subfield_code' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'a, e',
        ),
      ),
    ),
    'rdf_mapping' => array(
      'field_marc_tag' => array(
        'predicates' => array(),
      ),
    ),
    'title' => 'Added Entry-Uncontrolled Name',
    'type' => 'marc_tag',
    'uid' => 0,
  );
  $entities['entity_views_deploy'][] = (object) array(
    '__metadata' => array(
      'type' => 'field_collection_item',
      'uri' => 'field_collection_item/497581',
      'cause' => 'marc_tag/30',
    ),
    'archived' => 0,
    'default_revision' => 1,
    'field_description' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'This is the NNELS 856 tag (the link to resource)',
        ),
      ),
    ),
    'field_drupal_fieldname' => array(),
    'field_export_type' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_include_in_export' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_name' => 'field_marc_subfield_collection',
    'field_source_value' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_static_value' => array(),
    'field_subfield_code' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'u',
        ),
      ),
    ),
    'rdf_mapping' => array(),
    'uuid' => 'b048d7aa-7f2c-4cc6-a2b9-a41c4bab4be8',
  );
  $entities['entity_views_deploy'][] = (object) array(
    '__metadata' => array(
      'type' => 'marc_tag',
      'uri' => 'marc_tag/30',
      'cause' => FALSE,
    ),
    'field_code' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 856,
        ),
      ),
    ),
    'field_description' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Subfield u: This is the NNELS 856 tag (the link to resource)
Subfield q: This is the File Format field in Drupal
Subfield s: This is the file size, i.e. 200 MB',
        ),
      ),
    ),
    'field_development_status' => array(
      'und' => array(
        0 => array(
          'value' => 5,
        ),
      ),
    ),
    'field_export_type' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_functions' => array(),
    'field_include_in_export' => array(
      'und' => array(
        0 => array(
          'value' => 3,
        ),
      ),
    ),
    'field_ind2' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 0,
        ),
      ),
    ),
    'field_indc1' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 4,
        ),
      ),
    ),
    'field_marc_subfield_collection' => array(),
    'field_marc_tag' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 856,
        ),
      ),
    ),
    'field_marc_tag_type' => array(
      'und' => array(
        0 => array(
          'value' => 3,
        ),
      ),
    ),
    'field_source_value' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_subfield_code' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'u, q, s',
        ),
      ),
    ),
    'rdf_mapping' => array(
      'field_marc_tag' => array(
        'predicates' => array(),
      ),
    ),
    'title' => 'electronic location and access',
    'type' => 'marc_tag',
    'uid' => 0,
  );
  $entities['entity_views_deploy'][] = (object) array(
    '__metadata' => array(
      'type' => 'field_collection_item',
      'uri' => 'field_collection_item/497922',
      'cause' => 'marc_tag/3',
    ),
    'archived' => 0,
    'default_revision' => 1,
    'field_description' => array(),
    'field_drupal_fieldname' => array(),
    'field_export_type' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_include_in_export' => array(),
    'field_name' => 'field_marc_subfield_collection',
    'field_source_value' => array(),
    'field_static_value' => array(),
    'field_subfield_code' => array(),
    'rdf_mapping' => array(),
    'uuid' => 'f1a2f080-ad20-4d2c-9efa-272dafd5be84',
  );
  $entities['entity_views_deploy'][] = (object) array(
    '__metadata' => array(
      'type' => 'marc_tag',
      'uri' => 'marc_tag/3',
      'cause' => FALSE,
    ),
    'field_code' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'ldr',
        ),
      ),
    ),
    'field_description' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'All 24 character positions (00-23) are mandatory.

00-04 (record length) = entry is system generated (count the entire length of the bibliographic record)

05 (record status) = default code n 

06 (type of record) = generate the code based on the file format in Drupal: 
MP3 = i 
DAISY, etext, PDF, epub, AZW3, Braille = a 

07 (bibliographic level) = default code m

08 (type of control) = default code blank

09 (character encoding scheme) = blank

10 (indicator count) = default code 2

11 (subfield code count) = default code 2

12-16 (base address of data) = always system generated...

17 (encoding level) = default code 2

18 (descriptive cataloguing form) = default code u

19 (multipart resource record level) = default code blank

20-23 (entry map) = default codes: 20=4, 21=5, 22=0, 23=0',
        ),
      ),
    ),
    'field_development_status' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_export_type' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_functions' => array(),
    'field_include_in_export' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_ind2' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'n/a',
        ),
      ),
    ),
    'field_indc1' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'n/a',
        ),
      ),
    ),
    'field_marc_subfield_collection' => array(),
    'field_marc_tag' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'ldr',
        ),
      ),
    ),
    'field_marc_tag_type' => array(
      'und' => array(
        0 => array(
          'value' => 2,
        ),
      ),
    ),
    'field_source_value' => array(),
    'field_subfield_code' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'n/a',
        ),
      ),
    ),
    'rdf_mapping' => array(
      'field_marc_tag' => array(
        'predicates' => array(),
      ),
    ),
    'title' => 'leader',
    'type' => 'marc_tag',
    'uid' => 0,
  );

  return $entities;
}
