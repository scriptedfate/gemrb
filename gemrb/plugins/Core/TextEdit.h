/***************************************************************************
                          TextArea.h  -  description
                             -------------------
    begin                : dom ott 12 2003
    copyright            : (C) 2003 by GemRB Developement Team
    email                : Balrog994@yahoo.com
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef TEXTEDIT_H
#define TEXTEDIT_H

#include "Control.h"
#include "../../includes/RGBAColor.h"
#include "Font.h"

#ifdef WIN32

#ifdef GEM_BUILD_DLL
#define GEM_EXPORT __declspec(dllexport)
#else
#define GEM_EXPORT __declspec(dllimport)
#endif

#else
#define GEM_EXPORT
#endif

class GEM_EXPORT TextEdit : public Control
{
public:
	TextEdit(unsigned short maxLength);
	~TextEdit(void);
	/** Draws the Control on the Output Display */
	void Draw(unsigned short x, unsigned short y);
	/** Set Font */
	void SetFont(Font * f);
	/** Set Cursor */
	void SetCursor(Sprite2D * cur);
	/** Set BackGround */
	void SetBackGround(Sprite2D * back);
	/** Sets the Text of the current control */
	int SetText(const char * string, int pos = 0);
	/** Sets the Text of the current control */
	const char *QueryText();
private:
	/** Text Editing Cursor Sprite */
	Sprite2D * Cursor;
	/** Text Font */
	Font * font;
	/** Background */
	Sprite2D * Back;
	/** Max Edit Text Length */
	unsigned short max;
	/** Text Buffer */
	unsigned char * Buffer;
	/** Cursor Position */
	unsigned short CurPos;
	/** Color Palette */
	Color * palette;
public: //Events
	/** Key Press Event */
	void OnKeyPress(unsigned char Key, unsigned short Mod);
	/** Special Key Press */
	void OnSpecialKeyPress(unsigned char Key);
};

#endif
