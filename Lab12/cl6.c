#include<stdio.h>
#include<math.h>
int sum(int a,int b,int c,int d,int e){
    int s= a+b + c +d +e;
    return s;
}
float average(int av){
    float a=av/5.0;
    return a;
}
float dev(float sd, int a,int b,int c,int d,int e){
    return sqrt( (a-sd)+ (b-sd) + (c-sd) + (d-sd) + (e-sd))/5.0;
}
int main(){

    int n,a,b,c,d,e;
    float u;
    printf("enter 5 numbers");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    int av=sum(a,b,c,d,e);
    printf("Sum is %d",av);
    float sd=average(av);
    printf("Average is %f",sd);
    printf("Deviation %f", dev(sd, a,b,c,d,e));
    return 0;
}