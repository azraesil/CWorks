#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    for (int j = 0; j <= 100; j += 2) {
        printf("%d\n", j);
    }

    for (int i = 0; i <= 100; i++) {
        if (i % 2 != 0) {
            printf("%d\n", i);
        }
    }

    for (int i = 0; i <= 100; i++) {
        if (i % 2 != 0) {
            continue;
        }
        printf("%d\n", i);
    }

    for (int i = 0; i <= 100; i++) {
        if (i % 2 != 0) {
            printf("%d\n", i);
        }
    }

    int number = 0;
    while (number <= 100) {
        printf("%d\n", number);
        number += 2;
    }

    number = 0;
    while (true) {
        if (number % 2 == 0) {
            printf("%d\n", number);
        }
        number++;
        if (number == 101) {
            break;
        }
    }

    number = 0;
    printf("Number: %d\n", number);
    while (number <= 100) {
        if (number % 2 != 0) {
            printf("%d\n", number);
        }
        number += 1;
    }

    char* students[] = {"Ahmet", "Onur", "Mehmet", "Enes", "Oğuz"};
    int num_students = sizeof(students) / sizeof(students[0]);
    for (int idx = 0; idx < num_students; idx++) {
        if (strcmp(students[idx], "Mehmet") == 0) {
            printf("%s : %d\n", students[idx], 100);
        } else {
            printf("%s : %d\n", students[idx], 50);
        }
    }

    for (int i = 1; i < 10; i++) {
        if (i >= 5) {
            continue;
        }
        printf("%d\n", i);
    }

    for (int i = 1; i < 4; i++) {
        for (int j = 1; j < 4; j++) {
            for (int z = 1; z < 4; z++) {
                printf("(%d, %d, %d) ", i, j, z);
            }
        }
        printf("\n");
    }

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            printf("%d x %d = %d\t", i, j, i * j);
        }
        printf("\n");
    }

    return 0;
}
