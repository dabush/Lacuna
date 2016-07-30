<?php
/**
 * @file
 * Returns the HTML for a Thread node.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728164
 */
?>
<article class="node-<?php print $node->nid; ?> <?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <?php if ($title_prefix || $title_suffix || $display_submitted || $unpublished || !$page && $title): ?>
    <header>
      <?php print render($title_prefix); ?>
      <?php if (!$page && $title): ?>
        <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
      <?php endif; ?>
      <?php print render($title_suffix); ?>

      <?php if ($display_submitted): ?>
      <div class = "thread-title">
        <?php print drupal_get_title(); ?>
      </div>
      <div class="submitted response-user-information">
        <?php print $user_picture; ?>
        <div class="thread-username-and-date">
          <?php print $name; ?>
          <br>
            <span class="date-month-day-year">
              <?php print format_date($timestamp = $created,
                $type = 'medium',
                $format = 'F jS, Y',
                $timezone = NULL,
                $langcode = NULL); ?>
            </span>
        </div>
      </div>
      <?php endif; ?>

      <?php if ($unpublished): ?>
        <mark class="unpublished"><?php print t('Unpublished'); ?></mark>
      <?php endif; ?>
    </header>
  <?php endif; ?>

  <?php
    // We hide the comments and links now so that we can render them later.
    hide($content['comments']);
    hide($content['links']);
    print render($content['thread_description']);
    //this allows us to move the VBO button down below the view
    function lacuna_stories_form_alter(&$form, $form_state, $form_id) {
  if (strpos($form_id,  'vbo_block') !== FALSE) {
      $form['output']['#weight'] = -99; //Decrease the weight of output to rise it above other elements.
        }
      }

    global $user;
    // Hard-coded view title; bad, I know, but other option
    // is to load the entire view, then get the title, which
    // causes a PHP warning about passing non-variables by references
    // removing this for now, since users already know they're viewing a thread -- DB
    // print '<h2 id="stitchings">Stitchings</h2>';
    if ($user->uid === $node->uid) {
      // Allow node author to edit the stitchings
      print views_embed_view('stitchings', 'vbo_block', $node->nid);
    } else {
      print views_embed_view('stitchings', 'view_block', $node->nid);
    }

  ?>

  <?php print render($content['links']); ?>

  <?php print render($content['comments']); ?>

</article>
