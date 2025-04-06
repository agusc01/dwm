/* See LICENSE file for copyright and license details. */
#define FONT "Ubuntu:size=12"

/* appearance */
static const unsigned int borderpx  = 5;        /* border pixel of windows */
static const unsigned int snap      = 32;       /* snap pixel */
static const int scalepreview       = 4;        /* preview scaling (display w and h / scalepreview) */
static const int previewbar         = 1;        /* show the bar in the preview window */
static const unsigned int gappih    = 20;       /* horiz inner gap between windows */
static const unsigned int gappiv    = 10;       /* vert inner gap between windows */
static const unsigned int gappoh    = 10;       /* horiz outer gap between windows and screen edge */
static const unsigned int gappov    = 30;       /* vert outer gap between windows and screen edge */
static       int smartborders       = 1;        /* 1 means no outer gap when there is only one window */
static       int smartgaps          = 1;        /* 1 means no outer gap when there is only one window */
static const int showbar            = 1;        /* 0 means no bar */
static const int topbar             = 1;        /* 0 means bottom bar */
static const int user_bh            = 18;       /* 2 is the default spacing around the bar's font */
static const char *fonts[]          = { FONT };
static const char black[]           = "#000000";
static const char gray[]            = "#444444";
static const char light_blue[]      = "#bbbbbb";
static const char white[]           = "#eeeeee";
static const char blue[]            = "#005577";
static const char *colors[][3]      = {
	/*               fg         bg         border   */
	[SchemeNorm] = { light_blue,    black,          gray },
	[SchemeSel]  = { white,         blue,           blue  },
};

/* tagging */
static const char *tags[] = { "  ", "  ", "  " , "  ", "  ", "  ", "  ", "  ", "  " };
static const char *tagsalt[] = { "1", "2", "3", "4", "5", "6", "7", "8", "9" };
static const int momentaryalttags = 0; /* 1 means alttags will show only when key is held down*/

static const Rule rules[] = {
	/* xprop(1):
	 *	WM_CLASS(STRING) = instance, class
	 *	WM_NAME(STRING) = title
	 */
	/* class      instance    title       tags mask     isfloating   monitor */
	{ "Gimp",     NULL,       NULL,       0,            1,           -1 },
	{ "Firefox",  NULL,       NULL,       1 << 8,       0,           -1 },
};

/* layout(s) */
static const float mfact     = 0.55; /* factor of master area size [0.05..0.95] */
static const int nmaster     = 1;    /* number of clients in master area */
static const int resizehints = 1;    /* 1 means respect size hints in tiled resizals */
static const int lockfullscreen = 1; /* 1 will force focus on the fullscreen window */

#define FORCE_VSPLIT 1  /* nrowgrid layout: force two clients to always split vertically */
#include "vanitygaps.c"

static const Layout layouts[] = {
	/* symbol     arrange function */
	/*00*/{ "[]=",      tile },    /* first entry is default */
	/*01*/{ "[M]",      monocle },
	/*02*/{ "[@]",      spiral },
	/*03*/{ "[\\]",     dwindle },
	/*04*/{ "H[]",      deck },
	/*05*/{ "TTT",      bstack },
	/*06*/{ "===",      bstackhoriz },
	/*07*/{ "HHH",      grid },
	/*08*/{ "###",      nrowgrid },
	/*09*/{ "---",      horizgrid },
	/*10*/{ ":::",      gaplessgrid },
	/*11*/{ "|M|",      centeredmaster },
	/*12*/{ ">M>",      centeredfloatingmaster },
	/*13*/{ "><>",      NULL },    /* no layout function means floating behavior */
	/*14*/{ NULL,       NULL },
};

/* key definitions */
#define MODKEY Mod4Mask
#define AltMask Mod1Mask

#define TAGKEYS(KEY,TAG) \
	{ MODKEY,                       KEY,      view,           {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask,           KEY,      toggleview,     {.ui = 1 << TAG} }, \
	{ MODKEY|ShiftMask,             KEY,      tag,            {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask|ShiftMask, KEY,      toggletag,      {.ui = 1 << TAG} }, \
    { MODKEY|AltMask,               KEY,      previewtag,     {.ui = TAG } },     \

#define STACKKEYS(MOD,ACTION) \
	{ MOD, XK_j,     ACTION##stack, {.i = INC(+1) } }, \
	{ MOD, XK_k,     ACTION##stack, {.i = INC(-1) } }, \
	/* { MOD, XK_grave, ACTION##stack, {.i = PREVSEL } }, \
	{ MOD, XK_q,     ACTION##stack, {.i = 0 } }, \
	{ MOD, XK_a,     ACTION##stack, {.i = 1 } }, \
	{ MOD, XK_z,     ACTION##stack, {.i = 2 } }, \
	{ MOD, XK_x,     ACTION##stack, {.i = -1 } },
    */
 
/* helper for spawning shell commands in the pre dwm-5.0 fashion */
#define SHCMD(cmd) { .v = (const char*[]){ "/usr/bin/fish", "-c", cmd, NULL } }

#include "keys.h"

/* button definitions */
/* click can be ClkTagBar, ClkLtSymbol, ClkStatusText, ClkWinTitle, ClkClientWin, or ClkRootWin */
static const Button buttons[] = {
	/* click                event mask      button          function        argument */
	{ ClkLtSymbol,          0,              Button1,        setlayout,      {0} },
	{ ClkLtSymbol,          0,              Button3,        setlayout,      {.v = &layouts[2]} },
	// { ClkStatusText,        0,              Button2,        spawn,          SHCMD("st") },
	{ ClkClientWin,         MODKEY,         Button1,        movemouse,      {0} },
	{ ClkClientWin,         MODKEY,         Button2,        togglefloating, {0} },
	{ ClkClientWin,         MODKEY,         Button3,        resizemouse,    {0} },
	{ ClkTagBar,            0,              Button1,        view,           {0} },
	{ ClkTagBar,            0,              Button3,        toggleview,     {0} },
	{ ClkTagBar,            MODKEY,         Button1,        tag,            {0} },
	{ ClkTagBar,            MODKEY,         Button3,        toggletag,      {0} },
};

/* signal definitions */
/* signum must be greater than 0 */
/* trigger signals using `xsetroot -name "fsignal:<signum>"` */
static Signal signals[] = {
/* signum   function                         argument  */
    /* Layouts */
	{  0,   setlayout,                      {.v = &layouts[0]}   },
	{  1,   setlayout,                      {.v = &layouts[1]}   },
	{  2,   setlayout,                      {.v = &layouts[2]}   },
    {  4,   setlayout,                      {.v = &layouts[3]}   },
	{  3,   setlayout,                      {.v = &layouts[4]}   },
	{  5,   setlayout,                      {.v = &layouts[5]}   },
	{  6,   setlayout,                      {.v = &layouts[6]}   },
	{  7,   setlayout,                      {.v = &layouts[7]}   },
	{  8,   setlayout,                      {.v = &layouts[8]}   },
	{  9,   setlayout,                      {.v = &layouts[9]}   },
	{ 10,   setlayout,                      {.v = &layouts[10]}  },
	{ 11,   setlayout,                      {.v = &layouts[11]}  },
	{ 12,   setlayout,                      {.v = &layouts[12]}  },
	{ 13,   setlayout,                      {.v = &layouts[13]}  },

    /* Border */
    { 30,   setborderpx,                    {.i = -1}            },
    { 31,   setborderpx,                    {.i = +1}            },
    { 32,   setborderpx,                    {.i = 0 }            },

    /* Gaps */
    { 40,   incrgaps,                       {.i = +1 }           },
    { 41,   incrgaps,                       {.i = -1 }           },
    { 42,   incrigaps,                      {.i = +1 }           },
    { 43,   incrigaps,                      {.i = -1 }           },
    { 44,   incrogaps,                      {.i = +1 }           },
    { 45,   incrogaps,                      {.i = -1 }           },
    { 46,   incrihgaps,                     {.i = +1 }           },
    { 47,   incrihgaps,                     {.i = -1 }           },
    { 48,   incrivgaps,                     {.i = +1 }           },
    { 49,   incrivgaps,                     {.i = -1 }           },
    { 51,   incrohgaps,                     {.i = +1 }           },
    { 52,   incrohgaps,                     {.i = -1 }           },
    { 53,   incrovgaps,                     {.i = +1 }           },
    { 54,   incrovgaps,                     {.i = -1 }           },
    { 55,   defaultgaps,                    {0}                  },
    { 56,   togglegaps,                     {0}                  },

    /* toggles */
    { 70,   togglebar,                      {0}                  },
    { 71,   togglefloating,                 {0}                  },
    { 72,   togglefullscr,                  {0}                  },
    { 73,   togglesticky,                   {0}                  },
    { 74,   togglesmartgaps,                {0}                  },
    { 75,   togglesmartborders,             {0}                  },
    { 76,   togglealttag,                   {0}                  },
};
