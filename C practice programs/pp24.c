#include<stdio.h>

int main(){

    float t;
    printf("Enter the temperature in centigrade\n");
    scanf("%f",&t);
    printf("The temperature in farenhite is %f F",(t* 9/5) + 32);
    return 0;
}