/*
PRACTICAL SET - 2:
[1] Write a C Program to find that accepted number
is negative, or Positive or Zero.
*/

#include <stdio.h>

int main()
{
    int num;

    printf("Enter the Number: ");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("%d is Positive Number", num);
    }
    else if (num < 0)
    {
        printf("%d is Negative Number", num);
    }

    else
    {
        printf("%d is zero", num);
    }

    return 0;
}