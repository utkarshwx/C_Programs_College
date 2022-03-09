#include<stdio.h>

int main(){

    float t;
    printf("Enter the temperature in  fareheit\n");
    scanf("%f",&t);
    printf("the temperature in centigrade is %f C",(t-32) * 5/9);
    return 0;
}