#include <stdio.h>
int power(int,int);
int main() {
    int base, index, result;
    printf("Enter base and index ");
    scanf("%d %d",&base,&index);
    result = power(base, index);
    printf("%d^%d = %d", base, index, result);
    return 0;
}

int power(int base, int index)
{
    if (index != 0)
        return (base * power(base, index - 1));
    else
        return 1;
}
