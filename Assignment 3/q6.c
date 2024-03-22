#include <stdio.h>

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    printf("All factors excluding %d: ", num);
    int i = 1;
    while (i <= num / 2)
    {
        if (num % i == 0)
       	{
            printf("%d ", i);
        }
        i++;
    }
    return 0;
}
