/*
Snake, water, gun or rock, paper, scissors is a game most of us have played during
school time. (I sometimes play it even now).
Write a C program capable of playing this game with you.
Your program should be able to print the result after you choose snake/water or gun.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    /*
    0 --> Snake
    1 --> Water
    2 --> Gun
    */

    srand(time(0));
    int player, computer = rand() % 3;
    printf("Choose 0 for Snake, 1 for Water,  2 for Gun\n");
    scanf("%d", &player);
    printf("Computer Choose %d\n", computer);

    if (player == 0 && computer == 0)
    {
        printf("Game Draw\n");
    }
    else if (player == 0 && computer == 1)
    {
        printf("you win\n");
    }
    else if (player == 0 && computer == 2)
    {
        printf("computer win\n");
    }
    else if (player == 1 && computer == 0)
    {
        printf("computer win\n");
    }
    else if (player == 1 && computer == 1)
    {
        printf("Game Draw\n");
    }
    else if (player == 1 && computer == 2)
    {
        printf("you win\n");
    }
    else if (player == 2 && computer == 0)
    {
        printf("you win\n");
    }
    else if (player == 2 && computer == 1)
    {
        printf("computer win\n");
    }
    else if (player == 2 && computer == 2)
    {
        printf("Game Draw\n");
    }

    return 0;
}