#include <stdio.h>
#include <string.h>

// Define a structure for a date
struct Date {
    int day;
    int month;
    int year;
};

// Define a structure for a student that includes the Date structure
struct Student {
    int id;
    char name[50];
    float grade;
    struct Date dob;  // Nested Date structure for date of birth
};

// Function to print student details
void printStudent(struct Student s) {
    printf("Student ID: %d\n", s.id);
    printf("Student Name: %s\n", s.name);
    printf("Student Grade: %.2f\n", s.grade);
    printf("Date of Birth: %02d/%02d/%04d\n", s.dob.day, s.dob.month, s.dob.year);
}

// Function to modify student details
void modifyStudent(struct Student *s, int id, const char *name, float grade, int day, int month, int year) {
    s->id = id;
    strcpy(s->name, name);
    s->grade = grade;
    s->dob.day = day;
    s->dob.month = month;
    s->dob.year = year;
}

int main() {
    // Declare and initialize a student structure
    struct Student student1 = {1, "Alice", 85.5, {15, 8, 2000}};

    // Print the original student details
    printf("Original Student Details:\n");
    printStudent(student1);

    // Modify the student details
    modifyStudent(&student1, 2, "Bob", 90.0, 20, 5, 1999);

    // Print the modified student details
    printf("\nModified Student Details:\n");
    printStudent(student1);

    // Declare and initialize another student structure
    struct Student student2;
    student2.id = 3;
    strcpy(student2.name, "Charlie");
    student2.grade = 75.3;
    student2.dob.day = 10;
    student2.dob.month = 10;
    student2.dob.year = 2001;

    // Print another student's details
    printf("\nAnother Student Details:\n");
    printStudent(student2);

    return 0;
}
