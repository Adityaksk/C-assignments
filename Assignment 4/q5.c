#include <stdio.h>
void character(char ch, int n);
int main()
{
  char ch;
  int n;
   printf("Enter a character: ");
  scanf(" %c", &ch);
   printf("Enter the number: ");
  scanf("%d", &n);
  character(ch, n);
   return 0;
}

void character(char ch, int n)
{
  for (int i = 0; i <= n; i++)
  {
    printf("%c\n", ch);
  }
}


