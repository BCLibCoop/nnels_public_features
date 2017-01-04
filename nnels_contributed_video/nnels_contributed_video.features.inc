<?php
/**
 * @file
 * nnels_contributed_video.features.inc
 */

/**
 * Implements hook_views_api().
 */
function nnels_contributed_video_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function nnels_contributed_video_node_info() {
  $items = array(
    'contributed_video' => array(
      'name' => t('Contributed Video'),
      'base' => 'node_content',
      'description' => t('Accessible videos hosted for partner organizations, not directly related to the NNELS website or NNELS workflows.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implements hook_video_default_presets().
 */
function nnels_contributed_video_video_default_presets() {
  $items = array(
    'NNELS  default' => array(
      'name' => 'NNELS  default',
      'description' => '',
      'settings' => array(
        'video_extension' => 'mov',
        'video_codec' => 'h264',
        'video_preset' => 'libx264-default',
        'video_quality' => 5,
        'video_speed' => 2,
        'wxh' => '640x360',
        'video_aspectmode' => 'preserve',
        'video_upscale' => 0,
        'audio_codec' => 'aac',
        'audio_quality' => 5,
        'deinterlace' => 'detect',
        'max_frame_rate' => '',
        'frame_rate' => '',
        'keyframe_interval' => '',
        'video_bitrate' => '',
        'bitrate_cap' => '',
        'buffer_size' => '',
        'one_pass' => 0,
        'skip_video' => 0,
        'pixel_format' => '',
        'h264_profile' => '',
        'audio_bitrate' => '',
        'audio_channels' => 2,
        'audio_sample_rate' => '',
        'skip_audio' => 0,
        'video_watermark_enabled' => 0,
        'video_watermark_fid' => 0,
        'video_watermark_x' => 5,
        'video_watermark_y' => 5,
        'video_watermark_width' => '',
        'video_watermark_height' => '',
        'video_watermark_origin' => 'content',
        'autolevels' => 0,
        'deblock' => 0,
        'denoise' => '',
        'clip_start' => '',
        'clip_length' => '',
      ),
    ),
  );
  return $items;
}
