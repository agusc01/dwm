static const char black[]           = "#000000";
static const char gray[]            = "#444444";
static const char light_gray[]      = "#BBBBBB";
static const char white[]           = "#EEEEEE";
static const char blue[]            = "#005577";

// https://coolors.co/FF0000-FF4D00-FF9900-FFCC00-FFFF00-CCFF00-66FF00-00FF00-00CC00-009900
static const char red[]                 = "#FF0000";
static const char aerospace_orange[]    = "#FF4D00";
static const char orange_peel[]         = "#FF9900";
static const char jonquil[]             = "#FFCC00";
static const char yellow[]              = "#FFFF00";
static const char lime[]                = "#CCFF00";
static const char bright_green[]        = "#66FF00";
static const char green[]               = "#00FF00";
static const char lime_green[]          = "#00CC00";
static const char forest_green[]        = "#009900";

// https://coolors.co/E3F2FD-BBDEFB-90CAF9-42A5F5-1E88E5-1976D2-1565C0-0D47A1-031D44-04395E
static const char alice_blue[]          = "#E3F2FD";
static const char uranian_blue[]        = "#BBDEFB";
static const char light_sky_blue[]      = "#90CAF9";
static const char argentinian_blue[]    = "#42A5F5";
static const char bleu_de_france[]      = "#1E88E5";
static const char french_blue[]         = "#1976D2";
static const char green_blue[]          = "#1565C0";
static const char cobalt_blue[]         = "#0D47A1";
static const char oxford_blue[]         = "#031D44";
static const char prussian_blue[]       = "#04395E";

static const char *colors[][3]      = {
	/*                    fg             bg                   border   */
	[SchemeNorm]      = { white,         black,               gray },
	[SchemeSel]       = { light_gray,    blue,                forest_green  },

	[SchemeState1]    = { white,         red,                 red  },
	[SchemeState2]    = { black,         aerospace_orange,    aerospace_orange  },
	[SchemeState3]    = { black,         orange_peel,         orange_peel  },
	[SchemeState4]    = { black,         jonquil,             jonquil  },
	[SchemeState5]    = { black,         yellow,              yellow  },
	[SchemeState6]    = { black,         lime,                lime  },
	[SchemeState7]    = { black,         bright_green,        bright_green  },
	[SchemeState8]    = { black,         green,               green  },
	[SchemeState9]    = { white,         lime_green,          lime_green  },
	[SchemeState10]   = { white,         forest_green,        forest_green },

	[SchemePrimary1]  = { black,         alice_blue,          alice_blue  },
	[SchemePrimary2]  = { black,         uranian_blue,        uranian_blue  },
	[SchemePrimary3]  = { black,         light_sky_blue,      light_sky_blue  },
	[SchemePrimary4]  = { black,         argentinian_blue,    argentinian_blue  },
	[SchemePrimary5]  = { black,         bleu_de_france,      bleu_de_france  },
	[SchemePrimary6]  = { black,         french_blue,         french_blue  },
	[SchemePrimary7]  = { white,         green_blue,          green_blue  },
	[SchemePrimary8]  = { white,         cobalt_blue,         cobalt_blue  },
	[SchemePrimary9]  = { white,         oxford_blue,         oxford_blue  },
	[SchemePrimary10] = { white,         prussian_blue,       prussian_blue  },
};
