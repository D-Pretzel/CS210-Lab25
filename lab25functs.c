/** lab25functs.c
* ===========================================================
* Name: CS210
* Section:
* Project: Lab 25
* Purpose: Practice using malloc and realloc with arrays
* ===========================================================
*/

#include <stdio.h>
#include <stdlib.h>
#include "lab25functs.h"

int** createMap(int numRows, int numCols, int playerRow, int playerCol) {
    // Task 2:  Create a Dynamically Sized Map and Place the Character In It
    int** map = malloc(numRows * sizeof(int*));
    for (int i = 0; i < numRows; i++) {
        map[i] = malloc(numCols * sizeof(int));
    }

    //Set all values to 0
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            map[i][j] = 0;
        }
    }

    map[playerRow][playerCol] = 1;
    return map;
}

void printMap(int** map, int numRows, int numCols) {
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            printf("%d ", map[i][j]);   // Prints the map
        }
        printf("\n");
    }
}

void moveLeft(int** map, int numRows, int numCols, int* playerRow, int* playerCol) {
    if ((map[*playerRow][*playerCol] == PLAYER) && (*playerCol > 0)) {
        map[*playerRow][*playerCol] = CLEAR;
        map[*playerRow][*playerCol - 1] = PLAYER;
        *playerCol = *playerCol - 1;    // Updates the player's column
        printf("player column is now: %d\n", *playerCol);
    }
}

void moveRight(int** map, int numRows, int numCols, int* playerRow, int* playerCol) {
    if (map[*playerRow][*playerCol + 1] == CLEAR) {
        map[*playerRow][*playerCol] = CLEAR;     // Sets the current position to 0
        map[*playerRow][*playerCol + 1] = PLAYER;    // Sets the new position to 1
        *playerCol = *playerCol + 1;    // Updates the player's column
        printf("player column is now: %d\n", *playerCol);
    }
}

void moveUp(int** map, int numRows, int numCols, int* playerRow, int* playerCol) {
    if (map[*playerRow - 1][*playerCol] == CLEAR) {
        map[*playerRow][*playerCol] = CLEAR;     // Sets the current position to 0
        map[*playerRow - 1][*playerCol] = PLAYER;    // Sets the new position to 1
        *playerRow = *playerRow - 1;    // Updates the player's row
        printf("player row is now: %d\n", *playerRow);
    }
}

void moveDown(int** map, int numRows, int numCols, int* playerRow, int* playerCol) {
    if (map[*playerRow + 1][*playerCol] == CLEAR) {
        map[*playerRow][*playerCol] = CLEAR;     // Sets the current position to 0
        map[*playerRow + 1][*playerCol] = PLAYER;    // Sets the new position to 1
        *playerRow = *playerRow + 1;    // Updates the player's row
        printf("player row is now: %d\n", *playerRow);
    }
}

void freeMap(int** map, int numRows) {
    for (int i = 0; i < numRows; i++){
        free(map[i]);
    }
    free(map);
}