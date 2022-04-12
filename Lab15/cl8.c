#include<stdio.h>

int main(){

    int n[3][3],a[3][3];
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter the number: ");
            scanf("%d",&n[i][j]);
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            a[i][j]= n[3-1-i][3-1-j];
        }
    }

    printf("Front order and its reverse order matrix is: \n");

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",n[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    
    
    return 0;
}