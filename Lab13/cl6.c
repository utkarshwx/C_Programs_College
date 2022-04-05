#include<stdio.h>
#include<stdlib.h>

int gcd(int m,int n)
{
        int rem;
        while(n!=0)
        {
                rem=m%n;
                m=n;
                n=rem;
        }
        return(m);
}

int main()
{
        int num1,num2,num3,gcd1,gcd2;

        printf("\nEnter 1st positive integer :: ");
        scanf("%d",&num1);
        printf("\nEnter 2nd positive integer :: ");
        scanf("%d",&num2);
        printf("\nEnter 3rd positive integer :: ");
        scanf("%d",&num3);

        if(num1==0 && num2==0 && num3==0)
        {
                printf("\nInvalid number");
                exit(0);
        }

        gcd1=gcd(num1,num2);
        gcd2=gcd(num3,gcd1);

        printf("\nGCD of [ %d, %d, %d ] is : [ %d ]\n",num1,num2,num3,gcd2);

        return 0;
}