#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    // This is a line comment in C

    /*
        This is a multiline comment in C
        Example of comments and some variables
    */
    
    // Lecture details
    char lecture[] = "Intro to Programming I";
    printf("%s\n", lecture);
    char lecturer[] = "Ali";
    printf("%s\n", lecturer);
    printf("type: char*\n");

    int number_of_students = 40;
    printf("%d\n", number_of_students);
    printf("type: int\n");

    double average_age = 19.5;
    printf("%f\n", average_age);

    bool can_they_pass = false;
    printf("%d\n", can_they_pass);

    // Logical expressions
    printf("True and True\n");   // Output: True
    printf("True and False\n");  // Output: False
    printf("False or True\n");   // Output: True
    printf("False or not False\n"); // Output: True

    // End program
    return 0;
}
