#include <stdio.h>

int main()
{
    char str[50];
    int i;
    printf("Enter String : ");
    scanf("%[^\n]s", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }
    printf("\nUpper Case String = %s", str);
    return 0;
}