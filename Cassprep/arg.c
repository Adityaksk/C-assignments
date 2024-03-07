#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Error: Please provide exactly one number as a command-line argument.\n");
        return 1;
    }

    int num;
    char *endptr;

    // Convert argument to integer, handling potential errors
    num = strtol(argv[1], &endptr, 10);
    if (*endptr != '\0') {
        printf("Error: Invalid number provided as an argument.\n");
        return 1;
    }

    printf("Multiplication Table of %d\n", num);
    printf("--------------------\n");

    for (int i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", num, i, num * i);
    }

    return 0;
}