#ifndef MAIN_H
#define MAIN_H

#include "gba.h"
#include <stdbool.h>

// TODO: Create any necessary structs

/*
* For example, for a Snake game, one could be:
*
* struct snake {
*   int heading;
*   int length;
*   int row;
*   int col;
* };
*
* Example of a struct to hold state machine data:
*
* struct state {
*   int currentState;
*   int nextState;
* };
*
*/
typedef struct player {
    char name[20];
    const u16 *image;
    int prevcol;
    int prevrow;
    int row;
    int col;
    int height;
    int width;
    int totalPoop;
} player;

typedef struct poop {
    const u16 *image;
    int prevcol;
    int prevrow;
    int row;
    int col;
    int height;
    int width;
    int direction;
} poop;

typedef struct satellite {
    const u16 *image;
    int row;
    int col;
    int height;
    int width;
    int direction;
} satellite;

void animateString(int row, int col, char *str, u16 color);
void reset(const u16 *image);
void checkBorder(void);
void spawnPoop(void);
void movePoop(int step);
void drawPoop(void);
bool isCollision(player p, poop poop);
#endif
