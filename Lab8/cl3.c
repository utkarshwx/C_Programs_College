#include<stdio.h>

int main(){

    int s,i=1,sum=0; 
    float avg;

    repeat:
    printf("Enter the score of player number %d: ",i);
    scanf("%d",&s);
    sum += s;
    i++;
    if(i<=11) 
    goto repeat;

    avg = sum/11.0;
    printf("Average score of the player will be: %f",avg);
    return 0;
}