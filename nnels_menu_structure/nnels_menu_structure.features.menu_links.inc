<?php

/**
 * @file
 * nnels_menu_structure.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function nnels_menu_structure_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_about-nnels:node/40.
  $menu_links['main-menu_about-nnels:node/40'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/40',
    'router_path' => 'node/%',
    'link_title' => 'About NNELS',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_about-nnels:node/40',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_about:node/40',
  );
  // Exported menu link: main-menu_about-productions:node/18.
  $menu_links['main-menu_about-productions:node/18'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/18',
    'router_path' => 'node/%',
    'link_title' => 'About Productions',
    'options' => array(
      'attributes' => array(
        'title' => 'About the alternate format productions in CALS',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_about-productions:node/18',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_about:node/40',
  );
  // Exported menu link: main-menu_about:node/40.
  $menu_links['main-menu_about:node/40'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/40',
    'router_path' => 'node/%',
    'link_title' => 'About',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'title' => 'About Us',
      ),
      'identifier' => 'main-menu_about:node/40',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -32,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_are-the-materials-available-through-nnels-protected-by-copyright:node/41804.
  $menu_links['main-menu_are-the-materials-available-through-nnels-protected-by-copyright:node/41804'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/41804',
    'router_path' => 'node/%',
    'link_title' => 'Are the materials available through NNELS protected by copyright?',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
      'identifier' => 'main-menu_are-the-materials-available-through-nnels-protected-by-copyright:node/41804',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -2,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_legal:taxonomy/term/16862',
  );
  // Exported menu link: main-menu_can-i-download-daisy-books-directly-to-my-device:node/41795.
  $menu_links['main-menu_can-i-download-daisy-books-directly-to-my-device:node/41795'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/41795',
    'router_path' => 'node/%',
    'link_title' => 'Can I download DAISY books directly to my device?',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_can-i-download-daisy-books-directly-to-my-device:node/41795',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_downloading-and-reading-books:taxonomy/term/16850',
  );
  // Exported menu link: main-menu_can-libraries-or-people-donate-or-contribute-their-books-and-audiobooks-to-nnels:node/51883.
  $menu_links['main-menu_can-libraries-or-people-donate-or-contribute-their-books-and-audiobooks-to-nnels:node/51883'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/51883',
    'router_path' => 'node/%',
    'link_title' => 'Can libraries or people donate or contribute their books and audiobooks to NNELS?',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_can-libraries-or-people-donate-or-contribute-their-books-and-audiobooks-to-nnels:node/51883',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_contribute-and-record-books:taxonomy/term/30094',
  );
  // Exported menu link: main-menu_can-our-library-have-an-account-to-download-books-for-patrons:node/68187.
  $menu_links['main-menu_can-our-library-have-an-account-to-download-books-for-patrons:node/68187'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/68187',
    'router_path' => 'node/%',
    'link_title' => 'Can our library have an account to download books for patrons?',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
      'identifier' => 'main-menu_can-our-library-have-an-account-to-download-books-for-patrons:node/68187',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -1,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_faq-for-library-staff:taxonomy/term/16871',
  );
  // Exported menu link: main-menu_collections-policy:node/307.
  $menu_links['main-menu_collections-policy:node/307'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/307',
    'router_path' => 'node/%',
    'link_title' => 'Collections Policy',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'title' => 'Collections Policy',
      ),
      'identifier' => 'main-menu_collections-policy:node/307',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_about:node/40',
  );
  // Exported menu link: main-menu_connector:node/76206.
  $menu_links['main-menu_connector:node/76206'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/76206',
    'router_path' => 'node/%',
    'link_title' => 'Connector',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_connector:node/76206',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -34,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_info-for-libraries:node/77562',
  );
  // Exported menu link: main-menu_contact:node/65874.
  $menu_links['main-menu_contact:node/65874'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/65874',
    'router_path' => 'node/%',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(
        'title' => 'Contact us',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_contact:node/65874',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -31,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_contribute-and-record-books:taxonomy/term/30094.
  $menu_links['main-menu_contribute-and-record-books:taxonomy/term/30094'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/30094',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Contribute and Record Books',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_contribute-and-record-books:taxonomy/term/30094',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -32,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_tutorials:node/42737',
  );
  // Exported menu link: main-menu_converting-mp3-audiobooks-to-daisy-audiobooks-using-obi:node/65767.
  $menu_links['main-menu_converting-mp3-audiobooks-to-daisy-audiobooks-using-obi:node/65767'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/65767',
    'router_path' => 'node/%',
    'link_title' => 'Converting MP3 Audiobooks to DAISY Audiobooks (Using Obi)',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
      'identifier' => 'main-menu_converting-mp3-audiobooks-to-daisy-audiobooks-using-obi:node/65767',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -4,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_faq-for-library-staff:taxonomy/term/16871',
  );
  // Exported menu link: main-menu_create-a-m3u-playlist-file:node/65758.
  $menu_links['main-menu_create-a-m3u-playlist-file:node/65758'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/65758',
    'router_path' => 'node/%',
    'link_title' => 'Create a (M3U) Playlist File',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
      'identifier' => 'main-menu_create-a-m3u-playlist-file:node/65758',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -5,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_contribute-and-record-books:taxonomy/term/30094',
  );
  // Exported menu link: main-menu_do-you-keep-a-record-of-my-reading-history:node/41786.
  $menu_links['main-menu_do-you-keep-a-record-of-my-reading-history:node/41786'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/41786',
    'router_path' => 'node/%',
    'link_title' => 'Do you keep a record of my reading history?',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
      'identifier' => 'main-menu_do-you-keep-a-record-of-my-reading-history:node/41786',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -3,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_other-questions:taxonomy/term/16856',
  );
  // Exported menu link: main-menu_downloading-and-reading-books:taxonomy/term/16850.
  $menu_links['main-menu_downloading-and-reading-books:taxonomy/term/16850'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/16850',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Downloading and Reading Books',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_downloading-and-reading-books:taxonomy/term/16850',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -36,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_tutorials:node/42737',
  );
  // Exported menu link: main-menu_epub-accessibility-checklist:node/193693.
  $menu_links['main-menu_epub-accessibility-checklist:node/193693'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/193693',
    'router_path' => 'node/%',
    'link_title' => 'EPUB Accessibility Checklist',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_epub-accessibility-checklist:node/193693',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -34,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_info-for-publishers:node/20009',
  );
  // Exported menu link: main-menu_exceptions-to-commercial-availability:node/65776.
  $menu_links['main-menu_exceptions-to-commercial-availability:node/65776'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/65776',
    'router_path' => 'node/%',
    'link_title' => 'Exceptions to Commercial Availability',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
      'identifier' => 'main-menu_exceptions-to-commercial-availability:node/65776',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -1,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_legal:taxonomy/term/16862',
  );
  // Exported menu link: main-menu_faq-for-library-staff:taxonomy/term/16871.
  $menu_links['main-menu_faq-for-library-staff:taxonomy/term/16871'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/16871',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'FAQ for Library Staff',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_faq-for-library-staff:taxonomy/term/16871',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -33,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_tutorials:node/42737',
  );
  // Exported menu link: main-menu_file-delivery-requirements:node/79563.
  $menu_links['main-menu_file-delivery-requirements:node/79563'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/79563',
    'router_path' => 'node/%',
    'link_title' => 'File Delivery Requirements',
    'options' => array(
      'attributes' => array(
        'title' => 'Publisher requirements for submitting files to NNELS',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_file-delivery-requirements:node/79563',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -33,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_info-for-publishers:node/20009',
  );
  // Exported menu link: main-menu_find-books:taxonomy/term/16859.
  $menu_links['main-menu_find-books:taxonomy/term/16859'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/16859',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Find Books',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_find-books:taxonomy/term/16859',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -37,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_tutorials:node/42737',
  );
  // Exported menu link: main-menu_getting-started:taxonomy/term/16853.
  $menu_links['main-menu_getting-started:taxonomy/term/16853'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/16853',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Getting Started',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_getting-started:taxonomy/term/16853',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -38,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_tutorials:node/42737',
  );
  // Exported menu link: main-menu_how-can-i-read-a-daisy-book:node/41858.
  $menu_links['main-menu_how-can-i-read-a-daisy-book:node/41858'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/41858',
    'router_path' => 'node/%',
    'link_title' => 'How can I read a DAISY book?',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_how-can-i-read-a-daisy-book:node/41858',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_downloading-and-reading-books:taxonomy/term/16850',
  );
  // Exported menu link: main-menu_how-can-i-tell-if-a-file-is-recorded-using-synthetic-computer-or-live-voice:node/41801.
  $menu_links['main-menu_how-can-i-tell-if-a-file-is-recorded-using-synthetic-computer-or-live-voice:node/41801'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/41801',
    'router_path' => 'node/%',
    'link_title' => 'How can I tell if a file is recorded using synthetic (computer) or live voice?',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
      'identifier' => 'main-menu_how-can-i-tell-if-a-file-is-recorded-using-synthetic-computer-or-live-voice:node/41801',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -4,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_find-books:taxonomy/term/16859',
  );
  // Exported menu link: main-menu_how-do-i-find-a-book-in-nnels:node/41852.
  $menu_links['main-menu_how-do-i-find-a-book-in-nnels:node/41852'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/41852',
    'router_path' => 'node/%',
    'link_title' => 'How do I find a book in NNELS?',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
      'identifier' => 'main-menu_how-do-i-find-a-book-in-nnels:node/41852',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -7,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_find-books:taxonomy/term/16859',
  );
  // Exported menu link: main-menu_how-do-i-register-for-an-account-if-my-library-is-connected-to-nnels:node/41855.
  $menu_links['main-menu_how-do-i-register-for-an-account-if-my-library-is-connected-to-nnels:node/41855'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/41855',
    'router_path' => 'node/%',
    'link_title' => 'How do I register for an account if my library is connected to NNELS?',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
      'identifier' => 'main-menu_how-do-i-register-for-an-account-if-my-library-is-connected-to-nnels:node/41855',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -1,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_getting-started:taxonomy/term/16853',
  );
  // Exported menu link: main-menu_how-do-i-request-a-book-thats-not-in-nnels:node/41810.
  $menu_links['main-menu_how-do-i-request-a-book-thats-not-in-nnels:node/41810'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/41810',
    'router_path' => 'node/%',
    'link_title' => 'How do I request a book that’s not in NNELS?',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
      'identifier' => 'main-menu_how-do-i-request-a-book-thats-not-in-nnels:node/41810',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -3,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_find-books:taxonomy/term/16859',
  );
  // Exported menu link: main-menu_how-do-libraries-submit-their-requests-how-can-they-check-the-status:node/51880.
  $menu_links['main-menu_how-do-libraries-submit-their-requests-how-can-they-check-the-status:node/51880'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/51880',
    'router_path' => 'node/%',
    'link_title' => 'How do libraries submit their requests? How can they check the status?',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
      'identifier' => 'main-menu_how-do-libraries-submit-their-requests-how-can-they-check-the-status:node/51880',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -8,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_faq-for-library-staff:taxonomy/term/16871',
  );
  // Exported menu link: main-menu_how-long-do-downloads-generally-take:node/41792.
  $menu_links['main-menu_how-long-do-downloads-generally-take:node/41792'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/41792',
    'router_path' => 'node/%',
    'link_title' => 'How long do downloads generally take?',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_how-long-do-downloads-generally-take:node/41792',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_downloading-and-reading-books:taxonomy/term/16850',
  );
  // Exported menu link: main-menu_how-long-does-nnels-take-to-create-a-book:node/41813.
  $menu_links['main-menu_how-long-does-nnels-take-to-create-a-book:node/41813'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/41813',
    'router_path' => 'node/%',
    'link_title' => 'How long does NNELS take to create a book?',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
      'identifier' => 'main-menu_how-long-does-nnels-take-to-create-a-book:node/41813',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -2,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_find-books:taxonomy/term/16859',
  );
  // Exported menu link: main-menu_how-many-books-can-i-borrow-at-a-time-and-do-i-have-to-return-them:node/41771.
  $menu_links['main-menu_how-many-books-can-i-borrow-at-a-time-and-do-i-have-to-return-them:node/41771'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/41771',
    'router_path' => 'node/%',
    'link_title' => 'How many books can I borrow at a time, and do I have to return them?',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_how-many-books-can-i-borrow-at-a-time-and-do-i-have-to-return-them:node/41771',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_downloading-and-reading-books:taxonomy/term/16850',
  );
  // Exported menu link: main-menu_how-much-does-nnels-cost:node/41780.
  $menu_links['main-menu_how-much-does-nnels-cost:node/41780'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/41780',
    'router_path' => 'node/%',
    'link_title' => 'How much does NNELS cost?',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
      'identifier' => 'main-menu_how-much-does-nnels-cost:node/41780',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -4,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_other-questions:taxonomy/term/16856',
  );
  // Exported menu link: main-menu_how-to-use-victor-readers-stratus-and-nnels-content-on-usb:node/41738.
  $menu_links['main-menu_how-to-use-victor-readers-stratus-and-nnels-content-on-usb:node/41738'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/41738',
    'router_path' => 'node/%',
    'link_title' => 'How to use Victor Readers Stratus and NNELS Content on USB',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_how-to-use-victor-readers-stratus-and-nnels-content-on-usb:node/41738',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_downloading-and-reading-books:taxonomy/term/16850',
  );
  // Exported menu link: main-menu_info-for-libraries:node/77562.
  $menu_links['main-menu_info-for-libraries:node/77562'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/77562',
    'router_path' => 'node/%',
    'link_title' => 'Info for Libraries',
    'options' => array(
      'attributes' => array(
        'title' => 'Information for Library Staff',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_info-for-libraries:node/77562',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -37,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_info-for-publishers:node/20009.
  $menu_links['main-menu_info-for-publishers:node/20009'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/20009',
    'router_path' => 'node/%',
    'link_title' => 'Info for Publishers',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'title' => 'Publishers and Authors',
      ),
      'identifier' => 'main-menu_info-for-publishers:node/20009',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -36,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_information-for-publishers-and-authors:node/20009.
  $menu_links['main-menu_information-for-publishers-and-authors:node/20009'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/20009',
    'router_path' => 'node/%',
    'link_title' => 'Information for Publishers and Authors',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_information-for-publishers-and-authors:node/20009',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -35,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_info-for-publishers:node/20009',
  );
  // Exported menu link: main-menu_is-my-library-connected-to-nnels:node/41861.
  $menu_links['main-menu_is-my-library-connected-to-nnels:node/41861'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/41861',
    'router_path' => 'node/%',
    'link_title' => 'Is my library connected to NNELS?',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
      'identifier' => 'main-menu_is-my-library-connected-to-nnels:node/41861',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -2,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_getting-started:taxonomy/term/16853',
  );
  // Exported menu link: main-menu_job-postings:node/79686.
  $menu_links['main-menu_job-postings:node/79686'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/79686',
    'router_path' => 'node/%',
    'link_title' => 'Job Postings',
    'options' => array(
      'attributes' => array(
        'title' => 'Job postings',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_job-postings:node/79686',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_about:node/40',
  );
  // Exported menu link: main-menu_legal:taxonomy/term/16862.
  $menu_links['main-menu_legal:taxonomy/term/16862'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/16862',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Legal',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_legal:taxonomy/term/16862',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -30,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_tutorials:node/42737',
  );
  // Exported menu link: main-menu_library-sign-up:node/89333.
  $menu_links['main-menu_library-sign-up:node/89333'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/89333',
    'router_path' => 'node/%',
    'link_title' => 'Library Sign-Up',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_library-sign-up:node/89333',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -32,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_volunteer:node/89321',
  );
  // Exported menu link: main-menu_loading-ebooks-on-patrons-devices:node/68139.
  $menu_links['main-menu_loading-ebooks-on-patrons-devices:node/68139'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/68139',
    'router_path' => 'node/%',
    'link_title' => 'Loading Ebooks on Patrons\' Devices',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
      'identifier' => 'main-menu_loading-ebooks-on-patrons-devices:node/68139',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -2,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_faq-for-library-staff:taxonomy/term/16871',
  );
  // Exported menu link: main-menu_migrating-audiobooks-from-cassette-to-mp3:node/65880.
  $menu_links['main-menu_migrating-audiobooks-from-cassette-to-mp3:node/65880'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/65880',
    'router_path' => 'node/%',
    'link_title' => 'Migrating Audiobooks from Cassette to MP3',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_migrating-audiobooks-from-cassette-to-mp3:node/65880',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_contribute-and-record-books:taxonomy/term/30094',
  );
  // Exported menu link: main-menu_news:node/42494.
  $menu_links['main-menu_news:node/42494'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/42494',
    'router_path' => 'node/%',
    'link_title' => 'News',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_news:node/42494',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -33,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_other-questions:taxonomy/term/16856.
  $menu_links['main-menu_other-questions:taxonomy/term/16856'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/16856',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Other Questions',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_other-questions:taxonomy/term/16856',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -31,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_tutorials:node/42737',
  );
  // Exported menu link: main-menu_reader-sign-up:node/81269.
  $menu_links['main-menu_reader-sign-up:node/81269'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/81269',
    'router_path' => 'node/%',
    'link_title' => 'Reader Sign-Up',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_reader-sign-up:node/81269',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -33,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_volunteer:node/89321',
  );
  // Exported menu link: main-menu_reading-app-and-ebook-videos:node/208960.
  $menu_links['main-menu_reading-app-and-ebook-videos:node/208960'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/208960',
    'router_path' => 'node/%',
    'link_title' => 'Reading App and Ebook Videos',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_reading-app-and-ebook-videos:node/208960',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -34,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_tutorials:node/42737',
  );
  // Exported menu link: main-menu_special-projects:node/210544.
  $menu_links['main-menu_special-projects:node/210544'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/210544',
    'router_path' => 'node/%',
    'link_title' => 'Special Projects',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_special-projects:node/210544',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_about:node/40',
  );
  // Exported menu link: main-menu_staff-home:node/77562.
  $menu_links['main-menu_staff-home:node/77562'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/77562',
    'router_path' => 'node/%',
    'link_title' => 'Staff Home',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_staff-home:node/77562',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -36,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_info-for-libraries:node/77562',
  );
  // Exported menu link: main-menu_training:node/77568.
  $menu_links['main-menu_training:node/77568'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/77568',
    'router_path' => 'node/%',
    'link_title' => 'Training',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_training:node/77568',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -35,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_info-for-libraries:node/77562',
  );
  // Exported menu link: main-menu_tutorial-burn-a-daisy-disc:node/20448.
  $menu_links['main-menu_tutorial-burn-a-daisy-disc:node/20448'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/20448',
    'router_path' => 'node/%',
    'link_title' => 'Tutorial: Burn a DAISY Disc',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_tutorial-burn-a-daisy-disc:node/20448',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_downloading-and-reading-books:taxonomy/term/16850',
  );
  // Exported menu link: main-menu_tutorial-burn-an-audio-or-daisy-disc-with-windows-81:node/65687.
  $menu_links['main-menu_tutorial-burn-an-audio-or-daisy-disc-with-windows-81:node/65687'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/65687',
    'router_path' => 'node/%',
    'link_title' => 'Tutorial: Burn an audio or DAISY Disc with Windows 8.1',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_tutorial-burn-an-audio-or-daisy-disc-with-windows-81:node/65687',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_downloading-and-reading-books:taxonomy/term/16850',
  );
  // Exported menu link: main-menu_tutorial-burn-mp3-or-audio-cd:node/63325.
  $menu_links['main-menu_tutorial-burn-mp3-or-audio-cd:node/63325'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/63325',
    'router_path' => 'node/%',
    'link_title' => 'Tutorial: Burn MP3 or Audio CD',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_tutorial-burn-mp3-or-audio-cd:node/63325',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_downloading-and-reading-books:taxonomy/term/16850',
  );
  // Exported menu link: main-menu_tutorial-how-to-download-and-unzip-a-zipped-book:node/47072.
  $menu_links['main-menu_tutorial-how-to-download-and-unzip-a-zipped-book:node/47072'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/47072',
    'router_path' => 'node/%',
    'link_title' => 'Tutorial: How to Download and Unzip a Zipped Book',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_tutorial-how-to-download-and-unzip-a-zipped-book:node/47072',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_downloading-and-reading-books:taxonomy/term/16850',
  );
  // Exported menu link: main-menu_tutorial-how-to-rip-a-cd-to-mp3-files:node/65602.
  $menu_links['main-menu_tutorial-how-to-rip-a-cd-to-mp3-files:node/65602'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/65602',
    'router_path' => 'node/%',
    'link_title' => 'Tutorial: How to Rip a CD (to MP3 Files)',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
      'identifier' => 'main-menu_tutorial-how-to-rip-a-cd-to-mp3-files:node/65602',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -6,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_faq-for-library-staff:taxonomy/term/16871',
  );
  // Exported menu link: main-menu_tutorial-listen-to-a-nnels-daisy-or-mp3-book-with-your-computers-audio-program:node/47087.
  $menu_links['main-menu_tutorial-listen-to-a-nnels-daisy-or-mp3-book-with-your-computers-audio-program:node/47087'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/47087',
    'router_path' => 'node/%',
    'link_title' => 'Tutorial: Listen to a NNELS DAISY or MP3 Book with your Computer\'s Audio Program',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_tutorial-listen-to-a-nnels-daisy-or-mp3-book-with-your-computers-audio-program:node/47087',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_downloading-and-reading-books:taxonomy/term/16850',
  );
  // Exported menu link: main-menu_tutorial-read-pdf-documents-with-ibooks:node/47372.
  $menu_links['main-menu_tutorial-read-pdf-documents-with-ibooks:node/47372'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/47372',
    'router_path' => 'node/%',
    'link_title' => 'Tutorial: Read PDF documents with iBooks',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_tutorial-read-pdf-documents-with-ibooks:node/47372',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_downloading-and-reading-books:taxonomy/term/16850',
  );
  // Exported menu link: main-menu_tutorial-transferring-daisy-books-to-the-victor-reader-stream:node/16240.
  $menu_links['main-menu_tutorial-transferring-daisy-books-to-the-victor-reader-stream:node/16240'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/16240',
    'router_path' => 'node/%',
    'link_title' => 'Tutorial: Transferring DAISY books to the Victor Reader Stream',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_tutorial-transferring-daisy-books-to-the-victor-reader-stream:node/16240',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_downloading-and-reading-books:taxonomy/term/16850',
  );
  // Exported menu link: main-menu_tutorial-uploading-and-editing-nnels-file-information:node/63328.
  $menu_links['main-menu_tutorial-uploading-and-editing-nnels-file-information:node/63328'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/63328',
    'router_path' => 'node/%',
    'link_title' => 'Tutorial: Uploading and Editing NNELS File Information',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
      'identifier' => 'main-menu_tutorial-uploading-and-editing-nnels-file-information:node/63328',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -7,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_contribute-and-record-books:taxonomy/term/30094',
  );
  // Exported menu link: main-menu_tutorial-using-the-darwin-reader-app-for-android-devices:node/42734.
  $menu_links['main-menu_tutorial-using-the-darwin-reader-app-for-android-devices:node/42734'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/42734',
    'router_path' => 'node/%',
    'link_title' => 'Tutorial: Using the Darwin Reader app for Android Devices',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_tutorial-using-the-darwin-reader-app-for-android-devices:node/42734',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_downloading-and-reading-books:taxonomy/term/16850',
  );
  // Exported menu link: main-menu_tutorial-using-the-voicedream-app-to-read-books:node/42491.
  $menu_links['main-menu_tutorial-using-the-voicedream-app-to-read-books:node/42491'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/42491',
    'router_path' => 'node/%',
    'link_title' => 'Tutorial: Using the VoiceDream app to read books',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_tutorial-using-the-voicedream-app-to-read-books:node/42491',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_downloading-and-reading-books:taxonomy/term/16850',
  );
  // Exported menu link: main-menu_tutorials-home:node/42737.
  $menu_links['main-menu_tutorials-home:node/42737'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/42737',
    'router_path' => 'node/%',
    'link_title' => 'Tutorials Home',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_tutorials-home:node/42737',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -39,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_tutorials:node/42737',
  );
  // Exported menu link: main-menu_tutorials:node/42737.
  $menu_links['main-menu_tutorials:node/42737'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/42737',
    'router_path' => 'node/%',
    'link_title' => 'Tutorials',
    'options' => array(
      'attributes' => array(
        'title' => 'NNELS Tutorials',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_tutorials:node/42737',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -40,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_understanding-formats:node/211561.
  $menu_links['main-menu_understanding-formats:node/211561'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/211561',
    'router_path' => 'node/%',
    'link_title' => 'Understanding Formats',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(),
      'identifier' => 'main-menu_understanding-formats:node/211561',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -35,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_tutorials:node/42737',
  );
  // Exported menu link: main-menu_using-audacity-to-record-audiobooks:node/65770.
  $menu_links['main-menu_using-audacity-to-record-audiobooks:node/65770'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/65770',
    'router_path' => 'node/%',
    'link_title' => 'Using Audacity to Record Audiobooks',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_using-audacity-to-record-audiobooks:node/65770',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_contribute-and-record-books:taxonomy/term/30094',
  );
  // Exported menu link: main-menu_using-obi-to-record-audiobooks:node/65773.
  $menu_links['main-menu_using-obi-to-record-audiobooks:node/65773'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/65773',
    'router_path' => 'node/%',
    'link_title' => 'Using Obi to Record Audiobooks',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_using-obi-to-record-audiobooks:node/65773',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_contribute-and-record-books:taxonomy/term/30094',
  );
  // Exported menu link: main-menu_video-electronic-print-magnifying-machine-merlin-at-regina-public-library:node/5411.
  $menu_links['main-menu_video-electronic-print-magnifying-machine-merlin-at-regina-public-library:node/5411'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/5411',
    'router_path' => 'node/%',
    'link_title' => 'Video: electronic print magnifying machine "Merlin" at Regina Public Library',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
      'identifier' => 'main-menu_video-electronic-print-magnifying-machine-merlin-at-regina-public-library:node/5411',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -1,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_other-questions:taxonomy/term/16856',
  );
  // Exported menu link: main-menu_video-how-one-library-uses-assistive-technology:node/311.
  $menu_links['main-menu_video-how-one-library-uses-assistive-technology:node/311'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/311',
    'router_path' => 'node/%',
    'link_title' => 'Video: How one library uses assistive technology',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
      'identifier' => 'main-menu_video-how-one-library-uses-assistive-technology:node/311',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -9,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_faq-for-library-staff:taxonomy/term/16871',
  );
  // Exported menu link: main-menu_video-how-to-download-open-access-books-from-nnels:node/15135.
  $menu_links['main-menu_video-how-to-download-open-access-books-from-nnels:node/15135'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/15135',
    'router_path' => 'node/%',
    'link_title' => 'Video: How to download open access books from NNELS',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_video-how-to-download-open-access-books-from-nnels:node/15135',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_downloading-and-reading-books:taxonomy/term/16850',
  );
  // Exported menu link: main-menu_video-victor-reader-stream-demonstration:node/5423.
  $menu_links['main-menu_video-victor-reader-stream-demonstration:node/5423'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/5423',
    'router_path' => 'node/%',
    'link_title' => 'Video: Victor Reader Stream demonstration',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
      'identifier' => 'main-menu_video-victor-reader-stream-demonstration:node/5423',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_other-questions:taxonomy/term/16856',
  );
  // Exported menu link: main-menu_volunteer-with-nnels:node/89321.
  $menu_links['main-menu_volunteer-with-nnels:node/89321'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/89321',
    'router_path' => 'node/%',
    'link_title' => 'Volunteer with NNELS',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_volunteer-with-nnels:node/89321',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -34,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_volunteer:node/89321',
  );
  // Exported menu link: main-menu_volunteer:node/89321.
  $menu_links['main-menu_volunteer:node/89321'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/89321',
    'router_path' => 'node/%',
    'link_title' => 'Volunteer',
    'options' => array(
      'attributes' => array(
        'title' => 'Volunteer your time with NNELS',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_volunteer:node/89321',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -35,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_welcome:node/313.
  $menu_links['main-menu_welcome:node/313'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/313',
    'router_path' => 'node/%',
    'link_title' => 'Welcome',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'title' => 'Welcome to NNELS',
      ),
      'identifier' => 'main-menu_welcome:node/313',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_what-are-my-options-for-accessing-nnels-content:node/41774.
  $menu_links['main-menu_what-are-my-options-for-accessing-nnels-content:node/41774'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/41774',
    'router_path' => 'node/%',
    'link_title' => 'What are my options for accessing NNELS content?',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
      'identifier' => 'main-menu_what-are-my-options-for-accessing-nnels-content:node/41774',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_getting-started:taxonomy/term/16853',
  );
  // Exported menu link: main-menu_what-do-i-do-if-a-patron-reports-having-trouble-logging-in-to-nnels:node/41840.
  $menu_links['main-menu_what-do-i-do-if-a-patron-reports-having-trouble-logging-in-to-nnels:node/41840'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/41840',
    'router_path' => 'node/%',
    'link_title' => 'What do I do if a patron reports having trouble logging in to NNELS?',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
      'identifier' => 'main-menu_what-do-i-do-if-a-patron-reports-having-trouble-logging-in-to-nnels:node/41840',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_faq-for-library-staff:taxonomy/term/16871',
  );
  // Exported menu link: main-menu_what-do-library-staff-need-to-know-about-patron-types:node/41849.
  $menu_links['main-menu_what-do-library-staff-need-to-know-about-patron-types:node/41849'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/41849',
    'router_path' => 'node/%',
    'link_title' => 'What do library staff need to know about patron types?',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
      'identifier' => 'main-menu_what-do-library-staff-need-to-know-about-patron-types:node/41849',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -12,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_faq-for-library-staff:taxonomy/term/16871',
  );
  // Exported menu link: main-menu_what-do-we-do-with-daisy-discs-once-patrons-are-done-with-them:node/41846.
  $menu_links['main-menu_what-do-we-do-with-daisy-discs-once-patrons-are-done-with-them:node/41846'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/41846',
    'router_path' => 'node/%',
    'link_title' => 'What do we do with DAISY discs once patrons are done with them?',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
      'identifier' => 'main-menu_what-do-we-do-with-daisy-discs-once-patrons-are-done-with-them:node/41846',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -11,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_faq-for-library-staff:taxonomy/term/16871',
  );
  // Exported menu link: main-menu_what-is-daisy-format:node/41819.
  $menu_links['main-menu_what-is-daisy-format:node/41819'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/41819',
    'router_path' => 'node/%',
    'link_title' => 'What is DAISY format?',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_what-is-daisy-format:node/41819',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_downloading-and-reading-books:taxonomy/term/16850',
  );
  // Exported menu link: main-menu_what-kinds-of-books-can-i-expect-to-find-in-nnels:node/41825.
  $menu_links['main-menu_what-kinds-of-books-can-i-expect-to-find-in-nnels:node/41825'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/41825',
    'router_path' => 'node/%',
    'link_title' => 'What kinds of books can I expect to find in NNELS?',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
      'identifier' => 'main-menu_what-kinds-of-books-can-i-expect-to-find-in-nnels:node/41825',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -6,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_find-books:taxonomy/term/16859',
  );
  // Exported menu link: main-menu_where-can-i-find-more-braille-books:node/210370.
  $menu_links['main-menu_where-can-i-find-more-braille-books:node/210370'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/210370',
    'router_path' => 'node/%',
    'link_title' => 'Where can I find more braille books?',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
      'identifier' => 'main-menu_where-can-i-find-more-braille-books:node/210370',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -1,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_find-books:taxonomy/term/16859',
  );
  // Exported menu link: main-menu_where-can-i-get-help-with-downloading-books:node/41798.
  $menu_links['main-menu_where-can-i-get-help-with-downloading-books:node/41798'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/41798',
    'router_path' => 'node/%',
    'link_title' => 'Where can I get help with downloading books?',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_where-can-i-get-help-with-downloading-books:node/41798',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_downloading-and-reading-books:taxonomy/term/16850',
  );
  // Exported menu link: main-menu_where-do-nnels-books-come-from:node/42027.
  $menu_links['main-menu_where-do-nnels-books-come-from:node/42027'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/42027',
    'router_path' => 'node/%',
    'link_title' => 'Where do NNELS books come from?',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
      'identifier' => 'main-menu_where-do-nnels-books-come-from:node/42027',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -5,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_other-questions:taxonomy/term/16856',
  );
  // Exported menu link: main-menu_who-is-eligible:node/41864.
  $menu_links['main-menu_who-is-eligible:node/41864'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/41864',
    'router_path' => 'node/%',
    'link_title' => 'Who is eligible?',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
      'identifier' => 'main-menu_who-is-eligible:node/41864',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_getting-started:taxonomy/term/16853',
  );
  // Exported menu link: main-menu_why-does-quality-vary-where-do-nnels-books-come-from:node/41828.
  $menu_links['main-menu_why-does-quality-vary-where-do-nnels-books-come-from:node/41828'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/41828',
    'router_path' => 'node/%',
    'link_title' => 'Why does quality vary? Where do NNELS books come from?',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_why-does-quality-vary-where-do-nnels-books-come-from:node/41828',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_downloading-and-reading-books:taxonomy/term/16850',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('About NNELS');
  t('About Productions');
  t('Are the materials available through NNELS protected by copyright?');
  t('Can I download DAISY books directly to my device?');
  t('Can libraries or people donate or contribute their books and audiobooks to NNELS?');
  t('Can our library have an account to download books for patrons?');
  t('Collections Policy');
  t('Connector');
  t('Contact');
  t('Contribute and Record Books');
  t('Converting MP3 Audiobooks to DAISY Audiobooks (Using Obi)');
  t('Create a (M3U) Playlist File');
  t('Do you keep a record of my reading history?');
  t('Downloading and Reading Books');
  t('EPUB Accessibility Checklist');
  t('Exceptions to Commercial Availability');
  t('FAQ for Library Staff');
  t('File Delivery Requirements');
  t('Find Books');
  t('Getting Started');
  t('How can I read a DAISY book?');
  t('How can I tell if a file is recorded using synthetic (computer) or live voice?');
  t('How do I find a book in NNELS?');
  t('How do I register for an account if my library is connected to NNELS?');
  t('How do I request a book that’s not in NNELS?');
  t('How do libraries submit their requests? How can they check the status?');
  t('How long do downloads generally take?');
  t('How long does NNELS take to create a book?');
  t('How many books can I borrow at a time, and do I have to return them?');
  t('How much does NNELS cost?');
  t('How to use Victor Readers Stratus and NNELS Content on USB');
  t('Info for Libraries');
  t('Info for Publishers');
  t('Information for Publishers and Authors');
  t('Is my library connected to NNELS?');
  t('Job Postings');
  t('Legal');
  t('Library Sign-Up');
  t('Loading Ebooks on Patrons\' Devices');
  t('Migrating Audiobooks from Cassette to MP3');
  t('News');
  t('Other Questions');
  t('Reader Sign-Up');
  t('Reading App and Ebook Videos');
  t('Special Projects');
  t('Staff Home');
  t('Training');
  t('Tutorial: Burn MP3 or Audio CD');
  t('Tutorial: Burn a DAISY Disc');
  t('Tutorial: Burn an audio or DAISY Disc with Windows 8.1');
  t('Tutorial: How to Download and Unzip a Zipped Book');
  t('Tutorial: How to Rip a CD (to MP3 Files)');
  t('Tutorial: Listen to a NNELS DAISY or MP3 Book with your Computer\'s Audio Program');
  t('Tutorial: Read PDF documents with iBooks');
  t('Tutorial: Transferring DAISY books to the Victor Reader Stream');
  t('Tutorial: Uploading and Editing NNELS File Information');
  t('Tutorial: Using the Darwin Reader app for Android Devices');
  t('Tutorial: Using the VoiceDream app to read books');
  t('Tutorials');
  t('Tutorials Home');
  t('Understanding Formats');
  t('Using Audacity to Record Audiobooks');
  t('Using Obi to Record Audiobooks');
  t('Video: How one library uses assistive technology');
  t('Video: How to download open access books from NNELS');
  t('Video: Victor Reader Stream demonstration');
  t('Video: electronic print magnifying machine "Merlin" at Regina Public Library');
  t('Volunteer');
  t('Volunteer with NNELS');
  t('Welcome');
  t('What are my options for accessing NNELS content?');
  t('What do I do if a patron reports having trouble logging in to NNELS?');
  t('What do library staff need to know about patron types?');
  t('What do we do with DAISY discs once patrons are done with them?');
  t('What is DAISY format?');
  t('What kinds of books can I expect to find in NNELS?');
  t('Where can I find more braille books?');
  t('Where can I get help with downloading books?');
  t('Where do NNELS books come from?');
  t('Who is eligible?');
  t('Why does quality vary? Where do NNELS books come from?');

  return $menu_links;
}
