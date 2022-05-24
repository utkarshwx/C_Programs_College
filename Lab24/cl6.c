#include<stdio.h>
#define loop(i,n) for(int i=0;i<n;i++)
int main()
{
    int n=0;
    printf("Enter number of rows in array: ");
    scanf("%d", &n);

    int (*arr)[5];
    int sum=0;
    printf("Enter the number of elements: ");
    loop(i,n){
        loop(j,n){
            scanf("%d", (arr+i)+j);
            sum=sum * (*(*(arr+i)+j));
        }
    }

    printf("The sum of all element in 2d array is %d", sum);
    return 0;
}
