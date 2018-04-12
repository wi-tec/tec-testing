/**
 * @file
 * Validate custom scss code.
 */

'use strict';

var gulp = require('gulp');
var sassLint = require('gulp-sass-lint');

gulp.task('sasslint', function () {
  var stream = gulp.src('build/sites/all/themes/tec/src/sass/*/*.s+(a|c)ss')
        .pipe(sassLint({
          options: {
            formatter: 'stylish'
          },
          files: {include: 'build/sites/all/themes/tec/src/sass/*/*.s+(a|c)ss'},

          rules: {
            // Extends
            'extends-before-mixins': 1,
            'extends-before-declarations': 1,
            'placeholder-in-extend': 0,

            // Mixins
            'mixins-before-declarations': 1,

            // Line Spacing
            'one-declaration-per-line': 1,
            'empty-line-between-blocks': 1,
            'single-line-per-selector': 0,

            // Disallows
            'no-attribute-selectors': 0,
            'no-color-hex': 0,
            'no-color-keywords': 1,
            'no-color-literals': 1,
            'no-combinators': 0,
            'no-css-comments': 0,
            'no-debug': 1,
            'no-disallowed-properties': 0,
            'no-duplicate-properties': 1,
            'no-empty-rulesets': 1,
            'no-extends': 0,
            'no-ids': 0,
            'no-important': 0,
            'no-invalid-hex': 2,
            'no-mergeable-selectors': 1,
            'no-misspelled-properties': 2,
            'no-qualifying-elements': 0,
            'no-trailing-whitespace': 1,
            'no-trailing-zero': 0,
            'no-transition-all': 0,
            'no-universal-selectors': 0,
            'no-url-domains': 0,
            'no-url-protocols': 0,
            'no-vendor-prefixes': 1,
            'no-warn': 1,
            'property-units': 0,

            // Nesting
            'declarations-before-nesting': 1,
            'force-attribute-nesting': 0,
            'force-element-nesting': 0,
            'force-pseudo-nesting': 0,

            // Name Formats
            'class-name-format': 1,
            'function-name-format': 1,
            'id-name-format': 0,
            'mixin-name-format': 1,
            'placeholder-name-format': 1,
            'variable-name-format': 1,

            // Style Guide
            'attribute-quotes': 1,
            'bem-depth': 0,
            'border-zero': 0,
            'brace-style': 1,
            'clean-import-paths': 0,
            'empty-args': 0,
            'hex-length': 1,
            'hex-notation': 1,
            'indentation': 1,
            'leading-zero': 0,
            'max-line-length': 0,
            'max-file-line-count': 0,
            'nesting-depth': 0,
            'property-sort-order': 0,
            'pseudo-element': 2,
            'quotes': 1,
            'shorthand-values': 1,
            'url-quotes': 2,
            'variable-for-property': 0,
            'zero-unit': 0,

            // Inner Spacing
            'space-after-comma': 1,
            'space-before-colon': 1,
            'space-after-colon': 1,
            'space-before-brace': 1,
            'space-before-bang': 1,
            'space-after-bang': 0,
            'space-between-parens': 0,
            'space-around-operator': 1,

            // Final Items
            'trailing-semicolon': 2,
            'final-newline': 0
          }
        }))
        .pipe(sassLint.format())
        .pipe(sassLint.failOnError());
  return stream;
});
