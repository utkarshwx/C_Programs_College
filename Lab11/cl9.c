#include<stdio.h>

int sum(int n){
    int s;
    while (n)
    {
        int d=n%10;
        s+=d;
        n/=10;
    }
    return s;
}

int main(){

    int n;
    printf("enter the number");
    scanf("%d",&n);
    int k= sum(n);
    printf("%d",k);
    return 0;
}