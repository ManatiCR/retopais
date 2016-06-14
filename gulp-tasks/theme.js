/**
 * @file
 * Theme tasks
 */
/* eslint-env node */

var gulp = require('gulp');
var sass = require('gulp-sass');
var prefix = require('gulp-autoprefixer');
var browserSync = require('browser-sync');
var concat = require('gulp-concat');
var uglify = require('gulp-uglify');
var stripDebug = require('gulp-strip-debug');
var rename = require('gulp-rename');

//
// Path settings
//
var themeDir = 'themes/custom/retopais';

// This is needed because we're not using compass-options anymore.
var paths = {
  js: themeDir + '/js',
  sourceJs: themeDir + '/src_js',
  sass: themeDir + '/sass',
  css: themeDir + '/css'
};

var eyeglass = require("eyeglass");
var sassOptions = {
  outputStyle: 'expanded',
  eyeglass: {
    enableImportOnce: false
  }
};

//
// Begin Gulp Tasks
//

gulp.task('scripts', function () {
  'use strict';
  return gulp.src(paths.sourceJs + '/**/*.js')
    // Concatenate everything within the JavaScript folder.
    .pipe(concat('scripts.js'))
    .pipe(gulp.dest(paths.js))
    .pipe(rename('scripts.min.js'))
    // Strip all debugger code out.
    .pipe(stripDebug())
    // Minify the JavaScript.
    .pipe(uglify())
    .pipe(gulp.dest(paths.js));
});

//
// SASS Task
//
gulp.task('styles', function () {
  'use strict';
  return gulp.src(paths.sass + '/**/*.scss')
         .pipe(sass(eyeglass(sassOptions)).on('error', sass.logError))
         .pipe(prefix(["last 2 versions", "> 1%", "ie 8"]))
         .pipe(gulp.dest(paths.css));
});

//
// Watch
//
gulp.task('watch', function () {
  'use strict';
   gulp.watch(paths.js + '/**/*.js', ['scripts']);
   gulp.watch(paths.sass + '/**/*.scss', ['styles']);
});

/**
 * Task for running browserSync.
 */
gulp.task('browserSync', function () {
  'use strict';
  browserSync.init(null, {
    proxy: 'retopais.dev',
    files: [
    paths.css,
    paths.js
    ]
  });
});

//
// Theme task declaration
//
gulp.task('theme', ['styles', 'scripts', 'watch', 'browserSync']);