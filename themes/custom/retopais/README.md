# SFG Theme

Drupal theme for the Reto Pais site. Based on Aurora (https://www.drupal.org/project/aurora).

## Folders

* `css`: compiled css files.
* `fonts`: custom fonts.
* `img`: icons and other image assets.
* `js`: Javascript files.
* `sass`: Source SASS files.
* `tpl`: Drupal templates.

## Theme tasks

SASS compilation, CSS prefixing and other theme tasks are managed by `theme.js`
file located in  the `gulp-tasks` folder. To execute these tasks, run `gulp theme`
from project's root folder.

## SASS

This theme uses libsass to compile SASS files, and include the following libraries:

* breakpoint

### SASS partials folder structure

* `design`: Styles for individual components. It is recommended to use a
separate file for each component in order to mantain modularity.
* `global`: Base styles, variables and mixins.
* `layout`: Layout styles.
* `styleguide`: Styleguide-specific styles.
