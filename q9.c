#include<stdio.h>
int main()
{
	float  a,b,cel,far;
	printf(" enter temperature in celcius");
	scanf("%f",&a);
        printf(" enter temperature in farheneit");
        scanf("%f",&b);
	cel=5 * (b - 32) / 9;
	far=((9 * a) / 5) + 32;
	printf("temp in celcius is %f",cel);
	printf("temp in fahrenheit is %f",far);
	return 0;
}


