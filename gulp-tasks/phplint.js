/**
 * @file
 * Syntax check PHP files.
 */
/* eslint-env node */
/* eslint no-console:0 */

'use strict';

var gulp = require('gulp');
var phplint = require('phplint').lint;
var gutil = require('gulp-util');

gulp.task('phplint', function (cb) {

  var extensions = '{php,module,inc,install,test,profile,theme}';
  var sourcePatterns = [
    'build/sites/all/modules/custom/**/*.' + extensions,
    'build/sites/all/modules/features/**/*.' + extensions,
    'build/sites/all/themes/tec/**/*.' + extensions,
    'tests/behat/**/*.' + extensions,
    'build/sites/default/settings*.' + extensions
  ];
  var phpLintOptions = {
    limit: 50
  };

  phplint(sourcePatterns, phpLintOptions, function (err, stdout, stderr) {
    if (err) {
      throw new gutil.PluginError({
        plugin: 'phplint',
        message: err
      });
    }
    cb();
  });
});
