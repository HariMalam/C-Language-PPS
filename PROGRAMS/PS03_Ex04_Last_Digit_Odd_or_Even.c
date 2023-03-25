/*
PRACTICAL SET - 3:
[4] Write a C program to input an integer number and check the last digit of
number is even or odd.
*/

#include <stdio.h>

int main()
{
    int num, r, a;

    printf("Enter The Number : ");
    scanf("%d", &num);

    if ((num % 10) % 2 == 0)
    {
        printf("Last Digit Of Number is even");
    }
    else
    {
        printf("Last Digit Of Number is Odd");
    }

    return 0;
}