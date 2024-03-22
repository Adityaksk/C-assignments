#include<stdio.h>
int main()
{
	int a,fact=1;
	printf(" enter a number");
	scanf(" %d",&a);
	int i=1;
	while(i<=a)
	{
		fact=fact*i;
		i++;
	}
	printf(" factorial of %d=%d\n",a,fact);

return 0;
}
