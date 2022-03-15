#include<stdio.h>
#include<math.h>
#define pi 3.14
#define g 9.8

int main(){

    float t;
    float l = 0;
    printf("length(m)        Time Period(s)\n");

    l += 10;
    t = 2*pi*sqrt(l/g);
    printf("%f\t %f\n",l,t);

    l += 10;
    t = 2*pi*sqrt(l/g);
    printf("%f\t %f\n",l,t);

    l += 10;
    t = 2*pi*sqrt(l/g);
    printf("%f\t %f\n",l,t);

    l += 10;
    t = 2*pi*sqrt(l/g);
    printf("%f\t %f\n",l,t);

    l += 10;
    t = 2*pi*sqrt(l/g);
    printf("%f\t %f\n",l,t);

    printf("Computation Completed... ");
    return 0;
}