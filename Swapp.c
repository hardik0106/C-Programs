#include<stdio.h>
void main(){
    int num1,num2,temp;

    printf("enter the value of first number :");
    scanf("%d",&num1);
    printf("enter the value of second number :");
    scanf("%d",&num2);

    temp=num1;
    num1=num2;
    num2=temp;

    printf("after swapping :");
    printf("first number is %d :",num1);
    printf("second number is %d :",num2);
    // return 0;
}