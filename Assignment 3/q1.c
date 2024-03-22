#include<stdio.h>
int main()
{
	char ch;
	int b;
	printf("Character:");
	scanf("%c",&ch);
	printf(" Number:");
	scanf("%d",&b);
	int i=0;
	while(i<=b)
	{
	        	
		printf("%c",ch);
		i++;
	}
	return 0;
}
