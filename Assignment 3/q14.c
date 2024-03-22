#include<stdio.h>
int main()
{
   int i, a, p = 0;
   printf("Please enter a number: \n");
   scanf("%d", &a);
   for(i=1; i<=a; i++)
   {
      if(a%i==0)
      {
         p++;
      }
   }
   if(p==2)
   {
      printf(" %d  is a prime number",a);
   }
   else
   {
      printf("%d is not a prime number.",a);
   }
   return 0;
}

