#include<stdio.h>
#define loop(i,n) for(int i=0;i<n;i++)
#define nl printf("\n")

int main(){

    int n;
    printf("Enter the number of employees: ");
    scanf("%d",&n);
    struct book{
        char name[20],gender[7],designation[12],department[30];
        int bp;
    }arr[n];
    int i=0,g;float gp,hr,da;


    loop(i,n){
        printf("Enter name of the employee %d: ",(i+1));
        gets(arr[i].name);
        gets(arr[i].name);

        printf("Enter gender of the employee %d: ",(i+1));
        gets(arr[i].gender);
        
        printf("Enter designation of the employee %d: ",(i+1));
        gets(arr[i].designation);
        
        printf("Enter department of the employee %d: ",(i+1));
        gets(arr[i].department);

        printf("Enter basic pay of the employee %d: ",(i+1));
        scanf("%d",&arr[i].bp);
        scanf("%c",&g);
        nl;

    }

    loop(i,n)
    {
        hr=0.25*arr[i].bp;
        da=0.75*arr[i].bp;
        gp=arr[i].bp+hr+da;
        nl;
        printf("\nEmployee's Name: %s",arr[i].name);
        printf("\nEmployee's Gender: %s",arr[i].gender);
        printf("\nEmployee's Designation: %s",arr[i].designation);
        printf("\nEmployee's department: %s",arr[i].designation);
        printf("\nGross pay of the %d employee is: %f\n",i+1,gp);
    }
    
    printf("");

    return 0;
}