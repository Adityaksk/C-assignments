#include<stdio.h>
int main()
{
	int a,b,x;
	printf(" enter 2 numbers");
	scanf("%d%d",&a,&b);
	int temp1=a;
	int temp2=b;
	x=a%b;
	printf(" %d \"%\" %d=%d\n",a,b,x);
	a=b;
	b=x;
	while(x!=3)
	{
		x=a%b;
		printf(" %d  \"%\"  %d=%d\n",a,b,x);
		a=b;
		b=x;
	}
	printf(" GCD of %d and %d is %d\n",temp1,temp2,x);
return 0;
}
