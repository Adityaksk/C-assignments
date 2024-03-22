#include<stdio.h>
int main()
{
	int a,fact=1;
	printf(" enter a number");
	scanf("%d",&a);
	int i;
	for(i=1;i<a;i++)
	{
		fact=fact*i;
	}
	printf(" Factorial of %d is %d",a,fact);
	return 0;
}
