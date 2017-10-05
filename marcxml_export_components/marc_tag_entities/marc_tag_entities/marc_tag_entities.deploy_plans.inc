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
  $plan->name = 'entity_deployment';
  $plan->title = 'Entity Deployment';
  $plan->description = '';
  $plan->debug = 1;
  $plan->aggregator_plugin = 'DeployAggregatorManaged';
  $plan->aggregator_config = array(
    'delete_post_deploy' => 0,
  );
  $plan->fetch_only = 1;
  $plan->processor_plugin = '';
  $plan->processor_config = array();
  $plan->endpoints = array();
  $plan->dependency_plugin = 'default_iterator';
  $export['entity_deployment'] = $plan;

  return $export;
}
