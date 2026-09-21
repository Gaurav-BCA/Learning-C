#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Seed the random number generator
    srand(time(NULL));

    int player;

    /* | 0 --> Snake | 1 --> Water | 2--> Gun | */

    printf("Instructions:-\n  (i) Choose 0 for snake\n (ii) Choose 1 for water\n(iii) Choose 2 for gun\n");

    for (int i = 0; 1; i++)
    {
        // Generate a random number between 0 and 2
        int computer = (rand() % 3);

        printf("I choose: ");
        scanf("%d", &player);

        printf("Computer choose: %d\n", computer);

        if (player == computer)
        {
            printf("It's a Tied!\nPlay again\n");
        }
        else
        {
            if (player == 0 && computer == 1)
            {
                printf("You win!");
            }
            else if (player == 0 && computer == 2)
            {
                printf("You lose!");
            }
            else if (player == 1 && computer == 2)
            {
                printf("You win!");
            }
            else if (player == 1 && computer == 0)
            {
                printf("You lose!");
            }
            else if (player == 2 && computer == 0)
            {
                printf("You win!");
            }
            else if (player == 2 && computer == 1)
            {
                printf("You lose!");
            }
            break;
        }
    }

    return 0;
}