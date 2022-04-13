#include<stdio.h>

int main(){

    int n[2][2],a[2][2];
    int i,j,p=0;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Enter the number: ");
            scanf("%d",&n[i][j]);
        }
    }

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            p=n[i][j]*n[j][i];
            printf("%d",p);
        }

    }


    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}