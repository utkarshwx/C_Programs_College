#include<stdio.h>

int main(){

    int n[4][4],a[4][4];
    int i,j;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("Enter the number for 1st matrix: ");
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("Enter the number for 2nd matrix: ");
            scanf("%d",&n[i][j]);
        }
    }
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d ",(a[i][j]+n[i][j]));
        }
        printf("\n");
    }
    
    return 0;
}