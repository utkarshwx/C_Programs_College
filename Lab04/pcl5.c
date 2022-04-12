#include<stdio.h>
#define g 10+1
int main(){
    int u,t,a;
    printf("Enter the value of u, t and a");
    scanf("%d\n%d\n%d",&u,&t,&a);

    printf("the value of v=%d\n",(u+g*t));
    printf("the value of S=%d",(u*t)+((1/2)*a*t*t));
    return 0;
}