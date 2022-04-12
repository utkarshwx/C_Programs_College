#include<stdio.h>

int main(){

    int p,c,m,e,b,per;
    printf("Enter the marks of five subjects: ");
    scanf("%d %d %d %d %d",&p,&c,&m,&e,&p);
    per = (int)(p+c+m+e+b)/5;

    if(per >= 60) printf("First division");
    else if(per>=50 && per<60) printf("Second division");
    else if(per>=40 && per<50) printf("Third division");
    else printf("Fail");

    return 0;
}