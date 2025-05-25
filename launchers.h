/* launcher commands (They must be NULL terminated) */
static const char* terminal[]     = { "st", NULL };
static const char* onboard[]      = { "fish", "-c", "oonboard", NULL };
static const char* apps[]         = { "fish", "-c", "rofi_launcher", NULL };
static const char* firefox[]      = { "firefox", "--private-window", NULL };
static const char* wifi[]         = { "fish", "-c", "wifi rofi both", NULL };
static const char* bluetooth[]    = { "fish", "-c", "bluetooth rofi both", NULL };
static const char* brightness[]   = { "fish", "-c", "rofi_brightness", NULL };
static const char* volume[]       = { "fish", "-c", "rofi_volume", NULL };
static const char* rotation[]     = { "fish", "-c", "rofi_rotation", NULL };
static const char* thunar[]       = { "thunar", NULL };
static const char* galculator[]   = { "galculator", NULL };
static const char* power[]        = { "fish", "-c", "rofi_power", NULL };

static const Launcher launchers[] = {
     /* command       name to display */
    { terminal,             "" },
	{ onboard,              "" },
	{ apps,                 "" },
    { firefox,              "" },
	{ wifi,                 "" },
	{ bluetooth,            "" },
	{ brightness,           "" },
	{ volume,               "" },
	{ rotation,             "" },
	{ thunar,               "" },
	{ galculator,           "" },
	{ power,                "" },
};
