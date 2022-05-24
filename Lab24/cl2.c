#include<stdio.h>
#include<stdlib.h>

struct cl1
{
    int id;
    char af[5];
};

struct cl2
{
    char areason[100];
};

union abc
{
    struct cl1 a;
    struct cl2 b;
};


int main(){
    char str[1];
    union abc afk;
    char abc;
    printf("Enter the input ");
    scanf("%d",&afk.a.id);
    printf("%d\n",afk.a.id);
    scanf("%c",&abc);
    gets(afk.a.af);
    printf("%s\n",afk.a.af);
    gets(afk.b.areason);
    printf("%s\n",afk.b.areason);
    printf("\n");
    return 0;
}