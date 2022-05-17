#include<stdio.h>
#include<string.h>

int main(){

    char str[100];
    int i=0, count =0,flag=0;

    printf("Enter a string: ");
    gets(str);

    for(count=0; str[count]; ++count);

    while(str[i]){
        if (str[i] != str[count-i-1]){
            flag =1;
            break;
        }
        
        i++;
    }
    if( flag == 0) printf("palindrome %s",str);
    else printf("Not a palindrome");
    return 0;
}