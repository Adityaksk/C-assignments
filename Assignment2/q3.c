#include<stdio.h>
int main()
{
        int a;
        printf("enter a number");
        scanf("%d",&a);

        if(a>0)
        {
                printf(" Number is positive");
        }
        else if(a<0)
        {
                printf(" number is negative");
        }
	else
	{
		printf(" number is 0");
	}

        return 0;
}

