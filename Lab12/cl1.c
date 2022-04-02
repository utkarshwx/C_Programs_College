#include<stdio.h>

int fun(){

    char ch;
    printf("Enter the alphabet which has to be converted from lower case to upper case: ");
    scanf(" %c",&ch);
    if(ch>64 && ch<91)
        return ch;
    else return (ch-32);
}
int main(){
    int a;
    a = fun();
    printf("The converted alphabet is %c",a);
    return 0;
}