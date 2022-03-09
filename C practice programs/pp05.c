#include<stdio.h>

int main(){

    float p,t,r;
    printf("Enter the principal, time and rate respectively");
    scanf("%f",&p);
    scanf("%f",&t);
    scanf("%f",&r);
    printf("Simple interest of the given data is %f",(p*r*t)/100);
    return 0;
}