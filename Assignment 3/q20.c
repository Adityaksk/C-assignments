#include<stdio.h>
int main()
{ 
	int a;
	printf(" enter a number");
	scanf(" %d",&a);
	if(a%1==0  && a%a==0)
	{
		printf(" number is prime number");
	}
	else
	{
		printf(" number is not prime number");
	}
	return 0;
}
