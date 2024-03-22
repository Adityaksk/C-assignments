/*
#include<stdio.h>
int main()
{
	int a,b;
	printf(" enter two numbers");
	scanf("%d %d", &a,&b);
	if(a>b)
	{
		printf(" a is greater");
		}
	else
	{
		printf(" b is greater");
	}
	return 0;
}
*/

// using conditional  operator
#include<stdio.h>
int main()
{
	int a,b, max;
        printf(" enter two  numbers");
	scanf("%d %d", &a, &b);
	max = a>b ? a:b;
	printf(" maximum no is %d", max);
	return 0;
}

