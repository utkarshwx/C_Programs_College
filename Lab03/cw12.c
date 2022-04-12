/*-->int a=20,b=6;
int p,q;
p= --a - b;
p=?a=? b=?
q= --p + p;
p=?a=? b=? q=?*/


#include<stdio.h>

int main(){

    int a=20,b=6,p,q;
    p=--a-b;
    q=--p+p;
    printf("answer = %d",a);
    printf("answer = %d",b);
    printf("answer = %d",p);
    printf("answer = %d",q);
    return 0;
}