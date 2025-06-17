static const Rule rules[] = {
	/* xprop(1):
	 *	WM_CLASS(STRING) = instance, class
	 *	WM_NAME(STRING) = title
	 */
	/* class                    instance    title       tags mask     isfloating   monitor */
    { "Gimp",                   NULL,       NULL,       1 << 7,          0,           -1 },
};
