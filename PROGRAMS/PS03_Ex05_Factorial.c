/*
PRACTICAL SET - 3:
[05] Write a C program to find factorial of a given number.
*/

#include <stdio.h>

int main()
{

    int num, i, fact = 1;

    printf("Enter The Number : ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }

    printf("The Factorial Of %d is %d", num, fact);

    return 0;
}