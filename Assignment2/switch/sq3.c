#include<stdio.h>
int main()
{
	int empid,deptno;
	char dsgncd;
	printf(" enter employe id and department no");
	scanf("%d%d",&empid,&deptno);
	printf("enter designation code");
	getchar();
        dsgncd =getchar();
	switch(deptno)
	{
		case 10:printf("Employee with %d id is working in Marketing department\n",empid);
			break;
	        case 20:printf("Employee with %d id is working in Management department\n",empid);
                        break;
                case 30:printf("Employee with %d id is working in sales department\n ",empid);
                        break;
                case 40:printf("Employee with %d id is working in designing department\n",empid);
                        break;
	}
	switch(dsgncd)
	{
		case 'M':printf(" as Manager \n");
			 break;
		case 'S':printf(" as Supervisor \n");
                         break;
                case 's':printf(" as security officer \n");
                         break;
                case 'C':printf(" as Clerk \n");
                         break;
	}
	return 0;
}

