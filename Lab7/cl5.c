#include<stdio.h>

int main(){

    float s,hra,da,gs;
    printf("Enter the salary(in dollar):");
    scanf("%f",&s);

    if(s<1500){
        hra = (s*10)/100;
        da  = (s*10)/100;
    }
    else {
        hra = 500;
        da = (s*50)/100;
    }

    gs = s+hra+da;
    printf("the gross salary: %f",gs);
    return 0;
}