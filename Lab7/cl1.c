#include<stdio.h>

int main(){

    int m, a, tm;
    printf("Enter the marks and age respectively:");
    scanf("%d%d",&m,&a);
    tm = m+40;
    if (a<50){
        printf("Total marks : %d",tm+20);
    }
    printf("Total marks : %d",tm);
    return 0;
}