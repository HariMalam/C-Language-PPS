#include <stdio.h>

int fact(int);

int main()
{
    int n;
    printf("Enter Value of n : ");
    scanf("%d", &n);
    printf("Factorial = %d", fact(n));
    return 0;
}

int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }

    return n * fact(n - 1);
}