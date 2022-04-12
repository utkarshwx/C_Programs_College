#include<stdio.h>

int main(){

    int n[10][2];
    int i,j,max=-1;
    for(i=0;i<10;i++){
        for(j=0;j<2;j++){
            printf("Enter the x,y cordinates : ");
            scanf("%d",&n[i][j]);
        }
    }
    printf("Lagest number in the matrix is: %d", max);
    
    return 0;
}