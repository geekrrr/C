#include <stdio.h>

int main() {
    // Integer data types
    int integerVar = 10;
    short shortVar = 20;
    long longVar = 30;
    long long longLongVar = 40;
    
    // Floating-point data types
    float floatVar = 3.14;
    double doubleVar = 3.14159;
    long double longDoubleVar = 3.1415926535;
    
    // Character data types
    char charVar = 'A';
    
    // Print variables
    printf("Integer: %d\n", integerVar);
    printf("Short: %hd\n", shortVar);
    printf("Long: %ld\n", longVar);
    printf("Long Long: %lld\n", longLongVar);
    printf("Float: %f\n", floatVar);
    printf("Double: %lf\n", doubleVar);
    printf("Long Double: %Lf\n", longDoubleVar);
    printf("Character: %c\n", charVar);
    
      
      
    // Declare variables to store input
    int num1, num2;
    
    // Prompt the user for input
    printf("Enter two integers separated by space: ");
    
    // Read input from the user
    scanf("%d %d", &num1, &num2);
    
    // Perform addition
    int sum = num1 + num2;
    
    // Display the result
    printf("The sum of %d and %d is %d.\n", num1, num2, sum);
    
    return 0;
}
