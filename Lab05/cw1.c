#include<stdio.h>

int main(){

    float x1,y1,x2,y2,m;
    printf("Enter the values of point 1\nx1:");
    scanf("%f",&x1);
    printf("y1:");
    scanf("%f",&y1);
    printf("\nEnter the values of point 2\nx2:");
    scanf("%f",&x2);
    printf("y2:");
    scanf("%f",&y2);
    m=(y2-y1)/(x2-x1);
    printf("\nThe slope of the given points is %.4f",m);
    return 0;
}