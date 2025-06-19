/* launcher commands (They must be NULL terminated) */
static const char* menu[]            = { "/usr/bin/fish", "-c", "rofi_menu", NULL };

static const Launcher launchers[] = {
     /* command       name to display */
    { menu,                 "" },
};
