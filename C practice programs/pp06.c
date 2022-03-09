#include<stdio.h>

int main(){

    int g;
    scanf("%d",&g);
    if(g>=90 && g<=100) return printf("A");

    if(g>=80 && g<90) return printf("B");

    if(g>=70 && g<80) return printf("C");

    if(g>=60 && g<70) return printf("D");

    if(g>=50 && g<60) return printf("E");

    printf("");
    return 0;
}