<?php

/**
 * @file
 * nnels_tutorials_faqs.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function nnels_tutorials_faqs_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'title' => 'Help',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'en',
  'created' => 1412956501,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '1247f2b4-43aa-4221-8051-6764004e0fb5',
  'body' => array(
    'en' => array(
      0 => array(
        'value' => '<p>If your questions are not answered here, please post a message to the <a href="https://nnels.ca/forum">forums</a> or send a message to <a href="mailto:support@nnels.ca">support@nnels.ca</a>.</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_summary' => '',
      ),
    ),
    'fr' => array(
      0 => array(
        'value' => '<p>Si vous ne trouvez pas réponse à vos questions ici, veuillez afficher un message dans les <a href="/fr/forum">forums</a> ou envoyer un message au <a href="mailto:support@nnels.ca">support@nnels.ca</a>.</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_summary' => '',
      ),
    ),
  ),
  'title_field' => array(
    'en' => array(
      0 => array(
        'value' => 'Help',
        'format' => NULL,
      ),
    ),
    'fr' => array(
      0 => array(
        'value' => 'Aide',
        'format' => NULL,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'foaf:Document',
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
  ),
  'path' => array(
    'pathauto' => FALSE,
    'alias' => 'help/help',
  ),
  'translations' => array(
    'original' => 'en',
    'data' => array(
      'en' => array(
        'entity_type' => 'node',
        'language' => 'en',
        'source' => '',
        'status' => 1,
        'translate' => 0,
        'created' => 1412956501,
        'entity_uuid' => '1247f2b4-43aa-4221-8051-6764004e0fb5',
        'user_uuid' => 'ebccde49-e27b-4e2e-850b-705dade46d28',
      ),
      'fr' => array(
        'entity_type' => 'node',
        'language' => 'fr',
        'source' => 'en',
        'status' => 1,
        'translate' => 0,
        'created' => 1417192813,
        'entity_uuid' => '1247f2b4-43aa-4221-8051-6764004e0fb5',
        'user_uuid' => 'ebccde49-e27b-4e2e-850b-705dade46d28',
      ),
    ),
  ),
  'comment_count' => 0,
  'date' => '2014-10-10 08:55:01 -0700',
  'user_uuid' => 'ebccde49-e27b-4e2e-850b-705dade46d28',
);
  $nodes[] = array(
  'title' => 'Formats',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'en',
  'created' => 1574232977,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '510890f8-2bdd-44b3-9aac-53384acebb5b',
  'body' => array(
    'en' => array(
      0 => array(
        'value' => '<p>There are a range of different formats - each with different accessibility credentials depending on how the file was made. Readers might prefer familiar formats (like Word or PDF) or formats that offer more portability across devices (like EPUB). For readers with disabilities the flexibility of the format is very important so EPUB is attractive but no single format guarantees accessibility.&nbsp;That said, if you need a book that is not in a format you can use, please let us know so we can create it for you and add it to our collection.</p>
<ul>
	<li><a href="#daisy">DAISY</a></li>
	<li><a href="#mp3">MP3</a></li>
	<li><a href="#epub">EPUB</a></li>
	<li><a href="#doc">DOC</a></li>
	<li><a href="#rtf">RTF</a></li>
	<li><a href="#pdf">PDF</a></li>
	<li><a href="#other">Other</a></li>
</ul>
<h2><a name="daisy"></a>DAISY</h2>
<p>DAISY (Digital Accessible Information SYstem) is a specialised standard format for delivering accessible text for the print impaired. It is essentially an XML-based ebook format that can incorporate both text and audio.&nbsp;It usually includes navigation features not commonly found in standard audiobooks. Most commonly, these navigation features include full-text searching and page navigation. They may also include footnotes, indexes, and tables of contents.&nbsp;</p>
<p>DAISY books may include:</p>
<ul>
	<li><strong>both text and audio</strong>: These titles permit full-text searching, and are the ones most commonly produced by NNELS. These titles use synthetic narration and can be identified by the narrator beginning with the word "Apple", as in "Apple Alex" or "Apple Samantha", or "Scansoft", as in "Scansoft Daniel". Some software or devices ignore the pre-made audio in favour of built-in text-to-speech features.</li>
	<li><strong>audio only</strong>: Navigation is typically limited to chapter and section navigation and there is no full-text searching. These titles are produced by NNELS using live narration.</li>
	<li><strong>text only: </strong>The software or device will use text-to-speech capabilities. Text-only DAISY is rare in the NNELS collection and is usually identified as such on the title details page.</li>
</ul>
<p>NNELS produces two kinds of DAISY books: DAISY 2.02 and DAISY 3 (full-text and audio). DAISY 2.02 is an older standard and these books work with older DAISY players. DAISY 3 books are most likely to work with newer devices.</p>
<p>DAISY can be burned to CDs (see our <a href="https://nnels.ca/help/tutorial-burn-daisy-disc-windows">Burn a DAISY disc tutorial</a>) and unlike traditional audiobooks which can be on 10 or more CDs, the contents of DAISY audiobooks usually fit onto a single CD (so long as they are burned as "data" rather than "audio" or "music"), making them easy to handle by people who can\'t read the CD numbers of traditional audiobooks. While we do not produce CDs, please speak with your public library if you require titles in this format.</p>
<p>Most DAISY players are able to play DAISY discs, MP3 CDs, and regular audio CDs.</p>
<p>DAISY books can also be played on almost any computer or device using <a href="/help/download">apps or software</a>, and transferred between devices using <a href="/help/tutorial-transferring-files-usb-or-flash-drive">USB sticks and SD cards</a>.&nbsp;</p>
<p>All synthetic-narration DAISY books in NNELS contain a full-text version of the book, typically the "contents.html" file. To customize the display, this HTML file can be opened with word processing programs or browsers and manipulated from there (e.g. change font, size, spacing, margins, etc.).</p>
<h2><a name="mp3"></a>MP3 Audio</h2>
<p>Many live narration audiobooks in NNELS are in MP3 format, and all MP3 audiobooks in NNELS are produced using live narration. Most MP3 audiobooks will also contain one or more playlist files to ensure the tracks play in the correct order. They do not contain special navigation features or permit full-text searching.</p>
<p>MP3 audiobooks are compatible with almost any computer or device. They can also be played on an MP3 player, or any other device that can play audio files.</p>
<p>MP3 can also be burned onto a CD in the same way a DAISY book can, and DAISY players can play an MP3 audiobook.</p>
<p>Most newer CD players will play MP3 audiobooks, which will usually fit onto a single CD so long as they are burned as "data" CDs. Books that are larger than 700 MB will require more than one CD.</p>
<p>Older CD players may not work with MP3 audiobooks, and for these players, burn CDs as "audio" instead of "data". When creating "audio" CDs, the audiobook will likely not fit onto a single disc unless it is less than 80 minutes long. The number of CDs required is determined by the length of each track, and most blank CDs can accomodate 80 minutes of playing time. Therefore, these audiobooks need to be burned in batches of 80-minutes or less. Please call or write to us if you have questions (that\'s what we\'re here for).</p>
<p>All DAISY titles in NNELS contain MP3 audio files, so it is possible to create MP3 or traditional audiobooks from DAISY books. Please see the <a href="/what-if-patron-wants-audio-isnt-familiar-daisy-can-we-provide-mp3">forum post on providing MP3 when only DAISY is available</a> for more information.</p>
<h2><a name="epub"></a>EPUB</h2>
<p>EPUB is increasingly seen as a format that is suitable for both commercial exploitation and meeting accessibility needs. In its latest upgrade, EPUB 3 has embraced all accessibility features present in the DAISY standard. A reflowable EPUB with table of contents (TOC) and image descriptions can be read on a range of devices with text-to-speech and magnification if required by the user. EPUB is a HTML-based, platform-independent ebook format, which is highly adaptable and can offer the greatest accessibility to readers from a mainstream product.</p>
<p>EPUB is available for many titles, usually when contributed by, or purchased from, a publisher.</p>
<p>NNELS produces EPUB 3 with audio. These books contain structured navigation and sound files so that the text includes synchronized audio narration (synthetic narration only), similar to DAISY books. For systems that do not support the audio overlays, the EPUB files will work as regular EPUB books and will be readable with any software that supports EPUB.</p>
<p>EPUB format can be read by almost all reading software, including newer DAISY players and Kurzweil. The only notable device lacking integrated support for the EPUB format is the Amazon Kindle, although there has recently been speculation that the Kindle will soon support this format. Because an EPUB is HTML-based, screenreader users can easily access and navigate a structured web document through a browser.</p>
<p>For analysis of reading systems, please see the Reading Systems Accessibility Support Roundup.</p>
<h2><a name="doc"></a>DOC</h2>
<p>NNELS often publishes titles in DOC/DOCX format. Microsoft Word is a popular format with users, as it is familiar, it has 500% magnification with reflow, can change foreground and background colours easily and is amenable to text to speech. DOC files can be opened in a variety of programs, not just Microsoft Word.&nbsp;</p>
<h2><a name="rtf"></a>RTF</h2>
<p>The Rich Text Format (RTF) is a text file format that can be read with a variety of programs. Most word processors are able to read and write some versions of RTF.&nbsp;</p>
<h2><a name="pdf"></a>PDF</h2>
<p>PDF is typically requested when a reader would like the digital copy to look exactly like the print book.&nbsp;</p>
<p>PDF is still a common file format for publishing, and most of the PDF files in NNELS come directly from publishers. The level of accessibility for PDFs provided in NNELS varies. Publisher-provided PDF files may not always work well with assistive technology due to fewer accessibility options with text reflow and navigation often being absent.</p>
<p>Our PDF files should always be text-readable, allowing text-to-speech reading, but it is common for us to change PDF files to a different format at the request of a reader.</p>
<h2><a name="other"></a>Other Formats</h2>
<p>NNELS can provide electronic text in any other electronic format to be used with refreshable Braille devices, or Braillers.</p>
<p>We encourage Large Print users to make use of our DOC and EPUB files (where text can be enlarged).</p>
<p>You may find BRF (Braille Ready File) and other formats in the NNELS collection that we have acquired but generally do not produce. BRF is a standard format that renders contracted UEB Braille code onto a Braille display.</p>
<p>If you need a specific format not listed, or need a format with certain specifications and it is not already available, please request it and we will do what we can.</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_summary' => '',
      ),
    ),
    'fr' => array(
      0 => array(
        'value' => '<p>**Version française à venir.**</p>
<h2>DAISY</h2>
<p>DAISY (Digital Accessible Information SYstem) is an accessible book standard that usually includes navigation features not commonly found in standard audiobooks. Most commonly, these navigation features include full-text searching and page navigation. They may also include footnotes, indexes, and tables of contents.</p>
<p>DAISY books may include:</p>
<ul>
	<li><strong>both text and audio</strong>: These titles permit full-text searching, and are the ones most commonly produced by NNELS. These titles use synthetic narration and can be identified by the narrator beginning with the word "Apple", as in "Apple Alex" or "Apple Samantha", or "Scansoft", as in "Scansoft Daniel". Some software or devices ignore the pre-made audio in favour of built-in text-to-speech features.</li>
	<li><strong>audio only</strong>: Navigation is typically limited to chapter and section navigation and there is no full-text searching. These titles are produced by NNELS using live narration.</li>
	<li><strong>text only: </strong>The software or device will use text-to-speech capabilities. Text-only DAISY is rare in the NNELS collection and is usually identified as such on the title details page.</li>
</ul>
<p>NNELS produces two kinds of DAISY books: DAISY 2.02 and DAISY 3. DAISY 2.02 is an older standard and these books work with older DAISY players. DAISY 3 books are most likely to work with newer devices.</p>
<p>DAISY can be burned to CDs (see our <a href="https://nnels.ca/help/tutorial-burn-daisy-disc-windows">Burn a DAISY disc tutorial</a>) and unlike traditional audiobooks which can be on 10 or more CDs, the contents of DAISY audiobooks usually onto a single CD, making them easy to handle by people who can\'t read the CD numbers of traditional audiobooks. While NNELS does not provide CDs directly, please speak with your public library if you require titles in this format.</p>
<p>DAISY books can also be played on almost any computer or device using <a href="/help/download">apps or software</a>, and transferred between devices using <a href="/help/tutorial-transferring-files-usb-or-flash-drive">USB sticks and SD cards</a>.</p>
<h2>MP3 Audio</h2>
<p>Many live narration audiobooks in NNELS are in MP3 format, and all MP3 audiobooks in NNELS are produced using live narration. Most MP3 audiobooks will also contain one or more playlist files to ensure the tracks play in the correct order. They do not contain special navigation features or permit full-text searching.</p>
<p>MP3 audiobooks are compatible with almost any computer or device. They can also be played on an MP3 player, or any other device that can play audio files.</p>
<p>MP3 can also be burned onto a CD in the same way a DAISY book can, and DAISY players can play an MP3 audiobook.</p>
<p>Most newer CD players will play MP3 audiobooks, which will usually fit onto a single CD so long as they are burned as "data" CDs. Books that are larger than 700 MB will require more than one CD.</p>
<p>Older CD players may not work with MP3 audiobooks, and for these players, burn CDs as "audio" instead of "data". When creating "audio" CDs, the audiobook will likely not fit onto a single disc unless it is less than 80 minutes long. The number of CDs required is determined by the length of each track, and most blank CDs can accomodate 80 minutes of playing time. Therefore, these audiobooks need to be burned in batches of 80-minutes or less. Please call or write to us if you have questions (that\'s what we\'re here for).</p>
<p>All DAISY titles in NNELS contain MP3 audio files, so it is possible to create MP3 or traditional audiobooks from DAISY books. Please see the <a href="/what-if-patron-wants-audio-isnt-familiar-daisy-can-we-provide-mp3">forum post on providing MP3 when only DAISY is available</a> for more information.</p>
<h2>E-text</h2>
<p>Electronic text or e-text, may be found in a variety of formats, including RTF, DOC, DOCX, and HTML.</p>
<p>NNELS generally produceds RTF because it works well with most software and hardware. For larger books, NNELS often publishes titles in DOCX format because the files are smaller than RTF. That said, if you need a book that is not in a format you can use, please let us know so we can create it for you and add it to our collection.</p>
<p>All synthetic-narration DAISY books in NNELS contain a full-text version of the book, typically the "contents.html" file. To customize the display, this HTML file can be opened with word processing programs or browsers and manipulated from there (e.g. change font, size, spacing, margins, etc.).</p>
<h2>EPUB</h2>
<p>EPUB 2 and EPUB 3 are available for some titles, usually when contributed by, or purchased from, a publisher.</p>
<p>EPUB 3 works as a text format in most newer DAISY players, particularly as a substitute for text-only DAISY 3.</p>
<p>NNELS produces a format called "EPUB 3 (media overlays)". These books&nbsp; contain sound files so that the text includes synchronized audio narration (synthetic narration only), similar to DAISY books. For systems that do not support the audio overlays, the EPUB files with media overlays work as regular EPUB books and are readable with any software that supports EPUB. For analysis of reading systems and how well they support EPUB 3 with Media Overlays, please see the <a href="http://epubtest.org/testsuite/epub3/">EPUBTest website</a>. We use the latest version of <a href="https://www.adobe.com/solutions/ebook/digital-editions.html">Adobe Digital Editions</a>, which works well.</p>
<h2>PDF</h2>
<p>PDF is typically requested when a reader would like the digital copy to look exactly like the print book. However, PDF is generally difficult to read on smaller screens because the text arrangement is like that on a printed page, with no ability to wrap the lines to the screen. Reading PDF files on smaller screens generally involves a lot of scrolling back and forth across the lines of a page.</p>
<p>PDF files do not always work well with assistive technology, but are a common file format for publishing, and most of the PDF files in NNELS come directly from publishers.</p>
<p>The level of accessibility for PDFs provided in NNELS varies. Our PDF files should always be text-readable, allowing text-to-speech reading, but it is common for us to change PDF files to a different format at the request of a reader.</p>
<h2>Other Formats</h2>
<p>NNELS can provide e-text in RTF or any other e-text format to be used with refreshable Braille devices, or Braillers.</p>
<p>We encourage Large Print users to make use of our e-text (where text can be enlarged).</p>
<p>You may find BRF (Braille Ready File) and other formats in the NNELS collection that we have acquired but generally do not produce.</p>
<p>If you need a specific format not listed, or need a format with certain specifications and it is not already available, please request it and we will do what we can.</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_summary' => '',
      ),
    ),
  ),
  'title_field' => array(
    'en' => array(
      0 => array(
        'value' => 'Formats',
        'format' => NULL,
      ),
    ),
    'fr' => array(
      0 => array(
        'value' => 'Formats',
        'format' => NULL,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'foaf:Document',
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
  ),
  'path' => array(
    'pathauto' => FALSE,
    'alias' => 'help/formats',
  ),
  'translations' => array(
    'original' => 'en',
    'data' => array(
      'en' => array(
        'entity_type' => 'node',
        'language' => 'en',
        'source' => '',
        'status' => 1,
        'translate' => 0,
        'created' => 1574232977,
        'entity_uuid' => '510890f8-2bdd-44b3-9aac-53384acebb5b',
        'user_uuid' => 'f2084901-3999-4a98-b4d7-9c92d218921c',
      ),
      'fr' => array(
        'entity_type' => 'node',
        'language' => 'fr',
        'source' => 'en',
        'status' => 1,
        'translate' => 0,
        'created' => 1574233210,
        'entity_uuid' => '510890f8-2bdd-44b3-9aac-53384acebb5b',
        'user_uuid' => 'f2084901-3999-4a98-b4d7-9c92d218921c',
      ),
    ),
  ),
  'comment_count' => 0,
  'date' => '2019-11-19 22:56:17 -0800',
  'user_uuid' => 'f2084901-3999-4a98-b4d7-9c92d218921c',
);
  $nodes[] = array(
  'title' => 'Formats',
  'log' => '',
  'status' => 0,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'frequently_asked_question',
  'language' => 'en',
  'created' => 1430185994,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '5148f1e1-2f19-44e4-80a1-46a5e9637567',
  'body' => array(
    'en' => array(
      0 => array(
        'value' => '<p>There are a range of different formats - each with different accessibility credentials depending on how the file was made. Readers might prefer familiar formats (like Word or PDF) or formats that offer more portability across devices (like EPUB). For readers with disabilities the flexibility of the format is very important so EPUB is attractive but no single format guarantees accessibility.&nbsp;That said, if you need a book that is not in a format you can use, please let us know so we can create it for you and add it to our collection.</p>
<ul>
	<li><a href="#daisy">DAISY</a></li>
	<li><a href="#mp3">MP3</a></li>
	<li><a href="#epub">EPUB</a></li>
	<li><a href="#doc">DOC</a></li>
	<li><a href="#rtf">RTF</a></li>
	<li><a href="#pdf">PDF</a></li>
	<li><a href="#other">Other</a></li>
</ul>
<h2><a name="daisy"></a>DAISY</h2>
<p>DAISY (Digital Accessible Information SYstem) is a specialised standard format for delivering accessible text for the print impaired. It is essentially an XML-based ebook format that can incorporate both text and audio.&nbsp;It usually includes navigation features not commonly found in standard audiobooks. Most commonly, these navigation features include full-text searching and page navigation. They may also include footnotes, indexes, and tables of contents.&nbsp;</p>
<p>DAISY books may include:</p>
<ul>
	<li><strong>both text and audio</strong>: These titles permit full-text searching, and are the ones most commonly produced by NNELS. These titles use synthetic narration and can be identified by the narrator beginning with the word "Apple", as in "Apple Alex" or "Apple Samantha", or "Scansoft", as in "Scansoft Daniel". Some software or devices ignore the pre-made audio in favour of built-in text-to-speech features.</li>
	<li><strong>audio only</strong>: Navigation is typically limited to chapter and section navigation and there is no full-text searching. These titles are produced by NNELS using live narration.</li>
	<li><strong>text only: </strong>The software or device will use text-to-speech capabilities. Text-only DAISY is rare in the NNELS collection and is usually identified as such on the title details page.</li>
</ul>
<p>NNELS produces two kinds of DAISY books: DAISY 2.02 and DAISY 3 (full-text and audio). DAISY 2.02 is an older standard and these books work with older DAISY players. DAISY 3 books are most likely to work with newer devices.</p>
<p>DAISY can be burned to CDs (see our <a href="https://nnels.ca/help/tutorial-burn-daisy-disc-windows">Burn a DAISY disc tutorial</a>) and unlike traditional audiobooks which can be on 10 or more CDs, the contents of DAISY audiobooks usually fit onto a single CD (so long as they are burned as "data" rather than "audio" or "music"), making them easy to handle by people who can\'t read the CD numbers of traditional audiobooks. While we do not produce CDs, please speak with your public library if you require titles in this format.</p>
<p>Most DAISY players are able to play DAISY discs, MP3 CDs, and regular audio CDs.</p>
<p>DAISY books can also be played on almost any computer or device using <a href="/help/download">apps or software</a>, and transferred between devices using <a href="/help/tutorial-transferring-files-usb-or-flash-drive">USB sticks and SD cards</a>.&nbsp;</p>
<p>All synthetic-narration DAISY books in NNELS contain a full-text version of the book, typically the "contents.html" file. To customize the display, this HTML file can be opened with word processing programs or browsers and manipulated from there (e.g. change font, size, spacing, margins, etc.).</p>
<h2><a name="mp3"></a>MP3 Audio</h2>
<p>Many live narration audiobooks in NNELS are in MP3 format, and all MP3 audiobooks in NNELS are produced using live narration. Most MP3 audiobooks will also contain one or more playlist files to ensure the tracks play in the correct order. They do not contain special navigation features or permit full-text searching.</p>
<p>MP3 audiobooks are compatible with almost any computer or device. They can also be played on an MP3 player, or any other device that can play audio files.</p>
<p>MP3 can also be burned onto a CD in the same way a DAISY book can, and DAISY players can play an MP3 audiobook.</p>
<p>Most newer CD players will play MP3 audiobooks, which will usually fit onto a single CD so long as they are burned as "data" CDs. Books that are larger than 700 MB will require more than one CD.</p>
<p>Older CD players may not work with MP3 audiobooks, and for these players, burn CDs as "audio" instead of "data". When creating "audio" CDs, the audiobook will likely not fit onto a single disc unless it is less than 80 minutes long. The number of CDs required is determined by the length of each track, and most blank CDs can accomodate 80 minutes of playing time. Therefore, these audiobooks need to be burned in batches of 80-minutes or less. Please call or write to us if you have questions (that\'s what we\'re here for).</p>
<p>All DAISY titles in NNELS contain MP3 audio files, so it is possible to create MP3 or traditional audiobooks from DAISY books. Please see the <a href="/what-if-patron-wants-audio-isnt-familiar-daisy-can-we-provide-mp3">forum post on providing MP3 when only DAISY is available</a> for more information.</p>
<h2><a name="epub"></a>EPUB</h2>
<p>EPUB is increasingly seen as a format that is suitable for both commercial exploitation and meeting accessibility needs. In its latest upgrade, EPUB 3 has embraced all accessibility features present in the DAISY standard. A reflowable EPUB with table of contents (TOC) and image descriptions can be read on a range of devices with text-to-speech and magnification if required by the user. EPUB is a HTML-based, platform-independent ebook format, which is highly adaptable and can offer the greatest accessibility to readers from a mainstream product.</p>
<p>EPUB is available for many titles, usually when contributed by, or purchased from, a publisher.</p>
<p>NNELS produces EPUB 3 with audio. These books contain structured navigation and sound files so that the text includes synchronized audio narration (synthetic narration only), similar to DAISY books. For systems that do not support the audio overlays, the EPUB files will work as regular EPUB books and will be readable with any software that supports EPUB.</p>
<p>EPUB format can be read by almost all reading software, including newer DAISY players and Kurzweil. The only notable device lacking integrated support for the EPUB format is the Amazon Kindle, although there has recently been speculation that the Kindle will soon support this format. Because an EPUB is HTML-based, screenreader users can easily access and navigate a structured web document through a browser.</p>
<p>For analysis of reading systems, please see the Reading Systems Accessibility Support Roundup.</p>
<h2><a name="doc"></a>DOC</h2>
<p>NNELS often publishes titles in DOC/DOCX format. Microsoft Word is a popular format with users, as it is familiar, it has 500% magnification with reflow, can change foreground and background colours easily and is amenable to text to speech. DOC files can be opened in a variety of programs, not just Microsoft Word.&nbsp;</p>
<h2><a name="rtf"></a>RTF</h2>
<p>The Rich Text Format (RTF) is a text file format that can be read with a variety of programs. Most word processors are able to read and write some versions of RTF.&nbsp;</p>
<h2><a name="pdf"></a>PDF</h2>
<p>PDF is typically requested when a reader would like the digital copy to look exactly like the print book.&nbsp;</p>
<p>PDF is still a common file format for publishing, and most of the PDF files in NNELS come directly from publishers. The level of accessibility for PDFs provided in NNELS varies. Publisher-provided PDF files may not always work well with assistive technology due to fewer accessibility options with text reflow and navigation often being absent.</p>
<p>Our PDF files should always be text-readable, allowing text-to-speech reading, but it is common for us to change PDF files to a different format at the request of a reader.</p>
<h2><a name="other"></a>Other Formats</h2>
<p>NNELS can provide electronic text in any other electronic format to be used with refreshable Braille devices, or Braillers.</p>
<p>We encourage Large Print users to make use of our DOC and EPUB files (where text can be enlarged).</p>
<p>You may find BRF (Braille Ready File) and other formats in the NNELS collection that we have acquired but generally do not produce. BRF is a standard format that renders contracted UEB Braille code onto a Braille display.</p>
<p>If you need a specific format not listed, or need a format with certain specifications and it is not already available, please request it and we will do what we can.</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_summary' => '',
      ),
    ),
    'fr' => array(
      0 => array(
        'value' => '<p>**Version française à venir.**</p>
<h2>DAISY</h2>
<p>DAISY (Digital Accessible Information SYstem) is an accessible book standard that usually includes navigation features not commonly found in standard audiobooks. Most commonly, these navigation features include full-text searching and page navigation. They may also include footnotes, indexes, and tables of contents.</p>
<p>DAISY books may include:</p>
<ul>
	<li><strong>both text and audio</strong>: These titles permit full-text searching, and are the ones most commonly produced by NNELS. These titles use synthetic narration and can be identified by the narrator beginning with the word &quot;Apple&quot;, as in &quot;Apple Alex&quot; or &quot;Apple Samantha&quot;, or &quot;Scansoft&quot;, as in &quot;Scansoft Daniel&quot;. Some software or devices ignore the pre-made audio in favour of built-in text-to-speech features.</li>
	<li><strong>audio only</strong>: Navigation is typically limited to chapter and section navigation and there is no full-text searching. These titles are produced by NNELS using live narration.</li>
	<li><strong>text only: </strong>The software or device will use text-to-speech capabilities. Text-only DAISY is rare in the NNELS collection and is usually identified as such on the title details page.</li>
</ul>
<p>NNELS produces two kinds of DAISY books: DAISY 2.02 and DAISY 3. DAISY 2.02 is an older standard and these books work with older DAISY players. DAISY 3 books are most likely to work with newer devices.</p>
<p>DAISY can be burned to CDs (see our <a href="https://nnels.ca/help/tutorial-burn-daisy-disc-windows">Burn a DAISY disc tutorial</a>) and unlike traditional audiobooks which can be on 10 or more CDs, the contents of DAISY audiobooks usually onto a single CD, making them easy to handle by people who can&#39;t read the CD numbers of traditional audiobooks. While NNELS does not provide CDs directly, please speak with your public library if you require titles in this format.</p>
<p>DAISY books can also be played on almost any computer or device using <a href="/help/download">apps or software</a>, and transferred between devices using <a href="/help/tutorial-transferring-files-usb-or-flash-drive">USB sticks and SD cards</a>.</p>
<h2>MP3 Audio</h2>
<p>Many live narration audiobooks in NNELS are in MP3 format, and all MP3 audiobooks in NNELS are produced using live narration. Most MP3 audiobooks will also contain one or more playlist files to ensure the tracks play in the correct order. They do not contain special navigation features or permit full-text searching.</p>
<p>MP3 audiobooks are compatible with almost any computer or device. They can also be played on an MP3 player, or any other device that can play audio files.</p>
<p>MP3 can also be burned onto a CD in the same way a DAISY book can, and DAISY players can play an MP3 audiobook.</p>
<p>Most newer CD players will play MP3 audiobooks, which will usually fit onto a single CD so long as they are burned as &quot;data&quot; CDs. Books that are larger than 700 MB will require more than one CD.</p>
<p>Older CD players may not work with MP3 audiobooks, and for these players, burn CDs as &quot;audio&quot; instead of &quot;data&quot;. When creating &quot;audio&quot; CDs, the audiobook will likely not fit onto a single disc unless it is less than 80 minutes long. The number of CDs required is determined by the length of each track, and most blank CDs can accomodate 80 minutes of playing time. Therefore, these audiobooks need to be burned in batches of 80-minutes or less. Please call or write to us if you have questions (that&#39;s what we&#39;re here for).</p>
<p>All DAISY titles in NNELS contain MP3 audio files, so it is possible to create MP3 or traditional audiobooks from DAISY books. Please see the <a href="/what-if-patron-wants-audio-isnt-familiar-daisy-can-we-provide-mp3">forum post on providing MP3 when only DAISY is available</a> for more information.</p>
<h2>E-text</h2>
<p>Electronic text or e-text, may be found in a variety of formats, including RTF, DOC, DOCX, and HTML.</p>
<p>NNELS generally produceds RTF because it works well with most software and hardware. For larger books, NNELS often publishes titles in DOCX format because the files are smaller than RTF. That said, if you need a book that is not in a format you can use, please let us know so we can create it for you and add it to our collection.</p>
<p>All synthetic-narration DAISY books in NNELS contain a full-text version of the book, typically the &quot;contents.html&quot; file. To customize the display, this HTML file can be opened with word processing programs or browsers and manipulated from there (e.g. change font, size, spacing, margins, etc.).</p>
<h2>EPUB</h2>
<p>EPUB 2 and EPUB 3 are available for some titles, usually when contributed by, or purchased from, a publisher.</p>
<p>EPUB 3 works as a text format in most newer DAISY players, particularly as a substitute for text-only DAISY 3.</p>
<p>NNELS produces a format called &quot;EPUB 3 (media overlays)&quot;. These books&nbsp; contain sound files so that the text includes synchronized audio narration (synthetic narration only), similar to DAISY books. For systems that do not support the audio overlays, the EPUB files with media overlays work as regular EPUB books and are readable with any software that supports EPUB. For analysis of reading systems and how well they support EPUB 3 with Media Overlays, please see the <a href="http://epubtest.org/testsuite/epub3/">EPUBTest website</a>. We use the latest version of <a href="https://www.adobe.com/solutions/ebook/digital-editions.html">Adobe Digital Editions</a>, which works well.</p>
<h2>PDF</h2>
<p>PDF is typically requested when a reader would like the digital copy to look exactly like the print book. However, PDF is generally difficult to read on smaller screens because the text arrangement is like that on a printed page, with no ability to wrap the lines to the screen. Reading PDF files on smaller screens generally involves a lot of scrolling back and forth across the lines of a page.</p>
<p>PDF files do not always work well with assistive technology, but are a common file format for publishing, and most of the PDF files in NNELS come directly from publishers.</p>
<p>The level of accessibility for PDFs provided in NNELS varies. Our PDF files should always be text-readable, allowing text-to-speech reading, but it is common for us to change PDF files to a different format at the request of a reader.</p>
<h2>Other Formats</h2>
<p>NNELS can provide e-text in RTF or any other e-text format to be used with refreshable Braille devices, or Braillers.</p>
<p>We encourage Large Print users to make use of our e-text (where text can be enlarged).</p>
<p>You may find BRF (Braille Ready File) and other formats in the NNELS collection that we have acquired but generally do not produce.</p>
<p>If you need a specific format not listed, or need a format with certain specifications and it is not already available, please request it and we will do what we can.</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_categories' => array(
    'fr' => array(
      0 => array(
        'tid' => '1ea0be07-2ad0-4e69-8577-17c1df4190fa',
        'uuid' => '1ea0be07-2ad0-4e69-8577-17c1df4190fa',
      ),
    ),
  ),
  'field_question_full' => array(),
  'title_field' => array(
    'en' => array(
      0 => array(
        'value' => 'Formats',
        'format' => NULL,
      ),
    ),
    'fr' => array(
      0 => array(
        'value' => 'Formats',
        'format' => NULL,
      ),
    ),
  ),
  'rdf_mapping' => array(
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
  ),
  'path' => array(
    'pathauto' => FALSE,
    'alias' => 'help/formats-faq',
  ),
  'translations' => array(
    'original' => 'en',
    'data' => array(
      'en' => array(
        'entity_type' => 'node',
        'language' => 'en',
        'source' => '',
        'status' => 1,
        'translate' => 0,
        'created' => 1430185994,
        'entity_uuid' => '5148f1e1-2f19-44e4-80a1-46a5e9637567',
        'user_uuid' => 'b1287792-d3d8-4e7f-98ec-57c0c6b38d82',
      ),
      'fr' => array(
        'entity_type' => 'node',
        'language' => 'fr',
        'source' => 'en',
        'status' => 1,
        'translate' => 0,
        'created' => 1506567637,
        'entity_uuid' => '5148f1e1-2f19-44e4-80a1-46a5e9637567',
        'user_uuid' => '8d7f3251-4391-4b50-9d01-b8a3ed741847',
      ),
    ),
  ),
  'comment_count' => 0,
  'date' => '2015-04-27 18:53:14 -0700',
  'user_uuid' => 'b1287792-d3d8-4e7f-98ec-57c0c6b38d82',
);
  $nodes[] = array(
  'title' => 'Help',
  'log' => '',
  'status' => 0,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'en',
  'created' => 1461367415,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '68bf2c47-28e5-458f-8b3f-fe5d31e1f040',
  'body' => array(
    'en' => array(
      0 => array(
        'value' => '<p>For technical help, please contact your local library, or contact <a href="/contact/">NNELS Support</a>.</p>
<h3><a href="/help/introduction/">Introduction to NNELS</a></h3>
<p>General information for people new to NNELS or looking for a brief introduction to what we&rsquo;re here for.</p>
<h3><a href="/help/sign-up/">Signing Up</a></h3>
<p>To use NNELS, you must have a print disability, live in a participating Canadian province or territory, and have a library card. Once you have an account with NNELS, you can download books yourself, have a friend or family member download books on your behalf, or ask the library to download books for you.</p>
<h3><a href="#">Searching</a></h3>
<p>You can use the Keyword Search to find authors, titles, narrators, subjects, and more. We are also proud of our collections: literary award winners, summer reading club books for kids, and other books of note. Use filters to limit your searches to specific formats for e-text (RTF, EPUB, PDF) or audio (MP3 or DAISY).</p>
<h3><a href="#">Download &amp; Read</a></h3>
<p>Our books will work with just about any player or device you have. We have directions here for the most common scenarios. If you don&rsquo;t find what you&rsquo;re looking for, <send a="" note="" us="">.</send></p>
<h3><a href="#">Troubleshooting</a></h3>
<h3><a href="#">Our Formats</a></h3>
<h3><a href="#">Booklists and Collections</a></h3>
<p>&nbsp;</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_summary' => '',
      ),
    ),
  ),
  'title_field' => array(
    'en' => array(
      0 => array(
        'value' => 'Help',
        'format' => NULL,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'foaf:Document',
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
  ),
  'path' => array(
    'pathauto' => FALSE,
    'alias' => 'help-main',
  ),
  'translations' => array(
    'original' => 'en',
    'data' => array(
      'en' => array(
        'entity_type' => 'node',
        'language' => 'en',
        'source' => '',
        'status' => 1,
        'translate' => 0,
        'created' => 1461367415,
        'entity_uuid' => '68bf2c47-28e5-458f-8b3f-fe5d31e1f040',
        'user_uuid' => '8d7f3251-4391-4b50-9d01-b8a3ed741847',
      ),
    ),
  ),
  'comment_count' => 0,
  'date' => '2016-04-22 16:23:35 -0700',
  'user_uuid' => '8d7f3251-4391-4b50-9d01-b8a3ed741847',
);
  $nodes[] = array(
  'title' => 'Tutorials',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'en',
  'created' => 1373563074,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '927ef71e-5af8-4406-9857-2a8ca2895d21',
  'body' => array(
    'en' => array(
      0 => array(
        'value' => '<p>These tutorials were created by NNELS partners, by users of the system, and by third parties. We welcome feedback, suggestions, and contributions: <a href="mailto:support@nnels.ca">support@nnels.ca</a></p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_summary' => '',
      ),
    ),
    'fr' => array(
      0 => array(
        'value' => '<p>Vous trouverez ici des tutoriels élaborés par des partenaires du RNSBE et des utilisateurs du système, et des recommandations de contenus produits par des tiers.</p>
<p>Nous apprécions tous commentaires ou toutes contributions au développement du soutien que nous offrons à tous. Afin de nous faire parvenir des suggestions ou des liens vers des tutoriels que vous avez produits, veuillez nous envoyer un courriel au <a href="mailto:support@nnels.ca">support@nnels.ca</a>.</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_summary' => '',
      ),
    ),
  ),
  'title_field' => array(
    'en' => array(
      0 => array(
        'value' => 'Tutorials',
        'format' => NULL,
      ),
    ),
    'und' => array(
      0 => array(
        'value' => 'NNELS Tutorials',
        'format' => NULL,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'foaf:Document',
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
  ),
  'translations' => array(
    'original' => 'en',
    'data' => array(
      'en' => array(
        'entity_type' => 'node',
        'language' => 'en',
        'source' => '',
        'status' => 1,
        'translate' => 0,
        'created' => 1373563074,
        'entity_uuid' => '927ef71e-5af8-4406-9857-2a8ca2895d21',
        'user_uuid' => 'ebccde49-e27b-4e2e-850b-705dade46d28',
      ),
      'fr' => array(
        'entity_type' => 'node',
        'language' => 'fr',
        'source' => 'en',
        'status' => 1,
        'translate' => 0,
        'created' => 1392305602,
        'entity_uuid' => '927ef71e-5af8-4406-9857-2a8ca2895d21',
        'user_uuid' => 'ebccde49-e27b-4e2e-850b-705dade46d28',
      ),
    ),
  ),
  'comment_count' => 0,
  'path' => array(
    'pathauto' => FALSE,
    'alias' => 'tutorials',
  ),
  'date' => '2013-07-11 10:17:54 -0700',
  'user_uuid' => 'ebccde49-e27b-4e2e-850b-705dade46d28',
);
  $nodes[] = array(
  'title' => 'Tutorial: Burn MP3 or Audio CD',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'tutorial_slideshow',
  'language' => 'en',
  'created' => 1430266728,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'cda513d5-fb9b-4974-b3da-ea2a0e2d23e9',
  'body' => array(
    'en' => array(
      0 => array(
        'value' => '<p>What you need:</p>
<ul>
	<li>A copy of the files&nbsp;<a href="https://nnels.ca/help/tutorial-how-download-and-unzip-daisy-book">downloaded and unzipped</a> on your computer.</li>
	<li>A computer with a CD burner.</li>
	<li>One or more blank CDs. Go ahead and insert one into your CD burner drive.</li>
</ul>
<p>If you are using a source of books other than NNELS, please follow any instructions provided by that service. For example, Overdrive tells you where to find Overdrive audiobooks in their<a href="http://help.overdrive.com/customer/portal/articles/1481238-how-to-transfer-mp3-audiobooks-to-a-device-that-isn-t-showing-up-in-the-overdrive-media-console-transfer-wizard-on-a-windows-computer"> transfer Overdrive MP3 to your device tutorial</a>.</p>
<h2>Audio vs. Data CD</h2>
<p>Use "audio" CDs only for older CD players in homes and vehicles, particularly those which cannot read MP3 format. For DAISY players and newer CD players, always burn the files as "data" instead of "audio". Why? An "audio" CD is time-based, which means that it will hold about 80 minutes of audio. If you have a 10-hour book, you will need a lot of CDs. A "data" CD is based on file size, and holds about 700 MB of data. Therefore, our MP3 and DAISY audiobooks typically fit onto a single disc; sometimes two are needed for very long books.</p>
<p>If there are too many audio tracks for a single CD, your computer will likely give you the option to burn to more than one disc.</p>
<p>There are a number of free programs that allow burning of audio CDs, but we will cover the ones that typically come with the computer.</p>
<p>Please note: some audiobooks from our partner organizations may have numerous MP3 files separated into folders. When burning a CD, make sure you move all the audio files into a single folder before you burn them: you need the MP3 files, but you need them together, not separated into folders.</p>
<h3>In Windows</h3>
<ol>
	<li>Open Windows Media Player.</li>
	<li>Click on the "Burn" tab in the top right-hand corner.</li>
	<li>Set to Audio or Data CD (as explained above). If not, click on the burn options button and select it.</li>
	<li>Add files by drag and drop (from the Library or Windows Explorer).
		<ul>
			<li>If available, you might find it easier to right click on a playlist (.m3u) file in Windows Explorer and choose "Add to Windows Media Player list"</li>
			<li>Then in the "Burn" tab, click on "Import playlist".</li>
		</ul>
	</li>
	<li>Order the files (drag or right click on track) and remove any unwanted files (delete key or right click on track).</li>
	<li>When ready, click on "Start burn".</li>
</ol>
<p><img alt="" src="https://nnels.ca/system/files/wmp-burn-cd.png" style="width:auto;height:auto;"></p>
<p>Please also see the <a href="http://windows.microsoft.com/en-ca/windows/burn-cd-dvd-media-player-faq">Microsoft Burn a CD or DVD in Windows Media Player tutorial</a>.</p>
<h2>On Mac</h2>
<p>If you need instructions on creating a playlist file, please see the <a href="https://support.apple.com/kb/PH19486">Apple Creating a playlist file tutorial</a>.</p>
<ol>
	<li>Open iTunes.</li>
	<li>Create a playlist file (or click on an existing one).</li>
	<li>Go to File, then "Burn playlist to Disc".</li>
	<li>Choose your options for Audio CD.</li>
	<li>Click on "Burn".</li>
</ol>
<p>Please also see the <a href="https://support.apple.com/kb/PH19494">Apple Create your own CDs and DVDs tutorial</a>.</p>
<p>&nbsp;</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_slide' => array(),
  'field_image' => array(),
  'field_file_attachment' => array(),
  'field_categories' => array(
    'en' => array(
      0 => array(
        'tid' => 'b0be16dd-48f3-4753-940f-899f1c428cf5',
        'uuid' => 'b0be16dd-48f3-4753-940f-899f1c428cf5',
      ),
    ),
  ),
  'title_field' => array(
    'en' => array(
      0 => array(
        'value' => 'Tutorial: Burn MP3 or Audio CD',
        'format' => NULL,
      ),
    ),
  ),
  'metatags' => array(
    'en' => array(
      'description' => array(
        'value' => '',
      ),
      'dcterms.description' => array(
        'value' => 'A guide on how to burn MP3 or audio CDs from NNELS downloads',
      ),
    ),
  ),
  'rdf_mapping' => array(
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
  ),
  'path' => array(
    'pathauto' => TRUE,
  ),
  'translations' => array(
    'original' => 'en',
    'data' => array(
      'en' => array(
        'entity_type' => 'node',
        'language' => 'en',
        'source' => '',
        'status' => 1,
        'translate' => 0,
        'created' => 1430266728,
        'entity_uuid' => 'cda513d5-fb9b-4974-b3da-ea2a0e2d23e9',
        'user_uuid' => 'b1287792-d3d8-4e7f-98ec-57c0c6b38d82',
      ),
    ),
  ),
  'comment_count' => 0,
  'date' => '2015-04-28 17:18:48 -0700',
  'user_uuid' => 'b1287792-d3d8-4e7f-98ec-57c0c6b38d82',
);
  $nodes[] = array(
  'title' => 'Tutoriels',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'en',
  'created' => 1420221253,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'd63ee29c-8da5-4048-843f-5ea3c275cb16',
  'body' => array(
    'en' => array(
      0 => array(
        'value' => '<h2>Getting Started</h2>
<ul>
	<li><a href="/help/formats">About NNELS formats </a></li>
	<li><a href="help/tutorial-how-download-and-unzip-zipped-book">Download and unzip files </a></li>
</ul>
<h2>How do you read?</h2>
<ol>
	<li>
		<h3>Smartphone or Tablet</h3>
		<ul>
			<li>Recommended apps:
				<ul>
					<li><a href="/help/tutorial-using-voicedream-app-read-books/">Voice Dream Reader</a> for iOS and Android</li>
					<li><a href="https://yourdolphin.com/products/individuals/easyreader-app">Dolphin EasyReader</a> for iOS and Android</li>
				</ul>
			</li>
		</ul>
	</li>
	<li>
		<h3>DAISY player</h3>
		<ul>
			<li><a href="/help/tutorial-burn-daisy-disc-windows">Burn a DAISY disc</a></li>
			<li><a href="/help/tutorial-transferring-files-usb-or-flash-drive">Using USB keys or flash drives</a></li>
			<li><a href="/help/tutorial-transferring-daisy-books-victor-reader-stream">Transfer to a Victor Reader Stream (via SD card or USB)</a></li>
			<li><a href="/help/tutorial-transferring-daisy-books-sansa-clip">Transfer to a Sansa Clip+</a></li>
		</ul>
	</li>
	<li>
		<h3>Computer or Laptop</h3>
		<ul>
			<li><a href="/help/daisy-software-your-computer-or-laptop">Using DAISY software</a></li>
			<li><a href="/help/tutorial-listen-nnels-daisy-or-mp3-book-your-computers-audio-program">Using your computer\'s audio program</a> (MP3 or DAISY)</li>
			<li>Transfer a book to another computer:
				<ul>
					<li><a href="/help/tutorial-transferring-files-usb-or-flash-drive">With a USB or flash drive</a> (any file)</li>
					<li><a href="/help/tutorial-burn-daisy-disc-windows">With a CD</a> (any file)</li>
				</ul>
			</li>
		</ul>
	</li>
	<li>
		<h3>CD player</h3>
		<ul>
			<li><a href="help/tutorial-burn-mp3-or-audio-cd">Burn an audio CD</a></li>
		</ul>
	</li>
</ol>
<h2>eBook Reading App Reviews</h2>
<p>Check out our <a href="https://nnels.ca/help/app-tutorials">reading app review videos</a> to learn more about the popular reading apps. You can also read our <a href="https://www.accessiblepublishing.ca/reading-app-reports/">reports on various library reading apps here</a>.</p>
<p>The DAISY Consortium\'s app reviews may also be of interest:</p>
<ul>
	<li><a href="https://inclusivepublishing.org/rs-accessibility/">Reading System Accessibilty Support Roundup</a></li>
	<li><a href="http://epubtest.org/">Reading System Accessibility Evaluations</a></li>
</ul>
<h2>Device Accessibility Features</h2>
<p>Learn to use built-in accessibility features for:</p>
<ul>
	<li><a href="https://support.google.com/accessibility/android/?hl=en#">Android</a></li>
	<li><a href="https://www.apple.com/accessibility/">Apple </a></li>
	<li><a href="https://www.microsoft.com/en-us/accessibility/windows">Windows</a></li>
</ul>
<p>What are we missing? Please <a href="mailto:support@nnels.ca">email us</a> with corrections and suggestions!</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_summary' => '',
      ),
    ),
    'fr' => array(
      0 => array(
        'value' => '<h2>Getting Started</h2>
<ul>
	<li><a href="/help/formats">About NNELS formats </a></li>
	<li><a href="help/tutorial-how-download-and-unzip-zipped-book">Download and unzip files </a></li>
</ul>
<h2>How do you read?</h2>
<ol>
	<li>
		<h3>Smartphone or Tablet</h3>
		<ul>
			<li>Recommended apps:
				<ul>
					<li><a href="/help/tutorial-using-voicedream-app-read-books/">Voice Dream Reader</a> for iOS and Android</li>
					<li><a href="https://yourdolphin.com/products/individuals/easyreader-app">Dolphin EasyReader</a> for iOS and Android</li>
				</ul>
			</li>
		</ul>
	</li>
	<li>
		<h3>DAISY player</h3>
		<ul>
			<li><a href="/help/tutorial-burn-daisy-disc-windows">Burn a DAISY disc</a></li>
			<li><a href="/help/tutorial-transferring-files-usb-or-flash-drive">Using USB keys or flash drives</a></li>
			<li><a href="/help/tutorial-transferring-daisy-books-victor-reader-stream">Transfer to a Victor Reader Stream (via SD card or USB)</a></li>
			<li><a href="/help/tutorial-transferring-daisy-books-sansa-clip">Transfer to a Sansa Clip+</a></li>
		</ul>
	</li>
	<li>
		<h3>Computer or Laptop</h3>
		<ul>
			<li><a href="/help/daisy-software-your-computer-or-laptop">Using DAISY software</a></li>
			<li><a href="/help/tutorial-listen-nnels-daisy-or-mp3-book-your-computers-audio-program">Using your computer\'s audio program</a> (MP3 or DAISY)</li>
			<li>Transfer a book to another computer:
				<ul>
					<li><a href="/help/tutorial-transferring-files-usb-or-flash-drive">With a USB or flash drive</a> (any file)</li>
					<li><a href="/help/tutorial-burn-daisy-disc-windows">With a CD</a> (any file)</li>
				</ul>
			</li>
		</ul>
	</li>
	<li>
		<h3>CD player</h3>
		<ul>
			<li><a href="help/tutorial-burn-mp3-or-audio-cd">Burn an audio CD</a></li>
		</ul>
	</li>
</ol>
<h2>eBook Reading App Reviews</h2>
<p>Check out our <a href="https://nnels.ca/help/app-tutorials">reading app review videos</a> to learn more about the popular reading apps. You can also read our <a href="https://www.accessiblepublishing.ca/reading-app-reports/">reports on various library reading apps here</a>.</p>
<p>The DAISY Consortium\'s app reviews may also be of interest:</p>
<ul>
	<li><a href="https://inclusivepublishing.org/rs-accessibility/">Reading System Accessibilty Support Roundup</a></li>
	<li><a href="http://epubtest.org/">Reading System Accessibility Evaluations</a></li>
</ul>
<h2>Device Accessibility Features</h2>
<p>Learn to use built-in accessibility features for:</p>
<ul>
	<li><a href="https://support.google.com/accessibility/android/?hl=en#">Android</a></li>
	<li><a href="https://www.apple.com/accessibility/">Apple </a></li>
	<li><a href="https://www.microsoft.com/en-us/accessibility/windows">Windows</a></li>
</ul>
<p>What are we missing? Please <a href="mailto:support@nnels.ca">email us</a> with corrections and suggestions!</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_summary' => '',
      ),
    ),
  ),
  'title_field' => array(
    'en' => array(
      0 => array(
        'value' => 'Tutorials',
        'format' => NULL,
      ),
    ),
    'fr' => array(
      0 => array(
        'value' => 'Tutoriels',
        'format' => NULL,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'foaf:Document',
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
  ),
  'path' => array(
    'pathauto' => FALSE,
    'alias' => 'help',
  ),
  'translations' => array(
    'original' => 'en',
    'data' => array(
      'en' => array(
        'entity_type' => 'node',
        'language' => 'en',
        'source' => '',
        'status' => 1,
        'translate' => 0,
        'created' => 1420221253,
        'entity_uuid' => 'd63ee29c-8da5-4048-843f-5ea3c275cb16',
        'user_uuid' => '8d7f3251-4391-4b50-9d01-b8a3ed741847',
      ),
      'fr' => array(
        'entity_type' => 'node',
        'language' => 'fr',
        'source' => 'en',
        'status' => 1,
        'translate' => 0,
        'created' => 1574235263,
        'entity_uuid' => 'd63ee29c-8da5-4048-843f-5ea3c275cb16',
        'user_uuid' => 'f2084901-3999-4a98-b4d7-9c92d218921c',
      ),
    ),
  ),
  'comment_count' => 0,
  'date' => '2015-01-02 09:54:13 -0800',
  'user_uuid' => '8d7f3251-4391-4b50-9d01-b8a3ed741847',
);
  return $nodes;
}
