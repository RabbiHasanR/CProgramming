#include <stdio.h>
int main()
{
    int a[100],r,k=-1,i;
    int *p;
    p=&a[0];
    printf("enter array value and stop pree -99:");
    for(;;)
    {
        scanf("%d",&r);
        if(r==-99)
            break;
            else
            {
                k++;
                a[k]=r;
            }
    }
    printf("\nshow array value:");
    for(i=0;i<=k;i++)
    {
        printf("\na[%d]:value is %d and address %d",i,*p,p);
        p++;
    }
    return 0;
}
