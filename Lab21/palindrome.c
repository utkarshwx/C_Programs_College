#include<stdio.h>
#include<string.h>

int main(){

    char str[100];
    int i=0, j=0, count =0;

    printf("Enter a string: ");
    gets(str);

    for(count=0; str[count]; ++count);

    while(str[i]){
        if (str[i] == str[count-i]){
            printf("Not a palindrome");
            return 0;
        }
        i++;
    }
    printf("palindrome %s",str);
    return 0;
}