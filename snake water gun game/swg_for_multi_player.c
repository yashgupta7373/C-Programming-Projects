#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int swg(char you, char comp);
int swg2(char p1, char p2);
int main()
{
    char you, comp, number, result, r = 'y', p1, p2;
    int n;

    printf("\n***** Let's Play Snack Water Gun *****\n");

    printf("\nEnter Number Of Player (1 or 2): ");
    scanf("%d", &n);
    fflush(stdin);

    if (n == 1)
    {
        while (r == 'y' || r == 'Y')
        {
            srand(time(0));
            number = rand() % 90 + 1;
            if (number < 30)
            {
                comp = 's';
            }
            else if (number > 30 && number > 60)
            {
                comp = 'w';
            }
            else if (number < 90)
            {
                comp = 'g';
            }

            printf("\nEnter 's' For Snake, 'w' For Water, And 'g' For Gun\n--> ");
            scanf("%c", &you);

            result = swg(you, comp);
            if (result == 0)
            {
                printf("### Game Draw ###\n");
            }
            else if (result == 1)
            {
                printf("*** You Win ***\n");
            }
            else if (result == -1)
            {
                printf("!!! You Lose !!!\n");
            }
            else
            {
                printf("!!! Invalid Input !!!\n");
            }
            printf("Computer Chose '%c' And You Chose '%c' \n\n", comp, you);
            printf("Replay (y/n): ");
            fflush(stdin);
            scanf("%c", &r);
            fflush(stdin);
        }
        printf("********** Thank You For Playing **********");
    }
    else if (n == 2)
    {
        while (r == 'y' || r == 'Y')
        {
            printf("\nEnter 's' For Snake, 'w' For Water, And 'g' For Gun\nTurn For Player 1 : ");
            scanf("%c", &p1);
            printf("Turn For Player 2 : ");
            fflush(stdin);
            scanf("%c", &p2);

            result = swg2(p1, p2);
            if (result == 0)
            {
                printf("### Game Draw ###\n");
            }
            else if (result == 1)
            {
                printf("*** Player 1 Win ***\n");
            }
            else if (result == -1)
            {
                printf("*** Player 2 Win ***\n");
            }
            else
            {
                printf("!!! Invalid Input !!!\n");
            }
            printf("Player 1 Chose '%c' And Player 2 Chose '%c' \n\n", p1, p2);
            printf("Replay (y/n): ");
            fflush(stdin);
            scanf("%c", &r);
            fflush(stdin);
        }
    }
    printf("********** Thank You For Playing **********");
    return 0;
}

int swg(char you, char comp)
{
    if (you == comp)
    {
        return 0;
    }
    else if (you == 's' && comp == 'w')
    {
        return 1;
    }
    else if (you == 'w' && comp == 's')
    {
        return -1;
    }
    else if (you == 's' && comp == 'g')
    {
        return -1;
    }
    else if (you == 'g' && comp == 's')
    {
        return 1;
    }
    else if (you == 'g' && comp == 'w')
    {
        return -1;
    }
    else if (you == 'w' && comp == 'g')
    {
        return 1;
    }
    else
    {
        return 2;
    }
}

int swg2(char p1, char p2)
{
    if (p1 == p2)
    {
        return 0;
    }
    else if (p1 == 's' && p2 == 'w')
    {
        return 1;
    }
    else if (p1 == 'w' && p2 == 's')
    {
        return -1;
    }
    else if (p1 == 's' && p2 == 'g')
    {
        return -1;
    }
    else if (p1 == 'g' && p2 == 's')
    {
        return 1;
    }
    else if (p1 == 'g' && p2 == 'w')
    {
        return -1;
    }
    else if (p1 == 'w' && p2 == 'g')
    {
        return 1;
    }
    else
    {
        return 2;
    }
}