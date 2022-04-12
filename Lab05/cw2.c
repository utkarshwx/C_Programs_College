#include<stdio.h>

int main(){

    int pv,pn,fn;
    printf("Enter the primary voltage:");
    scanf("%d",&pv);
    printf("Enter the primary turns:");
    scanf("%d",&pn);
    printf("Enter the secondary turns:");
    scanf("%d",&fn);
    printf("The secondary voltage is %d",(pv*fn)/pn);
    return 0;
}