#include <stdio.h>

int main() {

    // if-else statement
    int x = 10;

    if (x > 5) {
        printf("x is greater than 5.\n");
    } else {
        printf("x is not greater than 5.\n");
    }


    // switch-case statement
    char grade = 'B';

    switch (grade) {
        case 'A':
            printf("Excellent!\n");
            break;
        case 'B':
            printf("Good job!\n");
            break;
        case 'C':
            printf("Good\n");
            break;
        case 'D':
            printf("You passed!\n");
            break;
        case 'F':
            printf("Better try again!\n");
            break;
        default:
            printf("Invalid grade\n");
    }


    // for loop
    printf("Counting from 1 to 5 using a for loop:\n");
    for (int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n");


    // while loop
    printf("Counting from 5 to 1 using a while loop:\n");
    int j = 5;
    while (j >= 1) {
        printf("%d ", j);
        j--;
    }
    printf("\n");
    

    // do-while loop
    printf("Counting from 1 to 5 using a do-while loop:\n");
    int k = 1;
    do {
        printf("%d ", k);
        k++;
    } while (k <= 5);
    printf("\n");

    return 0;
}
