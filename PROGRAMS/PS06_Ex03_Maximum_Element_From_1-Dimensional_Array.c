/*
PRACTICAL SET - 6:
[03] Write a C program to find a maximum element from 1-Dimensional array.
*/

#include <stdio.h>

int main()
{
    int a[100], i, n, max;
    printf("\nHow many numbers you want to enter [Max 100] : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\n Enter Value in Array at Position [%d] :", i + 1);
        scanf("%d", &a[i]);

        if (i == 0)
        {
            max = a[i];
        }
        else
        {
            if (max < a[i])
            {
                max = a[i];
            }
        }
    }
    printf("\n Maximum Value in Array is %d", max);

    return 0;
}