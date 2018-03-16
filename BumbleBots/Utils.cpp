#include "Utils.h"

// column Delta for heading
const int8_t colDelta[] = {0, 1, 0, -1 };

// row Delta for heading
const int8_t rowDelta[] = {-1, 0, 1, 0 };


int8_t distance(TilePos pos1, TilePos pos2) {
  return (
    abs(colOfPos(pos1) - colOfPos(pos2)) +
    abs(rowOfPos(pos1) - rowOfPos(pos2))
  );
}


TilePos makeOffMapTilePos(int8_t col, int8_t row) {
  if (col < 0 || col >= 8) {
    if (col < 0) {
      return 0x80 | (row & 0x07);
    }
    else {
      return 0x90 | (row & 0x07);
    }
  }
  else {
    if (row < 0) {
      return 0xa0 | (col & 0x07);
    }
    else {
      return 0xb0 | (col & 0x07);
    }
  }
}

int8_t colOfOffMapPos(TilePos pos) {
  if (pos & 0x20) {
    return pos & 0x07;
  }
  else {
    return (pos & 0x10) ? 8 : -1;
  }
}

int8_t rowOfOffMapPos(TilePos pos) {
  if (pos & 0x20) {
    return (pos & 0x10) ? 8 : -1;
  }
  else {
    return pos & 0x07;
  }
}

TilePos makeAnyTilePos(int8_t col, int8_t row) {
  if (col < 0 || col >= 8 || row < 0 || row >= 8) {
    return makeOffMapTilePos(col, row);
  }
  return makeTilePos(col, row);
}

int8_t colOfAnyPos(TilePos pos) {
  return isPosOnMap(pos) ? colOfPos(pos) : colOfOffMapPos(pos);
}
int8_t rowOfAnyPos(TilePos pos) {
  return isPosOnMap(pos) ? rowOfPos(pos) : rowOfOffMapPos(pos);
}


const float clampLimit = 12;

float smoothClamp(float value) {
  float vn = value / clampLimit;
  float f = vn/sqrt(vn*vn + 1);
  return f * clampLimit;
}

/* Source: https://en.wikipedia.org/wiki/Smoothstep
 */
float smoothStep(float value) {
  float vn = 0.5 * (value / clampLimit + 1);
  vn = max(0, min(1, vn));
  float f = vn * vn * (3 - 2 * vn);
  return (f * 2 - 1) * clampLimit;
}

const uint8_t fastCosTableSize = 32;
const uint8_t fastCosTable[fastCosTableSize + 1] = {
  255,
  255,
  254,
  252,
  250,
  247,
  244,
  240,
  236,
  231,
  225,
  219,
  212,
  205,
  197,
  189,
  180,
  171,
  162,
  152,
  142,
  131,
  120,
  109,
  98,
  86,
  74,
  62,
  50,
  37,
  25,
  13,
  0
};

/* Fast Cosine function approximation.
 * It is not very accurate, but that's okay.
 *
 * Note: The period of this function is 1 instead of 2*PI
 */
float fastCos(float value) {
  // Ensure it's in range [0..1>
  value = abs(value);
  value = value - (int)value;

  // Exploit symmetry
  if (value > 0.5f) {
    value = 1 - value;
  }
  if (value < 0.25f) {
    return fastCosTable[(int)(value * 4 * fastCosTableSize + 0.5f)] / 255.0f;
  }
  else {
    return -fastCosTable[(int)((0.5f - value) * 4 * fastCosTableSize + 0.5f)] / 255.0f;
  }
}
