#include<stdio.h>
int fib(int n)
{
    if (n <= 1) {
        return n;
    } else {
        return fib(n - 1) + fib(n - 2);
    }
}
int main()
{
    int n;
    printf("Enter the value of n to calculate the nth term of Fibonacci series: ");
    scanf("%d", &n);
    printf("The %dth term of Fibonacci series is: %d\n", n, fib(n));
    return 0;
}
