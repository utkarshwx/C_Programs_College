#include<stdio.h>
#include<stdlib.h>
#define loop(i,n) for(int i=0;i<n;i++)
void Sum(int* arr, int n){
    for(int i=0;i<n;i++){
        if(*arr <*(arr+i)){
            *arr=*(arr+i);
        }
    }
}
int main()
{
    int n=0;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int* arr=(int*) malloc(n * sizeof(int));
    printf("Enter the array elements: \n");
    loop(i,n){
        scanf("%d", arr+i);
    }

    Sum(arr, n);
    printf("The sum of all elements in array is %d", arr[0]);
    return 0;
}