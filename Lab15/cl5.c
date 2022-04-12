#include<stdio.h>

int main(){

    int n[3][4];
    int i,j,s;
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("Enter the number: ");
            scanf("%d",&n[i][j]);
        }
        
    }

    printf("Enter the scalar value which should be multiplied in the matrix: ");
    scanf("%d",&s);

    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("%d ",(s*n[i][j]));
        }
        printf("\n");
    }
    
    return 0;
}