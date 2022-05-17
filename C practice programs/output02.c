#include<stdio.h>

void month(int n){

    char string[12][10]= {{"january"},{"feburary"},{ "march"}, {"april"},{"may"},{"june"},{"july"},{"august"},{"september"},{"october"},{"november"},{"december"}};
    printf("%s",string[n-1]);
}




int main(){
    int m;
    scanf("%d",&m);
    if (m>0 && m<12)
    {
        month(m);
    }
    else printf("FUCK OFF ASSHOLE");
    
    
    return 0;
}