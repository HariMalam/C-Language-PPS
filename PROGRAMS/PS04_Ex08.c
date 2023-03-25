/*
PRACTICAL SET - 4:
[08] Write a C program to find 1+1/2!+1/3!+1/4!+.....+1/n!.
*/

#include <stdio.h>

int main()
{
    float num, i, sum = 0, j, fact = 1;

    printf("Enter The Number : ");
    scanf("%f", &num);

    for (i = 1; i <= num; i++)
    {
        fact=1;
        for (j = 1; j <= i; j++)
        {
            fact = fact * j;
        }

        sum = sum + (1 / fact);
    }

    printf("The Sum Of Given Series is %f", sum);
    return 0;
}