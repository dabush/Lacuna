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
      'joyride_tour_content' => '<li data-button="Next">
  <h2>Welcome to Your Lacuna Course!</h2>
  <p>To get a tour of Lacuna and its features, click Next.</em></p>
</li><li data-id="menu-258-1" data-text="Next" class="custom">
  <h2>Reading on Lacuna</h2>
  <p>To access course materials (readings), hover over the <em>Explore</em> tab, then click <em>Materials.</em></p>
</li>
<li data-id="menu-258-1" data-text="Next" class="custom">
  <h2>Student Writing</h2>
  <p>To access the writing and responses of your classmates, hover over the <em>Explore</em> tab, then click <em>Responses.</em></p>
</li>
<li data-id="menu-256-1" data-text="Next" class="custom">
  <h2>Student Writing</h2>
  <p>To write a post or response of your own, hover over the <em>Create</em> tab, then click <em>Write a Response.</em></p>
</li>
<li data-id="menu-255-1" data-text="Next" class="custom">
  <h2>Peer Groups</h2>
  <p>In addition to sharing annotations with everyone and with your instructor, you can share them with a peer group: a sub-group within a course organized by users like you or by the instructor. To create and view peer groups, hover over the Connect tab, then click on Peer Groups.</p>
</li>
<li data-id="menu-250-1" data-button="Close" class="custom">
  <h2>Annotations Dashboard</h2>
  <p>Finally, you can get a bird\'s-eye view of all of the annotations made in your course by hovering over the Reflect tab and clicking on Annotations Dashboard</p>
</li>',
    ),
  );
  $context->condition_mode = 0;
  $export['tour_on_enrollment'] = $context;

  return $export;
}
