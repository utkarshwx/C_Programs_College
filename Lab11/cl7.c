#include<stdio.h>
int main(){
	int t,n;
    insert:
	printf("enter the total marks out of 600");
	scanf("%d",&t);
    if (t <=600){
        int p=(n/600)*100;
        int k=p/10;
	switch(k){
        case 3:
        printf("Failed");
        break;
        case 4:
		printf("D");
		break;
        case 5:
		printf("C");
		break;
        case 6:
		printf("B");
		break;
        case 7:
		printf("A");
		break;
        case 8:
		printf("E");
		break;
        case 9:
		printf("O");
		break;
        case 10:
        printf("O");
        break;
		default:
		printf("This is a default case");
	}}
    else goto insert;
	return 0;
}
