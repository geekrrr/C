#include <stdio.h>
#include <string.h>

// Define a structure for a student
struct Student {
    int id;
    char name[50];
    float grade;
};

// Function to print student details using dot operator
void printStudent(struct Student s) {
    printf("Student ID: %d\n", s.id);
    printf("Student Name: %s\n", s.name);
    printf("Student Grade: %.2f\n", s.grade);
}


// Function to modify student details using dot operator
// Note: This will not modify the original structure as it is passed by value
void modifyStudentByValue(struct Student s, int id, const char *name, float grade) {
    s.id = id;
    strcpy(s.name, name);
    s.grade = grade;
    printf("\nModified Student Details inside function (by value):\n");
    printStudent(s);
}


// Function to modify student details using arrow operator
// This will modify the original structure
void modifyStudent(struct Student *s, int id, const char *name, float grade) {
    s->id = id;
    strcpy(s->name, name);
    s->grade = grade;
}


int main() {
    struct Student student1 = {1, "Alice", 85.5};

    printf("Original Student Details:\n");
    printStudent(student1);


    // Modify the student details using a structure (dot operator)
    // This will not affect the original structure
    modifyStudentByValue(student1, 2, "Bob", 90.0);


    // Print the student details after attempting modification by value
    printf("\nStudent Details after attempting modification by value (should be unchanged):\n");
    printStudent(student1);


    // Modify the student details using a pointer (arrow operator)
    modifyStudent(&student1, 2, "Bob", 90.0);


    // Print the modified student details
    printf("\nModified Student Details (using pointer):\n");
    printStudent(student1);

    return 0;
}
