#include<stdio.h>
#define loop(i,n) for(int i=0;i<n;i++)
#define nl printf("\n")

int main(){

    int n,f;
    
    struct book{
        int length;
    }arr[2];
    int i=0,g;int gp=0,hr=0.0,qu;


    loop(i,2){
        qu=0;
        nl;
        printf("Enter the length %d: ",(i+1));
        scanf("%d",&arr[i].length);
        gp=gp+arr[i].length;

    }
    printf("%d",gp);

    return 0;
}