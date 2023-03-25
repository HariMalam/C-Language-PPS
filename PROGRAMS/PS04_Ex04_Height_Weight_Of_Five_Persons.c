/*
PRACTICAL SET - 4:
[04] Read five persons height and weight and count the number of person having height greater than 170 and weight less than 50.
*/
#include <stdio.h>

int main()
{
    int height[5], weight[5], i, a = 0;

    for (i = 1; i <= 5; i++)
    {
        printf("\nPerson [%d] :\n\t    Enter Your Height : ", i);
        scanf("%d", &height[i]);
        printf("\t    Enter Your Weight : ");
        scanf("%d", &weight[i]);
        if (height[i] > 170 && weight[i] < 50)
        {
            a++;
        }
    }
    printf("\n %d Persons Are Having Height Greater Than 170 And Weight Less Than 50", a);
    return 0;
}