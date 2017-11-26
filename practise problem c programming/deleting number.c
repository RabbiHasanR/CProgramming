#include <stdio.h>
int main()
{
    int a[100],i,k=-1,n,index;
    printf("enter value of array and stop press -66:");
    for(;;)
    {
        scanf("%d",&n);
        if(n==-66)
            break;
        else
        {
            k++;
            a[k]=n;
        }
    }
    printf("\nreverse number:");
    for(i=k;i>=0;i--)
    {
        printf("\nposition a[%d]:%d",i,a[i]);
    }
    printf("\nenter index:");
    scanf("%d",&index);
    printf("\ndeleting number:");
    for(i=index;i<=k;i++)
    {
       a[i]=a[i+1];
    }
    k-=1;
    for(i=0;i<=k;i++)
        printf("\nposition a[%d]:%d",i,a[i]);

    return 0;
}
