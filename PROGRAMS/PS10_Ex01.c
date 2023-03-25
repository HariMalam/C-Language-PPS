#include <stdio.h>

int main() 
{
 int i=15;
 int *p;
 p=&i;
 printf("\nAddress of Variable i = %u",p);
 return 0;
}