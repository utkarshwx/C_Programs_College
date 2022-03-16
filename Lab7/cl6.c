#include<stdio.h>

int main(){

    int x1,y1,x2,y2,x3,y3,x4,y4;
    float m1,m2,m3;
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
    m1=(float)(y2-y1)/(float)(x2-x1);
    m2=(float)(y3-y2)/(float)(x3-x2);
    m3=(float)(y3-y1)/(float)(x3-x1);

    if(m1==m2) printf("It isn't a triangle");

    else printf("It is a triangle");

    return 0;
}