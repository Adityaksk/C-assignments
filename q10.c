#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,perimeter;
	float area,d,s;
	printf(" enter three sides of triangle:");
	scanf("%d%d%d",&a,&b,&c);
	printf("perimeter is %d",(a+b+c*a+b+c));
	s=(a+b+c)/2;
        area = sqrt(s*(s-a)*(s-b)*(s-c));

	printf(" area is %f:",area);
	return 0;
}
