#include<stdio.h>

int main(){
    int a,b;
    printf("enter two integer");
    scanf("%d %d",&a,&b);
    if(a%2==0){
        printf("even",a);
    }
    else printf("odd",a);
                               //even or odd , grade system of kiit
    return 0;
}