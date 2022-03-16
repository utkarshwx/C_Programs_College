#include<stdio.h>

int main(){

    int a,b,c,d,e,max;
    printf("Enter five numbers: ");
    scanf("%d%d%d",&a,&b,&c,&d,&e);
    max = a;
    if(max <b) max = b;
    if(max <c) max = c;
    if(max <d) max = d;
    if(max <e) max = e;

    printf("Largest number among five number: %d", max);
    return 0;
}