/*
PRACTICAL SET - 4:
[3] Write a program to calculate average and total of 5 students for 3 subjects
(use nested for loops)
*/
#include <stdio.h>

int main()
{
    int sub[3], i, j, sum[5];

    for (i = 1; i <= 5; i++)
    {
        printf("\nStudent [%d] : \n", i);
        sum[i]=0;
    
        for (j = 1; j <= 3; j++)
        {
            
            printf("Marks Of Subject [%d] : ", j);
            scanf("%d", &sub[j]);
            sum[i] = sum[i] + sub[j];

            
        }
    }
    i = 1;
    while (i <= 5)
    {
        printf("\nStudent [%d] :", i);
        printf("\nTotal Marks is : %d", sum[i]);
        printf("\nAverage Of Total Marks is : %d", sum[i] / 3);
        i++;
    }

    return 0;
}