#include<stdio.h>

int main(){

    int a[4][3]={{1,2,3},{3,2,1},{4,5,6},{6,5,4}};

    printf("%d\n",&a);
    printf("%u\n",(&a));
    printf("%u\n",*a);
    printf("%u\n",*(*a+1));
    printf("%d\n",*&a);
    printf("");
    return 0;
}