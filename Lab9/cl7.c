#include<stdio.h>

int main(){

	int n,i,a=0,b=1,c=a+b,d;
    
	printf("Enter the limit for factorial: ");

	scanf("%d",&n);

    printf("%d, %d",a,b);
	for(i=2;i<n;i++){
		printf("  %d, ", c);
        a=b;
        b=c;
        c=a+b;
	}
	//printf("%d\n",);
	return 0;
}
