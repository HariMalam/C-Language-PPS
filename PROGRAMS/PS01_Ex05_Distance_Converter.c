/*
PRACTICAL SET - 1:
[05] Write a C Program to enter a distance in to kilometre and convert it into meter, feet,
inches and centimetre.
*/

#include <stdio.h>

int main()
{
    float k, m, f, i, c;

    printf("Enter The Value Of Kilometres: ");
    scanf("%f", &k);

    m = 1000 * k;
    f = 3280.84 * k;
    i = 39370.0787402 * k;
    c = 100000 * k;

    printf("\n%f Kilometer is equal to %f metres,", k, m);
    printf("\n%f Kilometer is equal to %f feets,", k, f);
    printf("\n%f Kilometer is equal to %f inches,", k, i);
    printf("\n%f Kilometer is equal to %f centimetres.", k, c);

    return 0;
}