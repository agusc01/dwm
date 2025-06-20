/* See LICENSE file for copyright and license details. */
#define DESKTOP_CONFIG 1                        /* 1 means desktop, 0 means laptop */
#define STRINGIFY(x) #x
#define TOSTRING(x) STRINGIFY(x)

#if DESKTOP_CONFIG
    #define FONT_SIZE 16
    #define FONT "Ubuntu:size=" TOSTRING(FONT_SIZE)
    #define PAD_COLOUR (FONT_SIZE - 3)
    static const unsigned int borderpx  = 0;        /* border pixel of windows */
    static const unsigned int snap      = 32;       /* snap pixel */
    static const int scalepreview       = 2;        /* preview scaling (display w and h / scalepreview) */
    static const int previewbar         = 0;        /* show the bar in the preview window */
    static const unsigned int cornerrad = 25;
    static const unsigned int gappih    = 15;       /* horiz inner gap between windows */
    static const unsigned int gappiv    = 7;        /* vert inner gap between windows */
    static const unsigned int gappoh    = 10;       /* horiz outer gap between windows and screen edge */
    static const unsigned int gappov    = 10;       /* vert outer gap between windows and screen edge */
    static       int smartborders       = 1;        /* 1 means no outer gap when there is only one window */
    static       int smartgaps          = 1;        /* 1 means no outer gap when there is only one window */
    static const int showbar            = 1;        /* 0 means no bar */
    static const int topbar             = 1;        /* 0 means bottom bar */
    static const int user_bh            = 8;        /* 2 is the default spacing around the bar's font */
    static const char *fonts[]          = { FONT };
#else
    #define FONT_SIZE 11
    #define FONT "Ubuntu:size=" TOSTRING(FONT_SIZE)
    #define PAD_COLOUR (FONT_SIZE - 2)
    static const unsigned int borderpx  = 0;        /* border pixel of windows */
    static const unsigned int snap      = 32;       /* snap pixel */
    static const int scalepreview       = 2;        /* preview scaling (display w and h / scalepreview) */
    static const int previewbar         = 0;        /* show the bar in the preview window */
    static const unsigned int cornerrad = 25;
    static const unsigned int gappih    = 10;       /* horiz inner gap between windows */
    static const unsigned int gappiv    = 5;        /* vert inner gap between windows */
    static const unsigned int gappoh    = 10;       /* horiz outer gap between windows and screen edge */
    static const unsigned int gappov    = 5;        /* vert outer gap between windows and screen edge */
    static       int smartborders       = 1;        /* 1 means no outer gap when there is only one window */
    static       int smartgaps          = 1;        /* 1 means no outer gap when there is only one window */
    static const int showbar            = 1;        /* 0 means no bar */
    static const int topbar             = 1;        /* 0 means bottom bar */
    static const int user_bh            = 8;        /* 2 is the default spacing around the bar's font */
    static const char *fonts[]          = { FONT };
#endif

#include "colors.h"
#include "rules.h"
#include "tags.h"
#define FORCE_VSPLIT 1  /* nrowgrid layout: force two clients to always split vertically */
#include "vanitygaps.c"
#include "layouts.h"
#include "keys.h"
#include "buttons.h"
#include "signals.h"
#include "launchers.h"
