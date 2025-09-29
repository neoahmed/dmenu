/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy  = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching */

/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Liberation Mono:weight=bold:size=13"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

static const char col_crust[]   = "#11111b";  // dmenu base (bg)
static const char col_overlay1[]= "#7f849c";  // active panel

static const char col_subtext0[]= "#a6adc8";  // unselected text
static const char col_surface1[]= "#45475a";  // Surface1 

static const char *colors[SchemeLast][2] = {
		      /*     fg         bg       */
	[SchemeNorm] = { col_subtext0, col_crust    },
	[SchemeSel]  = { col_crust,    col_overlay1 },
	[SchemeOut]  = { col_crust,    col_surface1 },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
