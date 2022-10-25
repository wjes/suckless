/* See LICENSE file for copyright and license details. */

static char *fontfallbacks[] = {
	"dejavu sans",
	"roboto",
	"ubuntu",
};
#define NUMFONTSCALES 42
#define FONTSZ(x) ((int)(10.0 * powf(1.1288, (x)))) /* x in [0, NUMFONTSCALES-1] */

// Polar Night
#define nord0 "#2e3440"
#define nord1 "#3b4252"
#define nord2 "#434c5e"
#define nord3 "#4c566a"

// Snow Storm
#define nord4 "#d8dee9"
#define nord5 "#e5e9f0"
#define nord6 "#eceff4"

static const char *colors[] = {
	nord4, /* foreground color */
	nord0, /* background color */
};

static const char *inverted_colors[] = {
	nord0, /* foreground color */
	nord4, /* background color */
};

static const float linespacing = 1.4;

/* how much screen estate is to be used at max for the content */
static const float usablewidth = 0.75;
static const float usableheight = 0.75;

/* height of the presentation progress bar */
static const int progressheight = 5;

static Mousekey mshortcuts[] = {
	/* button         function        argument */
	{ Button1,        advance,        {.i = +1} },
	{ Button3,        advance,        {.i = -1} },
	{ Button4,        advance,        {.i = -1} },
	{ Button5,        advance,        {.i = +1} },
};

static Shortcut shortcuts[] = {
	/* keysym         function        argument */
	{ XK_Escape,      quit,           {0} },
	{ XK_q,           quit,           {0} },
	{ XK_Right,       advance,        {.i = +1} },
	{ XK_Left,        advance,        {.i = -1} },
	{ XK_Return,      advance,        {.i = +1} },
	{ XK_space,       advance,        {.i = +1} },
	{ XK_BackSpace,   advance,        {.i = -1} },
	{ XK_l,           advance,        {.i = +1} },
	{ XK_h,           advance,        {.i = -1} },
	{ XK_j,           advance,        {.i = +1} },
	{ XK_k,           advance,        {.i = -1} },
	{ XK_Down,        advance,        {.i = +1} },
	{ XK_Up,          advance,        {.i = -1} },
	{ XK_Next,        advance,        {.i = +1} },
	{ XK_Prior,       advance,        {.i = -1} },
	{ XK_n,           advance,        {.i = +1} },
	{ XK_p,           advance,        {.i = -1} },
	{ XK_r,           reload,         {0} },
	{ XK_g,           pdf,            {0} },
    { XK_i,           togglescm,      {0} },
};

static Filter filters[] = {
	{ "\\.ff$", "cat" },
	{ "\\.ff.bz2$", "bunzip2" },
	{ "\\.[a-z0-9]+$", "2ff" },
};
