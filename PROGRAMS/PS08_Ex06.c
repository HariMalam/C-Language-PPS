#include <stdio.h>

int fact();

//global variable
int n;

int main()
{
    printf("Enter Value of n :");
    scanf("%d", &n);
    printf("Factorial = %d", fact());
    return 0;
}

int fact()
{
    //static variable
    static int ans = 1;
    if (n == 1)
    {
        return ans;
    }
    ans = n-- * fact();
}