#include <stdio.h>

// Function prototype
int factorial(int n);
int fibonacci(int n);

int main() {
    int num;

    // Example of recursion: Factorial
    printf("Enter a positive integer to calculate its factorial: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d is %d\n", num, factorial(num));
    }

    // Example of recursion: Fibonacci
    printf("Enter a positive integer to get the nth Fibonacci number: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("Fibonacci is not defined for negative numbers.\n");
    } else {
        printf("The %dth Fibonacci number is %d\n", num, fibonacci(num));
    }

    return 0;
}

// Recursive function to calculate factorial
int factorial(int n) {
    // Base case: if n is 0 or 1, return 1
    if (n == 0 || n == 1) {
        return 1;
    }
    // Recursive case: n * factorial of (n-1)
    return n * factorial(n - 1);
}

// Recursive function to calculate the nth Fibonacci number
int fibonacci(int n) {
    // Base case: if n is 0, return 0; if n is 1, return 1
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }
    // Recursive case: sum of the previous two Fibonacci numbers
    return fibonacci(n - 1) + fibonacci(n - 2);
}
