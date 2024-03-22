#include <stdio.h>
int x;
int cal(int, char, int);
int main()
{
    int a, b;
    char op;
    printf("Enter numbers and operator:");
    scanf("%d%c%d", &a, &op, &b);

    int res =cal(a, op, b);
    if (x==1)
        printf("\n%d%c%d=Inavalid\n",a,op,b);
        else if(x==0)
    printf("\n%d%c%d=%d\n",a,op,b,res);
}

int cal(int a, char op, int b)
{
    switch (op)
    {
    case '+':
        return a+ b;
        break;
    case '-':
        return a- b;
        break;
    case '*':
        return a* b;
        break;
    case '/':
        if(b==0)
        {
           x=1;
        }else{
            return a/b;
        }
        break;
    }
}
