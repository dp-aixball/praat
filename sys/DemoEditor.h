#ifndef _DemoEditor_h_
#define _DemoEditor_h_
/* DemoEditor.h
 *
 * Copyright (C) 2009 Paul Boersma
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or (at
 * your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

/*
 * pb 2009/05/07
 */

#ifndef _Editor_h_
	#include "Editor.h"
#endif

#define DemoEditor__parents(Klas) Editor__parents(Klas) Thing_inherit (Klas, Editor)
Thing_declare1 (DemoEditor);

int DemoEditor_init (DemoEditor me, Widget parent);
DemoEditor DemoEditor_create (Widget parent);

void Demo_open (Interpreter interpreter);
void Demo_close (void);

void Demo_show (void);
bool Demo_waitForInput (void);
bool Demo_clicked (void);
double Demo_x (void);
double Demo_y (void);
bool Demo_keyPressed (void);
wchar_t Demo_key (void);
bool Demo_shiftKeyPressed (void);
bool Demo_commandKeyPressed (void);
bool Demo_optionKeyPressed (void);
bool Demo_extraControlKeyPressed (void);

/* End of file DemoEditor.h */
#endif