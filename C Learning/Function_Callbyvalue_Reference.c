#include <stdio.h>

// Function prototypes
void callByValue(int num);
void callByReference(int *ptr);

int main() {
    int num1 = 10;
    int num2 = 20;

    printf("Before callByValue: num1 = %d\n", num1);
    callByValue(num1); // Call by value
    printf("After callByValue: num1 = %d\n\n", num1);

    printf("Before callByReference: num2 = %d\n", num2);
    callByReference(&num2); // Call by reference
    printf("After callByReference: num2 = %d\n", num2);

    return 0;
}
 
// Function definitions
void callByValue(int num) {
    num = 100; // Changes local copy of num, not the original num1
    printf("Inside callByValue: num = %d\n", num);
}

void callByReference(int *ptr) {
    *ptr = 200; // Changes value at the address pointed by ptr, which is num2
    printf("Inside callByReference: *ptr = %d\n", *ptr);
}
