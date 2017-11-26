#include <stdio.h>
int main()
{
    int a[100],k=0,m=0,i,n,svalue,first,last,mid;
    for(;;)
    {
        printf("please enter value:\n");
        scanf("%d",&a[k]);
        k++;
        m++;
        printf("please enter -88 to break:\n");
        scanf("%d",&n);
        if(n==-88)
            break;
    }
    printf("show inputed value:\n");
    for(i=0;i<=m-1;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nplease enter search value:\n");
    scanf("%d",&svalue);
    first=0;
    last=m-1;
    mid=first+last/2;
    for(i=0;i<=m-1;i++)
    {
        if(first<last)
        {
            if(a[mid]==svalue)
            {
                printf("vlaue found\n");
                break;
            }
            else if(a[mid]>svalue)
            {
                last=mid-1;
                mid=first+last/2;
            }
            else
            {
                first=mid+1;
                mid=first+last/2;
            }
        }
        else
            printf("value not found");
    }
    return 0;
}
