#include<stdio.h>
int main ()
{
	int a;
	printf(" enter a number");
	scanf("%d",&a);
	int i=1;
	printf(" factors are");
	while(a%i==0 && i<a)
	{
		printf(" %d",i);
		i++;
	}


return 0;
}
