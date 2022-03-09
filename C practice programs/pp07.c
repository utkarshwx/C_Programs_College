#include<stdio.h>

int main(){
    int p,c,m;

    printf("enter physics, chemistry and maths respectively");
    scanf("%d",&p);
    scanf("%d",&c);
    scanf("%d",&m);

    float total = (p+c+m)/3;
    if((total<40) || p<33 || c<33 || m<33){
        printf("you have failed the exam %f\n",total);
    }else{
        printf("You have passed %.3f\n",total);
    }
    
    return 0;
}