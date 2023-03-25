/*
PRACTICAL SET - 2:
[2] Write a C Program to read Marks of a student from keybord 
whether the student is pass or fail (using if else)
*/

#include<stdio.h>

int main(){
    int marks;

    printf("Enter Your Marks: ");
    scanf("%d",&marks);

    if(marks<33){
        printf("Your Marks is %d \nYou Are Fail",marks);
    }
    else if (marks<=33 && marks<=100){
        printf("Your Marks is %d \nYou Are Pass",marks);
    }
    else{
      printf("Invalid Marks");
    }
    return 0;
}