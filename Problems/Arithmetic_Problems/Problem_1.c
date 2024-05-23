// Write a C program to calculate the determinant of a 3x3 matrix. The matrix elements should be input by the user.//

#include <stdio.h>

int main() {
    int matrix[3][3];
    int i, j;
    int determinant;

    printf("Enter the elements of the 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
    determinant = matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1])
                - matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0])
                + matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]);

    printf("The determinant of the matrix is: %d\n", determinant);

    return 0;
}
