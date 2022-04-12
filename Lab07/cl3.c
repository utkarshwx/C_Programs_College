#include<stdio.h>

int main(){

    int p,q,r,s;
    printf("Enter the values of resistance");
    scanf("%d%d%d%d",&p,&q,&r,&s);

    if(p*s==r*q){
        printf("Resistance are equivalent");
        return 0;
    }
    printf("Resistance isn't equivalent");
    s=(int)r*q/p;
    printf("Resistance value of s: %d",s);
    return 0;
}