#include<stdio.h>
int leader(int n){
    int i,n,max,c=1;
    printf("Second Function: \n");
    for(i=1;i<=n;i++){
        printf("Enter the number");
        scanf("%d",&n);
        if(i==1){
            max=n;
        }
        if(max<n){
            max=n;
            c++;
        }

    }
    return c;
}
int max(int n){
    int i,n,max;
    printf("First Function");
    for(i=1;i<=n;i++){
        printf("Enter a number");
        scanf("%d",&n);
        if(i==1){
            max=n;
        }
        if(max<n){
            max=n;
        }
    }
    return max;
}
int main()
{
    int a;
    a = max(10);
    printf("Max is %d\n",a);
    printf("Max is %d\n",max(15));

    a = leader(20);
    printf("No. of Leaders are %d\n",a);
    printf("No. of Leaders are %d\n",leader(10));
}
