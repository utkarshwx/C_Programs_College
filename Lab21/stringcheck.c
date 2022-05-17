#include<stdio.h>
#include<string.h>

int main(){

    char str[100],find[100];
    int i=0, f=-1;

    printf("Enter a string: ");
    gets(str);

    printf("enter the string to be found out: ");
    gets(find);
    
    while(str[i]){
        if(str[i]==find[i]){
            printf("found");
            return 0;
        }
    }
    printf("didn't found %s",str);
    return 0;
}