#include<stdio.h>

void leap(int n){
    if((n%4==0) && ((n%400==0) || (n%100!=0))) printf("Is leap year");
    else printf("Isn't leap year");  
}
int main(){

    int y;
    printf("Enter the year: ");
    scanf("%d",&y);
    leap(y);
    return 0;
}