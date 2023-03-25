/*
PRACTICAL SET - 1:
[06] Write a program to compute Fahrenheit from centigrade. (f=1.8*c+32)
*/

#include <stdio.h>

int main()
{
    float c, f;

    printf("Enter the value of Temperature in Centigrade: ");
    scanf("%f", &c);

    f = 1.8 * c + 32;

    printf("\n%f Centigrade is equal to %f Fahrenheit.", c, f);

    return 0;
}