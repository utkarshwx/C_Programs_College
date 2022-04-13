#include <stdio.h>
int main()
{
    int n=0;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    
    int m=0;
    printf("Enter the number of Columns: ");
    scanf("%d", &m);
    
    int arr[n][m];
    printf("Enter the matrix: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d", &arr[i][j]);
        }
    }
    
    int c=0;
    int max=-1;
    while(c<n){
        if(max<arr[c][c]){
            max=arr[c][c];
        }
        c++;
    }
    
    printf("\nThe max element is %d", max);

    return 0;
}
