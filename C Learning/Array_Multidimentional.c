#include <stdio.h>

int main() {
    // 2D array example
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("2D array example:\n");
    printf("Elements of matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    // 3D array example
    int cube[2][3][4] = {
        {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12}
        },
        {
            {13, 14, 15, 16},
            {17, 18, 19, 20},
            {21, 22, 23, 24}
        }
    };

    printf("3D array example:\n");
    printf("Elements of the 3D array:\n");
    for (int i = 0; i < 2; i++) {
        printf("Slice %d:\n", i + 1);
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++) {
                printf("%d ", cube[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
