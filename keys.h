/* commands */
static const Key keys[] = {
	/* modifier                     key        function        argument */
    { MODKEY,                       XK_p,      spawn,          SHCMD("dshortcuts") },
	{ MODKEY,                       XK_o,      spawn,          SHCMD("st") },
	{ MODKEY|ControlMask|ShiftMask, XK_l,      spawn,          SHCMD("slock") },

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

	{ MODKEY,                       XK_Return, zoom,           {0} }, /* toggle between last 2 clients */
    { MODKEY,                       XK_space,  setlayout,      {0} }, /* toggle between last 2 layouts*/
	{ MODKEY,                       XK_Tab,    view,           {0} }, /* toggle between last 2 tags*/

	{ MODKEY,                       XK_t,      setlayout,      {.v = &layouts[0]} },
	{ MODKEY,                       XK_f,      setlayout,      {.v = &layouts[1]} },
	{ MODKEY,                       XK_s,      setlayout,      {.v = &layouts[2]} },

	{ MODKEY,                       XK_comma,  cyclelayout,    {.i = -1 } },
	{ MODKEY,                       XK_period, cyclelayout,    {.i = +1 } },
    { MODKEY|ShiftMask,             XK_j,      cycleview,      {1} },
    { MODKEY|ShiftMask,             XK_k,      cycleview,      {0} },

	{ MODKEY|ShiftMask,             XK_space,  togglefloating, {0} },
	{ MODKEY|ShiftMask,             XK_f,      togglefullscr,  {0} },

	{ MODKEY,                       XK_0,      view,           {.ui = ~0 } }, /* active ALL the layouts */

	{ MODKEY|ShiftMask,             XK_0,      tag,            {.ui = ~0 } }, // README

	{ MODKEY|ControlMask,           XK_comma,  focusmon,       {.i = -1 } },  // README
	{ MODKEY|ControlMask,           XK_period, focusmon,       {.i = +1 } },  // README
                                                                              //
	{ MODKEY|ShiftMask,             XK_comma,  tagmon,         {.i = -1 } },
	{ MODKEY|ShiftMask,             XK_period, tagmon,         {.i = +1 } },

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


