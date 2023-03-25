/*
PRACTICAL SET - 1:
[04] Write a C Program to Interchange Two Numbers.
*/

#include <stdio.h>

int main()
{
  int a, b, temp;

  printf("Enter The Value Of num1: ");
  scanf("%d", &a);

  printf("Enter The Value Of num2: ");
  scanf("%d", &b);

  printf("\nBefore Interchange \n  num1 = %d \n  num2 = %d", a, b);

  temp = a;
  a = b;
  b = temp;
  
  /*Other Methods
  (1)a=b*a;
     b=a/b;
     a=a/b;
  (2)a=a+b;
     b=a-b;
     a=a-b;
  */
  printf("\nAfter Interchange \n  num1 = %d \n  num2 = %d", a, b);

  return 0;
}
