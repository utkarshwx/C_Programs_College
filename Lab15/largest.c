#include<stdio.h>

int main(){

    int n[5][5];
    int i,j,max=-1;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("Enter the number: ");
            scanf("%d",&n[i][j]);
            if(max<n[i][j]){
                max = n[i][j];
            }
        }
    }
    printf("Lagest number in the matrix is: %d", max);
    
    return 0;
}