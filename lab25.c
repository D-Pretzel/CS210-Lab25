#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab25functs.h"

int main() {

    // Task 1:  Gets the Number of Rows and Columns
    int numRows = 0;
    int playerRow = 0;
    int numCols = 0;
    int playerCol = 0;

    scanf("%d %d %d %d", &numRows, &numCols, &playerRow, &playerCol);

    // Task 2:  Create a Dynamically Sized Map and Place the Character In It
    int** map = createMap(numRows, numCols, playerRow, playerCol);

    // This is used to store user commands
    char command[50] = "";

    // This keeps animating our "game" until the user types exit
    while (strcmp(command, "exit") != 0) {
        // Task 3:  Print the Current Map
        // Call the function once you have implemented it in lab25functs.c
        printMap(map, numRows, numCols);

        // Asks the user for the next command
        printf("Enter Command ('left', 'right', 'up', 'down', 'exit'): ");
        scanf("%s", command);

        // Task 4:  Calls the appropriate move function
        // e.g., if the user types 'left', call moveLeft
        if (strcmp(command, "left") == 0){
            moveLeft(map, numRows, numCols, &playerRow, &playerCol);
        } else if (strcmp(command, "right") == 0){
            moveRight(map, numRows, numCols, &playerRow, &playerCol);
        } else if (strcmp(command, "up") == 0){
            moveUp(map, numRows, numCols, &playerRow, &playerCol);
        } else if (strcmp(command, "down") == 0){
            moveDown(map, numRows, numCols, &playerRow, &playerCol);
        }

        // This just adds a space between map prints
        printf("\n");

    }

    // Task 6:  Frees the Dynamically Sized Map
    for (int i = 0; i < numRows; i++) {
        free(map[i]);
    }

    return 0;
}