#include<stdio.h>
#include<string.h>

int main(){

    int i;
    char src[100],dst[100];
    printf("Enter the string: ");
    scanf("%[^\n]s",src);

    for(i=0; src[i]; ++i);
        
    printf("The destination:  %d",i);
    return 0;
}