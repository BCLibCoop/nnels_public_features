<?php

/**
 * @file
 * nnels_public_blocks.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function nnels_public_blocks_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Footer - Contact';
  $fe_block_boxes->format = 'block_text';
  $fe_block_boxes->machine_name = 'footer_contact';
  $fe_block_boxes->body = '<h3>Questions about NNELS? Contact us!</h3>
<p>Email: <a href="mailto:support@nnels.ca" target="_self">support@nnels.ca</a></p>
<p>Phone: 1.888.848.9250, 9-4 Pacific Time, Monday to Friday</p>
<p>Follow us: <a href="https://twitter.com/nnelsca">Twitter</a> and <a href="https://www.facebook.com/nnels.ca">Facebook</a><p>
<p><a href="https://secure.campaigner.com/CSB/Public/Form.aspx?fid=1414685">Subscribe</a> to our newsletter.</p>';

  $export['footer_contact'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Header - Logo';
  $fe_block_boxes->format = 'block_text';
  $fe_block_boxes->machine_name = 'header_logo';
  $fe_block_boxes->body = '<a class = "home-link" href="//nnels.ca" target="_self">
<img src="/sites/default/themes/NNELS_CALS_v001/images/NNELS-Header-Logo-CC0000.png" alt="NNELS logo" width="220" height="160">
</a>
<h1 class = "site-title">National Network for<br/>Equitable Library Service</h1>
<h2 class = "site-subtitle">The Canadian Accessible Library System</h2>
';

  $export['header_logo'] = $fe_block_boxes;

  return $export;
}
