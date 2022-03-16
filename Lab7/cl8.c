#include<stdio.h>

int main(){

    int c;
    printf("Press 1, Lens\n");
    printf("Press 2, Mirror");
    scanf("%d",&c);

    if(c==1){

        int c1;
        printf("Press 1, Convex Lens\n");
        printf("Press 2, Concave Lens");
        scanf("%d",&c1);

        if(c1==1){
            int c2;
            printf("Press 1, At infinity");
            printf("Press 2, Beyond the centre of curvature C");
            printf("Press 3, At the centre of curvature C");
            printf("Press 4, Between C and F");
            printf("Press 5, At focus F");

            scanf("%d",&c2);

            if(c2==1){

                printf("Position of image   : At F2\n");
                printf("Size                : Real and Inverted\n");
                printf("Type of image formed: Diminished\n");

            }else if(c2==2){

                printf("Position of image   : Between 2F2 and F2\n");
                printf("Size                : Real and Inverted\n");
                printf("Type of image formed: Diminished\n");

            }else if(c2==3){

                printf("Position of image   : Beyond 2F2\n");
                printf("Size                : Real and Inverted\n");
                printf("Type of image formed: Enlarged\n");

            }else if(c2==4){

                printf("Position of image   : Beyond 2F2\n");
                printf("Size                : Real and Inverted\n");
                printf("Type of image formed: Enlarged\n");

            }else if(c2==5){

                printf("Position of image   : At 2F2\n");
                printf("Size                : Real and Inverted\n");
                printf("Type of image formed: Same size\n");

            }
            else printf("invalid entry");
        }
        else if(c1==2){

            int c2;
            printf("Press 1, At Infinity\n");
            printf("Press 2, Between Infinity and the Pole\n");

            scanf("%d",&c2);

            if(c2==1){

                printf("Position of image   : \n");
                printf("Size                : \n");
                printf("Type of image formed: \n");

            }
            else if(c2==2){

                printf("Position of image   : \n");
                printf("Size                : \n");
                printf("Type of image formed: \n");

            }
            else printf("invalid entry");

        }
        else printf("Invalid entry");
    }
    else if(c==2){

        int c1;
        printf("Press 1, Concave Mirror\n");
        printf("Press 2, Convex Mirror");
        scanf("%d",&c1);

        if(c1==1){

            int c2;
            printf("Press 1, At infinity\n");
            printf("Press 2, Beyond the centre of curvature C\n");
            printf("Press 3, At the centre of curvature C\n");
            printf("Press 4, Between C and F\n");
            printf("Press 5, At focus F\n");

            scanf("%d",&c2);

            if(c2==1){

                printf("Position of image   : At the focus F\n");
                printf("Size                : Highly Diminished\n");
                printf("Type of image formed: Real and Inverted\n");

            }else if(c2==2){

                printf("Position of image   : Between F and C\n");
                printf("Size                : Diminished\n");
                printf("Type of image formed: Real and Inverted\n");

            }else if(c2==3){

                printf("Position of image   : At C\n");
                printf("Size                : Same Size\n");
                printf("Type of image formed: Real and Inverted\n");

            }else if(c2==4){

                printf("Position of image   : Beyond C\n");
                printf("Size                : Enlarged\n");
                printf("Type of image formed: Real and Inverted\n");

            }else if(c2==5){

                printf("Position of image   : At Infinity\n");
                printf("Size                : Highly Enlarged\n");
                printf("Type of image formed: Real and Inverted\n");

            }
            else printf("invalid entry");
        }
        else if(c1==2){

            int c2;
            printf("Press 1, At Infinity\n");
            printf("Press 2, Between Infinity and the Pole\n");

            scanf("%d",&c2);

            if(c2==1){

                printf("Position of image   : At the focus F, behind the mirror\n");
                printf("Size                : Highly Diminished\n");
                printf("Type of image formed: Virtual and Erect\n");

            }
            else if(c2==2){

                printf("Position of image   : At the focus F, behind the mirror\n");
                printf("Size                : Diminished\n");
                printf("Type of image formed: Virtual and Erect\n");

            }
            else printf("invalid entry");

        }
        else printf("Invalid entry");

    }
    else printf("provide correct value");
    return 0;
}