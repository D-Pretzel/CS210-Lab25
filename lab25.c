#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab25functs.h"

int main() {

    // Task 1:  Gets the Number of Rows and Columns


    // Task 1 (Continued):  Get the Player's Starting Row and Column


    // Task 2:  Create a Dynamically Sized Map and Place the Character In It


    // This is used to store user commands
    char command[50] = "";

    // This keeps animating our "game" until the user types exit
    while (strcmp(command, "exit") != 0) {
        
        // Task 3:  Print the Current Map
        // Call the function once you have implemented it in lab25functs.c
        

        // Asks the user for the next command
        printf("Enter Command ('left', 'right', 'up', 'down', 'exit'): ");
        scanf("%s", command);

        // Task 4:  Calls the appropriate move function
        // e.g., if the user types 'left', call moveLeft


        // This just adds a space between map prints
        printf("\n");

    }

    // Task 6:  Frees the Dynamically Sized Map


    return 0;

}