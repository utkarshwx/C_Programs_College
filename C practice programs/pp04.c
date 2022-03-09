#include<stdio.h>

int main(){
    float t;
    printf("Enter the temperature in celcius\n");
    scanf("%f",&t);
    printf("the temperature in farenheit is: %.3f",((t*9)/5)+32);
    return 0;
}