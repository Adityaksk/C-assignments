#include<stdio.h>
void fib(int n);
int main()
{
	int n;
	printf(" enter no of terms in series");
	scanf("%d",&n);
	fib(n);
	return 0;
}
void fib(int n)
{
       	int a=0,b=1,c;
	printf("%d %d",a,b);
       for(int i=2;i<n;i++)
      {
         c=a+b;
       printf("%d",c);
        a=b;
         b=c;
	 }
	 }
