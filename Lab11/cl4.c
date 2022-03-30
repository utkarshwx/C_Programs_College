#include<stdio.h>
void display5(int n,char ch){
    int i;
    for (i=0;i<n;i++){
        printf("%c",ch);
    }
    printf("\n");

}

int main(){
    int a=10,b=5;
    display5(20,5);
    printf("yahoo");
    display5('a',48);
    printf("hello");
    display5('5','Y');
    printf("google");
    return 0;
}