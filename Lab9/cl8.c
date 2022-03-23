#include<stdio.h>

int main(){

    int n,i,s=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    while (n!=0)
    {
        int d=n%10;
        s+=d;
        n/=10;
    }
    printf("%d",s);
    return 0;
}