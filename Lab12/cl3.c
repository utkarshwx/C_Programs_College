#include<stdio.h>

int power(int a, int b){
    int p=1;
    for(int i=0;i<b;i++){
        p*=a;
    }
    return p;
}
int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    printf("The power of the a is %d",power(a,b));
    return 0;
}