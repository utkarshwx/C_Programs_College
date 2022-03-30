#include<stdio.h>
int main(){
	long int n,t,rev=0;
	printf("enter the number :");
	scanf("%ld",&n);
	t=n;
	do{
		rev = rev*10+n%10;
	}while(n=n/10);
	if(t==rev)
	printf("The number is palindrome %ld\n",rev);
	else
	printf("The number is isn't palindrome\n");

	return 0;
}
