#include <stdio.h>

int main() {
    int num = 10; // Declare and initialize an integer variable
    int *ptr;     // Declare a pointer variable

    ptr = &num;   // Assign the address of num to ptr

    // Output the value and memory address of num using both the variable and the pointer
    printf("Value of num: %d\n", num);
    printf("Memory address of num (using variable): %p\n", &num);
    printf("Value of num (using pointer): %d\n", *ptr);
    printf("Memory address of num (using pointer): %p\n", ptr);

    
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr; // Initialize pointer to the first element of the array

    // Output the original array
    printf("Original array:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    // Output memory addresses and values using pointer arithmetic
    printf("Memory addresses and values using pointer arithmetic:\n");
    for (int i = 0; i < 5; i++) {
        printf("Address: %p, Value: %d\n", ptr, *ptr);
        ptr++; // Increment pointer to move to the next element
    }
    printf("\n");

    // Reset the pointer to the first element
    ptr = arr;

    // Output memory addresses and values using pointer arithmetic in reverse
    printf("Memory addresses and values using pointer arithmetic in reverse:\n");
    for (int i = 0; i < 5; i++) {
        printf("Address: %p, Value: %d\n", ptr, *ptr);
        ptr--; // Decrement pointer to move to the previous element
    }
    return 0;
}
