#include<stdio.h>

float product(float i,float in){
    float p=i*in;
    return p;
}

int main(){

    float i,in;
    printf("Enter two decimal numbers of which we have to find product: ");
    scanf("%f %f",&i,&in);
    float k =product(i, in);
    printf("product: %f",k);
    return 0;
}