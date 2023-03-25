/*
PRACTICAL SET - 3:
[07] Write a program to generate first n number of Fibonacci series
*/

#include <stdio.h>

int main()
{

    int a = 1, b = 1, sum, i, num;

    printf("Enter the Number : ");
    scanf("%d", &num);

    if (num == 1)
    {
        printf("0");
    }
    else if (num == 2)
    {
        printf("0 1");
    }
    else if (num == 3)
    {
        printf("0 1 1");
    }

    else if (num > 0)
    {

        printf("0 1 1 ");

        num = num - 3;

        while (i < num)
        {
            sum = a + b;
            printf("%d ", sum);
            a = b;
            b = sum;

            i++;
        }
    }
    else
    {
        printf("");
    }

    return 0;
}