/*
 * Bumble Bots, a Gamebuino game
 *
 * Copyright 2018, Erwin Bonsma
 */

#include "Tiles.h"

#include "Globals.h"
#include "Images.h"
#include "Movers.h"
#include "Objects.h"
#include "TileTypes.h"
#include "Palettes.h"

Tiles _tiles = Tiles();

// Exposed in Globals.h
Tiles& tiles = _tiles;

const uint8_t numIsolines = 15;

const ScreenPos tilesCenterPos = ScreenPos { .x = 8, .y = 28 };

/* Each entry identifies a root of a isoline-tree. Roots are ordered from front to back of the map.
 *
 * x <= 0: Tree consists of a single tile, with index of tile = -x
 * x > 0: Tree consists of multiple element. Index of root in isolinePairs = x - 1
 */
const int8_t isolineTreeRoots[] = {
  -63, 1, 3, 6, 10, 15, 21, 28, 34, 39, 43, 46, 48, 49, 0
};

struct IsolinePair {
  /* Left and right child.
   *
   * Using same representation as is used for isolineTreeRoots
   */
  int8_t lChild;
  int8_t rChild;

  /* Right-most leaf of left child.
   *
   * Directly returns index of tile (no need to invert)
   */
  uint8_t lrLeaf;

  /* Left-most leaf of right child.
   *
   * Directly returns index of tile (no need to invert)
   */
  uint8_t rlLeaf;
};

/* Array with entries defining non-leaf entries of isoline trees.
 *
 * There's some redundancy, but the representation is optimized for speed.
 *
 * Data generated by MakeIsolines.py
 */
const IsolinePair isolineTreePairs[] = {
  IsolinePair{ .lChild=-55, .rChild=-62, .lrLeaf=55, .rlLeaf=62 },
  IsolinePair{ .lChild=-47, .rChild=-54, .lrLeaf=47, .rlLeaf=54 },
  IsolinePair{ .lChild=  2, .rChild=-61, .lrLeaf=54, .rlLeaf=61 },
  IsolinePair{ .lChild=-39, .rChild=-46, .lrLeaf=39, .rlLeaf=46 },
  IsolinePair{ .lChild=-53, .rChild=-60, .lrLeaf=53, .rlLeaf=60 },
  IsolinePair{ .lChild=  4, .rChild=  5, .lrLeaf=46, .rlLeaf=53 },
  IsolinePair{ .lChild=-31, .rChild=-38, .lrLeaf=31, .rlLeaf=38 },
  IsolinePair{ .lChild=  7, .rChild=-45, .lrLeaf=38, .rlLeaf=45 },
  IsolinePair{ .lChild=-52, .rChild=-59, .lrLeaf=52, .rlLeaf=59 },
  IsolinePair{ .lChild=  8, .rChild=  9, .lrLeaf=45, .rlLeaf=52 },
  IsolinePair{ .lChild=-23, .rChild=-30, .lrLeaf=23, .rlLeaf=30 },
  IsolinePair{ .lChild= 11, .rChild=-37, .lrLeaf=30, .rlLeaf=37 },
  IsolinePair{ .lChild=-44, .rChild=-51, .lrLeaf=44, .rlLeaf=51 },
  IsolinePair{ .lChild= 13, .rChild=-58, .lrLeaf=51, .rlLeaf=58 },
  IsolinePair{ .lChild= 12, .rChild= 14, .lrLeaf=37, .rlLeaf=44 },
  IsolinePair{ .lChild=-15, .rChild=-22, .lrLeaf=15, .rlLeaf=22 },
  IsolinePair{ .lChild=-29, .rChild=-36, .lrLeaf=29, .rlLeaf=36 },
  IsolinePair{ .lChild= 16, .rChild= 17, .lrLeaf=22, .rlLeaf=29 },
  IsolinePair{ .lChild=-43, .rChild=-50, .lrLeaf=43, .rlLeaf=50 },
  IsolinePair{ .lChild= 19, .rChild=-57, .lrLeaf=50, .rlLeaf=57 },
  IsolinePair{ .lChild= 18, .rChild= 20, .lrLeaf=36, .rlLeaf=43 },
  IsolinePair{ .lChild= -7, .rChild=-14, .lrLeaf= 7, .rlLeaf=14 },
  IsolinePair{ .lChild=-21, .rChild=-28, .lrLeaf=21, .rlLeaf=28 },
  IsolinePair{ .lChild= 22, .rChild= 23, .lrLeaf=14, .rlLeaf=21 },
  IsolinePair{ .lChild=-35, .rChild=-42, .lrLeaf=35, .rlLeaf=42 },
  IsolinePair{ .lChild=-49, .rChild=-56, .lrLeaf=49, .rlLeaf=56 },
  IsolinePair{ .lChild= 25, .rChild= 26, .lrLeaf=42, .rlLeaf=49 },
  IsolinePair{ .lChild= 24, .rChild= 27, .lrLeaf=28, .rlLeaf=35 },
  IsolinePair{ .lChild= -6, .rChild=-13, .lrLeaf= 6, .rlLeaf=13 },
  IsolinePair{ .lChild=-20, .rChild=-27, .lrLeaf=20, .rlLeaf=27 },
  IsolinePair{ .lChild= 29, .rChild= 30, .lrLeaf=13, .rlLeaf=20 },
  IsolinePair{ .lChild=-34, .rChild=-41, .lrLeaf=34, .rlLeaf=41 },
  IsolinePair{ .lChild= 32, .rChild=-48, .lrLeaf=41, .rlLeaf=48 },
  IsolinePair{ .lChild= 31, .rChild= 33, .lrLeaf=27, .rlLeaf=34 },
  IsolinePair{ .lChild= -5, .rChild=-12, .lrLeaf= 5, .rlLeaf=12 },
  IsolinePair{ .lChild= 35, .rChild=-19, .lrLeaf=12, .rlLeaf=19 },
  IsolinePair{ .lChild=-26, .rChild=-33, .lrLeaf=26, .rlLeaf=33 },
  IsolinePair{ .lChild= 37, .rChild=-40, .lrLeaf=33, .rlLeaf=40 },
  IsolinePair{ .lChild= 36, .rChild= 38, .lrLeaf=19, .rlLeaf=26 },
  IsolinePair{ .lChild= -4, .rChild=-11, .lrLeaf= 4, .rlLeaf=11 },
  IsolinePair{ .lChild= 40, .rChild=-18, .lrLeaf=11, .rlLeaf=18 },
  IsolinePair{ .lChild=-25, .rChild=-32, .lrLeaf=25, .rlLeaf=32 },
  IsolinePair{ .lChild= 41, .rChild= 42, .lrLeaf=18, .rlLeaf=25 },
  IsolinePair{ .lChild= -3, .rChild=-10, .lrLeaf= 3, .rlLeaf=10 },
  IsolinePair{ .lChild=-17, .rChild=-24, .lrLeaf=17, .rlLeaf=24 },
  IsolinePair{ .lChild= 44, .rChild= 45, .lrLeaf=10, .rlLeaf=17 },
  IsolinePair{ .lChild= -2, .rChild= -9, .lrLeaf= 2, .rlLeaf= 9 },
  IsolinePair{ .lChild= 47, .rChild=-16, .lrLeaf= 9, .rlLeaf=16 },
  IsolinePair{ .lChild= -1, .rChild= -8, .lrLeaf= 1, .rlLeaf= 8 }
};

ScreenPos TilePosToScreenPos(TilePos tilePos) {
  int8_t col = colOfAnyPos(tilePos);
  int8_t row = rowOfAnyPos(tilePos);
  return ScreenPos {
    .x = (int8_t)((col - row) * 8),
    .y = (int8_t)((col + row) * 4)
  };
}

//-----------------------------------------------------------------------------
// Tile implementation

// Empty constructor to enable usage in array.
// Entries should be initialized using init() method before usage.
Tile::Tile() {}

void Tile::init(int8_t height0) {
  _height0 = height0;
  _objectIndex = -1;
}

void Tile::reset() {
  _height = _height0;
  _moverIndex = -1;
  _flags = 0;
}

void Tile::setWave(int8_t waveHeight) {
  _height = _height0 + waveHeight;
}

void Tile::addMover(int8_t moverIndex) {
  // Insert at head of list
  movers[moverIndex]->_nextMoverIndex = _moverIndex;
  _moverIndex = moverIndex;
}

void Tile::removeMover(int8_t moverIndex) {
  if (_moverIndex == moverIndex) {
    // Mover was at head of list (the 99% case)
    _moverIndex = movers[moverIndex]->_nextMoverIndex;
    movers[moverIndex]->_nextMoverIndex = -1;
  }
  else {
    int8_t pred = _moverIndex;
    int8_t next = movers[pred]->_nextMoverIndex;
    while (pred != -1 && next != moverIndex) {
      pred = next;
      next = movers[pred]->_nextMoverIndex;
    }
    if (pred != -1) {
      // Found it!
      movers[pred]->_nextMoverIndex = movers[moverIndex]->_nextMoverIndex;
      movers[moverIndex]->_nextMoverIndex = -1;
    }
  }
}

int8_t Tile::moverOfType(MoverType moverType, int8_t excludeMover) {
  int8_t p = _moverIndex;
  while (
    p != -1 && (
      movers[p]->moverType() != moverType ||
      p == excludeMover
    )
  ) {
    p = movers[p]->_nextMoverIndex;
  }
  return p;
}

void Tile::addObject(int8_t objectIndex) {
  assertTrue(_objectIndex == -1 || _objectIndex == objectIndex);
  _objectIndex = objectIndex;
}

void Tile::removeObject(int8_t objectIndex) {
  assertTrue(_objectIndex == objectIndex);
  _objectIndex = -1;
}

bool Tile::drawMovers(int8_t x, int8_t y) const {
  int8_t moverIndex = _moverIndex;
  int8_t lastDrawnIndex = -1;
  int8_t maxDyIndex = -1;

  while (moverIndex >= 0) {
    movers[moverIndex]->draw(x, y);
    lastDrawnIndex = moverIndex;
    if (maxDyIndex < 0 || movers[moverIndex]->_dy > movers[maxDyIndex]->_dy) {
      maxDyIndex = moverIndex;
    }

    moverIndex = movers[moverIndex]->_nextMoverIndex;
  }

  if (lastDrawnIndex != maxDyIndex) {
    // Multiple movers and the front-most one was not the last to be drawn, so
    // redraw it to ensure it is not partially obscured by movers behind it.
    movers[maxDyIndex]->draw(x, y);
  }

  // Are all movers behind the center of the tile?
  return (movers[maxDyIndex]->_dy < 0);
}

/* This methods draws all movers and objects on the tile. It ensures that the
 * front-most one is drawn last to prevent it from being partially obscured by
 * the other images. The implementation is optimized for speed for the common
 * use-case (only one object or mover). In case of multiple objects and movers,
 * it may redraw one of the images.
 */
void Tile::drawMoversAndObjects(int8_t x, int8_t y) const {
  if (_objectIndex >= 0) {
    // Draw object
    objects[_objectIndex]->draw(x, y);
  }

  if (_moverIndex >= 0) {
    // Draw movers
    if (
      drawMovers(x, y) &&
      _objectIndex >= 0 &&
      // Only elevated objects can obscure movers
      objects[_objectIndex]->isElevated()
    ) {
      // Redraw object, as it is in front of all movers
      objects[_objectIndex]->draw(x, y);
    }
  }
}

void Tile::draw(TilePos tilePos, TileType& tileType) const {
  ScreenPos pos = TilePosToScreenPos(tilePos);
  pos.x += 40 - tiles.cameraPos().x;
  pos.y += 32 - tiles.cameraPos().y - _height;

  if (pos.x <= -16 || pos.x >= 80) {
    return;
  }

  if (isPosOnMap(tilePos)) {
    if (
      !(tileType.flags & TILEFLAG_CHECKERED) || !((tilePos + (tilePos >> 3)) & 0x01)
    ) {
      gb.display.colorIndex = (Color *)palettes[tileType.paletteIndex];
    }

    // Draw top image (which has transparency)
    const TileImageSpec& spec1 = tileType.image1;
    Image& image1 = tileImages[spec1.imageIndex];
    int8_t dy = spec1.dy;

    image1.setFrame(spec1.frameIndex);
    gb.display.drawImage(pos.x + spec1.dx, pos.y + dy, image1);
    dy += image1.height();

    // Draw next image (without transparency)
    const TileImageSpec& spec2 = tileType.image2;
    Image& image2 = tileImages[spec2.imageIndex];
    dy += spec2.dy;

    image2.setFrame(spec2.frameIndex);
    gb.display.drawImage(pos.x + spec2.dx, pos.y + dy, image2);

    const TileImageSpec& spec3 = tileType.image3;
    if (spec3.imageIndex >= 0) {
      dy += image2.height();

      // Draw optional last image
      Image& image3 = tileImages[spec3.imageIndex];
      dy += spec3.dy;

      image3.setFrame(spec3.frameIndex);
      gb.display.drawImage(pos.x + spec3.dx, pos.y + dy, image3);
    }

    gb.display.colorIndex = (Color *)palettes[PALETTE_DEFAULT];
  }

  if (_objectIndex >= 0 || _moverIndex >= 0) {
    drawMoversAndObjects(pos.x + 4, pos.y - 2);
  }
}

//-----------------------------------------------------------------------------
// Tiles implementation

Tiles::Tiles() :
  _wave(-0.1 * 2 * PI) {

  _wave.setAmplitude(1);
}

void Tiles::init(const TilesSpec* tilesSpec, int8_t offMapTileHeight) {
  _tilesSpec = tilesSpec;

  ScreenPos minPos = MAX_SCREENPOS;
  ScreenPos maxPos = MIN_SCREENPOS;
  for (TilePos pos = maxTilePos; --pos >= 0; ) {
    int height = tilesSpec->baselineHeightAt(pos);
    _units[pos].init(height);

    if (height != offMapTileHeight) {
      ScreenPos screenPos = TilePosToScreenPos(pos);
      screenPos.y -= height;

      minPos.x = min(minPos.x, screenPos.x);
      minPos.y = min(minPos.y, screenPos.y);
      maxPos.x = max(maxPos.x, screenPos.x);
      maxPos.y = max(maxPos.y, screenPos.y);
    }
  }
  _minTargetPos.x = minPos.x + 8 + 24;
  _minTargetPos.y = minPos.y + 26;
  _maxTargetPos.x = maxPos.x + 8 - 24;
  _maxTargetPos.y = maxPos.y - 16;

  _offMapTile.init(offMapTileHeight);

  _cameraPos = tilesCenterPos;
}

void Tiles::reset() {
  for (TilePos pos = maxTilePos; --pos >= 0; ) {
    _units[pos].reset();
  }

  _offMapTile.reset();
  _offMapTilePos = makeTilePos(-1, 0); // Any off-map position suffices

  _waveStrength = 0;
  _waveStrengthDelta = 2;
}

Tile& Tiles::tileAtIndex(int8_t tileIndex) {
  if (isPosOnMap((TilePos)tileIndex)) {
    return _units[tileIndex];
  }
  else {
    return _offMapTile;
  }
}

int8_t Tiles::neighbour(int8_t tileIndex, Heading heading) {
  TilePos tilePos = (TilePos)tileIndex;
  int8_t col = colOfPos(tilePos) + colDelta[heading];
  int8_t row = rowOfPos(tilePos) + rowDelta[heading];
  return makeAnyTilePos(col, row);
}

void Tiles::putMoverOnTile(int8_t moverIndex, int8_t tileIndex) {
  Mover* mover = movers[moverIndex];
  mover->_tileIndex = tileIndex;

  mover->_drawTileIndex = tileIndex;
  _units[tileIndex].addMover(moverIndex);
}

void Tiles::moveMoverToTile(int8_t moverIndex, int8_t tileIndex) {
  Mover* mover = movers[moverIndex];

  if (isPosOnMap(posOfTile(mover->_drawTileIndex))) {
    _units[mover->_drawTileIndex].removeMover(moverIndex);
  }
  else {
    // Can happen when mover retreats before falling of the map
    _offMapTile.removeMover(moverIndex);
  }

  mover->_drawTileIndex = tileIndex;
  if (isPosOnMap(posOfTile(tileIndex))) {
    _units[tileIndex].addMover(moverIndex);
  }
  else {
    _offMapTile.addMover(moverIndex);
    _offMapTilePos = posOfTile(tileIndex);
  }
}

void Tiles::putObjectOnTile(int8_t objectIndex, int8_t tileIndex) {
  objects[objectIndex]->_tileIndex = tileIndex;
  _units[tileIndex].addObject(objectIndex);
}

void Tiles::update() {
  if (_waveStrengthDelta != 0) {
    _waveStrength += _waveStrengthDelta;
    if (_waveStrength == 0 || _waveStrength == 128) {
      // Reached minimum or maximum strength so stop updating
      _waveStrengthDelta = 0;
    }
  }

  uint16_t t = ((gb.frameCount % _wave.period()) * 256) / _wave.period();

  for (TilePos pos = maxTilePos; --pos >= 0; ) {
    uint8_t flexibility = _tilesSpec->tileTypeAt(pos).flexibility;

    if (flexibility) {
      int16_t waveHeight = _wave.eval(pos, t);
      int8_t actualHeight = ((int32_t)waveHeight * flexibility * _waveStrength) >> 15;

      _units[pos].setWave(actualHeight);
    }
  }
}

/* Draws part of an isoline.
 *
 * The drawing order is chosen so that for two neighbouring tiles, the one with
 * the lower height is always drawn first. This is needed to ensure a mover is
 * always drawn correctly when it is moving from one tile to another. In this
 * case, it can be partially overlapping another tile on the same isoline as
 * its "drawing" tile. If the latter due to its height partially obscures the
 * mover, it needs to be drawn later.
 */
void Tiles::drawPartOfIsoline(int8_t elementIndex) {
  if (elementIndex <= 0) {
    TilePos pos = (TilePos)-elementIndex;
    _units[pos].draw(pos, _tilesSpec->tileTypeAt(pos));
  }
  else {
    const IsolinePair& pair = isolineTreePairs[elementIndex - 1];
    if (
      tiles.tileAtIndex(pair.lrLeaf).height() <
      tiles.tileAtIndex(pair.rlLeaf).height()
    ) {
      drawPartOfIsoline(pair.lChild);
      drawPartOfIsoline(pair.rChild);
    }
    else {
      drawPartOfIsoline(pair.rChild);
      drawPartOfIsoline(pair.lChild);
    }
  }
}

ScreenPos Tiles::centerOnPlayer(Player* player) {
  TilePos targetTilePos = player->drawTilePos();

  // When player is at the edge, do not fully center player (to maximize the
  // number of visible tiles).
  ScreenPos targetPos = TilePosToScreenPos(targetTilePos);
  targetPos.x += player->dx() + 8;
  targetPos.y += player->dy();
  targetPos.x = min(_maxTargetPos.x, max(_minTargetPos.x, targetPos.x));
  targetPos.y = min(_maxTargetPos.y, max(_minTargetPos.y, targetPos.y));

  return targetPos;
}

void Tiles::draw(Player* player) {
  ScreenPos targetPos = player ? centerOnPlayer(player) : tilesCenterPos;

  // Move camera gradually, 1 pixel at most.
  _cameraPos.x += sign(targetPos.x - _cameraPos.x);
  _cameraPos.y += sign(targetPos.y - _cameraPos.y);

  int8_t offMapIsoline = 14 - (colOfOffMapPos(_offMapTilePos) + rowOfOffMapPos(_offMapTilePos));
  if (offMapIsoline == numIsolines) {
    _offMapTile.draw(_offMapTilePos, tileTypes[0]);
  }
  for (int8_t i = numIsolines; --i >= 0; ) {
    drawPartOfIsoline(isolineTreeRoots[i]);
    if (i == offMapIsoline) {
      _offMapTile.draw(_offMapTilePos, tileTypes[0]);
    }
  }
  if (offMapIsoline == -1) {
    _offMapTile.draw(_offMapTilePos, tileTypes[0]);
  }
}

