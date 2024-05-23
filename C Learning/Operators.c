#include <stdio.h>

int main() {
    int a = 10;
    int b = 5;
    int result;
    
    // Arithmetic operators

    result = a + b;
    printf("Addition: %d + %d = %d\n", a, b, result);
    
    result = a - b;
    printf("Subtraction: %d - %d = %d\n", a, b, result);
    
    result = a * b;
    printf("Multiplication: %d * %d = %d\n", a, b, result);
    
    result = a / b;
    printf("Division: %d / %d = %d\n", a, b, result);
    
    result = a % b;
    printf("Modulus: %d %% %d = %d\n", a, b, result);
    


    // Increment and decrement operators

    int x = 5;
    printf("Original value of x: %d\n", x);
    int postIncrementResult = x++;
    printf("Post-increment (x++): %d\n", postIncrementResult);
    printf("After post-increment: %d\n", x);
    
    x = 5;
    printf("Original value of x: %d\n", x);
    int preIncrementResult = ++x;
    printf("Pre-increment (++x): %d\n", preIncrementResult);
    printf("After pre-increment: %d\n", x);
     


    // Relational operators

    int c = 5;
    int d= 10;

    printf("%d == %d : %d\n", c, d, c == d); // Prints: 5 == 10 : 0 (false)

    printf("%d != %d : %d\n", c, d, c != d); // Prints: 5 != 10 : 1 (true)

    printf("%d > %d : %d\n", c, d, c > d); // Prints: 5 > 10 : 0 (false)

    printf("%d < %d : %d\n", c, d, c < d); // Prints: 5 < 10 : 1 (true)

    printf("%d >= %d : %d\n", c, d, c >= d); // Prints: 5 >= 10 : 0 (false)

    printf("%d <= %d : %d\n", c, d, c <= d); // Prints: 5 <= 10 : 1 (true)


    
    // Logical operators

    int x = 5;
    int y = 10;
    int z = 0;

    // Logical AND
    if (x > 0 && y < 10) {
        printf("x is greater than 0 and y is less than 10.\n");
    } else {
        printf("x is not greater than 0 or y is not less than 10.\n");
    }

    // Logical OR
    if (z == 0 || y == 10) {
        printf("z is equal to 0 or y is equal to 10.\n");
    } else {
        printf("z is not equal to 0 and y is not equal to 10.\n");
    }

    // Logical NOT
    if (!(x == 5)) {
        printf("x is not equal to 5.\n");
    } else {
        printf("x is equal to 5.\n");
    }

    return 0;

}
