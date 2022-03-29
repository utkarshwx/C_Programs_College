#include<stdio.h>
int main(){
	int i,j,k,n;
	scanf("%d",&n);
	

	for(i=0;i<n;i++)
	{
		
		for(j=n-i;j>0;j--)
		printf("U");
		for(j=0;j<n-1-i;j++)
		printf(" ");
		for(j=0;j<n-1-i;j++)
		printf(" ");
		for(j=n-i;j>0;j--)
		printf("U");
		for(j=0;j<n-1-i;j++)
		printf(" ");


	printf("\n");}

    return 0;
}