/*
Copyright (C) 2003-2023 Abhishek Choudhary
This file is part of the Romenagri Transliteration System.

The Romenagri Transliteration System is free software; 
you can redistribute it and/or modify it under the terms of the 
GNU General Public License as published by the 
Free Software Foundation; either version 2 of the License, or 
(at your option) any later version.

The Romenagri Transliteration System is distributed in the hope 
that it will be useful, but WITHOUT ANY WARRANTY; without 
even the implied warranty of MERCHANTABILITY or FITNESS FOR 
A PARTICULAR PURPOSE. See the GNU General Public License for 
more details.

You should have received a copy of the GNU General Public
License along with this file; see the file COPYING. If
not, write to the Free Software Foundation,
51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
*/

/*
Modifications: (Please maintain reverse chronological order)

	dd-mmm-yyyy, Nature of modification,
                        Name of modifier <alias>,
			email adress of modifier

	19-Jan-2006, Added the modifications section,
                        Abhishek Choudhary <hi_pedler>,
			choudhary@indicybers.net

End of modifications.
*/
	
#ifndef __ACII2HIN_H__
#define __ACII2HIN_H__

#include <stdio.h>
#include "aciihin.h"
#include "stack.h"

#ifdef __cplusplus
extern "C"
{
#endif

/*globals*/
  extern char *msg;

  extern char *acii2hin (char *tok);

#ifdef __cplusplus
}
#endif

#endif
