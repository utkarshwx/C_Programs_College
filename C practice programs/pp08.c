#include<stdio.h>

int main(){
    int income;
    float tax=0.0;
    printf("Enter your income\n");
    scanf("%d",&income);

    if(income > 250000 && income < 500000){
        tax=(0.05*income);
        //tax = tax + 0.05 * (income - 250000); 
    }
    else if(income>=500000 && income < 1000000){
        tax=(0.20*income);
        //tax = tax + 0.20 * (income - 500000);
    }
    else if(income >= 1000000){
        tax=(0.30*income);
        //tax = tax + 0.30 * (income -1000000);
    }
    else if (income<=250000){
        tax=0.0;
    }

    
    printf("your income tax is %f\n", tax);
    return 0;
}