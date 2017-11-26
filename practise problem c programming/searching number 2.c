#include <stdio.h>
int main()
{
    int i,a[100],n,k=-1,m;
    printf("Enter number:");
    for(;;)
    {
        scanf("%d",&n);
        if(n==0)
            break;
        else
        {
            k++;
            a[k]=n;
        }
    }

    printf("Enter the search number:");
    scanf("%d",&m);
    for(i=0;i<k;i++)
    {
        if(a[i]==m)
        {
            printf("%d is found in %d numbers.",m,i+1);
            break;
        }
    }
    if(i==k)
    printf("%d is not found",m);
        return 0;
}
