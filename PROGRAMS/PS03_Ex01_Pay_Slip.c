/*
PRACTICAL SET - 3:
[01] Write a c program to prepare pay slip using following data.
Da = 10% of basic, Hra = 7.50% of basic, Ma = 300,
Pf = 12.50% of basic, Gross = basic + Da + Hra + Ma, Nt = Gross – Pf.
*/

#include <stdio.h>

int main()
{
    float basic, Da, Hra, Ma, Pf, Gross, Nt;

    printf("Enter The Value Of Basic Salary : ");
    scanf("%f", &basic);

    Da = 0.10 * basic;
    Hra = 0.075 * basic;
    Ma = 300;
    Pf = 0.125 * basic;
    Gross = basic + Da + Hra + Ma;
    Nt = Gross - Pf;

    printf("\nBasic : %f", basic);
    printf("\nDa : %f", Da);
    printf("\nHra : %f", Hra);
    printf("\nMa : %f", Ma);
    printf("\nPf : %f", Pf);
    printf("\n\nGross : %f", Gross);
    printf("\nNt : %f", Nt);

    return 0;
}