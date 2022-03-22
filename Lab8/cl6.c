#include<stdio.h>

int main(){

    float max,avg;
    int c,b,m,p,e,r=0,i=0;
    while (++r<9){
        printf("\n Enter the marks of 5 subjects of roll number %d: ",r);
        scanf("%d %d %d %d %d",&c,&b,&m,&p,&e);

        avg = (c+b+m+p+e)/5.0;

        printf("roll number's %d average is: %f",r,avg);

        if(max < avg){
            max = avg;
            i=r;
        }

    }
    printf("\n Topper is %d with average of %f",i,max);
    return 0;
}