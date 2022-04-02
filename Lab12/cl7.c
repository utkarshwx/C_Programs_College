#include<stdio.h>

float average(int a, int b, int c){
    return (a+b+c)/3.0;
}
float percentage(int a, int b, int c){     //this function not needed
    return ((a+b+c)*100.0)/300.0;
}
int main(){

    int a,b,c;
    printf("Enter the number of three subjects respectively");
    scanf("%d %d %d",&a,&b,&c);
    printf("the average is %f\n",average(a,b,c));
    printf("the percentage is %.3f",(a,b,c));
    
    return 0;
}