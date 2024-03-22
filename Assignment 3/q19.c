#include<stdio.h>
int main()
{
	int n,j,x,a,b;
	printf("enter first number");
	scanf("%d",&a);
	printf(" enter last number");
	scanf("%d",&b);
	for(n=a;n<=b;n++)
	{
		for(j=1;j<=10;j++)
		{
		x=n*j;

		printf("%5d",x);
		}
		printf("\n");
	}
	return 0;
}
