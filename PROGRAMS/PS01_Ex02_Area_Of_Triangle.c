/*
PRACTICAL SET - 1:
[2] Write a Program to Find Area Of Triangle (a=h*b*.5).
a = area
h = height
b = base
*/

#include <stdio.h>

int main()
{
  float a, h, b;

  printf("Enter the Value of Height Of Triangle: ");
  scanf("%f", &h);

  printf("Enter the Value of Base Of Triangle: ");
  scanf("%f", &b);

  a = h * b * 0.5;

  printf("\nThe Area Of Triangle is %f", a);

  return 0;
}
