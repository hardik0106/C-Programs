#include<stdio.h>
int main(){
    #define pie 3.14
    float radius,area;
    printf("enter the radius of circle :");
    scanf("%f",&radius);
    area=pie*radius*radius;
    printf("area of circle is %f :",area);
    
}