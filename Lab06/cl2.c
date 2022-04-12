#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter three sides of the triangle:");
    scanf("%d%d%d",&a,&b,&c);
    printf("\nDo they satisfy triangle property");
    printf("\n1 for yes, 0 for no: %d",(((a+b)>c)&&((b+c)>a)&&((c+a)>b))*(a+b+c));
    return 0;
}