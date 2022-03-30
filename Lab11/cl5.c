#include<stdio.h>
int main(){
	int n,m;
    char ch;
	printf("enter the two operands and one operator respectively");
	scanf("%d %d",&n,&m);
    scanf(" %c",&ch);
	switch(ch){
		case '+':
		printf("the sum is= %d",n+m);
		break;
		case '-':
		printf("the substract is= %d",n-m);
		break;
		case '*':
		printf("the multiplication is= %d",n*m);
        case '/':
		printf("the division is= %d",n/m);
		break;
        case '%':
		printf("the modulus is= %d",n%m);
		break;
		default:
		printf("This is a default case");
	}
	return 0;
}
