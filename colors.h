static const char black[]           = "#000000";
static const char gray[]            = "#444444";
static const char light_blue[]      = "#bbbbbb";
static const char white[]           = "#eeeeee";
static const char blue[]            = "#005577";
static const char *colors[][3]      = {
	/*               fg         bg         border   */
	[SchemeNorm] = { light_blue,    black,          gray },
	[SchemeSel]  = { white,         blue,           blue  },
};
