/* launcher commands (They must be NULL terminated) */
static const char* terminal[]     = { "st", NULL };
static const char* onboard[]      = { "onboard", NULL };
static const char* apps[]         = { "rofi", "-show", "drun", NULL };
static const char* firefox[]      = { "firefox", "--private-window", NULL };
static const char* wifi[]         = { "st", "-e", "fish", "-c", "wifi fzf", NULL };
static const char* bluetooth[]    = { "st", "-e", "fish", "-c", "bluetooth fzf", NULL };
static const char* thunar[]       = { "thunar", NULL };
static const char* galculator[]   = { "galculator", NULL };

static const Launcher launchers[] = {
     /* command       name to display */
    { terminal,             "" },
	{ onboard,              "" },
	{ apps,                 "" },
    { firefox,              "" },
	{ wifi,                 "" },
	{ bluetooth,            "" },
	{ thunar,               "" },
	{ galculator,           "" },
};
