static const Rule rules[] = {
	/* xprop(1):
	 *	WM_CLASS(STRING) = instance, class
	 *	WM_NAME(STRING) = title
	 */
	/* class                    instance    title       tags mask     isfloating   monitor */
	// { "vim",                    NULL,       NULL,       0,            0,           -1 },
	// { "nvim",                   NULL,       NULL,       0,            0,           -1 },
    // { "st",                     NULL,       NULL,       1 << 1,          0,           -1 },
	{ "firefox-esr",            NULL,       NULL,       1 << 2,          0,           -1 },
	{ "Surf",                   NULL,       NULL,       1 << 2,          0,           -1 },
    // { "Thunar",                 NULL,       NULL,       1 << 3,          0,           -1 },
    { "Gimp",                   NULL,       NULL,       1 << 7,          0,           -1 },
};
