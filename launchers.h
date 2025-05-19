/* launcher commands (They must be NULL terminated) */
static const char* terminal[]     = { "st", NULL };
static const char* onboard[]      = { "fish", "-c", "oonboard", NULL };
static const char* apps[]         = { "rofi", "-show", "drun", NULL };
static const char* firefox[]      = { "firefox", "--private-window", NULL };
static const char* wifi[]         = { "fish", "-c", "wifi rofi both", NULL };
static const char* bluetooth[]    = { "fish", "-c", "bluetooth rofi both", NULL };
static const char* brightness[]   = { "fish", "-c", "brightness rofi both", NULL };
static const char* sound[]        = { "fish", "-c", "sound rofi both", NULL };
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
	{ brightness,           "" },
	{ sound,                "" },
	{ thunar,               "" },
	{ galculator,           "" },
};
