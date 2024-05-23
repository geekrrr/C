#include <stdio.h>
#include <string.h>

// Define a union representing a value that can be either an integer or a float
union Value {
    int intValue;
    float floatValue;
};

// Define a structure representing a variable with a name and its value (union)
struct Variable {
    char name[50];
    union Value value;
};

int main() {
    // Declare a variable of type union Value
    union Value myValue;

    // Assign an integer value to the union
    myValue.intValue = 10;

    // Print the integer value
    printf("Integer Value: %d\n", myValue.intValue);

    // Assign a float value to the same union variable
    myValue.floatValue = 3.14;

    // Print the float value
    printf("Float Value: %.2f\n", myValue.floatValue);

    // Define a variable of type struct Variable
    struct Variable myVariable;

    // Assign a name and an integer value to the variable
    strcpy(myVariable.name, "myVariable");
    myVariable.value.intValue = 20;

    // Print the name and value of the variable
    printf("Variable Name: %s\n", myVariable.name);
    printf("Variable Value: %d\n", myVariable.value.intValue);

    return 0;
}
