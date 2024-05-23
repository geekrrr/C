#include <stdio.h>

// Function declarations
int add(int a, int b);
float divide(float a, float b);
void greet();

int main() {
    int num1 = 10, num2 = 5;
    float x = 10.0, y = 3.0;

    // Calling functions and printing return values
    int sum = add(num1, num2);
    printf("Sum: %d\n", sum);

    float result = divide(x, y);
    printf("Division: %.2f\n", result);

    greet();

    return 0;
}

// Function definitions
int add(int a, int b) {
    return a + b; // Returns an integer
}

float divide(float a, float b) {
    if (b == 0) {
        printf("Error! Division by zero.\n");
        return 0.0; // Returns a float
    }
    return a / b; // Returns a float
}

void greet() {
    printf("Hello, World!\n"); // Returns nothing (void)
}
