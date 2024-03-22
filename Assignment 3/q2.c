#include<stdio.h>
int main()
{
int a;
printf(" enter number");
scanf("%d",&a);
int i=1;
while(i<=10)
{
	
	printf(" %d=%d*%d",a,i,(a*i));
        i++;
}
return 0;
}
