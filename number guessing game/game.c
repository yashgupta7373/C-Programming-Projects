#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{

    int num_player, i = 1, j, number, guess, nguesses;
    char name[20], replay = 'y';

    printf("\n***** ||START GAME|| *****\n");

    while (replay != 'n' && replay != 'N')
    {

        if (replay == 'y' || replay == 'Y')
        {
            printf("\nEnter Number Of Player: ");
            scanf("%d", &num_player);
            i = 1;

            do
            {
                printf("Enter Player %d Name: ", i);
                // gets(name);
                scanf("%s", name);
                // puts(name);
                i++;
            } while (i <= num_player);

            for (j = 1; j <= num_player; j++)
            {
                srand(time(0));
                number = rand() % 100 + 1;
                nguesses = 1;
                printf("\n****** Player %d ******\n\n", j);
                printf("Guess The Number Between 1 To 100\n");

                do
                {
                    printf("--> ");
                    scanf("%d", &guess);

                    if (guess > number)
                    {
                        printf("Lower Number Please!\n");
                    }
                    else if (guess < number)
                    {
                        printf("Higher Number Please!\n");
                    }
                    else
                    {
                        printf("\nYAAAHHHHHH!!!!!\nYou Guess A Wright Number Which Is %d\nYou Guess It In %d Attempts\n\n", number, nguesses);
                    }
                    nguesses++;

                } while (guess != number);
            }
        }
        else if (replay != 'n' && replay != 'N')
        {
            printf("Please enter valid input (Y/N).....");
        }

        printf("\n***** Replay Game *****\n");
        scanf("%s", &replay);
    }

    if (replay == 'n' || replay == 'N')
    {
        printf("\nThank You For Playing Game!\n*****\n****\n***\n**\n*\n");
    }

    return 0;
}