<?php
/**
 * @file
 * lacuna_stories_materials.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function lacuna_stories_materials_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'tour_on_enrollment';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'course/*' => 'course/*',
      ),
    ),
  );
  $context->reactions = array(
    'joyride_add' => array(
      'joyride_auto_start' => 1,
      'joyride_play_once' => 0,
      'joyride_tour_content' => '<li data-id="menu-258-1" data-text="Next" class="custom" data-options="modal: true">
  <h2>Stop #1</h2>
  <p>You can control all the details for you tour stop. Any valid HTML will work inside of Joyride.</p>
</li>',
    ),
  );
  $context->condition_mode = 0;
  $export['tour_on_enrollment'] = $context;

  return $export;
}
