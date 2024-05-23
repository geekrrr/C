#include <stdio.h>
#include <string.h>

int main() {
    // Declaring and initializing strings
    char str1[20] = "Hello";
    char str2[20] = "World";
    char str3[20];
    char str4[20] = "Hello";
    char str5[] = " World!";
    char str6[40];

    // Using strcpy to copy a string
    strcpy(str3, str1);
    printf("After strcpy, str3: %s\n", str3);

    // Using strcat to concatenate strings
    strcat(str4, str5);
    printf("After strcat, str4: %s\n", str4);

    // Using strlen to find length of a string
    printf("Length of \"%s\": %lu\n", str4, strlen(str4));

    // Using strcmp to compare strings
    int cmpResult = strcmp(str1, str2);
    if (cmpResult == 0) {
        printf("str1 is equal to str2\n");
    } else if (cmpResult < 0) {
        printf("str1 is less than str2\n");
    } else {
        printf("str1 is greater than str2\n");
    }

    // Using strchr to find first occurrence of a character in a string
    char *ptr = strchr(str4, 'o');
    if (ptr != NULL) {
        printf("First occurrence of 'o' in \"%s\" is at position: %ld\n", str4, ptr - str4 + 1);
    } else {
        printf("Character 'o' not found in \"%s\"\n", str4);
    }

    // Using strstr to find first occurrence of a substring in a string
    ptr = strstr(str4, "World");
    if (ptr != NULL) {
        printf("Substring \"World\" found in \"%s\" at position: %ld\n", str4, ptr - str4 + 1);
    } else {
        printf("Substring \"World\" not found in \"%s\"\n", str4);
    }

    // Using strncpy to copy part of a string
    strncpy(str6, str4, 6); // Copy first 6 characters of str4
    str6[6] = '\0'; // Null-terminate the string
    printf("After strncpy, str6: %s\n", str6);

    return 0;
}
