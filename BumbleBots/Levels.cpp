#include "Levels.h"

const uint8_t H0 = 0x00;
const uint8_t H1 = 0x20;
const uint8_t H2 = 0x40;
const uint8_t H3 = 0x60;
const uint8_t H4 = 0x80;
const uint8_t H5 = 0xa0;
const uint8_t H6 = 0xc0;
const uint8_t H7 = 0xe0;

const LevelDef levelDefs[numLevels] = {
  LevelDef {
    .mapDef = MapDef {
      .numCols = 8,
      .numRows = 8,
      .tiles = {
        0x00|H7, 0x00|H7, 0x00|H7, 0x00|H7, 0x00|H7, 0x00|H7, 0x00|H7, 0x00|H7,
        0x00|H7, 0x00|H7, 0x00|H6, 0x00|H6, 0x00|H6, 0x00|H6, 0x00|H6, 0x00|H6,
        0x00|H7, 0x00|H7, 0x00|H5, 0x00|H5, 0x00|H5, 0x00|H5, 0x00|H5, 0x00|H5,
        0x00|H4, 0x00|H4, 0x00|H4, 0x00|H4, 0x00|H4, 0x00|H4, 0x00|H4, 0x00|H4,
        0x00|H4, 0x00|H3, 0x00|H3, 0x00|H3, 0x00|H3, 0x00|H3, 0x00|H3, 0x00|H3,
        0x00|H4, 0x00|H3, 0x00|H2, 0x00|H2, 0x00|H2, 0x00|H2, 0x00|H2, 0x00|H2,
        0x00|H4, 0x00|H3, 0x00|H1, 0x00|H1, 0x00|H1, 0x00|H1, 0x00|H1, 0x00|H1,
        0x00|H4, 0x00|H3, 0x00|H0, 0x00|H0, 0x00|H0, 0x00|H0, 0x00|H0, 0x00|H0
      }
    }
  },
  LevelDef {
    .mapDef = MapDef {
      .numCols = 8,
      .numRows = 8,
      .tiles = {
        0x01|H0, 0x01|H0, 0x01|H0, 0x01|H0, 0x01|H0, 0x01|H0, 0x01|H0, 0x01|H0,
        0x01|H0, 0x01|H0, 0x01|H0, 0x01|H0, 0x01|H0, 0x01|H0, 0x01|H0, 0x01|H0,
        0x01|H0, 0x01|H0, 0x01|H0, 0x01|H0, 0x01|H0, 0x01|H0, 0x01|H0, 0x01|H0,
        0x01|H0, 0x01|H0, 0x01|H0, 0x01|H0, 0x01|H0, 0x01|H0, 0x01|H0, 0x01|H0,
        0x01|H0, 0x01|H0, 0x01|H0, 0x01|H0, 0x01|H0, 0x01|H0, 0x01|H0, 0x01|H0,
        0x01|H0, 0x01|H0, 0x01|H0, 0x01|H0, 0x01|H0, 0x01|H0, 0x01|H0, 0x01|H0,
        0x01|H0, 0x01|H0, 0x01|H0, 0x01|H0, 0x01|H0, 0x01|H0, 0x01|H0, 0x01|H0,
        0x01|H0, 0x01|H0, 0x01|H0, 0x01|H0, 0x01|H0, 0x01|H0, 0x01|H0, 0x01|H0
      }
    }
  }
};

