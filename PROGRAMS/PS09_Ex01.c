#include <stdio.h>

struct book
{
    int id;
    char name[20];
    float price;
};

int main()
{
    struct book b1;
    printf("Enter Book Id : ");
    scanf("%d", &b1.id);
    fflush(stdin);
    printf("Enter Book Name : ");
    scanf("%[^\n]s", b1.name);
    printf("Enter Book Price : ");
    scanf("%f", &b1.price);

    printf("\nBook Id    = %d", b1.id);
    printf("\nBook Name  = %s", b1.name);
    printf("\nBook Price = %.2f", b1.price);
    return 0;
}
