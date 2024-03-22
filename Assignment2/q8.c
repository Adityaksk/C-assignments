#include<stdio.h>
int main()
{
	int qty;
	float price;
	printf(" quantity is");
	scanf("%d",&qty);
	printf(" price is ");
	scanf("%f",&price);
       if(qty>30 && qty<50)
       {
	       price = 5*0.90*qty;
	       printf(" price is %f for %d quantities",price,qty);
       }
       else if(qty>50)
       {
	       price = 5*0.85*qty;
	       printf(" price is %f for %d quantities",price,qty);
       }
       return 0;
}
