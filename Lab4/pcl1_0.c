//macros practice

#include<stdio.h>
#define sqr(a) a*a
#define inc(b) b+1

int main(){
    int p =sqr(3-1);
    int q =inc(2)*sqr(4);
    int r =inc(4+1)*sqr(2+2);
    printf("p=%d \nq=%d \nr=%d",p,q,r);
    return 0;
}