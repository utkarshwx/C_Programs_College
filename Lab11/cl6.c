#include<stdio.h>
int main(){
	int n,m;
    int ch;
	printf("enter the two numbers");
	scanf("%d %d",&n,&m);
    printf("type 1 for addition\n");
    printf("type 2 for substraction\n");
    printf("type 3 for multiplication\n");
    printf("type 4 for division\n");
    printf("type 5 for modulation\n");
    printf("enter the value:");    
    scanf("%d",&ch);
	switch(ch){
		case 1:
		printf("the sum is= %d",n+m);
		break;
		case 2:
		printf("the substract is= %d",n-m);
		break;
		case 3:
		printf("the multiplication is= %d",n*m);
        case 4:
		printf("the division is= %d",n/m);
		break;
        case 5:
		printf("the modulus is= %d",n%m);
		break;
		default:
		printf("This is a default case");
	}
	return 0;
}
