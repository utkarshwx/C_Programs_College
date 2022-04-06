#include<stdio.h>

int main(){
    int n[10];
    for(int i=0;i<10;i++){

    printf("Enter the %d number: ",i+1);    
    scanf("%d",&n[i]);
    }

    
    for(int i=0;i<10;i++){

    printf("%d ",n[i]);
    }
    return 0;
}