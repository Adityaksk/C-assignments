#include<stdio.h>
int main()
{
       float a,b,o;
       char op;
       printf("enter two numbers");
       scanf(" %f%f",&a,&b);
       printf(" enter operand");
       scanf("%*c%c",&op);
       switch(op)
       {
	       case '1': o=a+b;
		       printf("o=%.2f\n",o);
		       break;
              case '2': o=a-b;
                       printf("o=%.2f\n",o);
                       break;
              case '3': o=a*b;
                       printf("o=%.2f\n",o);
                       break;
              case '4': if(b!=0)
		      {
		       o=a/b;
                       printf("o=%.2f\n",o);
		      }
		      else
		      {
		       printf("division not possible");
		      }
		      break;
	      default:printf(" invalid operand");	      
                       break;
       }
       return 0;
}
