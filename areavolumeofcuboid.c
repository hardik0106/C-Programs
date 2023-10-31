#include<stdio.h>
int main(){
    int length, breadth, height, area, volume;
    printf("enter the value length :");
    scanf("%d",&length);
    printf("enter the value of breadth :");
    scanf("%d",&breadth);
    printf("enter the value of height :");
    scanf("%d",&height);
    area=2*(length*breadth+breadth*height+height*length);
    printf("area of cuboid is %d \n :",area);
    volume=length*breadth*height;
    printf("volume of cuboid is %d\n :",volume);
    return 0;

}