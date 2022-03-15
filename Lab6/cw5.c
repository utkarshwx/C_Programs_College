#include<stdio.h>

int main(){

    float t=0.0,f;
    printf("Temp(C) \tTemp(F) \tTemp(K)\n");

    t+=20.0;
    f=(t*1.8)+32;

    printf("%f \t%f \t%f\n",t,f,t+273);

    t+=20.0;
    f=(t*1.8)+32;
    printf("%f \t%f \t%f\n",t,f,t+273);

    t+=20.0;
    f=(t*1.8)+32;
    printf("%f \t%f \t%f\n",t,f,t+273);

    t+=20.0;
    f=(t*1.8)+32;
    printf("%f \t%f \t%f\n",t,f,t+273);

    t+=20.0;
    f=(t*1.8)+32;
    printf("%f \t%f \t%f\n",t,f,t+273);

    printf("\nComputation completed...");
    return 0;
}