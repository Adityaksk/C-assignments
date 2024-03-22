#include<stdio.h>
int factorial(int num);
int main()
{
	int num,fact;
        printf(" enter number");
	scanf("%d",&num);
        fact=factorial(num);
	printf(" factorial of %d =%d",num,fact);
	return 0;
}

int factorial(int num)
{
	int fact=1;
	for(int i=1;i<=num;i++)
		fact=fact*i;
	return fact;
}
