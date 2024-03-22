#include<stdio.h>
int main()
{
	int year;
	char month;
	printf(" enter year");
	scanf("%d",&year);
	printf(" enter month");
	scanf("%*c%c",&month);
	switch(month)
	{
		case 'j':
		case 'M':
		case 'm':
		case 'g':
		case 'a':
		case 'o':
		case 'd':
		printf(" month has 31 days");
		break;
		case 'A':
		case 'J':
		case's':
		case'n':
		printf(" monyh has 30 days");
		break;
		case 'f':if(((year%4==0) && (year%100!=0)) || (year%400==0))
			 {
				 printf(" month has 29 days");
			 }
			 else
			 {
				 printf("month has 28 days");
			 }
		break;
	}
	return 0;
}
