#include<stdio.h>
int main()
{
	int year;
	char month;
	printf(" enter year");
	scanf(" %d",&year);
	printf(" enter month");
	scanf("%*c%c",&month);
	if(month == 'J' || month=='M' || month=='m' || month=='j' || month=='a' || month=='o' || month=='d')
	{
		printf(" month has 31 days\n");
	}

	else if(month =='f')
	{
		if(((year%4==0) && (year%100!=0)) || (year%400==0))
		{
			printf(" month has 29 days\n");
		}
		else
		{
			printf(" month has 28 days\n");
		}
	}
	else if (month == 'A'|| month == 'g' || month=='s' || month == 'n')
        {
                printf(" month has 30 days\n");
        }

	
	return 0;
}


        
