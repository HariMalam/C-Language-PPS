/*
PRACTICAL SET - 4:
[02] Write a C program to find the sum and average of different numbers which are accepted by user as many as user wants
*/
#include <stdio.h>

int main()
{
    float num, a, sum = 0, avg;
    int i;

    printf("Enter How Many Numbers You Want To Enter: ");
    scanf("%f", &num);

    for (i = 1; i <= num; i++)
    {
        printf("Enter No.%d: ", i);
        scanf("%f", &a);
        sum = sum + a;
    }

    avg = sum / num;

    printf("The Sum Of Given Numbers is %f\n", sum);
    printf("The Average Of Given Numbers is %f", avg);

    return 0;
}