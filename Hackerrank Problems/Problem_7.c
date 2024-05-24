/* Pattern printing
7 7 7 7 7 7 7 7 7 7 7 7 7
7 6 6 6 6 6 6 6 6 6 6 6 7
7 6 5 5 5 5 5 5 5 5 5 6 7
7 6 5 4 4 4 4 4 4 4 5 6 7
7 6 5 4 3 3 3 3 3 4 5 6 7
7 6 5 4 3 2 2 2 3 4 5 6 7
7 6 5 4 3 2 1 2 3 4 5 6 7
7 6 5 4 3 2 2 2 3 4 5 6 7
7 6 5 4 3 3 3 3 3 4 5 6 7
7 6 5 4 4 4 4 4 4 4 5 6 7
7 6 5 5 5 5 5 5 5 5 5 6 7
7 6 6 6 6 6 6 6 6 6 6 6 7
7 7 7 7 7 7 7 7 7 7 7 7 7 */

#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int j = n;

    int s;
    int arr[n];
    while (j != 0)
    {

        arr[n - j] = j;
        s = n;
        while (s >= j)
        {
            printf("%d ", arr[n - s]);
            s--;
        }
        for (int h = 0; h < 1 + (2 * (j - 2)); h++)
        {
            printf("%d ", j);
        }
        j--;
        s = j;
        while (s < n)
        {
            if (s == 0)
            {
                printf("");
            }
            else
            {
                printf("%d ", arr[n - (s + 1)]);
            }
            s++;
        }
        printf("\n");
    }
    j = j + 2;
    while (j != (n + 1))
    {
        s = n;
        while (s >= j)
        {
            printf("%d ", arr[n - s]);
            s--;
        }
        for (int h = 0; h < 1 + (2 * (j - 2)); h++)
        {
            printf("%d ", j);
        }
        j++;
        s = j;
        while (s <= (n + 1))
        {
            printf("%d ", arr[n - (s - 1)]);
            s++;
        }
        printf("\n");
    }

    return 0;
}