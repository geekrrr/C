#include <stdio.h>

// Function declaration
void display(int num1, int num2); // Formal parameters

int main() {
    int a = 5;
    int b = 10;

    // Calling the function with actual parameters
    display(a, b);

    return 0;
}

// Function definition
void display(int num1, int num2) { // Formal parameters
    printf("The value of num1 is: %d\n", num1);
    printf("The value of num2 is: %d\n", num2);
}
