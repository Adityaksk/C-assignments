#include <stdio.h>
int main()
{
    int a, rev = 0, b, rem;
    printf("Enter a number: ");
    scanf("%d", &a);
    b=a;
 
    while(a!=0)
    {
        rem = a%10;
        rev = rev*10 + rem;
        a = a/10;
    }
if (b == rev) {
    printf("%d is a palindrome number.\n", a); 
}   
else {
    printf("%d is not a palindrome number.\n", a);
}
return 0;
}
