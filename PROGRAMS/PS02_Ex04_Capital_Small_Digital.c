/*
PRACTICAL SET - 2:
[04] Write a C program to check whether the entered character is capital, small letter, digit or
any special character. (asciitable.com)
*/

#include<stdio.h>

int main(){
    char ch;
    
    printf("Enter Character : ");
    scanf("%c",&ch);
    
    // 65-90 = A-Z ASCII Values
    if(ch>64 && ch<91){
        printf("%c is Capital Character",ch);
    }

    // 97-122 = a-z ASCII Values 
    else if(ch>=97 && ch<=122){
        printf("%c is Small Character",ch);
    }

    // 48-57 = 0-9 ASCII Values
    else if(ch>47 && ch<58){
        printf("%c is Digital Character",ch);
    }

    else{
        printf("%c is Special Character",ch);
    }
    
    return 0;
}