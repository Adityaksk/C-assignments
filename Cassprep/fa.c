#include<stdio.h>
#include<math.h>

int fact(int n);

int main()
{
    int result;
    int num;
    printf(" enter the number:");
    scanf("%d",&num);
    result=fact(num);
    printf("factorial of a number =%d",result);
    return 0;
}
int fact(int n)
{
    if(n==0)
    return 1;
    else
    {
        return n*fact(n-1);
    }
    
}
