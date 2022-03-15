#include<stdio.h>

int main(){

    int x1,y1,x2,y2,x3,y3,x4,y4;
    printf("Enter the values of point 1\nx1:");
    scanf("%d",&x1);
    printf("y1:");
    scanf("%d",&y1);
    printf("\nEnter the values of point 2\nx2:");
    scanf("%d",&x2);
    printf("y2:");
    scanf("%d",&y2);
    printf("\nEnter the values of point 3\nx3:");
    scanf("%d",&x3);
    printf("y3:");
    scanf("%d",&y3);
    printf("\nEnter the values of point 4\nx4:");
    scanf("%d",&x4);
    printf("y4:");
    scanf("%d",&y4);
    float m1=(y2-y1)/(x2-x1);
    float m2=(y4-y3)/(x4-x3);
    //float s=(m1*m2)*(-1);
    printf("\nThe slope of the given points is %f",((m1*m2)*(-1)));
    return 0;
}