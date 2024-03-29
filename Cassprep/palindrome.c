#include <stdio.h>
#include <string.h>

int isPalindrome(char *str) {
   int len = strlen(str);
   for (int i = 0; i < len / 2; i++) {
       if (str[i] != str[len - 1 - i]) {
           return 0;  // Not a palindrome
       }
   }
   return 1;  // Palindrome
}

int main() {
   char str[100];

   printf("Enter a string: ");
   fgets(str, sizeof(str), stdin);

   // Remove trailing newline (if present)
   str[strcspn(str, "\n")] = '\0';

   if (isPalindrome(str)) {
       printf("%s is a palindrome\n", str);
   } else {
       printf("%s is not a palindrome\n", str);
   }

   return 0;
}