#include<stdio.h>

int main(){

    int num =1,n=5;
    char ch ='A';
    for(int i =1; i<=5;i++){
        for (int h = 0; h < n-i; h++)
        {
            printf(" ");
        
        }
        if(i%2!=0){
            for (int k = 0; k <i; k++)
            {
                printf("%d ",num++);
            }}
         else {
             for (int j = 0; j <i; j++)
             {
                 printf("%c ",ch++);                       
            }
         }
        printf("\n");
    }


    // printf("    1\n");
    // printf("   A B\n");
    // printf("  2 3 4\n");
    // printf(" C D E F\n");
    // printf("5 6 7 8 9\n");
    return 0;
}