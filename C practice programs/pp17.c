#include<stdio.h>

int main(){

    int i=1,n,f=1;
    scanf("%d/n",&n);
    for (i = 1; i<=n;i++){
        f*=i;
    }
    printf("%d",f);

    int ii=1,fi=1;
    while (ii<=n)
    {
        fi*=ii;
        ii++;
    }
    printf("%d",fi);
    return 0;
}