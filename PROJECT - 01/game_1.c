#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Seed the random number generator
    srand(time(NULL));

    // Generate a random number between 1 and 100
    int random_number = (rand() % 100) + 1;
    int number_of_guesses = 0;
    int guessed_number;

    // Print the random number
    // printf("Random number between 1 and 100: %d\n", random_number);

    printf("Guess the number: ");
    scanf("%d", &guessed_number);

    number_of_guesses = 1;

    if (guessed_number == random_number)
    {
        printf("Congrats!!\n");
        printf("You guessed_number the number in %d guesses", number_of_guesses);
    }

    else
    {
        if (guessed_number > random_number)
        {
            printf("Lower number please!\n");
        }
        else
        {
            printf("Higher number please!\n");
        }
        do
        {
            printf("Guess the number again: ");
            scanf("%d", &guessed_number);

            if (guessed_number > random_number)
            {
                printf("Lower number please!\n");
            }
            else if (guessed_number < random_number)
            {
                printf("Higher number please!\n");
            }
            number_of_guesses++;
        } while (guessed_number != random_number);

        printf("Congrats!!\n");
        printf("You guessed the number in %d guesses", number_of_guesses);
    }
    return 0;
}
