#include<stdio.h>
#include<stdlib.h>
#define loop(i,n) for(int i=0;i<n;i++)



void Largest_1(int* arr, int n, int *index, int *max){
    int count=1;
    loop(i,n){
        if(*(arr+i)==1 && *(arr+(i+1))==1){
            count++;
        }else if(count > *max){
            *max=count;
            *index=i-count+1;
            count=1;
        }
    }
}
int main()
{
    int n=0;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int *arr=(int*) malloc(n * sizeof(n));
    printf("Enter the elements of the array: \n");
    loop(i,n){
        scanf("%d", arr+i);
    }

    int index=0;
    int max=-1;
    Largest_1(arr, n, &index, &max);
    printf("The largest consecutive string was found to be of length %d and the index is %d", max, index);
    free(arr);
    return 0;
}