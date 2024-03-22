#include<stdio.h>
int power(int base,int index);
int main()
{
	int base,index;
	printf(" enter base and index");
	scanf("%d %d",&base,&index);
	printf(" power is %d",power(base,index));
	return 0;
}

int power(int base,int index)
{
	int p=1;
        for(int i=1;i<=index;++i)
		p=p*base;
	return p;
}

