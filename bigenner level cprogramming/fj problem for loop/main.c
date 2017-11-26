#include <stdio.h>


int main()
{
    int a[]={1,1,1,1,1,1},i;
    int b[]={2,2,2,2,2,2};
    int c[]={3,3,3,3,3,3};
     printf("section 1:\n");
    for(i=0;i<6;i++){
    printf("\t%d",a[i]);


    }

    printf("\nsection 2:\n");
    for(i=0;i<6;i++){
    printf("\t%d",b[i]);
    }
    printf("\nsection 3:\n");
    for(i=0;i<6;i++){
    printf("\t%d",c[i]);
    }
    return 0;
}
