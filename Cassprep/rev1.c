#include <stdio.h>

void reverseString(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove trailing newline character (if present)
    str[strcspn(str, "\n")] = '\0';

    printf("Reversed string: ");
    reverseString(str);
    printf("%s\n", str);

    return 0;
}