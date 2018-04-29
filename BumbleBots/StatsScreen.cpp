/*
 * Bumble Bots, a Gamebuino game
 *
 * Copyright 2018, Erwin Bonsma
 */

#include "StatsScreen.h"

#include "Globals.h"
#include "Images.h"
#include "ProgressTracker.h"

//-----------------------------------------------------------------------------
// Helper functions

void drawScreen() {
  int8_t x0 = 0;
  int8_t y0 = 0;
  int8_t w = 80;
  int8_t h = 45;
  int8_t bottomH = 10;

  gb.display.setColor(INDEX_BLACK);
  gb.display.drawRect(x0, y0, w, h);

  gb.display.setColor(INDEX_GRAY);
  gb.display.drawRect(x0, y0, w - 1, h - 1);

  gb.display.setColor(INDEX_DARKGRAY);
  gb.display.drawRect(x0 + 1, y0 + 1, w - 2, h - 2);
  gb.display.fillRect(x0 + 1, h - bottomH, w - 2, bottomH - 1);
}

void drawLevelProgress() {
  gb.display.setColor(INDEX_GRAY);
  gb.display.drawRect(5, 37, 70, 5);

  gb.display.setColor(INDEX_BLACK);
  gb.display.drawRect(5, 37, 69, 4);

  int8_t maxStartLevel = progressTracker.maxStartLevel();
  int8_t y = 38;
  for (uint8_t level = 0; level <= 16; level++) {
    uint16_t score = level < 16 ? progressTracker.levelHiScore(level) : 0;
    int8_t x = 6 + level * 4;

    gb.display.setColor(level < maxStartLevel ? INDEX_GREEN : INDEX_PURPLE);
    gb.display.drawFastVLine(x + 3, y, 3);

    for (uint8_t bit = 0; bit < 9; bit++) {
      bool isHi = (bit + score) % 2;
      if (level < maxStartLevel) {
        gb.display.setColor(isHi ? INDEX_LIGHTGREEN : INDEX_GREEN);
      } else {
        gb.display.setColor(isHi ? INDEX_RED : INDEX_PURPLE);
      }
      gb.display.drawPixel(x + bit % 3, y + bit / 3);
      score /= 2;
    }

    // Handle overflow situation in-case score does not fit in 9 bits.
    if (score > 0) {
      // These extra bits are drawn on top of a dark boundary, so all one-bits
      // must be drawn with a light color
      gb.display.setColor(level < maxStartLevel ? INDEX_LIGHTGREEN : INDEX_RED);
      for (uint8_t bit = 0; bit < 3; bit++) {
        if (score % 2) {
          gb.display.drawPixel(x + 3, y + bit);
        }
        score /= 2;
      }
    }
  }
}

//-----------------------------------------------------------------------------
// StatsScreen implementation

void StatsScreen::reset() {
  _animCount = 0;

  for (uint8_t i = 0; i < numLights; i++) {
    _lightState[i] = (i % 2) ? 64 : -64;
  }
}

void StatsScreen::updateLights() {
  for (uint8_t i = 0; i < numLights; i++) {
    if (rand() % 25 == 0) {
      _lightState[i] = -_lightState[i];
    }

    if (_lightState[i] >= 124) {
      _lightState[i] = -124;
    }
    else {
      _lightState[i] += 4;
    }
  }
}

void StatsScreen::update() {
  _animCount++;

  updateLights();

  if (gb.buttons.held(BUTTON_A, 0)) {
    showLevelMenu();
  }
}

void StatsScreen::drawLights() {
  for (uint8_t i = 0; i < numLights; i++) {
    int16_t intensity = abs((int16_t)_lightState[i]) * 2;
    Color color = gb.createColor(0, intensity, 0);
    gb.lights.drawPixel(i % 2, i / 2, color);
  }
}

void StatsScreen::drawValue(uint16_t value, bool improved) {
  gb.display.setCursorX(58);
  if (improved && (_animCount / 16) % 2) {
    gb.display.setColor(INDEX_LIGHTGREEN);
  }
  gb.display.printf("%5d", value);
  gb.display.setColor(INDEX_GREEN);

  drawLights();
}

void StatsScreen::draw() {
  gb.display.setColor(INDEX_GREEN);

  gb.display.setCursor(3, 6);
  gb.display.printf("GAME");

  gb.display.setCursor(39, 3);
  gb.display.printf("score:");
  drawValue(
    progressTracker.score(),
    progressTracker.score() == progressTracker.hiScore()
  );

  gb.display.setCursor(23, 9);
  gb.display.printf("level run:");
  drawValue(
    progressTracker.levelRun(),
    progressTracker.levelRun() == progressTracker.maxLevelRun()
  );

  gb.display.setCursor(3, 23);
  gb.display.printf("BEST");

  gb.display.setCursor(39, 17);
  gb.display.printf("score:");
  drawValue(
    progressTracker.hiScore(),
    progressTracker.improvedHiScore()
  );

  gb.display.setCursor(23, 23);
  gb.display.printf("level run:");
  drawValue(
    progressTracker.maxLevelRun(),
    progressTracker.improvedMaxLevelRun()
  );

  gb.display.setCursor(23, 29);
  gb.display.printf("level sum:");
  drawValue(
    progressTracker.virtualHiScore(),
    progressTracker.improvedVirtualHiScore()
  );

  gb.display.setColor(INDEX_DARKGRAY);
  gb.display.fillRect(0, 46, 80, 19);

  drawScreen();
  drawLevelProgress();

  int16_t dx = 0;
  int16_t dy = 0;
  if (_animCount < 80) {
    dx = 40 - _animCount / 2;
    dy = 20 - (int16_t)_animCount / 4;
  }
  gb.display.drawImage(6 - dx, 41 + dy, botMediumImage);
}
