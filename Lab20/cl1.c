#include<stdio.h>

int main(){

    int i;
    char src[100],dst[100];
    printf("Enter the string: ");
    scanf("%[^\n]s",src);

    for(i=0; src[i]; i++)
        dst[i] = src[i];
    dst[i] = '\0';
    printf("The destination:  %s",dst);
    return 0;
}