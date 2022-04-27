#include <stdio.h>

int sum(int *a){
    int sum = 0;
    for(int i = 0; i < 5; i++)
        sum += a[i];
    return sum;
}

void main(){
    
    int x[5];
    for(int i = 0; i < 5; i++){
        printf("Enter the number: ");
        scanf("%d", &x[i]);
    }
    printf("Sum of array is: %d\n",sum(x));
}