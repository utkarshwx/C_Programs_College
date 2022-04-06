#include<stdio.h>

int main(){
    int marks[20];
    int c=0,s=0;
    for(int i=0;i<20;i++){
        printf("Enter the marks of %d student:",i+1);
        scanf("%d",&marks[i]);
        s +=marks[i];
    }

    for(int i=0;i<20;i++)
        if (marks[i]>89) c++;
    float avg=s/20.0;
    printf("Total number of the student got grade are: %d\n",c);
    printf("Average of the class: %f",avg);
    return 0;
}