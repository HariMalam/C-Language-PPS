/*
PRACTICAL SET - 3:
[02] Write a C program to read no 1 to 7 and print relatively day
Sunday to Saturday.
*/

#include <stdio.h>

int main()
{
    int num;

    printf("Enter The Number Of Day (1 to 7) : ");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        printf("Sunday");
        break;
    case 2:
        printf("Monday");
        break;
    case 3:
        printf("Tuesday");
        break;
    case 4:
        printf("Wednesday");
        break;
    case 5:
        printf("Thursday");
        break;
    case 6:
        printf("Friday");
        break;
    case 7:
        printf("Saturday");
        break;
    default:
        printf("Please Enter Day Number Between 1 to 7");
    }
    return 0;
}