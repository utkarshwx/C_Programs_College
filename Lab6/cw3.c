#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter three sides of the triangle");
    scanf("%d%d%d",&a,&b,&c);
    int h= a>b&&a>c;
    return 0;
}