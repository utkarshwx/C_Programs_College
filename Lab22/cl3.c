#include<stdio.h>
#define loop(i,n) for(int i=0;i<n;i++)
#define nl printf("\n")

int main(){

    int n,f;
    printf("Enter the number of items: ");
    scanf("%d",&n);
    printf("Enter the number of friends: ");//
    scanf("%d",&f);
    struct book{
        char itemname[20];
        int price;
    }arr[n];
    int i=0,g;int gp=0,hr=0.0,qu;


    loop(i,n){
        qu=0;
        nl;
        printf("Enter name of the item %d: ",(i+1));
        gets(arr[i].itemname);
        gets(arr[i].itemname);
        
        printf("Enter the quantity of the item %d: ",(i+1));
        scanf("%d",&qu);

        printf("Enter the price of the item %d: ",(i+1));
        scanf("%d",&arr[i].price);
        scanf("%c",&g);

        gp=gp+(arr[i].price*qu);

    }
    hr=gp/f;

    printf("%d",hr);

    return 0;
}