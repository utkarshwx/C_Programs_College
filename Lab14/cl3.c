#include<stdio.h>

int search(int a[], int in){
    for(int i=10;i>=0;i--){
        if(in==a[i])
        return i+1;
    }
    return -1;
}
int main(){

    int n[10],item=0,a;
    printf("Enter the item to be searched:");
    scanf("%d",&item);
    for(int i=0;i<10;i++){

    printf("Enter the %d number: ",i+1);    
    scanf("%d",&n[i]);
    a=search(n,item);
    }

    if(a==-1)
    printf("The element hasn't been found");
    else
    printf("The element has been found at the position: %d",a);
    return 0;
}