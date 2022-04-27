#include<stdio.h>

void multifunction(int *a, int *max, int *min,int *count){
    for(int i=0;i<5;i++){
        if(*max < a[i]){
            *max = a[i];
        }
    }
    for(int i=0;i<5;i++){
        if(*min > a[i]){
            *min = a[i];
        }
    }

    for(int i=0;i<5;i++){
        if(a[i]%2!=0){
            *count= *count +1;
        }
    }
    
}


int main(){
    int x[5], max=0, min =0 , count =0;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the number: ");
        scanf("%d",&x[i]);
    }
    min = x[0];
    multifunction(x,&max,&min,&count);
    printf("Largest of the array is %d %d %d\n", max , min, count);
    return 0;
}