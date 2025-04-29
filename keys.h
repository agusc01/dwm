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

static const Key keys[] = {
	/* modifier                     key        function        argument */
    { MODKEY,                       XK_p,      spawn,          SHCMD("dshortcuts") },
	{ MODKEY,                       XK_o,      spawn,          SHCMD("st") },
	{ MODKEY,                       XK_i,      spawn,          SHCMD("dmenu_run_desktop") },
    { MODKEY,                       XK_u,      spawn,          SHCMD("galculator") },
	{ MODKEY|ControlMask|ShiftMask, XK_l,      spawn,          SHCMD("slock") },
	{ MODKEY|ControlMask,           XK_s,      spawn,          SHCMD("surf") },
	{ MODKEY|ControlMask,           XK_f,      spawn,          SHCMD("firefox-esr") },
	{ MODKEY|ControlMask|ShiftMask, XK_f,      spawn,          SHCMD("firefox-esr --private-window") },

	{ MODKEY,                       XK_b,      togglebar,      {0} },
	{ MODKEY,                       XK_n,      togglealttag,   {0} },

	STACKKEYS(MODKEY,                          focus)
	STACKKEYS(MODKEY|ControlMask,              push)

	{ MODKEY,                       XK_w,      incnmaster,     {.i = +1 } }, /* TODO: valid when it is the last client */
	{ MODKEY,                       XK_e,      incnmaster,     {.i = -1 } },

	{ MODKEY,                       XK_h,      setmfact,       {.f = -0.05} }, /* decrement space in x axias */
	{ MODKEY,                       XK_l,      setmfact,       {.f = +0.05} }, /* increment space in x axias */
	{ MODKEY,                       XK_r,      setcfact,       {.f =  0.00} }, /* reset space in x axias */
	{ MODKEY|ShiftMask,             XK_h,      setcfact,       {.f = +0.25} }, /* decrement space in y axias */
	{ MODKEY|ShiftMask,             XK_l,      setcfact,       {.f = -0.25} }, /* increment space in y axias */
	{ MODKEY|ShiftMask,             XK_r,      setcfact,       {.f =  0.00} }, /* reset space in y axias */

	{ MODKEY,                       XK_Return, zoom,           {0} }, /* toggle changing master with the fisrt no master */
    { MODKEY,                       XK_space,  setlayout,      {0} }, /* toggle between last 2 layouts*/
	{ MODKEY,                       XK_Tab,    view,           {0} }, /* toggle between last 2 tags*/

	{ MODKEY,                       XK_t,      setlayout,      {.v = &layouts[0]} },
	{ MODKEY,                       XK_f,      setlayout,      {.v = &layouts[1]} },
	{ MODKEY,                       XK_s,      setlayout,      {.v = &layouts[2]} },
	{ MODKEY,                       XK_minus,  setlayout,      {.v = &layouts[5]} },

	{ MODKEY,                       XK_comma,  cyclelayout,    {.i = -1 } },
	{ MODKEY,                       XK_period, cyclelayout,    {.i = +1 } },
    { MODKEY|ShiftMask,             XK_j,      cycleview,      {1} },
    { MODKEY|ShiftMask,             XK_k,      cycleview,      {0} },

	{ MODKEY|ShiftMask,             XK_space,  togglefloating, {0} },
	{ MODKEY|ShiftMask,             XK_f,      togglefullscr,  {0} },

	{ MODKEY|ShiftMask|ControlMask, XK_0,      view,           {.ui = ~0 } }, /* active ALL the layouts */

	{ MODKEY|ShiftMask,             XK_0,      tag,            {.ui = ~0 } }, // README

	TAGKEYS(                        XK_1,                      0)
	TAGKEYS(                        XK_2,                      1)
	TAGKEYS(                        XK_3,                      2)
	TAGKEYS(                        XK_4,                      3)
	TAGKEYS(                        XK_5,                      4)
	TAGKEYS(                        XK_6,                      5)
	TAGKEYS(                        XK_7,                      6)
	TAGKEYS(                        XK_8,                      7)
	TAGKEYS(                        XK_9,                      8)

	{ MODKEY|ShiftMask|ControlMask, XK_p,      previewallwin,  {0} },

	{ MODKEY|ShiftMask|ControlMask, XK_c,      killclient,     {0} },
	{ MODKEY|ShiftMask|ControlMask, XK_BackSpace, quit,        {0} },

};


