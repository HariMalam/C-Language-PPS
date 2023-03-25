/*
PRACTICAL SET - 6:
[01] Write a C program to read and store the roll no and marks of 20 students
using array.
*/

#include <stdio.h>

int main()
{
    int roll[20], marks[20], i = 1;

    while (i <= 20)
    {
        printf("\n(%d)", i);
        printf("Enter Your Roll Number: ");
        scanf("%d", &roll[i]);
        printf("\t Enter Your Marks: ");
        scanf("%d", &marks[i]);
        i++;
    }
    i = 1;
    printf("\nRoll No.        Marks \n");
    while (i <= 20)
    {
        printf("%d\t\t%d\n", roll[i], marks[i]);
        i++;
    }

    return 0;
}