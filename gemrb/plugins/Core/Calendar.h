/* GemRB - Infinity Engine Emulator
 * Copyright (C) 2009 The GemRB Project
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 *
 */

#ifndef CALENDAR_H
#define CALENDAR_H

#include "../../includes/exports.h"

class GEM_EXPORT Calendar {
private:
	int daysinyear;
	int monthnamecount;
	int *days;
	int *monthnames;

public:
	Calendar(void);
	~Calendar(void);
	void GetMonthName(int dayandmonth);
	int GetCalendarDay(int date);
};

#endif