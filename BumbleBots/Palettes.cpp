/*
 * Bumble Bots, a Gamebuino game
 *
 * Copyright 2018, Erwin Bonsma
 */

#include "Palettes.h"

const Color LBLUE = LIGHTBLUE;
const Color LGREEN = LIGHTGREEN;
const Color DGRAY = DARKGRAY;
const Color DBLUE = DARKBLUE;

// Blend of BLUE and DBLUE
const Color CUST1 = gb.createColor(34, 103, 171);

// Blend of ORANGE and BROWN
const Color CUST2 = gb.createColor(145, 110, 67);

const Color palettes[numPalettes][16] = {
  // Default
  { BLACK,  DBLUE,  PURPLE, GREEN,  BROWN,  DGRAY,  GRAY,   WHITE,  RED,    ORANGE, YELLOW, LGREEN, LBLUE,  BLUE,   PINK,   BEIGE },
  // bot
  { BLACK,  DBLUE,  PURPLE, GREEN,  BROWN,  DGRAY,  GRAY,   WHITE,  RED,    ORANGE, YELLOW, LGREEN, LBLUE,  BLUE,   CUST1,  BEIGE },
  // Flipped bot
  { BLACK,  DBLUE,  PURPLE, GREEN,  BROWN,  DGRAY,  GRAY,   WHITE,  YELLOW, ORANGE, RED,    LGREEN, LBLUE,  BLUE,   CUST1,  BEIGE },
  // Enemy
  { BLACK,  DGRAY,  PURPLE, GREEN,  BROWN,  DGRAY,  GRAY,   WHITE,  RED,    ORANGE, YELLOW, LGREEN, BEIGE,  BROWN,  CUST2,  BEIGE },
  // Flipped enemy
  { BLACK,  DGRAY,  PURPLE, GREEN,  BROWN,  DGRAY,  GRAY,   WHITE,  YELLOW, ORANGE, RED,    LGREEN, BEIGE,  BROWN,  CUST2,  BEIGE },
  // Checker/darker tile
  { BLACK,  DBLUE,  PURPLE, GREEN,  BROWN,  BLACK,  DGRAY,  GRAY,   RED,    ORANGE, YELLOW, LGREEN, LBLUE,  BLUE,   PINK,   BEIGE },
  // Level menu, Tile 1
  { BLACK,  DBLUE,  PURPLE, GREEN,  BROWN,  DGRAY,  GRAY,   PURPLE, RED,    ORANGE, YELLOW, LGREEN, LBLUE,  BLUE,   PINK,   BEIGE },
  // Level menu, Tile 2
  { BLACK,  DBLUE,  PURPLE, GREEN,  BROWN,  DGRAY,  GRAY,   GREEN,  RED,    ORANGE, YELLOW, LGREEN, LBLUE,  BLUE,   PINK,   BEIGE },
  // Teleport 2
  { BLACK,  DBLUE,  PURPLE, GREEN,  BROWN,  DGRAY,  GRAY,   WHITE,  DBLUE,  LBLUE,  YELLOW, LGREEN, LBLUE,  BLUE,   PINK,   BEIGE },
  // Teleport 3
  { BLACK,  DBLUE,  PURPLE, GREEN,  BROWN,  DGRAY,  GRAY,   WHITE,  GREEN,  LGREEN, YELLOW, LGREEN, LBLUE,  BLUE,   PINK,   BEIGE },
  // Teleport 4
  { BLACK,  DBLUE,  PURPLE, GREEN,  BROWN,  DGRAY,  GRAY,   WHITE,  PURPLE, PINK,   YELLOW, LGREEN, LBLUE,  BLUE,   PINK,   BEIGE },
  // Gap, Default
  { BLACK,  DGRAY,  PURPLE, GREEN,  BROWN,  DGRAY,  GRAY,   WHITE,  RED,    ORANGE, YELLOW, LGREEN, LBLUE,  BLUE,   PINK,   BEIGE },
  // Gap, Filled
  { BLACK,  BEIGE,  PURPLE, GREEN,  BROWN,  BEIGE,  BEIGE,  WHITE,  RED,    ORANGE, YELLOW, LGREEN, LBLUE,  BLUE,   PINK,   BEIGE },
  // Gap, Blue
  { BLACK,  DBLUE,  PURPLE, GREEN,  BROWN,  DBLUE,  BLUE,   WHITE,  RED,    ORANGE, YELLOW, LGREEN, LBLUE,  BLUE,   PINK,   BEIGE },
  // Gap, Earth
  { BLACK,  BROWN,  PURPLE, GREEN,  BROWN,  DGRAY,  BROWN,  WHITE,  RED,    ORANGE, YELLOW, LGREEN, LBLUE,  BLUE,   PINK,   BEIGE },
  // Blue tile
  { BLACK,  DBLUE,  PURPLE, GREEN,  BROWN,  DBLUE,  BLUE,   LBLUE,  RED,    ORANGE, YELLOW, LGREEN, LBLUE,  BLUE,   PINK,   BEIGE },
  // Test
  { RED,    RED,    RED,    RED,    RED,    RED,    RED,    RED,    RED,    RED,    RED,    RED,    RED,    RED,    RED,    RED   },
};
