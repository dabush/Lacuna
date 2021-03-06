Lacuna Release Notes
====================

Version 2.4.1: Private Student Feedback
-------------
March 28, 2018

This release adds the ability for instructors to use annotations on student writing as a form of private feedback. It also includes core updates to Drupal 7.58 to address SA-CORE-2018-002. 

Version 2.3: PDF Annotation and New Notifications System
-------------
February 28, 2018

A minor version release that adds a new "Latest Conversation" page, adds PDF and image annotation, fixes several bugs, provides updated contributed and core modules, and improves the installation experience. Most work on this release done by Cody Leff and Daniel Bush.

### Additions
 * Added a "Latest Conversations" page that shows user-relevant updates. NOTE: To enable this new feature, go to Structure -> Features -> Lacuna Stories (admin/structure/features) and enable the "Notifications" feature. With drush, enable the feature through:
    `drush en -y lacuna_notifications_configuration`
 followed by `drush fra -y`
 * Added ability to annotate PDFs. To enable this feature, go to Administration -> Configuration -> Content authoring -> Annotation (admin/config/content/annotator) and enable the "PDF" Annotator plugin. Then, revert affected features either with `drush fra -y` or at Administration -> Structure -> Features -> Lacuna Stories. 
    

### Fixes
 * Annotation Dashboard cache administration form fixed
 * Reordering threads now works
 * Fixed permissions on new install
 * Fixed Materials display when texts have long list of authors
 * Sharing options sometimes didn't show up correctly
 * Adding some backend error checking to get rid of a PHP warning when loading highlights (i.e., annotations without text)
 * Fixed link to add tags in "Curate Tags" menu item when Lacuna is not installed in the webserver's root directory
 * Fixed default privacy settings when using Lacuna as an LTI external tool provider (i.e., for LMSes like Canvas).
 
### Changes
 * Updated Drupal core to 7.57.
 * Updated Backup and Migrate, Chaos tools, Entity reference, Chosen, Entity API, Field group, File Entity, Honeypot, Media, Media: YouTube, Menu Badges, Menu Views, Module Filter, Rules, Session Cache API, Superfish, Views, Views data export, Views Bulk Operations, d3, Webform, WYWISYG, Diff, Workflow, and Token modules.
 * Installation profile uses Lacuna logo
 * Improved responsive design of annotation dashboard
 * Major improvements to Peer Group UI: Easier to join and leave groups, better theming.

 

Version 2.2.2: LTI bug fix release
-------------
January 27, 2017

A minor release that fixes a critical bug in LTI integration.

### Fixes
 * Correct paths for using Lacuna from within an LTI environment

Version 2.2.1: Fix many Bugs
-------------
November 18, 2016

This is a bug fix release.

### Changes
 * Disabled annotation histogram on single-page documents
 * Prevent students from viewing profiles of students in other courses
 * Minor visual improvements
 * No longer use the last choice as default permissions for an annotation; default is now "Everyone"
 * Patched field_group module to support PHP 7
 * Updated all contributed modules without outstanding updates


### Fixes
 * Fixed bug preventing students from replying to each other's annotations
 * Annotation replies work on mobile devices
 * Annotator buttons no longer wrap incorrectly in Safari
 * Responses Map shows links correctly
 * Improved display of privacy options in Annotation Dashboard
 * Allow media embeds in annotations when site is served over HTTPS
 * Prevent students from selecting peer groups in an annotation when they are not a member of any
 * Cleaned up warning messages in javascript console from Annotation Dashboard
 * Prevent annotation tags from being duplicated; now correctly re-uses existing, identical tags when available
 * Avoid scrollbars on long response titles
 * Redirect users to Peer Groups page instead of home page after deleting a peer group
 * If course creation requires a password, accept it correctly
 * Patched d3 module so that it can be updated again
 * Fixed Canvas support so course setup works with older versions of PHP (<5.5)

Version 2.2: Canvas/LTI Support
-----------
October 20, 2016

### Additions
 * Added Canvas and general LTI support
 * Release notes (it's about time)!

### Removals
 * Removed HTML Purifier, CKEditor modules
 * Removed "How I Learn" and "Learning Goals" fields from user profile

### Changes
 * Improved UX for replying to an annotation
 * Blocked d3 module from updating; latest version is broken
 * More theme improvements

### Fixes
 * Fixed WYWISYG formatting for text alignment and bullets in Filtered HTML format

Version 2.1: Threaded Replies to Annotations
-----------
August 25, 2016

### Additions
 * Added ability to have threaded conversations on an annotation
 * Added ability to export threads as Excel or CSV
 * Added filter to hide annotations without replies
 * Added default avatar selections

### Removals

### Changes
 * Major performance improvements across the board
 * Theming improvements (Thanks, Irene Hsu!)

### Fixes
 * Students could not view own annotations in threads
 * Fixed 'Add to Thread'
 * Sewing Kit was showing only annotation shared with 'Everyone'
 
Version 2.0
-----------
2.0 was a major restructuring of Lacuna. Rather than supporting a single course per site, Lacuna was redesigned to allow an unlimited number of courses in a single install. It also added an installation profile, granular annotation privacy levels, and numerous other features.