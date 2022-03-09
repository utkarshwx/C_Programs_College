#include<stdio.h>

int main(){
    int i,n;
        
    printf("Enter the number for which you need multiplication\n");
    scanf("%d",&n);
    for (i=1;i<=25;i++)
    {
        printf("%d*",i);
        printf("%d=",n);
        printf("%d\n",i*n);

    }

    return 0;
}