#include<stdio.h>
#include<string.h>

int main(){

    int i;
    char src1[100],src2[100];
    printf("Enter the string1: ");
    //scanf("%[^\n]s",&src1);
    gets(src1);
    printf("Enter the string2: ");
    //scanf("%[^\n]s",&src2);
    gets(src2);

    for(i=0;src1[i];i++);

    for(int j=0;src2[j];j++){  
        
        src1[i]=src2[j];  
        i++;  
    }  
    src1[i]='\0';   
    
    
    printf("The destination:  %s",src1);
    return 0;
}