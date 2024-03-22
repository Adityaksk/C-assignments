#include<stdio.h>
int main()
{/*using logical operators
	int year;
	printf(" enter year");
	scanf(" %d",&year);
	if((year%4 ==0 && year%100 !=0) || (year % 400 ==0))
	{
		printf("%d=leap year and 366 days\n",year);
	}
	else
	{
	        printf("%d=not leap year and 365 days\n",year);
	}
*/




	// using conditional operator
	/* int year;
        printf(" enter year");
        scanf(" %d",&year);
	int days = ((year%4==0) && (year%100 !=0)) || (year%400 ==0)? 366:365;
	printf(" year %d has %d days",year,days);

	*/

           // without using logical operators
          int year;
          printf("Enter a year: ");
          scanf("%d", &year);
          if (year % 4 == 0)
	  {
             if (year % 100 == 0)
	     {
               if (year % 400 == 0)
	       {
                printf(" %d = leap year and  366 days.\n", year);
               }
	       else
	       {
                printf(" %d = not leap year and  365 days.\n", year);
                }
	     }
	  }
	return 0;
}
