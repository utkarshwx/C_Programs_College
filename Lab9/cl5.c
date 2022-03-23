#include<stdio.h>

int main(){

	int n,i,j;
	printf("Prime numbers are: \n");
	for(i=1;i<101;i++){
		int flag = 1;
		n=i/2;
		for(j=2;j<=n;j++){
			if(!(i%j)){
				flag =0;
				break;
			}
		
		}
		if (flag)
			printf("%d\n",i);		
	}
	return 0;
}
