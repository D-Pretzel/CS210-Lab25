/** lab25functs.h
* ===========================================================
* Name: CS210
* Section:
* Project: Lab 25
* Purpose: Practice using malloc and realloc with arrays
* ===========================================================
*/

#ifndef LAB25FUNCTS_H
#define LAB25FUNCTS_H

#define CLEAR 0
#define PLAYER 1

int** createMap(int numRows, int numCols, int playerRow, int playerCol);

void printMap(int** map, int numRows, int numCols);

void moveLeft(int** map, int numRows, int numCols, int* playerRow, int* playerCol);

void moveRight(int** map, int numRows, int numCols, int* playerRow, int* playerCol);

void moveUp(int** map, int numRows, int numCols, int* playerRow, int* playerCol);

void moveDown(int** map, int numRows, int numCols, int* playerRow, int* playerCol);

void freeMap(int** map, int numRows);

#endif