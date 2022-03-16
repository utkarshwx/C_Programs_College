#include<stdio.h>
#define pi 3.14

int main(){

    float r;
    printf("Enter the radius of the circle");
    scanf("%f",&r);
    printf("Perimeter of the circle is %f",2*pi*r);
    printf("Area of the circle is %f",pi*(r*r));
    return 0;
}