#include<stdio.h>

int main(){

    int n[4][5];
    int i,j;
    for(i=0;i<4;i++){
        for(j=0;j<5;j++){
            printf("Enter the number: ");
            scanf("%d",&n[i][j]);
        }
    }
    for(i=0;i<4;i++){
        for(j=0;j<5;j++){
            printf("%d ",n[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}