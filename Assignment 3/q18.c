#include<stdio.h>
int main()
{
	int n,j,x;
	for(n=1;n<=10;n++)
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
