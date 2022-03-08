//introduction of macros 

// wap to input radius of the circle from the user and print area
#include<stdio.h>
#define pi 3.14
int main(){
    float r;
    printf("enter the radius of the circle\n");
    scanf("%f\n",&r);
    printf("The area of the circle is %f",(pi*r*r));
    printf("The perimeter of the circle is %f",(2*pi*r));
    return 0;
}