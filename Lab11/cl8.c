#include<stdio.h>

int sum(int i,int in){
    int s=i+in;
    return s;
}

int main(){

    int i,in;
    printf("Enter two numbers of which we have to find sum: ");
    scanf("%d %d",&i,&in);
    int k =sum(i, in);
    printf("addition= %d",k);
    return 0;
}