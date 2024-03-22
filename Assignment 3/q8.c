#include<stdio.h>
int main()
{
	int a;
	printf(" enter a number");
	scanf(" %d",&a);
	int i=1;
	int j=a;
	while(a%i==0 && a%j==0)
	{
		if(i<j && j<=a)
		{
			printf(" %d *%d=%d\n",i,j,a);
					i++;
					}
		j--;
		}
return 0;
}
