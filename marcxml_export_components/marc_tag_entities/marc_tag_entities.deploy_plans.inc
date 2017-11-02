<?php
/**
 * @file
 * marc_tag_entities.deploy_plans.inc
 */

/**
 * Implements hook_deploy_plans_default().
 */
function marc_tag_entities_deploy_plans_default() {
  $export = array();

  $plan = new DeployPlan();
  $plan->disabled = FALSE; /* Edit this to true to make a default plan disabled initially */
  $plan->api_version = 1;
  $plan->name = 'entity_views_deploy';
  $plan->title = 'Entity Views Deploy';
  $plan->description = '';
  $plan->debug = 0;
  $plan->aggregator_plugin = 'DeployAggregatorViews';
  $plan->aggregator_config = array(
    'view_name' => 'deployment_version_marc_tags_entity_view',
  );
  $plan->fetch_only = 1;
  $plan->processor_plugin = '';
  $plan->processor_config = array();
  $plan->endpoints = array();
  $plan->dependency_plugin = 'default_iterator';
  $export['entity_views_deploy'] = $plan;

  return $export;
}
