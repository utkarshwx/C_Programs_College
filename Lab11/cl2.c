#include<stdio.h>
int main(){
	int i;
	printf("enter the data");
	scanf("%d",&i);
	switch(i){
		case 1:
		printf("Thid is case 1");
		break;
		case 2:
		printf("This is case 2");
		break;
		case 3:
		printf("This is case 3");
		break;
		default:
		printf("This is a default case");
	}
	return 0;
}
