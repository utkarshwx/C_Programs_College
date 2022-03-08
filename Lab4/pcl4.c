//WAP to perform the addition of two integers and display the result.

#include<stdio.h>

int main(){

    int l,b;
    printf("Enter lenght breadth of the rectangle");
    scanf("%d %d",&l,&b);
    printf("area= %d",l*b);
    printf("perimeter= %d",(2*(l+b)));
    return 0;
}