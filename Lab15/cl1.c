#include<stdio.h>

int main(){

    int n[4][3];
    int i,j;
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            printf("Enter the number: ");
            scanf("%d",&n[i][j]);
        }
    }
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            printf("%d ",n[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}