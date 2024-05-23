#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    // declaring variables and rules//
    int i, j;
    char x;
    int pos[2] = {0, 0};
    printf("RULES : There are TWO players in the game\n\n");
    printf("The one who reaches at 100th step first will win the game\n\n");
    printf(" -There are 6 laddders at step 5 24 33 45 59 70 (ladder will promote your position) \n");
    printf(" -There are 7 snakes at step 28 39 55 68 79 87 99 (snakes will demote your position)\n\n");
    printf("Let's begin the game\n\n");

    // calling random number generator//
    srand(time(0));

    for (i = 0; pos[0] < 100 && pos[1] < 100; i++)
    {
        for (j = 0; j <= 1; j++)
        {
            while (x != 'e')
            {
                printf("PLAYER %d : Press 'e' to roll the dice\n", j + 1);
                scanf(" %c", &x);
                if (x != 'e')
                {
                    printf("Invalid choice....Re-enter");
                }
            }
            // random number on dice//
            int turn = rand() % 6 + 1;
            printf("You got %d\n", turn);

            // increment in position//
            pos[j] += turn;

            // finding ladder or snake on final position after dice roll//
            if (pos[j] == 5)
            {
                pos[j] += 22;
                printf("Ladder Found\n");
            }
            if (pos[j] == 24)
            {
                pos[j] += 12;
                printf("Ladder Found\n");
            }
            if (pos[j] == 33)
            {
                pos[j] += 63;
                printf("Ladder Found\n");
            }
            if (pos[j] == 45)
            {
                pos[j] += 20;
                printf("Ladder Found\n");
            }
            if (pos[j] == 59)
            {
                pos[j] += 18;
                printf("Ladder Found\n");
            }
            if (pos[j] == 70)
            {
                pos[j] += 20;
                printf("Ladder Found\n");
            }
            if (pos[j] == 28)
            {
                pos[j] -= 21;
                printf("Ohh!! Snake Encountered\n");
            }
            if (pos[j] == 39)
            {
                pos[j] -= 19;
                printf("Ohh!! Snake Encountered\n");
            }
            if (pos[j] == 55)
            {
                pos[j] -= 30;
                printf("Ohh!! Snake Encountered\n");
            }
            if (pos[j] == 68)
            {
                pos[j] -= 18;
                printf("Ohh!! Snake Encountered\n");
            }
            if (pos[j] == 79)
            {
                pos[j] -= 38;
                printf("Ohh!! Snake Encountered\n");
            }
            if (pos[j] == 87)
            {
                pos[j] -= 33;
                printf("Ohh!! Snake Encountered\n");
            }
            if (pos[j] == 99)
            {
                pos[j] -= 63;
                printf("Snake Encountered!!\n");
            }
            printf("Your position is %d\n\n", pos[j]);
        }
    }
    // Announcement of results//
    if (pos[1] == 100)
    {
        printf("Congratulations Player 1 won");
    }
    if (pos[2] == 100)
    {
        printf("Congratulations Player 2 won");
    }
    return 0;
}