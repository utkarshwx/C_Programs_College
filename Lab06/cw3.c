#include<stdio.h>

int main(){
    int h,p,b;
    printf("Enter the hypothesis ");
    scanf("%d",&h);
    printf("Enter the perpendicular ");
    scanf("%d",&p);
    printf("Enter the base ");
    scanf("%d",&b);
    printf("\nDo they satisfy triangle property? 1 for yes, 0 for no:%d",(h*h)==((p*p)+(b*b)));
    return 0;
}