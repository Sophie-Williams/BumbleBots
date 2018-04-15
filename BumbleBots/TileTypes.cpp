/*
 * Bumble Bots, a Gamebuino game
 *
 * Copyright 2018, Erwin Bonsma
 */

#include "TileTypes.h"

#include "Palettes.h"

TileType tileTypes[numTileTypes] = {
  // 0: Basic, fixed, light
  TileType {
    .image1 = TileImageSpec { .imageIndex = 0, .frameIndex = 0, .dx = 2, .dy = 0 },
    .image2 = TileImageSpec { .imageIndex = 3, .frameIndex = 0, .dx = 0, .dy = 0 },
    .paletteIndex = 0,
    .height0 = 0,
    .flexibility = 0,
    .flags = 0
  },

  // 1: Basic, normal flexibility
  TileType {
    .image1 = TileImageSpec { .imageIndex = 0, .frameIndex = 0, .dx = 1, .dy = 0 },
    .image2 = TileImageSpec { .imageIndex = 1, .frameIndex = 0, .dx = 0, .dy = 0 },
    .paletteIndex = PALETTE_DARK_TILE,
    .height0 = 0,
    .flexibility = 2,
    .flags = TILEFLAG_CHECKERED
  },

  // 2: Basic, fixed, checkered
  TileType {
    .image1 = TileImageSpec { .imageIndex = 0, .frameIndex = 0, .dx = 2, .dy = 0 },
    .image2 = TileImageSpec { .imageIndex = 3, .frameIndex = 0, .dx = 0, .dy = 0 },

    .paletteIndex = PALETTE_DARK_TILE,
    .height0 = 0,
    .flexibility = 0,
    .flags = TILEFLAG_CHECKERED
  },

  // 3: Basic, flexibility-3
  TileType {
    .image1 = TileImageSpec { .imageIndex = 0, .frameIndex = 0, .dx = 1, .dy = 0 },
    .image2 = TileImageSpec { .imageIndex = 1, .frameIndex = 0, .dx = 0, .dy = 0 },
    .paletteIndex = PALETTE_DARK_TILE,
    .height0 = 0,
    .flexibility = 3,
    .flags = TILEFLAG_CHECKERED
  },

  // 4: Bridge Left
  TileType {
    .image1 = TileImageSpec { .imageIndex = 0, .frameIndex = 0, .dx = 1, .dy = 0 },
    .image2 = TileImageSpec { .imageIndex = 4, .frameIndex = 0, .dx = 0, .dy = 0 },
    .paletteIndex = 0,
    .height0 = 8,
    .flexibility = 0,
    .flags = 0
  },

  // 5: Bridge Middle
  TileType {
    .image1 = TileImageSpec { .imageIndex = 0, .frameIndex = 0, .dx = 1, .dy = 0 },
    .image2 = TileImageSpec { .imageIndex = 1, .frameIndex = 0, .dx = 0, .dy = 0 },
    .paletteIndex = 0,
    .height0 = 8,
    .flexibility = 0,
    .flags = 0
  },

  // 6: Bridge Right
  TileType {
    .image1 = TileImageSpec { .imageIndex = 0, .frameIndex = 0, .dx = 1, .dy = 0 },
    .image2 = TileImageSpec { .imageIndex = 4, .frameIndex = 1, .dx = 0, .dy = 0 },
    .paletteIndex = 0,
    .height0 = 8,
    .flexibility = 0,
    .flags = 0
  },

  // 7: Elevator
  TileType {
    .image1 = TileImageSpec { .imageIndex = 0, .frameIndex = 0, .dx = 1, .dy = 0 },
    .image2 = TileImageSpec { .imageIndex = 1, .frameIndex = 0, .dx = 0, .dy = 0 },
    .paletteIndex = 0,
    .height0 = 8,
    .flexibility = 9,
    .flags = 0
  },

  // 8: Pillar, Moving
  TileType {
    .image1 = TileImageSpec { .imageIndex = 5, .frameIndex = 0, .dx = 3, .dy = 2 },
    .image2 = TileImageSpec { .imageIndex = 6, .frameIndex = 0, .dx = 2, .dy = 0 },

    .paletteIndex = 0,
    .height0 = 0,
    .flexibility = 3,
    .flags = 0
  },

  // 9: Pillar, Fixed
  TileType {
    .image1 = TileImageSpec { .imageIndex = 5, .frameIndex = 0, .dx = 3, .dy = 2 },
    .image2 = TileImageSpec { .imageIndex = 7, .frameIndex = 0, .dx = 2, .dy = 0 },
    .paletteIndex = 0,
    .height0 = 0,
    .flexibility = 0,
    .flags = 0
  },

  // 10: Basic, fixed, dark
  TileType {
    .image1 = TileImageSpec { .imageIndex = 0, .frameIndex = 0, .dx = 2, .dy = 0 },
    .image2 = TileImageSpec { .imageIndex = 3, .frameIndex = 0, .dx = 0, .dy = 0 },
    .paletteIndex = PALETTE_DARK_TILE,
    .height0 = 0,
    .flexibility = 0,
    .flags = 0
  },

  // 11: Basic, fixed, blue
  TileType {
    .image1 = TileImageSpec { .imageIndex = 0, .frameIndex = 0, .dx = 2, .dy = 0 },
    .image2 = TileImageSpec { .imageIndex = 3, .frameIndex = 0, .dx = 0, .dy = 0 },
    .paletteIndex = PALETTE_BLUE_TILE,
    .height0 = 0,
    .flexibility = 0,
    .flags = 0
  },

  // 12: Off-map (to create maps smaller than 8x8)
  TileType {
    .image1 = TileImageSpec { .imageIndex = 9, .frameIndex = 0, .dx = 0, .dy = 0 },
    .image2 = TileImageSpec { .imageIndex = 9, .frameIndex = 0, .dx = 0, .dy = 0 },
    .paletteIndex = PALETTE_DEFAULT,
    .height0 = -100,
    .flexibility = 0,
    .flags = 0
  },

  // 13: Plank bridge
  TileType {
    .image1 = TileImageSpec { .imageIndex =  0, .frameIndex = 1, .dx = 2, .dy = 0 },
    .image2 = TileImageSpec { .imageIndex = 10, .frameIndex = 0, .dx = 0, .dy = 0 },
    .paletteIndex = PALETTE_DEFAULT,
    .height0 = 4,
    .flexibility = 0,
    .flags = 0
  },

  // 14: Plank bridge (edge), requires larger top image
  TileType {
    .image1 = TileImageSpec { .imageIndex = 11, .frameIndex = 0, .dx = 0, .dy = 0 },
    .image2 = TileImageSpec { .imageIndex =  3, .frameIndex = 1, .dx = 0, .dy = 0 },
    .paletteIndex = PALETTE_DEFAULT,
    .height0 = 4,
    .flexibility = 0,
    .flags = 0
  },

  // 15: Basic, flexibility-3, Blue
  TileType {
    .image1 = TileImageSpec { .imageIndex = 0, .frameIndex = 0, .dx = 1, .dy = 0 },
    .image2 = TileImageSpec { .imageIndex = 1, .frameIndex = 0, .dx = 0, .dy = 0 },
    .paletteIndex = PALETTE_BLUE_TILE,
    .height0 = 0,
    .flexibility = 3,
    .flags = 0
  },

  // 16: Grass
  TileType {
    .image1 = TileImageSpec { .imageIndex = 0, .frameIndex = 3, .dx = 2, .dy = 0 },
    .image2 = TileImageSpec { .imageIndex = 3, .frameIndex = 2, .dx = 0, .dy = 0 },
    .paletteIndex = 0,
    .height0 = 0,
    .flexibility = 0,
    .flags = 0
  },

  // 17: Grass with tree
  TileType {
    .image1 = TileImageSpec { .imageIndex = 12, .frameIndex = 0, .dx = 2, .dy = 2 },
    .image2 = TileImageSpec { .imageIndex =  3, .frameIndex = 3, .dx = 0, .dy = 0 },
    .paletteIndex = 0,
    .height0 = 0,
    .flexibility = 0,
    .flags = 0
  },

  // 18: Castle roof
  TileType {
    .image1 = TileImageSpec { .imageIndex =  0, .frameIndex = 2, .dx = 2, .dy = 0 },
    .image2 = TileImageSpec { .imageIndex =  2, .frameIndex = 0, .dx = 1, .dy = 0 },
    .paletteIndex = PALETTE_DEFAULT,
    .height0 = 10,
    .flexibility = 0,
    .flags = 0
  },

  // X: TMP Basic, high flexibilty
  TileType {
    .image1 = TileImageSpec { .imageIndex = 0, .frameIndex = 0, .dx = 1, .dy = 0 },
    .image2 = TileImageSpec { .imageIndex = 1, .frameIndex = 0, .dx = 0, .dy = 0 },
    .paletteIndex = 4,
    .height0 = 0,
    .flexibility = 8,
    .flags = TILEFLAG_CHECKERED
  },

  // N - 2: Level menu 1
  TileType {
    .image1 = TileImageSpec { .imageIndex = 0, .frameIndex = 0, .dx = 2, .dy = 0 },
    .image2 = TileImageSpec { .imageIndex = 8, .frameIndex = 0, .dx = 0, .dy = 0 },
    .paletteIndex = PALETTE_LEVELMENU_TILE1,
    .height0 = 0,
    .flexibility = 0,
    .flags = 0
  },

  // N - 1: Level menu 2
  TileType {
    .image1 = TileImageSpec { .imageIndex = 0, .frameIndex = 0, .dx = 2, .dy = 0 },
    .image2 = TileImageSpec { .imageIndex = 8, .frameIndex = 0, .dx = 0, .dy = 0 },
    .paletteIndex = PALETTE_LEVELMENU_TILE2,
    .height0 = 0,
    .flexibility = 0,
    .flags = 0
  },
};

const uint8_t data_0[] = {
  13, 4, 4, 0, 0, (uint8_t)INDEX_PINK, 1,
  // 0: TileBasicFixed-Top.png/TileBasicMoving-Top.png
  0xee, 0xee, 0xee, 0x7e, 0xee, 0xee, 0xe0,
  0xee, 0xee, 0x77, 0x77, 0x7e, 0xee, 0xe0,
  0xee, 0x77, 0x77, 0x77, 0x77, 0x7e, 0xe0,
  0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x70,

  // 1: PlankBridge-Top.png
  0xee, 0xee, 0xee, 0x4e, 0xee, 0xee, 0xe0,
  0xee, 0xee, 0x44, 0x44, 0x4e, 0xee, 0xe0,
  0xee, 0x44, 0x44, 0x44, 0x44, 0x4e, 0xe0,
  0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x40,

  // 2: CastleRoof-Top.png
  0xee, 0xee, 0xee, 0x4e, 0xee, 0xee, 0xe0,
  0xee, 0xee, 0x49, 0x94, 0x4e, 0xee, 0xe0,
  0xee, 0x49, 0x94, 0x49, 0x94, 0x4e, 0xe0,
  0x49, 0x94, 0x49, 0x94, 0x49, 0x94, 0x40,

  // 3: Grass-Top.png
  0xee, 0xee, 0xee, 0xbe, 0xee, 0xee, 0xe0,
  0xee, 0xee, 0xbb, 0xbb, 0xbe, 0xee, 0xe0,
  0xee, 0xbb, 0xbb, 0x3b, 0xbb, 0xbe, 0xe0,
  0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb0,
};

const uint8_t data_1[] = {
  15, 7, 1, 0, 0, 0xFF, 1,
  0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x70,
  0x66, 0x77, 0x77, 0x77, 0x77, 0x77, 0x75, 0x50,
  0x66, 0x66, 0x77, 0x77, 0x77, 0x75, 0x55, 0x50,
  0x66, 0x66, 0x66, 0x77, 0x75, 0x55, 0x55, 0x50,
  0x00, 0x66, 0x66, 0x66, 0x55, 0x55, 0x50, 0x00,
  0x00, 0x00, 0x66, 0x66, 0x55, 0x50, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x66, 0x50, 0x00, 0x00, 0x00
};

const uint8_t data_2[] = {
  15, 4, 1, 0, 1, 0xFF, 1,
  // 0: CastleRoof-Bottom.png
  0x99, 0x44, 0x99, 0x44, 0x99, 0x44, 0x99, 0x40,
  0x00, 0x99, 0x44, 0x99, 0x44, 0x99, 0x40, 0x00,
  0x00, 0x00, 0x99, 0x44, 0x99, 0x40, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x99, 0x40, 0x00, 0x00, 0x00,
};

const uint8_t data_3[] = {
  16, 9, 4, 0, 0, 0xFF, 1,
  // 0: Basic fixed, bottom
  0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77,
  0x67, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x55,
  0x66, 0x67, 0x77, 0x77, 0x77, 0x77, 0x55, 0x55,
  0x66, 0x66, 0x67, 0x77, 0x77, 0x55, 0x55, 0x55,
  0x66, 0x66, 0x66, 0x67, 0x55, 0x55, 0x55, 0x55,
  0x06, 0x66, 0x66, 0x66, 0x55, 0x55, 0x55, 0x00,
  0x00, 0x06, 0x66, 0x66, 0x55, 0x55, 0x00, 0x00,
  0x00, 0x00, 0x06, 0x66, 0x55, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00,

  // 1: PlankBridgeEdge-Bottom.png
  0xcc, 0xa9, 0xc5, 0x54, 0x00, 0xcc, 0xcc, 0xcc,
  0xdc, 0xcc, 0xcc, 0xa5, 0xcc, 0xcc, 0xcc, 0x11,
  0xdd, 0xdc, 0xcc, 0xa9, 0xcc, 0xcc, 0x11, 0x11,
  0xdd, 0xdd, 0xdc, 0xcc, 0xcc, 0x11, 0x11, 0x11,
  0xdd, 0xdd, 0xdd, 0xdc, 0x11, 0x11, 0x11, 0x11,
  0x0d, 0xdd, 0xdd, 0xdd, 0x11, 0x11, 0x11, 0x00,
  0x00, 0x0d, 0xdd, 0xdd, 0x11, 0x11, 0x00, 0x00,
  0x00, 0x00, 0x0d, 0xdd, 0x11, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x00,

  // 2: Grass-Bottom.png
  0xbb, 0xbb, 0xb3, 0xbb, 0xbb, 0x3b, 0xb3, 0xbb,
  0x4b, 0x3b, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x44,
  0x44, 0x4b, 0xbb, 0xbb, 0xb3, 0xbb, 0x44, 0x55,
  0x44, 0x44, 0x4b, 0xbb, 0xbb, 0x44, 0x55, 0x44,
  0x44, 0x44, 0x44, 0x4b, 0x44, 0x55, 0x44, 0x55,
  0x04, 0x44, 0x44, 0x44, 0x55, 0x44, 0x55, 0x00,
  0x00, 0x04, 0x44, 0x44, 0x44, 0x55, 0x00, 0x00,
  0x00, 0x00, 0x04, 0x44, 0x55, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00,

  // 3: GrassWithTree-Bottom.png
  0xbb, 0xbb, 0xbb, 0xb4, 0x4b, 0xbb, 0xb3, 0xbb,
  0x4b, 0x3b, 0xbb, 0x8b, 0xbb, 0x3b, 0xbb, 0x44,
  0x44, 0x4b, 0xbb, 0xbb, 0x3b, 0xbb, 0x44, 0x55,
  0x44, 0x44, 0x4b, 0xbb, 0xbb, 0x44, 0x55, 0x44,
  0x44, 0x44, 0x44, 0x4b, 0x44, 0x55, 0x44, 0x55,
  0x04, 0x44, 0x44, 0x44, 0x55, 0x44, 0x55, 0x00,
  0x00, 0x04, 0x44, 0x44, 0x44, 0x55, 0x00, 0x00,
  0x00, 0x00, 0x04, 0x44, 0x55, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00,
};

const uint8_t data_4[] = {
  15, 20, 2, 0, 0, 0xFF, 1,
  // Bridge Left
  0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x70,
  0x66, 0x77, 0x77, 0x77, 0x77, 0x77, 0x75, 0x50,
  0x66, 0x66, 0x77, 0x77, 0x77, 0x75, 0x55, 0x50,
  0x66, 0x66, 0x66, 0x77, 0x75, 0x55, 0x55, 0x50,
  0x66, 0x66, 0x66, 0x66, 0x55, 0x55, 0x50, 0x00,
  0x66, 0x66, 0x66, 0x66, 0x55, 0x50, 0x00, 0x00,
  0x66, 0x66, 0x66, 0x66, 0x50, 0x00, 0x00, 0x00,
  0x66, 0x66, 0x60, 0x06, 0x00, 0x00, 0x00, 0x00,
  0x66, 0x65, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x66, 0x65, 0x55, 0x50, 0x00, 0x00, 0x00, 0x00,
  0x66, 0x55, 0x55, 0x55, 0x00, 0x00, 0x00, 0x00,
  0x66, 0x55, 0x55, 0x55, 0x50, 0x00, 0x00, 0x00,
  0x66, 0x55, 0x55, 0x55, 0x50, 0x00, 0x00, 0x00,
  0x66, 0x55, 0x55, 0x55, 0x50, 0x00, 0x00, 0x00,
  0x66, 0x55, 0x55, 0x55, 0x50, 0x00, 0x00, 0x00,
  0x66, 0x55, 0x55, 0x55, 0x50, 0x00, 0x00, 0x00,
  0x66, 0x55, 0x55, 0x55, 0x50, 0x00, 0x00, 0x00,
  0x66, 0x55, 0x55, 0x55, 0x50, 0x00, 0x00, 0x00,
  0x66, 0x55, 0x55, 0x55, 0x50, 0x00, 0x00, 0x00,
  0x66, 0x55, 0x55, 0x55, 0x50, 0x00, 0x00, 0x00,

  // Bridge Right
  0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x70,
  0x66, 0x77, 0x77, 0x77, 0x77, 0x77, 0x75, 0x50,
  0x66, 0x66, 0x77, 0x77, 0x77, 0x75, 0x55, 0x50,
  0x66, 0x66, 0x66, 0x77, 0x75, 0x55, 0x55, 0x50,
  0x06, 0x66, 0x66, 0x66, 0x55, 0x55, 0x55, 0x50,
  0x00, 0x66, 0x66, 0x66, 0x55, 0x55, 0x55, 0x50,
  0x00, 0x06, 0x66, 0x66, 0x55, 0x55, 0x55, 0x50,
  0x00, 0x00, 0x66, 0x66, 0x55, 0x55, 0x55, 0x50,
  0x00, 0x00, 0x66, 0x66, 0x55, 0x55, 0x55, 0x50,
  0x00, 0x00, 0x06, 0x66, 0x55, 0x55, 0x55, 0x50,
  0x00, 0x00, 0x06, 0x66, 0x55, 0x55, 0x55, 0x50,
  0x00, 0x00, 0x00, 0x66, 0x55, 0x55, 0x55, 0x50,
  0x00, 0x00, 0x00, 0x66, 0x55, 0x55, 0x55, 0x50,
  0x00, 0x00, 0x00, 0x66, 0x55, 0x55, 0x55, 0x50,
  0x00, 0x00, 0x00, 0x66, 0x55, 0x55, 0x55, 0x50,
  0x00, 0x00, 0x00, 0x66, 0x55, 0x55, 0x55, 0x50,
  0x00, 0x00, 0x00, 0x66, 0x55, 0x55, 0x55, 0x50,
  0x00, 0x00, 0x00, 0x66, 0x55, 0x55, 0x55, 0x50,
  0x00, 0x00, 0x00, 0x66, 0x55, 0x55, 0x55, 0x50,
  0x00, 0x00, 0x00, 0x66, 0x55, 0x55, 0x55, 0x50
};

const uint8_t data_5[] = {
  11, 2, 1, 0, 1, (uint8_t)INDEX_LIGHTBLUE, 1,
  // Pillar Top
  0xcc, 0xff, 0xff, 0x44, 0x4c, 0xcc,
  0xff, 0xff, 0xff, 0xff, 0xf4, 0x4c
};

const uint8_t data_6[] = {
  13, 14, 1, 0, 1, 0xFF, 1,
  // Pillar Bottom
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x40,
  0x67, 0x7f, 0xff, 0xff, 0xff, 0xff, 0x00,
  0x56, 0x67, 0x77, 0xff, 0xff, 0x50, 0x00,
  0x66, 0x66, 0x56, 0x55, 0x55, 0x00, 0x00,
  0x56, 0x65, 0x65, 0x65, 0x50, 0x50, 0x00,
  0x66, 0x66, 0x56, 0x55, 0x55, 0x00, 0x00,
  0x56, 0x65, 0x65, 0x65, 0x50, 0x50, 0x00,
  0x66, 0x66, 0x56, 0x55, 0x55, 0x00, 0x00,
  0x56, 0x65, 0x65, 0x65, 0x50, 0x50, 0x00,
  0x66, 0x66, 0x56, 0x55, 0x55, 0x00, 0x00,
  0x56, 0x65, 0x65, 0x65, 0x50, 0x50, 0x00,
  0x66, 0x66, 0x56, 0x55, 0x55, 0x00, 0x00,
  0x06, 0x65, 0x65, 0x65, 0x50, 0x50, 0x00,
  0x00, 0x06, 0x56, 0x55, 0x55, 0x00, 0x00
};

const uint8_t data_7[] = {
  13, 18, 1, 0, 1, 0xFF, 1,
  // Tall Pillar Bottom
  /* Note: This is the same image as in data_6 but a bit taller. Not using this
   * taller image everywhere to improve performance. In Barsaman level this
   * saves drawing (64 - 3) * 4 image lines.
   */
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x40,
  0x67, 0x7f, 0xff, 0xff, 0xff, 0xff, 0x00,
  0x56, 0x67, 0x77, 0xff, 0xff, 0x50, 0x00,
  0x66, 0x66, 0x56, 0x55, 0x55, 0x00, 0x00,
  0x56, 0x65, 0x65, 0x65, 0x50, 0x50, 0x00,
  0x66, 0x66, 0x56, 0x55, 0x55, 0x00, 0x00,
  0x56, 0x65, 0x65, 0x65, 0x50, 0x50, 0x00,
  0x66, 0x66, 0x56, 0x55, 0x55, 0x00, 0x00,
  0x56, 0x65, 0x65, 0x65, 0x50, 0x50, 0x00,
  0x66, 0x66, 0x56, 0x55, 0x55, 0x00, 0x00,
  0x56, 0x65, 0x65, 0x65, 0x50, 0x50, 0x00,
  0x66, 0x66, 0x56, 0x55, 0x55, 0x00, 0x00,
  0x56, 0x65, 0x65, 0x65, 0x50, 0x50, 0x00,
  0x66, 0x66, 0x56, 0x55, 0x55, 0x00, 0x00,
  0x56, 0x65, 0x65, 0x65, 0x50, 0x50, 0x00,
  0x66, 0x66, 0x56, 0x55, 0x55, 0x00, 0x00,
  0x06, 0x65, 0x65, 0x65, 0x50, 0x50, 0x00,
  0x00, 0x06, 0x56, 0x55, 0x55, 0x00, 0x00
};

const uint8_t data_8[] = {
  16, 5, 1, 0, 0, 0xFF, 1,
  // Level menu tile, bottom
  0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77,
  0x07, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x00,
  0x00, 0x07, 0x77, 0x77, 0x77, 0x77, 0x00, 0x00,
  0x00, 0x00, 0x07, 0x77, 0x77, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00
};

const uint8_t data_9[] = {
  0, 0, 1, 0, 0, 0xFF, 1
  // Empty image
};

const uint8_t data_10[] = {
  16, 13, 1, 0, 1, 0xFF, 1,
  // PlankBridge-Bottom.png
  0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44,
  0x54, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x00,
  0xc5, 0x54, 0x44, 0x44, 0x44, 0x44, 0x00, 0xcc,
  0xcc, 0xa5, 0x54, 0x44, 0x44, 0x00, 0xa9, 0xcc,
  0xcc, 0xa9, 0xc5, 0x54, 0x00, 0xcc, 0xcc, 0xcc,
  0xdc, 0xcc, 0xcc, 0xa5, 0xcc, 0xcc, 0xcc, 0x11,
  0xdd, 0xdc, 0xcc, 0xa9, 0xcc, 0xcc, 0x11, 0x11,
  0xdd, 0xdd, 0xdc, 0xcc, 0xcc, 0x11, 0x11, 0x11,
  0xdd, 0xdd, 0xdd, 0xdc, 0x11, 0x11, 0x11, 0x11,
  0x0d, 0xdd, 0xdd, 0xdd, 0x11, 0x11, 0x11, 0x00,
  0x00, 0x0d, 0xdd, 0xdd, 0x11, 0x11, 0x00, 0x00,
  0x00, 0x00, 0x0d, 0xdd, 0x11, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x00
};

const uint8_t data_11[] = {
  16, 8, 1, 0, 1, (uint8_t)INDEX_PINK, 1,
  // PlankBridgeEdge-Top.png
  0xee, 0xee, 0xee, 0xee, 0x4e, 0xee, 0xee, 0xee,
  0xee, 0xee, 0xee, 0x44, 0x44, 0x4e, 0xee, 0xee,
  0xee, 0xee, 0x44, 0x44, 0x44, 0x44, 0x4e, 0xee,
  0xee, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x4e,
  0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44,
  0x54, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x00,
  0xe5, 0x54, 0x44, 0x44, 0x44, 0x44, 0x00, 0xee,
  0xee, 0xa5, 0x54, 0x44, 0x44, 0x00, 0xa9, 0xce
};

const uint8_t data_12[] = {
  13, 2, 1, 0, 1, (uint8_t)INDEX_PINK, 1,
  // GrassWithTree-Top.png
  0xee, 0xbb, 0xb4, 0x4b, 0x3b, 0xbe, 0xe0,
  0xbb, 0x3b, 0xb4, 0x4b, 0xbb, 0xbb, 0xb0,
};

Image tileImages[numTileImages] = {
  Image(data_0),
  Image(data_1),
  Image(data_2),
  Image(data_3),
  Image(data_4),
  Image(data_5),
  Image(data_6),
  Image(data_7),
  Image(data_8),
  Image(data_9),
  Image(data_10),
  Image(data_11),
  Image(data_12),
};
