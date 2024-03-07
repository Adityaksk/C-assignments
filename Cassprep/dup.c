#include <stdio.h>
#include <string.h>

int main() {
    char *strings[] = {"apple", "banana", "cherry", "apple", "orange"};
    int numStrings = sizeof(strings) / sizeof(strings[0]);

    printf("Duplicate strings:\n");

    for (int i = 0; i < numStrings; i++) {
        for (int j = i + 1; j < numStrings; j++) {
            if (strcmp(strings[i], strings[j]) == 0) {
                printf("%s\n", strings[i]);  // Print only once to avoid repetition
                break;  // Move to the next string in the outer loop
            }
        }
    }

    return 0;
}