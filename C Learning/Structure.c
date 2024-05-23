#include <stdio.h>
#include <string.h>

// Define a structure for a student
struct Student {
    int id;
    char name[50];
    float grade;
};

// Function to print student details
void printStudent(struct Student s) {
    printf("Student ID: %d\n", s.id);
    printf("Student Name: %s\n", s.name);
    printf("Student Grade: %.2f\n", s.grade); 
}

// Function to modify student details
void modifyStudent(struct Student *s, int id, const char *name, float grade) {
    s->id = id;
    strcpy(s->name, name);
    s->grade = grade;
}

int main() {
    // Declare and initialize a student structure
    struct Student student1 = {1, "Alice", 85.5};

    // Print the original student details
    printf("Original Student Details:\n");
    printStudent(student1);

    // Modify the student details
    modifyStudent(&student1, 2, "Bob", 90.0);

    // Print the modified student details
    printf("\nModified Student Details:\n");
    printStudent(student1);

    // Declare and initialize another student structure
    struct Student student2;
    student2.id = 3;
    strcpy(student2.name, "Charlie");
    student2.grade = 75.3;

    // Print another student's details
    printf("\nAnother Student Details:\n");
    printStudent(student2);

    return 0;
}