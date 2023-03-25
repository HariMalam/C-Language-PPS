/*
PRACTICAL SET - 2:
[3] Write a Program to read three numbers from keybord and find out maximum
out of these three. (nested if else)
*/

#include <stdio.h>

int main()
{
    int num1, num2, num3;

    printf("Enter the First Number: ");
    scanf("%d", &num1);
    printf("Enter the Second Number: ");
    scanf("%d", &num2);
    printf("Enter the Third Number: ");
    scanf("%d", &num3);

    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("The Maximum Out Of These Three Is %d", num1);
        }
        else
        {
            printf("The Maximum Out Of These Three Is %d", num3);
        }
    }
    else
    {
        if (num2 > num3)
        {
            printf("The Maximum Out Of These Three Is %d", num2);
        }
        else
        {
            printf("The Maximum Out Of These Three Is %d", num3);
        }
    }
    
    /*
    Second Method:
    if (num1 > num2 && num1 > num3)
    {
        printf("The Maximum Out Of These Three Is %d", num1);
    }
    else if (num2 > num1 && num2 > num3)
    {
        printf("The Maximum Out Of These Three Is %d", num2);
    }
    else if (num3 > num2 && num3 > num1)
    {
        printf("The Maximum Out Of These Three Is %d", num3);
    }
    else
    {
        printf("Enter Valid Numbers! ");
    }
    */
    return 0;
}