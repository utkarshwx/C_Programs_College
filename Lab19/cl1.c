#include<stdio.h>

int main(){

    char  *p[5];
    char a[] = "Naruto", b[] = "Sasuke", c[]="Madara", d[] = "Hagoromo", e[] = "Momoshiki";
    p[0]=a;
    p[1]=b;
    p[2]=c;
    p[3]=d;
    p[4]=e;
    for(int i=0; i<5; i++){
        printf("%s \n",p[i]);
    }
    printf("");
    return 0;
}