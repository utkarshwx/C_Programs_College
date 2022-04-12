#include<stdio.h>

int main(){

	int n,i,flag=1;
	printf("Enter the number: ");
	scanf("%d",&n);
	int t=n/2;
	for(i=2;i<t;i++){
		if(!(n%i)){
			flag=0;
			break;
		}
	}
	if(flag) printf("Prime number");
	else printf("Not a Prime number");
	
	return 0;
}
