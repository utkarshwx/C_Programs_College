#include<stdio.h>

int main(){
    int a[4][5], b[4]={1,2,3,4};
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++)
        a[i][j]= j;
    }

    int (*pa)[5], *pb;

    pa=a;
    pb=b;

    for(int i =0;i<4;i++){
        for(int j=0;j<5;j++)
        pb[i]=pb[i]+pa[i][j];
    
    }
    printf("sum of the array:\n");
    for(int i=0;i<4;i++)
    printf("%d\n",pb[i]);
    
    return 0;
}