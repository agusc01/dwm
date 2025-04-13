/* signal definitions */
/* signum must be greater than 0 */
/* trigger signals using `xsetroot -name "fsignal:<signum>"` */
static Signal signals[] = {
/* signum   function                         argument  */
    /* Layouts */
	{  0,   setlayout,                      {.v = &layouts[0]}   },
	{  1,   setlayout,                      {.v = &layouts[1]}   },
	{  2,   setlayout,                      {.v = &layouts[2]}   },
    {  4,   setlayout,                      {.v = &layouts[3]}   },
	{  3,   setlayout,                      {.v = &layouts[4]}   },
	{  5,   setlayout,                      {.v = &layouts[5]}   },
	{  6,   setlayout,                      {.v = &layouts[6]}   },
	{  7,   setlayout,                      {.v = &layouts[7]}   },
	{  8,   setlayout,                      {.v = &layouts[8]}   },
	{  9,   setlayout,                      {.v = &layouts[9]}   },
	{ 10,   setlayout,                      {.v = &layouts[10]}  },
	{ 11,   setlayout,                      {.v = &layouts[11]}  },
	{ 12,   setlayout,                      {.v = &layouts[12]}  },
	{ 13,   setlayout,                      {.v = &layouts[13]}  },

    /* Sound & Brightness */
    // 20 sound
    // 21 brightness

    /* Border */
    { 30,   setborderpx,                    {.i = -1}            },
    { 31,   setborderpx,                    {.i = +1}            },
    { 32,   setborderpx,                    {.i = 0 }            },

    /* Gaps */
    { 40,   incrgaps,                       {.i = +1 }           },
    { 41,   incrgaps,                       {.i = -1 }           },
    { 42,   incrigaps,                      {.i = +1 }           },
    { 43,   incrigaps,                      {.i = -1 }           },
    { 44,   incrogaps,                      {.i = +1 }           },
    { 45,   incrogaps,                      {.i = -1 }           },
    { 46,   incrihgaps,                     {.i = +1 }           },
    { 47,   incrihgaps,                     {.i = -1 }           },
    { 48,   incrivgaps,                     {.i = +1 }           },
    { 49,   incrivgaps,                     {.i = -1 }           },
    { 51,   incrohgaps,                     {.i = +1 }           },
    { 52,   incrohgaps,                     {.i = -1 }           },
    { 53,   incrovgaps,                     {.i = +1 }           },
    { 54,   incrovgaps,                     {.i = -1 }           },
    { 55,   defaultgaps,                    {0}                  },
    { 56,   togglegaps,                     {0}                  },

    /* toggles */
    { 70,   togglebar,                      {0}                  },
    { 71,   togglefloating,                 {0}                  },
    { 72,   togglefullscr,                  {0}                  },
    { 73,   togglesticky,                   {0}                  },
    { 74,   togglesmartgaps,                {0}                  },
    { 75,   togglesmartborders,             {0}                  },
    { 76,   togglealttag,                   {0}                  },
};
