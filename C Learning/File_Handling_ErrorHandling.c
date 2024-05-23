#include <stdio.h>
#include <errno.h>
#include <string.h>

int main() {
    // File pointer
    FILE *filePointer;

    // Attempt to open a non-existent file for reading
    filePointer = fopen("non_existent_file.txt", "r");

    // Check if file opened successfully
    if (filePointer == NULL) {
        printf("Error opening file: %s\n", strerror(errno));
    } else {
        fclose(filePointer);
    }

    // Attempt to open a file for writing
    filePointer = fopen("example.txt", "w");

    // Check if file opened successfully
    if (filePointer == NULL) {
        printf("Error opening file: %s\n", strerror(errno));
    } else {
        // Attempt to write data to the file
        if (fprintf(filePointer, "Hello, File Handling with Error Handling!\n") < 0) {
            printf("Error writing to file: %s\n", strerror(errno));
        }

        // Attempt to close the file
        if (fclose(filePointer) != 0) {
            printf("Error closing file: %s\n", strerror(errno));
        }
    }

    // Attempt to open the file for reading
    filePointer = fopen("example.txt", "r");

    // Check if file opened successfully
    if (filePointer == NULL) {
        printf("Error opening file for reading: %s\n", strerror(errno));
    } else {
        char buffer[100];
        
        // Attempt to read data from the file
        if (fgets(buffer, sizeof(buffer), filePointer) == NULL) {
            if (feof(filePointer)) {
                printf("End of file reached.\n");
            } else {
                printf("Error reading from file: %s\n", strerror(errno));
            }
        } else {
            printf("Read from file: %s\n", buffer);
        }

        // Attempt to close the file
        if (fclose(filePointer) != 0) {
            printf("Error closing file: %s\n", strerror(errno));
        }
    }

    return 0;
}
