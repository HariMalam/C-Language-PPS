/*
PRACTICAL SET - 4:
[09] Write a program to evaluate the series sum= 1 - x + x^2/2! - x^3/3! + x^4/4!......-x^9/9!
*/

#include <stdio.h>

int main()
{
    float x, j, power, fact, sum1, sum2, sum;
    int i;

    printf("Enter The Value Of X : ");
    scanf("%f", &x);

    for (i = 1; i < 10; i++)
    {

        fact = 1;
        power = 1;
        for (j = 1; j <= i; j++)
        {
            fact = fact * j;
            power = power * x;
        }

        if (i % 2 == 0)
        {
            sum1 = sum1 + (power / fact);
        }
        else
        {
            sum2 = sum2 + (power / fact);
        }
    }

    sum = 1 + sum1 - sum2;
    printf("The Sum Of Given Series is %f", sum);

    return 0;
}