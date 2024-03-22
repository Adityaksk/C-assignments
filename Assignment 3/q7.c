#include<stdio.h>
int main()
{
	int a;
	printf("enter number");
	scanf("%d",&a);
	int i=2;
	while(i<a)
	{
	       	if(a%i==0)
		{
			printf("%d*",i);
			a=i;
		}
		i++;
		}


	return 0;
}
