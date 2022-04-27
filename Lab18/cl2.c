#include<stdio.h>

int large_sum(int *a, int *b, int n){
    int i, s1=0, s2=0;
    for(int i=0;i<n;i++){
        s1+= a[i];
        s2+= a[i];
    }
    if(s1 == s2) return 0;
    if(s1 > s2) return 1;
    if(s1 < s2) return 2;
}
int main(){
    int x[10], y[15], g;
    g=large_sum(x,y,15);
    if(!g) printf("Both sums are equal ");
    else if(g == 1) printf("sum of 1st array is largest than 2nd");
    else printf("sum of 2nd array is largest than 1st");
    return 0;
}