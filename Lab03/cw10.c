/*int a=10,b=5;
int p;
p= b++ + --a;

p=? a=? b=?*/

#include<stdio.h>

int main(){

    int a=10,b=5,p;
    p=b+++--a;
    printf("answer = %d\n",a);
    printf("answer = %d\n",b);
    printf("answer = %d\n",p);
    return 0;
}