#include<stdio.h>

int main(){

    int a[10]={5,9,1,7,2,0,3,4,6,8};

    printf("%p\n",&a);
    printf("%p\n",(&a));
    printf("%p\n",*a);
    printf("%p\n",*(a+1));
    printf("%p\n",*(&a));
    printf("%p\n",*(&a+1));
    return 0;
}