#include<stdio.h>
int main(){

	int n,sum=0,c=0,i;
	for(i=0;i<10;i++){

		printf("\nEnter the %dth number: ",i);
		scanf("%d",&n);
		c += (n%2);
		sum += (n%2)*n;
	}
	printf("The sum of the odd number is %d and total odd numbers are %d\n",sum,c);
	return 0;
}
