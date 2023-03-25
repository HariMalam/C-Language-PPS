/*
PRACTICAL SET - 4:
[06] Write a program to evaluate the series 1^2+2^2+3^2+……+n^2
*/

#include <stdio.h>

int main()
{
    int num, sum, i;

    printf("Enter The Number(n) : ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {

        sum = sum + (i * i);
    }
    
    printf("The Sum Of Given Series is %d", sum);
    return 0;
}