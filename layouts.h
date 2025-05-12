/* layout(s) */
static const float mfact     = 0.55; /* factor of master area size [0.05..0.95] */
static const int nmaster     = 1;    /* number of clients in master area */
static const int resizehints = 1;    /* 1 means respect size hints in tiled resizals */
static const int lockfullscreen = 1; /* 1 will force focus on the fullscreen window */

static const Layout layouts[] = {
	/* symbol     arrange function */
	/*00*/{ "[]=",      tile },    /* first entry is default */
	/*01*/{ "[M]",      monocle },
	/*02*/{ "[@]",      spiral },
	/*03*/{ "[\\]",     dwindle },
	/*04*/{ "H[]",      deck },
	/*05*/{ "TTT",      bstack },
	/*06*/{ "===",      bstackhoriz },
	/*07*/{ "HHH",      grid },
	/*08*/{ "###",      nrowgrid },
	/*09*/{ "---",      horizgrid },
	/*10*/{ ":::",      gaplessgrid },
	/*11*/{ "|M|",      centeredmaster },
	/*12*/{ ">M>",      centeredfloatingmaster },
	/*13*/{ "><>",      NULL },    /* no layout function means floating behavior */
	/*14*/{ NULL,       NULL },
};

