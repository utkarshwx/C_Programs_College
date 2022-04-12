#include<stdio.h>
#define g 9.8

int main(){

    int u,t=0;
    float v,s;
    printf("Enter the initial velocity");
    scanf("%d",&u);
    t++;
    v = u+g*t;
    s = u*t + (g*t*t)/2;
    printf("final velocity= %f\n the distance covered= %f after %d secs\n",v,s,t);
    t++;
    v = u+g*t;
    s = u*t + (g*t*t)/2;
    printf("final velocity= %f\n the distance covered= %f after %d secs\n",v,s,t);
    t++;
    v = u+g*t;
    s = u*t + (g*t*t)/2;
    printf("final velocity= %f\n the distance covered= %f after %d secs\n",v,s,t);
    t++;
    v = u+g*t;
    s = u*t + (g*t*t)/2;
    printf("final velocity= %f\n the distance covered= %f after %d secs\n",v,s,t);
    t++;
    v = u+g*t;
    s = u*t + (g*t*t)/2;
    printf("final velocity= %f\n the distance covered= %f after %d secs\n",v,s,t);
    printf("");
    return 0;
}