#include<stdio.h>
int main()
{
	int a, b;
	float div;
	printf(" enter two numbers");
	scanf("%d %d",&a,&b);
	if(b!=0)
		{ 
		div =( float) a/b;
		printf("division is=%.3f ",div);
		}
		else
		{ 
	           printf("invalid division");
		}
		return 0;
}
