/*
PRACTICAL SET - 3:
[06] Write a program to reverse a number.
*/

#include <stdio.h>

int main()
{
    int num, a;

    printf("Enter The Number : ");
    scanf("%d", &num);
    if (num > 10)
    {
        while (num > 0)
        {

            a = num % 10;
            printf("%d", a);
            num = num / 10;
        }
    }
    else
    {
        printf("%d", num);
    }

    return 0;
}