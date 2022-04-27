#include<stdio.h>

int largest(int *a, int n){
    int lrgest=0;
    for(int i=0;i<n;i++){
        if(lrgest < a[i]){
            lrgest = a[i];
        }
    }

    return lrgest;
}


int main(){
    int n;
    printf("Enter the number of values to compare: \n");
    scanf("%d", &n);
    int x[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the number\n");
        scanf("%d",&x[i]);
    }
    printf("Largest of the array is %u\n", largest(x,n));
    return 0;
}