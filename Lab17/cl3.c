#include<stdio.h>

int main(){
    int a[8]={1,2,3,4,5,6,7,8};
    for(int i=0;i<8;i++){
    int *p=a+i;
    printf ("%d\n",p);
    }
    
    printf("\nelement %d\n",&a+1);
    return 0;
}