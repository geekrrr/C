// C program to perform matrix multiplication.//

#include <stdio.h>

void MultiplyMatrices(int row1, int column1, int row2, int column2, int FirstMatrix[row1][column1], int SecondMatrix[row2][column2], int result[row1][column2]) {
    for (int i = 0; i < row1; ++i) {
        for (int j = 0; j < column2; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < column1; ++k) {
                result[i][j] += FirstMatrix[i][k] * SecondMatrix[k][j];
            }
        }
    }
}

int main() {
    int row1, column1, row2, column2;

    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &row1, &column1);

    printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d", &row2, &column2);

    if (column1 != row2) {
        printf("Error! Column of the first matrix is not equal to row of the second matrix.\n");
        return 1;
    }

    int firstMatrix[row1][column1];
    int secondMatrix[row2][column2];
    int result[row1][column2];

    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < row1; ++i) {
        for (int j = 0; j < column1; ++j) {
            printf("Enter element A[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &firstMatrix[i][j]);
        }
    }

    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < row2; ++i) {
        for (int j = 0; j < column2; ++j) {
            printf("Enter element B[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &secondMatrix[i][j]);
        }
    }

    MultiplyMatrices(row1, column1, row2, column2, firstMatrix, secondMatrix, result);

    printf("Resultant matrix:\n");
    for (int i = 0; i < row1; ++i) {
        for (int j = 0; j < column2; ++j) {
            printf("%d ", result[i][j]);
            if (j == column2 - 1) {
                printf("\n");
            }
        }
    }

    return 0;
}
