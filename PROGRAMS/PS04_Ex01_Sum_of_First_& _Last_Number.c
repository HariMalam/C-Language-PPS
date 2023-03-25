/*
PRACTICAL SET - 4:
[01] Write a program to find out sum of first and last digit of a given number.
*/
#include <stdio.h>

int main()
{
    int num, a, b;

    printf("Enter The Number :  ");
    scanf("%d", &num);

    b = num;
    a = num % 10;

    if (num > 10)
    {
        while (b > 10)
        {

            b = b / 10;
        }

        printf("%d", a + b);
    }
    else
    {
        printf("%d", num);
    }

    return 0;
}