#include<stdio.h>
#include<math.h>
#define pi 3.14
#define g 9.8

int main(){

    float t=0.0;
    float l=0;
    printf("Length(m)        Time Period(s)\n");

    for (l=10.0;l<=50;l=l+10.0){
        t = 2*pi*sqrt(l/g);
        printf("%f\t %f\n",l,t);
    }

    printf("\nComputation Completed... \n");
    return 0;
}