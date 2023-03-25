#include <stdio.h>
int sum(int);

int main()
{
    int n;
    printf("Enter Any number n = ");
    scanf("%d", &n);
    printf("Sum = %d", sum(n));
    return 0;
}

int sum(int n)
{
    return ((n * (n + 1)) / 2);
}