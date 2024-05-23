#include <stdio.h>

int main() {
    // File pointer
    FILE *filePointer;

    // Open file in write mode
    filePointer = fopen("example.txt", "w");
    
    // Check if file opened successfully
    if (filePointer == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Write data to file
    fprintf(filePointer, "Hello, File Handling!\n");
    fprintf(filePointer, "This is a C program.\n");

    // Close file
    fclose(filePointer);

    // Open file in read mode
    filePointer = fopen("example.txt", "r");

    // Check if file opened successfully
    if (filePointer == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Read data from file and print
    char buffer[100];
    while (fscanf(filePointer, "%99[^\n]\n", buffer) != EOF) {
        printf("%s\n", buffer);
    }

    // Close file
    fclose(filePointer);

    return 0;
}
