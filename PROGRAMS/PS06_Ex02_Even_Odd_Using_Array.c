/*
PRACTICAL SET - 6:
[02] Write a program to find out which number is even or odd from list of 10
numbers using array
*/

#include <stdio.h>

int main()
{
    int marks[10], i = 1, max, min;

    while (i <= 10)
    {
        printf("Enter The Number: ");
        scanf("%d", &marks[i]);
        i++;
    }
    i = 1;
    printf("Even Numbers: ");
    while (i <= 10)
    {
        if (marks[i] % 2 == 0)
        {
            printf("%d, ", marks[i]);
        }

        i++;
    }
    i = 1;
    printf("\nOdd Numbers: ");
    while (i <= 10)
    {
        if (marks[i] % 2 != 0)
        {
            printf("%d, ", marks[i]);
        }

        i++;
    }

    return 0;
}