#include<stdio.h>

int main(){

    int n[4][4];
    int i,j;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("Enter the number: ");
            scanf("%d",&n[i][j]);
        }
    }
    
    int a[4][4];

    int sum;
    for(int i=0;i<4;i++){
        for(int k=0;k<4;k++){
            sum=0;
        for(int j=0;j<4;j++){
            sum=sum+n[i][j]*n[j][k];
        } 
        a[i][k]=sum;
        }
    }

        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
    
}