/* GemRB - Infinity Engine Emulator
 * Copyright (C) 2003 The GemRB Project
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

#ifndef TILEOVERLAY_H
#define TILEOVERLAY_H

#include "exports.h"

#include "Tile.h"

#include <vector>

extern bool RedrawTile;

class GEM_EXPORT TileOverlay {
public:
	int w, h;
	//std::vector<Tile*> tiles;
	Tile** tiles;
	int count;
public:
	TileOverlay(int Width, int Height);
	~TileOverlay(void);
	void AddTile(Tile* tile);
	void Draw(Region viewport, std::vector< TileOverlay*> &overlays, int flags);
	void BumpViewport(const Region &viewport, Region &vp);
};

#endif
