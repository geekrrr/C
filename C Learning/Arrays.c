#include <stdio.h>

int main() {
    // Declaring and initializing an array
    int numbers[] = {1, 2, 3, 4, 5};

    // Accessing and printing array elements
    printf("Original array elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // Modifying array elements
    numbers[2] = 10; // Modifying the third element (index 2)
    numbers[4] = numbers[0] + numbers[1]; // Modifying the fifth element (index 4) based on other elements

    // Accessing and printing modified array elements
    printf("Modified array elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
