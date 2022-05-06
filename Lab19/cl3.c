#include<stdio.h>

int main(){
    int a[4][5];
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++)
        a[i][j]= j;
    }

    int (*p)[5];
    p = a;
    for(int i =0;i<4;i++){
        for(int j=0;j<5;j++)
        printf("%d\t",p[i][j]);
    printf("\n");
    }
    printf("");
    return 0;
}