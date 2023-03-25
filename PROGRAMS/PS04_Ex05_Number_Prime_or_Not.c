/*
PRACTICAL SET - 4:
[05] Write a program to check whether the given number is prime or not.
*/

#include <stdio.h>

int main()
{
    int num, i, a = 0;

    printf("Enter The Number : ");
    scanf("%d", &num);

    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            printf("%d is Not Prime Number", num);
            a = 1;
            break;
        }
    }
    if (num == 1)
    {
        printf("%d is Not Prime Number", num);
    }
    else if (a != 1)
    {
        printf("%d is Prime Number", num);
    }

    return 0;
}