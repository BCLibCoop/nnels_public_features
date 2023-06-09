<?php

/**
 * @file
 * nnels_tutorials_faqs.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function nnels_tutorials_faqs_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Menu for Help Portal';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'menu_for_help_portal';
  $fe_block_boxes->body = '<div class="block-content" role="navigation">
	<div class="view view-help-categories view-id-help_categories help-categories">
		<div class="view-content">
			<div class="view-list">
				<ul class="view-list-ul">
					<li><a href="/help/getting-started">Getting Started</a></li>
					<li class="views-field views-field-name-i18n"><a href="/help/finding-books">Find Books</a></li>
					<li class="views-field views-field-name-i18n"><a href="http://nnels.ca/help/formats">Understanding Formats</a></li>
					<li class="views-field views-field-name-i18n"><a href="/help/download">Download and Read Books</a></li>
					<li class="views-field views-field-name-i18n"><a href="/help/app-tutorials">Reading App and Ebook Videos</a></li>
					<li class="views-field views-field-name-i18n"><a href="/volunteer">Contribute and Record Books</a></li>
					<li class="views-field views-field-name-i18n"><a href="/help/library-staff">FAQ for Library Staff</a></li>
					<li class="views-field views-field-name-i18n"><a href="/help/other-questions">Other Questions</a></li>
					<li class="views-field views-field-name-i18n"><a href="/help/legal">Legal</a></li>
				</ul>
			</div>
		</div>
	</div>
</div>
<p>&nbsp;</p>
';

  $export['menu_for_help_portal'] = $fe_block_boxes;

  return $export;
}
