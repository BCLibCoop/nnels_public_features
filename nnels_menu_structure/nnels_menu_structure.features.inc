<?php

/**
 * @file
 * nnels_menu_structure.features.inc
 */

/**
 * Implements hook_menu_position_default_menu_positions().
 */
function nnels_menu_structure_menu_position_default_menu_positions() {
  $items = array(
    'video_tutorials' => array(
      'admin_title' => 'Video Tutorials',
      'enabled' => 1,
      'conditions' => 'a:0:{}',
      'menu_name' => 'main-menu',
      'plid' => 928,
      'mlid' => 1238,
      'weight' => 0,
      'machine_name' => 'video_tutorials',
    ),
  );
  return $items;
}
