#include<stdio.h>
#include<string.h>

int main(){

    char str[100],find[100];
    int i=0, f=-1;

    printf("Enter a string: ");
    gets(str);

    printf("enter the string to be found out: ");
    gets(find);
    
    for(i;str[i];i++){
        for (int j = 0; find[j] ; j++)
        {
            if(str[i+j]== find[i]){