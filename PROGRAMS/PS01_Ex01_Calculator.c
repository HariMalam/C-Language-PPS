/*
PRACTICAL SET - 1:
[01] Write a program to that performs as calculator ( Adition, Multiplication, Division, Substraction).
*/

#include <stdio.h>
int main()
{

	float num1, num2;

	printf("Enter The First Number: ");
	scanf("%f", &num1);

	printf("Enter The Second Number: ");
	scanf("%f", &num2);

	printf("\n%f + %f = %f", num1, num2, num1 + num2);
	printf("\n%f - %f = %f", num1, num2, num1 - num2);
	printf("\n%f * %f = %f", num1, num2, num1 * num2);
	printf("\n%f / %f = %f", num1, num2, num1 / num2);

	return 0;
}
