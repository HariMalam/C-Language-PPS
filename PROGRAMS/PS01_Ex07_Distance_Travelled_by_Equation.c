/*
PRACTICAL SET - 1:
[07] Write a C program to find out distance travelled by the equation d = ut + at^2
*/

#include <stdio.h>

int main()
{
    float u, a, d, t;

    printf("Enter The Value of Acceleration(m/s^2) : ");
    scanf("%f", &a);

    printf("Enter The Value of Initial velocity(m/s) : ");
    scanf("%f", &u);

    printf("Enter The Value of Time(s) : ");
    scanf("%f", &t);

    d = (u * t) + (a * t * t);

    printf("\nThe Distance is %f m", d);

    return 0;
}
