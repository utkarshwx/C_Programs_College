#include<stdio.h>

int main(){

    int a;
    printf("Enter the accelaration of the vechile");
    scanf("%d",&a);
    if(a==0) printf("The velocity is constant");
    
    else if(a>0) printf("The vechile is accelerating");
    
    else printf("the vechile is decelerating");
    
    return 0;
}