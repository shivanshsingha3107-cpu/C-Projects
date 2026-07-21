#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int player, computer = rand() % 3;
    /*
    0 --> Snake
    1 --> Water
    3 --> Gun
    */

    printf("Lets play the game\n");
    
    printf("Enter 0 for snake , 1 for Water , 2 for Gun\n");
    scanf("%d", &player);

    printf("Computer chose %d \n", computer);

    if (player == 0 && computer == 0)
    {
        printf("It is draw\n");
    }
    else if (player == 0 && computer == 1)
    {
        printf("player won\n");
    }

    else if (player == 0 && computer == 2)
    {
        printf("Player lose\n");
    }
    else if (player == 1 && computer == 0)
    {
        printf("player lose\n");
    }
    else if (player == 1 && computer == 1)
    {
        printf("It is draw\n");
    }
    else if (player == 1 && computer == 2)
    {
        printf("Player won\n");
    }
    else if (player == 2 && computer == 0)
    {
        printf("Player won\n");
    }
    else if (player == 2 && computer == 1)
    {
        printf("Player lose\n");
    }
    else if (player == 2 && computer == 2)
    {
        printf("It is draw\n");
    }

    else{
        printf("Something went wrong\n");
    }

    return 0;
}