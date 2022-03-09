#include<stdio.h>

int main(){
    int i=1,n;
    printf("Enter the number for multiplication number");
    scanf("\n%d",&n);
    for (i=25;i>0;i--){
        printf("%d*%d=%d\n",n,i,i*n);
    }
    return 0;
}