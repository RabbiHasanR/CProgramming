#include <stdio.h>
int main()
{
    int a[100],i,n,k=-1;
    int *p;
    p=&a[0];
    printf("enter the array value and stop press -77:");
    for(;;)
    {
        scanf("%d",&n);
        if(n==-77)
            break;
        else
        {
            k++;
            a[k]=n;
        }
    }
    printf("\nshow the array value:");
    for(i=0;i<=k;i++)
    {
        printf("\na[%d]:value is %d and address is %d",i,*(p+i),(p+i));
    }
    return 0;
}
