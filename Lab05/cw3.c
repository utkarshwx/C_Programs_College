#include<stdio.h>

int main(){

    int r1,r2,r3,rs,voltage;
    float is,t,rp,ip;
    printf("Enter the value of r1, r2 and r3 respectively: ");
    scanf("%d %d %d",&r1,&r2,&r3);
    printf("Enter the value of voltage: ");
    scanf("%d",&voltage);

    rs = r1+r2+r3;
    is = (float)voltage/rs;
    printf("%f", is);
    t = (float)(1/r1) + (float)(1/r2) + (float)(1/r3); 
    //printf("%f",t);
    rp = 1/t;
    ip = voltage/rp;

    printf("\n The output of series resistance is %d ", rs);
    printf("\n The output of series current is %f \n The output of parallel resistance is %f \n The output of parallel current is %f",is,rp,ip);
    return 0;
}