(function() {
  var $,
    __bind = function(fn, me){ return function(){ return fn.apply(me, arguments); }; },
    __hasProp = Object.prototype.hasOwnProperty,
    __extends = function(child, parent) { for (var key in parent) { if (__hasProp.call(parent, key)) child[key] = parent[key]; } function ctor() { this.constructor = child; } ctor.prototype = parent.prototype; child.prototype = new ctor; child.__super__ = parent.prototype; return child; };

  $ = jQuery;

  Annotator.Plugin.Comment = (function(_super) {

    __extends(Comment, _super);

    function Comment() {
      this.updateViewer = __bind(this.updateViewer, this);
      Comment.__super__.constructor.apply(this, arguments);
    }

    Comment.prototype.options = {
      commentClass: "annotator-comment-count fa fa-reply"
    };

    Comment.prototype.pluginInit = function() {
      if (!Annotator.supported()) return;
      return this.annotator.viewer.addField({
        load: this.updateViewer
      });
    };

    Comment.prototype.updateViewer = function(field, annotation) {
      var link;
      field = $(field);
      field.addClass(this.options.commentClass);
      link = Drupal.settings.annotator_comment.base_root + annotation.links[0].href;
      return field.html(' <a href="' + link + '#comments" target="_blank">' + annotation.comment_count + ' Repl' + (annotation.comment_count !== "1" ? 'ies' : 'y') + '</a>');
    };

    return Comment;

  })(Annotator.Plugin);

}).call(this);
