/*-----------------------------
* Version: C99                *
* Project: Library management *
* Author:  Kelvin karanja       *
* Date:    June,2021          *
* License: MIT                *
******************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <windows.h>
// Function prototype
void execute_action (int action);

int main()
{
    int action;
    printf("\tCounty Library Management System!\n");
    printf("Welcome kelvin\n");
    // Navigation menu
     action = menu();
    execute_action(action);
    return 0;
}
void execute_action (int action) [
     switch(action) {
     case 1:
          printf ("Adding a user\n");
          break;
     case 2:
          printf ("Adding a book\n");
          break;
     case 3:
          printf ("Existing\n");
          break;
     default:
          printf("unknown action. \n");


          }



}

void closs() {
    printf("Thank you for using the system\");
    prntf ("Bye\n");
    Sleep(500);
    exit (0);
}
 printf("1. Add user\n");
        printf("2. Add Book\n");
        printf("3. Exit\n");
        printf("Select action(1-3): ");
        scanf("%d",&action);
        // validate input
        if (action < 1 || action > 3)
            printf("Invalid action. Try again\n");
            sleep(2000);
            system("cls");
       ]

    } while(action < 1 || action > 3);

