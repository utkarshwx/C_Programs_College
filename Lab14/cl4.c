#include<stdio.h>

int search(int a[], int in, int l, int r){
    for(int i=l;i<r;i++){
        if(in==a[i])
        return i+1;
    }
    return -1;
}
int main(){

    int n[10],item=0,a,l,r;
    
    printf("Enter the item to be searched: ");
    scanf("%d",&item);

    error:
    printf("Enter the starting index: ");
    scanf("%d",&l);
    
    printf("Enter the ending index: ");
    scanf("%d",&r);
    if(r>19) {
        printf("The number should be less than 20");
        goto error;
        }
    if(l>r){
        printf("The lower index should be less than upper index");
        goto error;
    }

    for(int i=0;i<20;i++){

    printf("Enter the %d number: ",i+1);    
    scanf("%d",&n[i]);
    a=search(n,item,l,r);
    }
    

    if(a==-1)
    printf("The element hasn't been found");
    else
    printf("The element has been found at the position: %d",a);
    return 0;
}