/*
PRACTICAL SET - 2:
[5] Write a program to read marks from keyboard and your program should display
equivalent grade according to following table(if else ladder)

Marks Grade
100 - 80 Distinction
79 - 60 First Class
59 - 40 Second Class
< 40 Fail
*/

#include <stdio.h>

int main()
{
    float marks;

    printf("Enter Your Marks: ");
    scanf("%f", &marks);

    if (marks >= 80 && marks <= 100)
    {
        printf("Your Grade is Distinction");
    }
    else if (marks >= 60 && marks < 80)
    {
        printf("Your Grade is First Class");
    }
    else if (marks >= 40 && marks < 60)
    {
        printf("Your Grade is Second Class");
    }
    else if (marks < 40)
    {
        printf("Your are Fail");
    }
    else
    {
        printf("Invalid Marks");
    }
    return 0;
}