#include<stdio.h>

int main(){

    struct book{
        char title[20],author[20];
        float price;
        int pages;
    }arr[3];
    int i,g;
    for(i=0;i<3;i++){
        printf("Enter book name %d: ",(i+1));
        gets(arr[i].title);
      
        printf("Enter author %d: ",(i+1));
        gets(arr[i].author);
        
        printf("Enter price of %d: ",(i+1));
        scanf("%f",&arr[i].price);
        
        printf("Enter pages of %d: ",(i+1));
        scanf("%d",&arr[i].pages);
        scanf("%c",&g);
    }
    printf("");

    return 0;
}