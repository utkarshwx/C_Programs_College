#include<stdio.h>

int main(){

    int i=1,c=0, s;

    input:
    printf("Enter the score of the player number %d: ",i);
    scanf("%d",&s);
    if(s<0) goto input;

    if(s>=100) c++; //c+=s/100;

    i++;
    if(i<=11) goto input;

    printf("Total number of players made century: %d", c);
    return 0;
}