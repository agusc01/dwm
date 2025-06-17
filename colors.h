static const char black[]           = "#000000";
static const char gray[]            = "#444444";
static const char light_gray[]      = "#BBBBBB";
static const char white[]           = "#EEEEEE";
static const char blue[]            = "#005577";

// https://coolors.co/FF0000-FF4D00-FF9900-FFCC00-FFFF00-CCFF00-66FF00-00FF00-00CC00-009900
static const char red[]                 = "#FF0000";
static const char aerospace_orange[]    = "#FF4D00";
static const char jonquil[]             = "#FFCC00";
static const char yellow[]              = "#FFFF00";
static const char lime_green[]          = "#00CC00";
static const char forest_green[]        = "#009900";

// https://coolors.co/E3F2FD-BBDEFB-90CAF9-42A5F5-1E88E5-1976D2-1565C0-0D47A1-031D44-04395E
static const char light_sky_blue[]      = "#90CAF9";
static const char argentinian_blue[]    = "#42A5F5";
static const char green_blue[]          = "#1565C0";
static const char cobalt_blue[]         = "#0D47A1";
static const char oxford_blue[]         = "#031D44";
static const char prussian_blue[]       = "#04395E";

#define OPAQUE                 0x00

static const unsigned int alphas[][3]      = {
    /*               fg      bg        border*/
    [SchemeNorm] = { OPAQUE, OPAQUE, OPAQUE },
	[SchemeSel]  = { OPAQUE, OPAQUE, OPAQUE },
};

static const char *colors[][3]      = {
	/*                    fg             bg                   border   */
	[SchemeNorm]      = { white,         black,               gray },
	[SchemeSel]       = { light_gray,    blue,                forest_green  },

	[SchemeState1]    = { white,         red,                 red  },
	[SchemeState2]    = { black,         aerospace_orange,    aerospace_orange  },
	[SchemeState3]    = { black,         jonquil,             jonquil  },
	[SchemeState4]    = { black,         yellow,              yellow  },
	[SchemeState5]    = { white,         lime_green,          lime_green  },
	[SchemeState6]    = { white,         forest_green,        forest_green },

	[SchemeState11]   = { red,                  black,        black },
	[SchemeState12]   = { aerospace_orange,     black,        black },
	[SchemeState13]   = { jonquil,              black,        black },
	[SchemeState14]   = { yellow,               black,        black },
	[SchemeState15]   = { lime_green,           black,        black },
	[SchemeState16]   = { forest_green,         black,        black },

	[SchemePrimary1]  = { black,         light_sky_blue,      light_sky_blue  },
	[SchemePrimary2]  = { black,         argentinian_blue,    argentinian_blue  },
	[SchemePrimary3]  = { white,         green_blue,          green_blue  },
	[SchemePrimary4]  = { white,         cobalt_blue,         cobalt_blue  },
	[SchemePrimary5]  = { white,         oxford_blue,         oxford_blue  },
	[SchemePrimary6]  = { white,         prussian_blue,       prussian_blue  },

	[SchemePrimary11] = { light_sky_blue,       black,        black },
	[SchemePrimary12] = { argentinian_blue,     black,        black },
	[SchemePrimary13] = { green_blue,           black,        black },
	[SchemePrimary14] = { cobalt_blue,          black,        black },
	[SchemePrimary15] = { oxford_blue,          black,        black },
	[SchemePrimary16] = { prussian_blue,        black,        black },
};
