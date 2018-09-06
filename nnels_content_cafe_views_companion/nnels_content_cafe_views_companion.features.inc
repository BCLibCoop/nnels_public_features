<?php
/**
 * @file
 * nnels_content_cafe_views_companion.features.inc
 */

/**
 * Implements hook_views_api().
 */
function nnels_content_cafe_views_companion_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function nnels_content_cafe_views_companion_image_default_styles() {
  $styles = array();

  // Exported image style: book_cover__300x450_.
  $styles['book_cover__300x450_'] = array(
    'label' => 'Book Cover (300x450)',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 300,
          'height' => 450,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: book_cover__50x75_.
  $styles['book_cover__50x75_'] = array(
    'label' => 'Book Cover (50x75)',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 50,
          'height' => 75,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
