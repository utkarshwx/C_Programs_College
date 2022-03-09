#include<stdio.h>

int main(){

    char ch;
    scanf(" %c",&ch);
    if(ch>96 && ch<=122)
    printf("Its a lowercase");
    else printf(" its not a lower case");
    return 0;
}