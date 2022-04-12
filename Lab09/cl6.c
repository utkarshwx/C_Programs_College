#include<stdio.h>

int main(){

	int n,i,f=1;
	printf("Enter the limit for factorial: \n");
	scanf("%d",&n);
	for(i=n;i>1;i--){
		f *=i;
	}
	printf("%d\n",f);
	return 0;
}
