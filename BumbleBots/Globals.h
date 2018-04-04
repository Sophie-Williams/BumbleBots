/*
 * Bumble Bots, a Gamebuino game
 *
 * Copyright 2018, Erwin Bonsma
 */

const uint8_t maxNumMovers = 20;
const uint8_t maxNumObjects = 64;

// Implemented in Movers.cpp
class Mover;
extern uint8_t numMovers;
extern Mover* movers[maxNumMovers];

// Implemented in Objects.cpp
class Object;
extern uint8_t numObjects;
extern Object* objects[maxNumObjects];

// Implemented in Tiles.cpp
class Tiles;
extern Tiles *const tiles;

// Implemented in main
void slowMotion(bool enable);
void signalDeath(const char* causeOfDeath);
void signalPickupCollected();
void startGameAtLevel(uint8_t levelNum);
void showLevelMenu();
