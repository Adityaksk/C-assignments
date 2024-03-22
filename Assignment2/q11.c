#include<stdio.h>
int main()
{
	float x,y;
	printf(" enter x and y co-ordinates");
	scanf(" %f %f",&x,&y);
	if(x>0 && y<0)
	{
		printf(" point is in first quadrant");
	}
	else if(x<0 && y>0)
        {
                printf(" point is in second  quadrant");
        }
	else if(x<0 && y<0)
        {
                printf(" point is in third quadrant");
        }
	else if(x>0 && y>0)
        {
                printf(" point is in fourth quadrant");
        }
	else if(x==0)
        {
                printf(" point is on y-axis");
        }
	else if( y==0)
        {
                printf(" point is on x-axis");
        }
	else if(x==0 && y==0)
        {
                printf(" point is on origin");
        }
	else 
	{
		printf(" invalid coordinates");
	}
	return 0;
}
