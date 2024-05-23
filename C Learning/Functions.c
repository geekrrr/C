#include <stdio.h>

// Function declaration
int add(int a, int b); // Function prototype

int main() {
    int num1 = 5;
    int num2 = 3;

    // Function call
    int sum = add(num1, num2);
    
    printf("The sum of %d and %d is %d\n", num1, num2, sum);

    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}


