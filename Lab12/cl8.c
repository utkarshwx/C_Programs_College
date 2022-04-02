#include<stdio.h>

void primefactors(int n){
    printf("prime factors are:");
    for(int i=2;i<=n;i++){
        while(n%i==0){
            n/=i;
            printf("%d, ",i);
        }
    }
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    primefactors(n);
    return 0;
}