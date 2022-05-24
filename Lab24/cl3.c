#include<stdio.h>
#include<stdlib.h>
#define loop(i,n) for(int i=0;i<n;i++)


int main()
{
    int n=0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int* arr=(int*) malloc(n * sizeof(int));
    printf("Enter the array elements: \n");
    loop(i,n){
        scanf("%d", arr+i);
    }
    int max=arr[0];

    loop(i,n){
        if(max<arr[i]){
            max=arr[i];
        }
    }

    printf("The largest element is %d", max);

    return 0;
}