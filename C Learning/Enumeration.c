#include <stdio.h>

// Enumeration for days of the week
// Enumerations are user-defined data types that consist of named integer constants.
// They are used to assign names to integral constants to make a program more readable and maintainable.
enum Weekday {
    SUNDAY,    // 0
    MONDAY,    // 1
    TUESDAY,   // 2
    WEDNESDAY, // 3
    THURSDAY,  // 4
    FRIDAY,    // 5
    SATURDAY   // 6
};

// Enumeration for traffic light colors
// Enumerations help to improve code clarity by using meaningful names instead of arbitrary numbers.
enum TrafficLight {
    RED,    // 0
    YELLOW, // 1
    GREEN   // 2
};

// Function to print the name of the day
void printDay(enum Weekday day) {
    // The switch statement is used to map each enumeration constant to its corresponding string representation.
    switch (day) {
        case SUNDAY:    printf("Sunday\n"); break;
        case MONDAY:    printf("Monday\n"); break;
        case TUESDAY:   printf("Tuesday\n"); break;
        case WEDNESDAY: printf("Wednesday\n"); break;
        case THURSDAY:  printf("Thursday\n"); break;
        case FRIDAY:    printf("Friday\n"); break;
        case SATURDAY:  printf("Saturday\n"); break;
        default:        printf("Invalid day\n"); break;
    }
}

// Function to print the status of the traffic light
void printTrafficLightStatus(enum TrafficLight light) {
    // The switch statement maps each enumeration constant to a meaningful status message.
    switch (light) {
        case RED:    printf("Stop\n"); break;
        case YELLOW: printf("Caution\n"); break;
        case GREEN:  printf("Go\n"); break;
        default:     printf("Invalid traffic light status\n"); break;
    }
}

int main() {
    // Declare variables of type enum Weekday
    enum Weekday today, tomorrow;
    today = WEDNESDAY;  // Assigning a value from the Weekday enumeration
    tomorrow = THURSDAY; // Assigning another value from the Weekday enumeration

    // Print today's and tomorrow's days
    printf("Today is: ");
    printDay(today); // Prints "Today is: Wednesday"

    printf("Tomorrow is: ");
    printDay(tomorrow); // Prints "Tomorrow is: Thursday"

    // Declare a variable of type enum TrafficLight
    enum TrafficLight currentLight;
    currentLight = RED; // Assigning a value from the TrafficLight enumeration

    // Print the current traffic light status
    printf("Current traffic light status: ");
    printTrafficLightStatus(currentLight); // Prints "Current traffic light status: Stop"

    // Change the traffic light status
    currentLight = GREEN; // Changing the value to another enumeration constant
    printf("Changed traffic light status: ");
    printTrafficLightStatus(currentLight); // Prints "Changed traffic light status: Go"

    return 0;
}
