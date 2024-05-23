#include <stdio.h>

int main()
{
    int lines;
    printf("Enter the height of pyramid : ");
    scanf(" %d", &lines);
    for (int i = 0; i < lines; i++)
    {
        for (int j = 0; j < (lines - i - 1); j++)
        {
            printf("  ");
        }
        for (int k = 0; k < (2 * i) + 1; k++)
        {
            printf(" $");
        }
        printf("\n");
    }
    return 0;
}