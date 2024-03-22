#include<stdio.h>
int main()
{
/*	int a,b,c;
	printf(" enter three numbers");
	scanf("%d %d %d", &a,&b,&c);
	if( (a>b) && (a>c) )
	{
		printf(" %d is maximum number",a);

	}
	else if( (b>a) && (b>c) )
	{
		printf("%d is maximum number",b);
	}
	else
	{
		printf(" %d is maximum number",c);
	}
*/

        int a,b,c,max;
	printf(" enter three numbers");
	scanf(" %d %d %d",&a, &b, &c);
	max = (a>b)? ((a>c)? a:c) : ((b>c)? b:c);
       printf(" maximum number is %d",max);


	return 0;
}
