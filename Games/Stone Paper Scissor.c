#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    // declaring variables//
    int cdec;
    char input;
    int comp = 0;
    int you = 0;

    // picking random number//
    srand(time(0));

    // telling rules to the player//
    printf(" RULES  : Enter s for stone , p for paper , k for scissor \n ");

    for (int i = 0; i < 10; i++)
    {

        // range of a random number generated//
        int dec = rand() % 100;

        // telling the computer about the rules//
        if (dec <= 33)
        {
            cdec = 's';
        }
        else if ((dec <= 66) && (dec > 33))
        {
            cdec = 'p';
        }
        else
        {
            cdec = 'k';
        }

        // taking input from player//
        printf("Choose : ");
        scanf(" %c", &input);

        // deciding factor lets see who wins here the game begins//
        if (input == cdec)
        {
            printf("Draw\n");
        }
        else
        {
            if (((input == 's') && (cdec == 'p')) || ((input == 'k') && (cdec == 's')) || ((input == 'p') && (cdec == 'k')))
            {
                printf("Computer Win\n");
                comp++;
            }
            if (((input == 's') && (cdec == 'k')) || ((input == 'k') && (cdec == 'p')) || ((input == 'p') && (cdec == 's')))
            {
                printf("You Win\n");
                you++;
            }
        }
    }

    // final score//
    printf("Final score of you v/s computer is %d : %d\n", you, comp);

    // reactions of audience //
    if (you > comp)
    {
        printf("Nice play bro YOU WON!!!! ");
    }
    if (you < comp)
    {
        printf("Shameful bro COMPUTER WON!!!!");
    }
    if (you == comp)
    {
        printf("Nice try MATCH DRAWN");
    }
    return 0;
}