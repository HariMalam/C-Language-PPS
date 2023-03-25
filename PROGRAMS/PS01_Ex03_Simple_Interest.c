/*
PRACTICAL SET - 1:
[03] Write a Program To Calculate Simple Interest (i=(p*r*n)/100).
i = Simple intrest
p = Principal amount
r = Rate of interest
n = Number Of years
*/

#include <stdio.h>

int main()
{
    float i, p, r, n;

    printf("Enter The Principal Amount: ");
    scanf("%f", &p);

    printf("Enter The Rate Of Interest: ");
    scanf("%f", &r);

    printf("Enter The Number Of Years: ");
    scanf("%f", &n);

    i = p * r * n / 100;

    printf("\nThe Value Of Simple Interest is  %f ", i);

    return 0;
}
