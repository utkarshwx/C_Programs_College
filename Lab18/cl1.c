#include<stdio.h>

void swapbyRef(int *x, int *y){
    int t;
    t = *x;
    *x = *y;
    *y = t;
    printf("x=%d y=%d",*x,*y);
}
int main(){

    int a =10, b=20;
    swapbyRef(&a, &b);
    return 0;
}