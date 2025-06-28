/* key definitions */
#define MODKEY Mod4Mask
#define AltMask Mod1Mask

#define TAGKEYS(KEY,TAG) \
	{ MODKEY,                       KEY,      view,           {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask,           KEY,      toggleview,     {.ui = 1 << TAG} }, \
	{ MODKEY|ShiftMask,             KEY,      tagmove,        {.ui = 1 << TAG} }, \
	{ MODKEY|AltMask|ShiftMask,     KEY,      tagstay,        {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask|ShiftMask, KEY,      toggletag,      {.ui = 1 << TAG} }, \
    { MODKEY|AltMask,               KEY,      previewtag,     {.ui = TAG } },     \

#define STACKKEYS(MOD,ACTION) \
	{ MOD, XK_j,     ACTION##stack, {.i = INC(+1) } }, \
	{ MOD, XK_k,     ACTION##stack, {.i = INC(-1) } }, \
	{ MOD, XK_n,     ACTION##stack, {.i = 0 } }, \
	{ MOD, XK_m,     ACTION##stack, {.i = 1 } }, \
	{ MOD, XK_comma, ACTION##stack, {.i = 2 } }, \
	{ MOD, XK_period, ACTION##stack,{.i = 3 } }, \
	{ MOD, XK_slash, ACTION##stack, {.i = -1 } }, \
    /* { MOD, XK_grave, ACTION##stack, {.i = PREVSEL } }, \ */

/* helper for spawning shell commands in the pre dwm-5.0 fashion */
#define SHCMD(cmd) { .v = (const char*[]){ "/usr/bin/fish", "-c", cmd, NULL } }

static const Key keys[] = {
	/* modifier                     key        function        argument */
    { MODKEY,                       XK_p,      spawn,          SHCMD("dshortcuts") },
	{ MODKEY,                       XK_o,      spawn,          SHCMD("st") },
	{ MODKEY,                       XK_i,      spawn,          SHCMD("rofi_internet") },
	{ MODKEY,                       XK_y,      spawn,          SHCMD("rofi_menu") },
	{ MODKEY,                       XK_u,      spawn,          SHCMD("rofi_launcher") },
	{ MODKEY|ControlMask|ShiftMask|AltMask, XK_l, spawn,       SHCMD("slock") },

	{ MODKEY,                       XK_b,      togglebar,      {0} },
	{ MODKEY,                       XK_v,      togglealttag,   {0} },

	STACKKEYS(MODKEY,                          focus)
	STACKKEYS(MODKEY|ControlMask,              push)

	{ MODKEY|ControlMask|ShiftMask, XK_q,      incnmaster,     {.i = +1 } },
    { MODKEY|ControlMask|ShiftMask, XK_w,      incnmaster,     {.i = -1 } },

	{ MODKEY|AltMask,               XK_h,      setmfact,       {.f = -0.05} }, /* decrement space in x axias */
	{ MODKEY|AltMask,               XK_l,      setmfact,       {.f = +0.05} }, /* increment space in x axias */
	{ MODKEY|AltMask,               XK_r,      setmfact,       {.f =  0.00} }, /* reset space in x axias */
	{ MODKEY|AltMask,               XK_j,      setcfact,       {.f = +0.25} }, /* decrement space in y axias */
	{ MODKEY|AltMask,               XK_k,      setcfact,       {.f = -0.25} }, /* increment space in y axias */
	{ MODKEY|AltMask,               XK_t,      setcfact,       {.f =  0.00} }, /* reset space in y axias */

	{ MODKEY,                       XK_Return, zoom,           {0} }, /* toggle changing master with the fisrt no master */
    { MODKEY,                       XK_space,  setlayout,      {0} }, /* toggle between last 2 layouts*/
	{ MODKEY,                       XK_Tab,    view,           {0} }, /* toggle between last 2 tags*/

	{ MODKEY,                       XK_t,      spawn,          SHCMD("fsignal 14") },
	{ MODKEY,                       XK_f,      spawn,          SHCMD("fsignal 1") },
	{ MODKEY,                       XK_s,      spawn,          SHCMD("fsignal 2") },
	{ MODKEY,                       XK_minus,  spawn,          SHCMD("fsignal 5") },

	{ MODKEY|AltMask,               XK_comma,  movelayout,     {.i = -1 } },
	{ MODKEY|AltMask,               XK_period, movelayout,     {.i = +1 } },
    { MODKEY,                       XK_h,      moveview,       {1} },
    { MODKEY,                       XK_l,      moveview,       {0} },

    { MODKEY|ShiftMask,             XK_f,      togglefullscr,  {0} },
	{ MODKEY|ShiftMask|ControlMask, XK_f,      togglefloating, {0} },
	{ MODKEY|ShiftMask,             XK_s,      togglesticky,   {0} },

	{ MODKEY,                       XK_q,      focusmon,       {.i = -1 } },
	{ MODKEY,                       XK_w,      focusmon,       {.i = +1 } },
	{ MODKEY|ShiftMask,             XK_q,      tagmonmove,     {.i = -1 } },
	{ MODKEY|ShiftMask,             XK_w,      tagmonmove,     {.i = +1 } },

	{ MODKEY|ShiftMask|ControlMask, XK_0,      view,           {.ui = ~0 } }, /* active ALL the layouts */

	{ MODKEY|ShiftMask,             XK_0,      tagstay,        {.ui = ~0 } }, // README

	TAGKEYS(                        XK_1,                      0)
	TAGKEYS(                        XK_2,                      1)
	TAGKEYS(                        XK_3,                      2)
	TAGKEYS(                        XK_4,                      3)
	TAGKEYS(                        XK_5,                      4)
	TAGKEYS(                        XK_6,                      5)
	TAGKEYS(                        XK_7,                      6)
	TAGKEYS(                        XK_8,                      7)
	TAGKEYS(                        XK_9,                      8)

	{ MODKEY|ControlMask,           XK_p,      previewallwin,  {0} },

	{ MODKEY|ControlMask,           XK_c,      killclient,     {0} },

	{ MODKEY|AltMask,               XK_F4,     spawn,          SHCMD("rofi_power") },
	// { MODKEY|ShiftMask|ControlMask, XK_BackSpace, quit,        {0} },
};
