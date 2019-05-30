/**
 * @file
 * Theme tasks
 */
/* eslint-env node */

"use strict";

var gulp = require("gulp");
var sass = require("gulp-sass");
var postcss = require("gulp-postcss");
var autoprefixer = require("autoprefixer");
var browserSync = require("browser-sync");
var concat = require("gulp-concat");

//
// Path settings
//
var themeDir = "themes/custom/retopais";

// This is needed because we're not using compass-options anymore.
var paths = {
  js: themeDir + "/js",
  sourceJs: themeDir + "/src_js",
  sass: themeDir + "/sass",
  css: themeDir + "/css"
};

var eyeglass = require("eyeglass");
var sassOptions = {
  outputStyle: "expanded",
  eyeglass: {
    enableImportOnce: false
  }
};

// Begin Gulp Tasks
gulp.task("scripts", function () {
  return (
    gulp
      .src(paths.sourceJs + "/**/*.js")
      // Concatenate everything within the JavaScript folder.
      .pipe(concat("scripts.js"))
      .pipe(gulp.dest(paths.js))
  );
});

// SASS Task
gulp.task("styles", function () {
  return gulp
    .src(paths.sass + "/**/*.scss")
    .pipe(sass(eyeglass(sassOptions)).on("error", sass.logError))
    .pipe(postcss([autoprefixer({grid: true, browsers: [">1%"]})]))
    .pipe(gulp.dest(paths.css));
});

// Watch
gulp.task("watch", function () {
  gulp.watch(paths.sourceJs + "/**/*.js", ["scripts"]);
  gulp.watch(paths.sass + "/**/*.scss", ["styles"]);
});

/**
 * Task for running browserSync.
 */
gulp.task("browserSync", function () {
  browserSync.init(null, {
    proxy: "retopais.dev",
    files: [paths.css, paths.js]
  });
});

//
// Theme task declaration
//
gulp.task("theme", ["styles", "scripts", "watch", "browserSync"]);
