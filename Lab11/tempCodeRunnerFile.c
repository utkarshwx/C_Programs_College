#include<stdio.h>
void display3(int n){
    int i;
    for (i=0;i<n;i++){
        printf("=");
    }
    printf("\n");
    return 0;
}

int main(){
    int a=10,b=5;
    display3(20);
    printf("yahoo");
    display3(a);
    printf("hello");
    display3(a+b+2);
    printf("google");
    return 0;
}