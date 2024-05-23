#include <stdio.h>

// Function that takes a pointer to an array as an argument
void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("Element %d: %d\n", i, arr[i]);
    }
}

// Function that modifies an array using a pointer
void modifyArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] += 10; // Add 10 to each element
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5}; // Declare and initialize an array
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    // Print original array
    printf("Original array:\n");
    printArray(arr, size); // Pass array to function (decays to pointer)
    
    // Modify array
    modifyArray(arr, size); // Pass array to function (decays to pointer)
    
    // Print modified array
    printf("\nModified array:\n");
    printArray(arr, size); // Pass array to function (decays to pointer)

    return 0;
}
