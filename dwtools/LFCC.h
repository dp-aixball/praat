#ifndef _LFCC_h_
#define _LFCC_h_
/* LFCC.h
 *
 * Linear Frequency Cepstral Coefficients class.
 *
 * Copyright (C) 1993-2011, 2015 David Weenink
 *
 * This code is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or (at
 * your option) any later version.
 *
 * This code is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this work. If not, see <http://www.gnu.org/licenses/>.
 */

/*
 djmw 20001213
 djmw 20020813 GPL header
 djmw 20110306 Latest modification.
*/

#include "CC.h"

Thing_define (LFCC, CC) {
};

autoLFCC LFCC_create (double tmin, double tmax, long nt, double dt, double t1,
	long maximumNumberOfCoefficients, double fmin, double fmax);

#endif /* _LFCC_h_ */
