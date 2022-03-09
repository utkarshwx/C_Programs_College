#include<stdio.h>

int main(){
    int i=1,sum=0;
    printf("");
    while (i<11)
    {
        sum+= i;
        i++;
    }
    printf("%d\n",sum);
    int ii=1,sumi=0;
    printf("");
    for ( ii = 0; ii < 11; ii++)
    {
        sumi+= ii;
    }
    printf("%d\n",sumi);
    int iu=1,sumu=0;
    printf("");
    do {
        sumu+= iu;
        iu++;
    } while(iu<11);
    printf("%d\n",sumu);
    
    return 0;
}