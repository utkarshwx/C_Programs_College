#include<stdio.h>

int main(){

    double r;
    printf("Enter the radius to calculate area of circle: ");
    scanf("%lf",&r);
    printf("Area of the circle: %lf\n",3.14*r*r);
    double h,ra;
    printf("Enter the radius and height to calculate volume of a cylinder\n");
    scanf("%lf",&ra);
    scanf("%lf",&h);
    printf("Volume of the cylinder: %lf",3.14*ra*ra*h);
    return 0;
}