/*
 * Bumble Bots, a Gamebuino game
 *
 * Copyright 2018, Erwin Bonsma
 */

#include "Images.h"

const uint8_t botImageData[] = {
  8, 10, 10, 0, 0, (uint8_t)INDEX_BLACK, 1,

  0x00, 0x00, 0xc0, 0x00,
  0x00, 0xcc, 0xcc, 0xc0,
  0xcc, 0xcc, 0xcc, 0xcc,
  0xdc, 0xcc, 0xcc, 0x11,
  0xdd, 0xdc, 0x11, 0x11,
  0x8d, 0xdd, 0x11, 0x1a,
  0xd8, 0x8d, 0x11, 0x11,
  0xdd, 0xd8, 0x81, 0x11,
  0x0d, 0xdd, 0x11, 0x00,
  0x00, 0x0d, 0x00, 0x00,

  0x00, 0x00, 0x0c, 0x00,
  0x00, 0xcc, 0xcc, 0xc0,
  0x0c, 0xcc, 0xcc, 0xcc,
  0x0d, 0xcc, 0xcc, 0xc1,
  0x0d, 0xdc, 0x11, 0x11,
  0x08, 0xd1, 0x11, 0x1a,
  0x0d, 0x81, 0x11, 0x11,
  0x0d, 0xd8, 0x11, 0x11,
  0x00, 0xd1, 0x11, 0x10,
  0x00, 0x01, 0x00, 0x00,

  0x00, 0x00, 0x00, 0x00,
  0x0c, 0xcc, 0xcc, 0xc0,
  0x0c, 0xcc, 0xcc, 0xc0,
  0x0c, 0xcc, 0xcc, 0xc0,
  0x0e, 0xee, 0xee, 0xe0,
  0x0e, 0xee, 0xee, 0xe0,
  0x08, 0xee, 0xee, 0xa0,
  0x0e, 0xee, 0xee, 0xe0,
  0x0e, 0xee, 0xee, 0xe0,
  0x00, 0x00, 0x00, 0x00,

  0x00, 0xc0, 0x00, 0x00,
  0x0c, 0xcc, 0xcc, 0x00,
  0xcc, 0xcc, 0xcc, 0xc0,
  0xdc, 0xcc, 0xcc, 0x10,
  0xdd, 0xdd, 0xc1, 0x10,
  0x8d, 0xdd, 0xd1, 0xa0,
  0xdd, 0xdd, 0xda, 0x10,
  0xdd, 0xdd, 0xa1, 0x10,
  0x0d, 0xdd, 0xd1, 0x00,
  0x00, 0x00, 0xd0, 0x00,

  0x00, 0x0c, 0x00, 0x00,
  0x0c, 0xcc, 0xcc, 0x00,
  0xcc, 0xcc, 0xcc, 0xcc,
  0xdd, 0xcc, 0xcc, 0xc1,
  0xdd, 0xdd, 0xc1, 0x11,
  0x8d, 0xdd, 0x11, 0x1a,
  0xdd, 0xdd, 0x1a, 0xa1,
  0xdd, 0xda, 0xa1, 0x11,
  0x00, 0xdd, 0x11, 0x10,
  0x00, 0x00, 0x10, 0x00,

  0x00, 0x00, 0xc0, 0x00,
  0x00, 0xcc, 0xcc, 0xc0,
  0xcc, 0xcc, 0xcc, 0xcc,
  0xdc, 0xcc, 0xcc, 0x11,
  0xdd, 0xdc, 0x11, 0x11,
  0x8d, 0xdd, 0x11, 0x1a,
  0xdd, 0xdd, 0x1a, 0xa1,
  0xdd, 0xda, 0xa1, 0x11,
  0x0d, 0xdd, 0x11, 0x00,
  0x00, 0x0d, 0x00, 0x00,

  0x00, 0x00, 0x0c, 0x00,
  0x00, 0xcc, 0xcc, 0xc0,
  0x0c, 0xcc, 0xcc, 0xcc,
  0x0d, 0xcc, 0xcc, 0xc1,
  0x0d, 0xdc, 0x11, 0x11,
  0x08, 0xd1, 0x11, 0x1a,
  0x0d, 0xa1, 0xaa, 0xa1,
  0x0d, 0xda, 0x11, 0x11,
  0x00, 0xd1, 0x11, 0x10,
  0x00, 0x01, 0x00, 0x00,

  0x00, 0x00, 0x00, 0x00,
  0x0c, 0xcc, 0xcc, 0xc0,
  0x0c, 0xcc, 0xcc, 0xc0,
  0x0c, 0xcc, 0xcc, 0xc0,
  0x0e, 0xee, 0xee, 0xe0,
  0x0e, 0xee, 0xee, 0xe0,
  0x0a, 0xaa, 0xaa, 0xa0,
  0x0e, 0xee, 0xee, 0xe0,
  0x0e, 0xee, 0xee, 0xe0,
  0x00, 0x00, 0x00, 0x00,

  0x00, 0xc0, 0x00, 0x00,
  0x0c, 0xcc, 0xcc, 0x00,
  0xcc, 0xcc, 0xcc, 0xc0,
  0xdc, 0xcc, 0xcc, 0x10,
  0xdd, 0xdd, 0xc1, 0x10,
  0xad, 0xdd, 0xd1, 0x80,
  0xda, 0xaa, 0xda, 0x10,
  0xdd, 0xdd, 0xa1, 0x10,
  0x0d, 0xdd, 0xd1, 0x00,
  0x00, 0x00, 0xd0, 0x00,

  0x00, 0x0c, 0x00, 0x00,
  0x0c, 0xcc, 0xcc, 0x00,
  0xcc, 0xcc, 0xcc, 0xcc,
  0xdd, 0xcc, 0xcc, 0xc1,
  0xdd, 0xdd, 0xc1, 0x11,
  0xad, 0xdd, 0x11, 0x18,
  0xda, 0xad, 0x11, 0x11,
  0xdd, 0xda, 0xa1, 0x11,
  0x00, 0xdd, 0x11, 0x10,
  0x00, 0x00, 0x10, 0x00
};
Image botImage = Image(botImageData);

const uint8_t box1Data[] = {
  10, 10, 1, 0, 1, (uint8_t)INDEX_BLACK, 1,
  0x00, 0x0f, 0xff, 0x00, 0x00,
  0x0f, 0xff, 0xff, 0xff, 0x00,
  0xff, 0xff, 0xff, 0xff, 0xf0,
  0x66, 0xff, 0xff, 0xf5, 0x50,
  0x66, 0x66, 0xf5, 0x55, 0x50,
  0x66, 0x66, 0x65, 0x55, 0x50,
  0x66, 0x66, 0x65, 0x55, 0x50,
  0x66, 0x66, 0x65, 0x55, 0x50,
  0x00, 0x66, 0x65, 0x50, 0x00,
  0x00, 0x00, 0x60, 0x00, 0x00
};
Image box1Image = Image(box1Data);

const uint8_t box2Data[] = {
  10, 11, 1, 0, 1, (uint8_t)INDEX_BLACK, 1,
  0x00, 0x0a, 0xaa, 0x00, 0x00,
  0x0a, 0xaa, 0xaa, 0xaa, 0x00,
  0xaa, 0xaa, 0xaa, 0xaa, 0xa0,
  0x99, 0xaa, 0xaa, 0xa4, 0x40,
  0x99, 0x99, 0xa4, 0x44, 0x40,
  0x99, 0x99, 0x94, 0x44, 0x40,
  0x99, 0x99, 0x94, 0x44, 0x40,
  0x99, 0x99, 0x94, 0x44, 0x40,
  0x99, 0x99, 0x94, 0x44, 0x40,
  0x00, 0x99, 0x94, 0x40, 0x00,
  0x00, 0x00, 0x90, 0x00, 0x00
};
Image box2Image = Image(box2Data);

const uint8_t pickupData[] = {
  8, 8, 1, 0, 1, (uint8_t)INDEX_BLACK, 1,
  0x00, 0x99, 0x99, 0x00,
  0x09, 0xa9, 0x99, 0x90,
  0x9a, 0xaa, 0x99, 0x94,
  0x99, 0xa9, 0x99, 0x94,
  0x99, 0x99, 0x99, 0x44,
  0x49, 0x99, 0x94, 0x44,
  0x04, 0x44, 0x44, 0x40,
  0x00, 0x44, 0x44, 0x00
};
Image pickupImage = Image(pickupData);

const uint8_t teleportData[] = {
  9, 5, 1, 0, 1, (uint8_t)INDEX_BLACK, 1,
  0x00, 0x00, 0x80, 0x00, 0x00,
  0x00, 0x88, 0x98, 0x80, 0x00,
  0x88, 0x9a, 0xaa, 0x98, 0x80,
  0x00, 0x88, 0x98, 0x80, 0x00,
  0x00, 0x00, 0x80, 0x00, 0x00
};
Image teleportImage = Image(teleportData);

const uint8_t teleportPuffsData[] = {
  5, 5, 3, 0, 1, (uint8_t)INDEX_BLACK, 1,
  0x00, 0x80, 0x00,
  0x00, 0x00, 0x00,
  0x80, 0x00, 0x80,
  0x00, 0x00, 0x00,
  0x00, 0x80, 0x00,

  0x00, 0x00, 0x00,
  0x00, 0x90, 0x00,
  0x09, 0x09, 0x00,
  0x00, 0x90, 0x00,
  0x00, 0x00, 0x00,

  0x00, 0x00, 0x00,
  0x00, 0x00, 0x00,
  0x00, 0xa0, 0x00,
  0x00, 0x00, 0x00,
  0x00, 0x00, 0x00
};
Image teleportPuffsImage = Image(teleportPuffsData);

const uint8_t gapData[] = {
  9, 5, 1, 0, 1, (uint8_t)INDEX_PINK, 1,
  0xee, 0xe1, 0x16, 0xee, 0xe0,
  0xe1, 0x15, 0x56, 0x66, 0xe0,
  0x15, 0x51, 0x16, 0x66, 0x60,
  0xee, 0x15, 0x56, 0x6e, 0xe0,
  0xee, 0xee, 0x1e, 0xee, 0xe0
};
Image gapImage = Image(gapData);

const uint8_t liveIconData[] = {
  4, 6, 1, 0, 1, (uint8_t)INDEX_BLACK, 1,
  0x0c, 0xc0,
  0xcc, 0xcc,
  0xdc, 0xc1,
  0xdd, 0x11,
  0xdd, 0x11,
  0x0d, 0x10
};
Image liveIconImage = Image(liveIconData);

const uint8_t gameOverData[] = {
  29, 19, 1, 0, 1, (uint8_t)INDEX_BLACK, 1,
  0x00, 0x11, 0x11, 0x00, 0x01, 0x11, 0x00, 0x11, 0x11, 0x11, 0x10, 0x01, 0x11, 0x11, 0x00,
  0x01, 0xcc, 0xcc, 0x10, 0x1c, 0xcc, 0x11, 0xcc, 0xcc, 0xcc, 0xc1, 0x1c, 0xcc, 0xcc, 0x10,
  0x1c, 0xcc, 0xcc, 0xc1, 0xcc, 0xcc, 0xc1, 0xcc, 0xcc, 0xcc, 0xcc, 0x1c, 0xcc, 0xcc, 0x10,
  0x1c, 0xc1, 0x11, 0x11, 0xcc, 0x1c, 0xc1, 0xcc, 0x1c, 0xc1, 0xcc, 0x1c, 0xc1, 0x11, 0x00,
  0x1c, 0xc1, 0xcc, 0xc1, 0xcc, 0xcc, 0xc1, 0xcc, 0x1c, 0xc1, 0xcc, 0x1c, 0xcc, 0xc1, 0x00,
  0x1c, 0xc1, 0xcc, 0xc1, 0xcc, 0xcc, 0xc1, 0xcc, 0x1c, 0xc1, 0xcc, 0x1c, 0xcc, 0xc1, 0x00,
  0x1c, 0xc1, 0x1c, 0xc1, 0xcc, 0x1c, 0xc1, 0xcc, 0x1c, 0xc1, 0xcc, 0x1c, 0xc1, 0x11, 0x00,
  0x1c, 0xcc, 0xcc, 0xc1, 0xcc, 0x1c, 0xc1, 0xcc, 0x1c, 0xc1, 0xcc, 0x1c, 0xcc, 0xcc, 0x10,
  0x01, 0xcc, 0xcc, 0x11, 0xcc, 0x1c, 0xc1, 0xcc, 0x1c, 0xc1, 0xcc, 0x1c, 0xcc, 0xcc, 0x10,
  0x00, 0x11, 0x11, 0x00, 0x11, 0x01, 0x10, 0x11, 0x11, 0x10, 0x11, 0x11, 0x11, 0x11, 0x00,
  0x00, 0x1c, 0xcc, 0x11, 0xcc, 0x1c, 0xc1, 0xcc, 0xcc, 0xc1, 0xcc, 0xcc, 0x11, 0xcc, 0x10,
  0x01, 0xcc, 0xcc, 0xc1, 0xcc, 0x1c, 0xc1, 0xcc, 0xcc, 0xc1, 0xcc, 0xcc, 0xc1, 0xcc, 0x10,
  0x01, 0xcc, 0x1c, 0xc1, 0xcc, 0x1c, 0xc1, 0xcc, 0x11, 0x11, 0xcc, 0x1c, 0xc1, 0xcc, 0x10,
  0x01, 0xcc, 0x1c, 0xc1, 0xcc, 0x1c, 0xc1, 0xcc, 0xcc, 0x11, 0xcc, 0xcc, 0x11, 0xcc, 0x10,
  0x01, 0xcc, 0x1c, 0xc1, 0xcc, 0x1c, 0xc1, 0xcc, 0xcc, 0x11, 0xcc, 0xcc, 0xc1, 0xcc, 0x10,
  0x01, 0xcc, 0x1c, 0xc1, 0x1c, 0xcc, 0x11, 0xcc, 0x11, 0x11, 0xcc, 0x1c, 0xc1, 0x11, 0x00,
  0x01, 0xcc, 0xcc, 0xc1, 0x1c, 0xcc, 0x11, 0xcc, 0xcc, 0xc1, 0xcc, 0x1c, 0xc1, 0xcc, 0x10,
  0x00, 0x1c, 0xcc, 0x10, 0x01, 0xc1, 0x01, 0xcc, 0xcc, 0xc1, 0xcc, 0x1c, 0xc1, 0xcc, 0x10,
  0x00, 0x01, 0x11, 0x00, 0x01, 0x10, 0x00, 0x11, 0x11, 0x10, 0x11, 0x01, 0x10, 0x11, 0x00
};
Image gameOverImage = Image(gameOverData);

const uint8_t bestGameEverData[] = {
  29, 28, 1, 0, 1, (uint8_t)INDEX_BLACK, 1,
  0x00, 0x01, 0x11, 0x10, 0x01, 0x11, 0x11, 0x00, 0x11, 0x11, 0x01, 0x11, 0x11, 0x10, 0x00,
  0x00, 0x1c, 0xcc, 0xc1, 0x1c, 0xcc, 0xcc, 0x11, 0xcc, 0xcc, 0x1c, 0xcc, 0xcc, 0xc1, 0x00,
  0x00, 0x1c, 0xcc, 0xcc, 0x1c, 0xcc, 0xcc, 0x1c, 0xcc, 0xcc, 0x1c, 0xcc, 0xcc, 0xc1, 0x00,
  0x00, 0x1c, 0xc1, 0xcc, 0x1c, 0xc1, 0x11, 0x1c, 0xc1, 0x11, 0x01, 0x1c, 0xc1, 0x10, 0x00,
  0x00, 0x1c, 0xcc, 0xc1, 0x1c, 0xcc, 0xc1, 0x1c, 0xcc, 0xc1, 0x00, 0x1c, 0xc1, 0x00, 0x00,
  0x00, 0x1c, 0xcc, 0xc1, 0x1c, 0xcc, 0xc1, 0x01, 0xcc, 0xcc, 0x10, 0x1c, 0xc1, 0x00, 0x00,
  0x00, 0x1c, 0xc1, 0xcc, 0x1c, 0xc1, 0x11, 0x01, 0x11, 0xcc, 0x10, 0x1c, 0xc1, 0x00, 0x00,
  0x00, 0x1c, 0xcc, 0xcc, 0x1c, 0xcc, 0xcc, 0x1c, 0xcc, 0xcc, 0x10, 0x1c, 0xc1, 0x00, 0x00,
  0x00, 0x1c, 0xcc, 0xc1, 0x1c, 0xcc, 0xcc, 0x1c, 0xcc, 0xc1, 0x00, 0x1c, 0xc1, 0x00, 0x00,
  0x00, 0x11, 0x11, 0x10, 0x01, 0x11, 0x11, 0x11, 0x11, 0x11, 0x10, 0x01, 0x11, 0x11, 0x00,
  0x01, 0xcc, 0xcc, 0x10, 0x1c, 0xcc, 0x11, 0xcc, 0xcc, 0xcc, 0xc1, 0x1c, 0xcc, 0xcc, 0x10,
  0x1c, 0xcc, 0xcc, 0xc1, 0xcc, 0xcc, 0xc1, 0xcc, 0xcc, 0xcc, 0xcc, 0x1c, 0xcc, 0xcc, 0x10,
  0x1c, 0xc1, 0x11, 0x11, 0xcc, 0x1c, 0xc1, 0xcc, 0x1c, 0xc1, 0xcc, 0x1c, 0xc1, 0x11, 0x00,
  0x1c, 0xc1, 0xcc, 0xc1, 0xcc, 0xcc, 0xc1, 0xcc, 0x1c, 0xc1, 0xcc, 0x1c, 0xcc, 0xc1, 0x00,
  0x1c, 0xc1, 0xcc, 0xc1, 0xcc, 0xcc, 0xc1, 0xcc, 0x1c, 0xc1, 0xcc, 0x1c, 0xcc, 0xc1, 0x00,
  0x1c, 0xc1, 0x1c, 0xc1, 0xcc, 0x1c, 0xc1, 0xcc, 0x1c, 0xc1, 0xcc, 0x1c, 0xc1, 0x11, 0x00,
  0x1c, 0xcc, 0xcc, 0xc1, 0xcc, 0x1c, 0xc1, 0xcc, 0x1c, 0xc1, 0xcc, 0x1c, 0xcc, 0xcc, 0x10,
  0x01, 0xcc, 0xcc, 0x11, 0xcc, 0x1c, 0xc1, 0xcc, 0x1c, 0xc1, 0xcc, 0x1c, 0xcc, 0xcc, 0x10,
  0x00, 0x11, 0x11, 0x10, 0x11, 0x01, 0x10, 0x11, 0x11, 0x10, 0x11, 0x11, 0x11, 0x11, 0x00,
  0x01, 0xcc, 0xcc, 0xc1, 0xcc, 0x1c, 0xc1, 0xcc, 0xcc, 0xc1, 0xcc, 0xcc, 0x11, 0xcc, 0x10,
  0x01, 0xcc, 0xcc, 0xc1, 0xcc, 0x1c, 0xc1, 0xcc, 0xcc, 0xc1, 0xcc, 0xcc, 0xc1, 0xcc, 0x10,
  0x01, 0xcc, 0x11, 0x11, 0xcc, 0x1c, 0xc1, 0xcc, 0x11, 0x11, 0xcc, 0x1c, 0xc1, 0xcc, 0x10,
  0x01, 0xcc, 0xcc, 0x11, 0xcc, 0x1c, 0xc1, 0xcc, 0xcc, 0x11, 0xcc, 0xcc, 0x11, 0xcc, 0x10,
  0x01, 0xcc, 0xcc, 0x11, 0xcc, 0x1c, 0xc1, 0xcc, 0xcc, 0x11, 0xcc, 0xcc, 0xc1, 0xcc, 0x10,
  0x01, 0xcc, 0x11, 0x11, 0x1c, 0xcc, 0x11, 0xcc, 0x11, 0x11, 0xcc, 0x1c, 0xc1, 0x11, 0x00,
  0x01, 0xcc, 0xcc, 0xc1, 0x1c, 0xcc, 0x11, 0xcc, 0xcc, 0xc1, 0xcc, 0x1c, 0xc1, 0xcc, 0x10,
  0x01, 0xcc, 0xcc, 0xc1, 0x01, 0xc1, 0x01, 0xcc, 0xcc, 0xc1, 0xcc, 0x1c, 0xc1, 0xcc, 0x10,
  0x00, 0x11, 0x11, 0x10, 0x01, 0x10, 0x00, 0x11, 0x11, 0x10, 0x11, 0x01, 0x10, 0x11, 0x00
};
Image bestGameEverImage = Image(bestGameEverData);

const uint8_t gameDoneData[] = {
  20, 19, 1, 0, 1, (uint8_t)INDEX_BLACK, 1,
  0x01, 0x11,0x11, 0x10,0x11, 0x01,0x10, 0x11,0x11, 0x10,
  0x1c, 0xcc,0xcc, 0xc1,0xcc, 0x1c,0xc1, 0xcc,0xcc, 0xc1,
  0x1c, 0xcc,0xcc, 0xc1,0xcc, 0x1c,0xc1, 0xcc,0xcc, 0xc1,
  0x01, 0x1c,0xc1, 0x11,0xcc, 0x1c,0xc1, 0xcc,0x11, 0x10,
  0x00, 0x1c,0xc1, 0x01,0xcc, 0xcc,0xc1, 0xcc,0xcc, 0x10,
  0x00, 0x1c,0xc1, 0x01,0xcc, 0xcc,0xc1, 0xcc,0xcc, 0x10,
  0x00, 0x1c,0xc1, 0x01,0xcc, 0x1c,0xc1, 0xcc,0x11, 0x10,
  0x00, 0x1c,0xc1, 0x01,0xcc, 0x1c,0xc1, 0xcc,0xcc, 0xc1,
  0x00, 0x1c,0xc1, 0x01,0xcc, 0x1c,0xc1, 0xcc,0xcc, 0xc1,
  0x00, 0x11,0x11, 0x10,0x11, 0x11,0x10, 0x11,0x11, 0x10,
  0x01, 0xcc,0xcc, 0xc1,0xcc, 0xcc,0x11, 0xcc,0xcc, 0x10,
  0x01, 0xcc,0xcc, 0xc1,0xcc, 0xcc,0xc1, 0xcc,0xcc, 0xc1,
  0x01, 0xcc,0x11, 0x11,0xcc, 0x1c,0xc1, 0xcc,0x1c, 0xc1,
  0x01, 0xcc,0xcc, 0x11,0xcc, 0x1c,0xc1, 0xcc,0x1c, 0xc1,
  0x01, 0xcc,0xcc, 0x11,0xcc, 0x1c,0xc1, 0xcc,0x1c, 0xc1,
  0x01, 0xcc,0x11, 0x11,0xcc, 0x1c,0xc1, 0xcc,0x1c, 0xc1,
  0x01, 0xcc,0xcc, 0xc1,0xcc, 0x1c,0xc1, 0xcc,0xcc, 0xc1,
  0x01, 0xcc,0xcc, 0xc1,0xcc, 0x1c,0xc1, 0xcc,0xcc, 0x10,
  0x00, 0x11,0x11, 0x10,0x11, 0x01,0x10, 0x11,0x11, 0x00
};
Image gameDoneImage = Image(gameDoneData);

const uint8_t rock1Data[] = {
  8, 7, 1, 0, 1, (uint8_t)INDEX_PINK, 1,
  0xee, 0x66, 0x5e, 0xee,
  0xe6, 0x66, 0x55, 0xee,
  0xe6, 0x66, 0x65, 0x1e,
  0x66, 0x66, 0x65, 0x51,
  0x66, 0x66, 0x65, 0x51,
  0x66, 0x66, 0x55, 0x5e,
  0xee, 0x66, 0x55, 0xee
};
Image rock1Image = Image(rock1Data);

const uint8_t rock2Data[] = {
  8, 7, 1, 0, 1, (uint8_t)INDEX_PINK, 1,
  0xee, 0x66, 0x5e, 0xee,
  0xe6, 0x66, 0x55, 0xee,
  0x66, 0x66, 0x65, 0x1e,
  0x66, 0x66, 0x65, 0x51,
  0x66, 0x66, 0x55, 0x51,
  0x66, 0x66, 0x55, 0x5e,
  0xe6, 0x65, 0x55, 0xee
};
Image rock2Image = Image(rock2Data);

const uint8_t tree1Data[] = {
  8, 9, 1, 0, 1, (uint8_t)INDEX_PINK, 1,
  0xee, 0x33, 0x33, 0xee,
  0xe3, 0xbb, 0x33, 0x3e,
  0x3b, 0x9b, 0xb8, 0x33,
  0x38, 0xbb, 0x33, 0x33,
  0x33, 0x33, 0x83, 0x23,
  0xe3, 0x83, 0x33, 0x3e,
  0xee, 0x33, 0x33, 0xee,
  0xee, 0xe4, 0x4e, 0xee,
  0xee, 0x44, 0x4b, 0xbe
};
Image tree1Image = Image(tree1Data);

const uint8_t tree2Data[] = {
  7, 8, 1, 0, 1, (uint8_t)INDEX_PINK, 1,
  0xee, 0xe3, 0xee, 0xe0,
  0xee, 0xe3, 0xee, 0xe0,
  0xee, 0x33, 0x3e, 0xe0,
  0xee, 0x3a, 0x3e, 0xe0,
  0xe3, 0x33, 0x33, 0xe0,
  0xe3, 0xa3, 0x33, 0xe0,
  0x33, 0x33, 0xa3, 0x30,
  0x33, 0x33, 0x33, 0x30
};
Image tree2Image = Image(tree2Data);

const uint8_t botMediumData[] = {
  20, 23, 1, 0, 1, (uint8_t)INDEX_DARKGRAY, 1,
  0x55, 0x55, 0x55, 0x55, 0x55, 0xc5, 0x55, 0x55, 0x55, 0x55,
  0x55, 0x55, 0x55, 0x55, 0xcc, 0xcc, 0xc5, 0x55, 0x55, 0x55,
  0x55, 0x55, 0x55, 0xcc, 0xcc, 0xcc, 0xcc, 0xc5, 0x55, 0x55,
  0x55, 0x55, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xc5, 0x55,
  0x55, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xc5,
  0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc,
  0xdc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0x11,
  0xdd, 0xdc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0x11, 0x11,
  0xdd, 0xdd, 0xdc, 0xcc, 0xcc, 0xcc, 0xcc, 0x11, 0x11, 0x11,
  0xdd, 0xdd, 0xdd, 0xdc, 0xcc, 0xcc, 0x11, 0x11, 0x11, 0x11,
  0xdd, 0xdd, 0xdd, 0xdd, 0xdc, 0x11, 0x11, 0x11, 0x11, 0x11,
  0x5d, 0xdd, 0xdd, 0xdd, 0xdd, 0x11, 0x11, 0x11, 0x11, 0x85,
  0x5a, 0xad, 0xdd, 0xdd, 0xdd, 0x11, 0x11, 0x11, 0x88, 0x85,
  0xda, 0xad, 0xdd, 0xdd, 0xdd, 0x11, 0x11, 0x88, 0x88, 0x11,
  0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0x11, 0x88, 0x88, 0x11, 0x11,
  0xdd, 0xdd, 0xdd, 0xd8, 0x8d, 0x88, 0x88, 0x11, 0x11, 0x11,
  0xdd, 0xcc, 0xdd, 0xd8, 0x88, 0x88, 0x11, 0x11, 0x11, 0x11,
  0xdd, 0xdd, 0xcd, 0xdd, 0xd8, 0x11, 0x11, 0x11, 0x11, 0x11,
  0x5d, 0xdd, 0xdd, 0xdd, 0xdd, 0x11, 0x11, 0x11, 0x11, 0x55,
  0x55, 0xdd, 0xd1, 0xdd, 0xdd, 0x11, 0x11, 0x11, 0x55, 0x55,
  0x55, 0x00, 0xd1, 0xdd, 0xdd, 0x11, 0x11, 0x55, 0x55, 0x55,
  0x55, 0x50, 0x01, 0x5d, 0xdd, 0x11, 0x55, 0x55, 0x55, 0x55,
  0x55, 0x55, 0x55, 0x55, 0x5d, 0x55, 0x55, 0x55, 0x55, 0x55
};
Image botMediumImage = Image(botMediumData);
