#include<stdio.h>

int main(){

    char user;
    int pass;
    printf("Enter username: ");
    scanf("%c",&user);
    if(user =='a'){
        printf("Enter Password: ");
        scanf("%d",&pass);

        if(pass == 12345) printf("Login Successful ");

        else printf("Password is incorrect, Try again");
    }
    else printf("Username is incorrect, Try again");
    return 0;
}