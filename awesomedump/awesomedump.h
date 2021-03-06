/*      awesomedump.h
*       Ente
*       ducksource@duckpond.ch
*       Version:1.0
*
*       Dump byte stream in an awesome-kickass way!
*       Require:
*           - stdio.h
*           - stdlib.h
*           - string.h
*           - unistd.h
*           - stdbool.h
*
*
*       Licence:
*       You're allowed to edit and publish my source in all of your free and open-source projects.
*       Please send me an e-mail if you'll implement this source in one of your commercial or proprietary projects.
*       Leave this Header untouched!
*
*       Warranty:
*       Warranty void if signet is broken
*       =================== / /===================
*       [       Warranty   / /   Signet          ]
*       ==================/ /=====================
*       !!NOWAY!!
*
*/

/*==============================*/
/*             TODO's           */
/*==============================*/
/*
*
*
*
*
*
*
*/

/*==============================*/
/*           includes           */
/*==============================*/
#ifndef _AWESOMEDUMP_H
	#define _AWESOMEDUMP_H 1

	/*all Libraries*/
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include <unistd.h>
	#include <stdbool.h>

/*==============================*/
/*         Cool stuff           */
/*==============================*/
#ifndef CURSystem
	#ifdef __unix__ 
		/*Unix-Systes*/
		#define CURSystem printf("Hello Unix-user\n You're elite!\n");
	#elif __BORLANDC__ && __MSDOS__
		/*Borland c-compiler and MSDOS*/
		#define CURSystem printf("Hello BorlandC-complier or MSDOS user!\n");
	#elif __WIN32__ || _MSC_VER
		/*Windows 32-Syste or visual C*/
		#define CURSystem printf("Hello windows user!\n");
	#else
		#define CURSystem printf("This programm is not compatible with your System, sorry -> EXIT\n");return EXIT_FAILURE;
	#endif
#endif

// stringification
#define xstr(a) str(a)
#define str(a) #a

/*==============================*/
/*enums declaration + definition*/
/*==============================*/

#define AD_VERSION "1.0"
#define AD_PROGNAME "awesomedump"

#define AD_BUF_BASESIZE 100
#define AD_BUF_INCFACTOR 1.5
#define AD_DEFAULT_LINESIZE 8

/*==============================*/
/*     global declarations      */
/*==============================*/

/*==============================*/
/*    function declarations     */
/*==============================*/

/*
*	funcname(args): <desc>
*	Arguments:
*		- <arg1> : <desc1> 
*/
#endif
