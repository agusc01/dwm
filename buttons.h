/* button definitions */
/* click can be ClkTagBar, ClkLtSymbol, ClkStatusText, ClkWinTitle, ClkClientWin, or ClkRootWin */
// Button 1 (click left)
// Button 2 (click wheel)
// Button 3 (click right)
static const Button buttons[] = {
	/* click                event mask      button          function        argument */
	{ ClkLtSymbol,          0,                                  Button1,        setlayout,      {.v = &layouts[0]} },
	{ ClkLtSymbol,          0,                                  Button2,        setlayout,      {.v = &layouts[1]} },
	{ ClkLtSymbol,          0,                                  Button3,        setlayout,      {.v = &layouts[5]} },
	{ ClkLtSymbol,          MODKEY,                             Button1,        setlayout,      {.v = &layouts[2]} },
	{ ClkLtSymbol,          MODKEY,                             Button2,        setlayout,      {.v = &layouts[3]} },
	{ ClkLtSymbol,          MODKEY,                             Button3,        setlayout,      {.v = &layouts[4]} },
	{ ClkLtSymbol,          MODKEY|ShiftMask,                   Button1,        setlayout,      {.v = &layouts[6]} },
	{ ClkLtSymbol,          MODKEY|ShiftMask,                   Button2,        setlayout,      {.v = &layouts[7]} },
	{ ClkLtSymbol,          MODKEY|ShiftMask,                   Button3,        setlayout,      {.v = &layouts[8]} },
	{ ClkLtSymbol,          MODKEY|ControlMask,                 Button1,        setlayout,      {.v = &layouts[9]} },
	{ ClkLtSymbol,          MODKEY|ControlMask,                 Button2,        setlayout,      {.v = &layouts[10]} },
	{ ClkLtSymbol,          MODKEY|ControlMask,                 Button3,        setlayout,      {.v = &layouts[11]} },
	{ ClkLtSymbol,          MODKEY|ShiftMask|ControlMask,       Button1,        setlayout,      {.v = &layouts[12]} },
	{ ClkLtSymbol,          MODKEY|ShiftMask|ControlMask,       Button3,        setlayout,      {.v = &layouts[13]} },
    { ClkStatusText,        0,                                  Button1,        spawn,          SHCMD("rofi_internet") },
    { ClkStatusText,        0,                                  Button2,        spawn,          SHCMD("rofi_menu") },
    { ClkStatusText,        0,                                  Button3,        spawn,          SHCMD("st") },
	{ ClkClientWin,         MODKEY,                             Button1,        movemouse,      {0} },
	{ ClkClientWin,         MODKEY,                             Button2,        togglefloating, {0} },
	{ ClkClientWin,         MODKEY,                             Button3,        resizemouse,    {0} },
	{ ClkTagBar,            0,                                  Button1,        view,           {0} },
	{ ClkTagBar,            0,                                  Button3,        toggleview,     {0} },
	{ ClkTagBar,            MODKEY,                             Button1,        tagstay,        {0} },
	{ ClkTagBar,            MODKEY,                             Button3,        toggletag,      {0} },
};
