#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Error: Please provide at least one number as a command-line argument.\n");
        return 1;
    }

    int max = atoi(argv[1]); // Initialize max with the first number

    for (int i = 2; i < argc; i++) {
        int num = atoi(argv[i]);
        if (num > max) {
            max = num;
        }
    }

    printf("Maximum number: %d\n", max);

    return 0;
}