#include <stdio.h>

int SOD(int num)
{
    if(num == 0)
        return 0;
        
    return ((num % 10) + SOD(num / 10));
}


int main()
{
    int num, sum;
    
    printf("Enter any number to find sum of digits: ");
    scanf("%d", &num);
    
    sum = SOD(num);
    
    printf("Sum of digits of %d = %d", num, sum);
    
    return 0;
}

