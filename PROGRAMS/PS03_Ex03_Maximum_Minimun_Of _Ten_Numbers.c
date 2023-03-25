/*
PRACTICAL SET - 3:
[03] Write a C program to find out the Maximum and Minimum number from
given 10 numbers
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
    max = marks[1];
    min = marks[1];
    while (i <= 10)
    {
        if (max < marks[i])
        {
            max = marks[i];
        }
        if (min > marks[i])
        {
            min = marks[i];
        }

        i++;
    }
    printf("The Maximum NUmber is %d", max);
    printf("\nThe Minimum NUmber is %d", min);

    return 0;
}