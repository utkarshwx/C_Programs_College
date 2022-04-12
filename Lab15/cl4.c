#include<stdio.h>

int main(){

    int n[5][5];
    int i,j,max=-1,p=0,ne=0,e=0,o=0;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("Enter the number: ");
            scanf("%d",&n[i][j]);
            n[i][j]>0?p++:ne++;
            n[i][j]%2==0?e++:o++;
        }

    }
    printf("Total numbers of even number are: %d \n",e);
    printf("Total numbers of odd number are: %d \n",o);
    printf("Total numbers of positive number are: %d \n",p);
    printf("Total numbers of negative number are: %d \n",ne);
    
    return 0;
}