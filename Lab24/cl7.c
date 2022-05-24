#include<stdio.h>
#include<stdlib.h>
#define loop(i,n) for(int i=0;i<n;i++)
int main()
{
    int n=0;
    printf("Enter number of rows in array: ");
    scanf("%d",&n);

    int c=0;
    printf("Enter the number of columns: ");
    scanf("%d",&c);

    int **arr=(int **)malloc(n * sizeof(int*));
    loop(i,n){
        *(arr+i)=(int *)malloc(c * sizeof(int));
    }
    
    int sum=0;
    loop(i,n){
        loop(j,c){
            scanf("%d", &arr[i][j]);
            sum=sum+*(*(arr+i)+j);
        }
        printf("The sum of row %d is %d\n", i, sum);
    }
    return 0;
}