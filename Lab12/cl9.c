#include<stdio.h>

void area(){
    float area;
    float rad;

    printf("Enter the radius");
    scanf("%f",&rad);
    area = 3.14 *rad *rad;
    printf("Area of the circle is= %f",area);
}
int main(){

    area();
    return 0;
}