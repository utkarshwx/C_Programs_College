#include<stdio.h>

int main(){
    int a,b,c,d;
    printf("Enter four numbers");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    if(a>b&& a>c&& a>d){
        printf("%d is the greatest number",a);
    }
    if(b>a&& b>c&& b>d){
        printf("%d is the greatest number",b);
    }
    if(c>a&& c>b&& c>d){
        printf("%d is the greatest number",c);
    }
    if(d>a&& d>b&& d>c){
        printf("%d is the greatest number",d);
    }
    
    return 0;
}