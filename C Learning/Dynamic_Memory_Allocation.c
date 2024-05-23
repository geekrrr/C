#include <stdio.h>
#include <stdlib.h>

int main() {
    // Using malloc for dynamic memory allocation
    int *ptr1 = (int *)malloc(5 * sizeof(int)); // Allocate memory for an array of 5 integers
    if (ptr1 == NULL) {
        printf("Memory allocation failed for ptr1.\n");
        return 1;
    }

    // Assign values to the dynamically allocated memory
    printf("Using malloc for dynamic memory allocation:\n");
    for (int i = 0; i < 5; i++) {
        ptr1[i] = i * 10;
        printf("ptr1[%d] = %d\n", i, ptr1[i]);
    }
    printf("\n");

    // Using realloc to resize dynamically allocated memory
    int *ptr2 = (int *)realloc(ptr1, 10 * sizeof(int)); // Resize memory to hold 10 integers
    if (ptr2 == NULL) {
        printf("Memory reallocation failed for ptr2.\n");
        free(ptr1); // Free previously allocated memory
        return 1;
    }

    // Assign values to the resized memory
    printf("Using realloc for resizing dynamically allocated memory:\n");
    for (int i = 5; i < 10; i++) {
        ptr2[i] = i * 10;
        printf("ptr2[%d] = %d\n", i, ptr2[i]);
    }
    printf("\n");

    // Free dynamically allocated memory
    free(ptr2); // Free memory allocated by realloc

    return 0;
}
