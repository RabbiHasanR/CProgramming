#include <stdio.h>
int main()
{
    int a[100],i=0,p=0,m,j,svalue,first,last,mid;
    for(;;)
    {
        printf("please enter value:\n");
        scanf("%d",&a[i]);
        i++;
        p++;
        printf("\nplease enter -88 to break:\n");
        scanf("%d",&m);
        if(m==-88)
            break;
    }
    ///display value///
    printf("\ninputed value:\n");
    for(j=0;j<=p-1;j++)
    {
        printf("%d\t",a[j]);
    }
    printf("\nplease enter the search value:\n");
    scanf("%d",&svalue);
    first=0;
    last=p-1;
    mid=(first+last)/2;
    for(j=0;j<=p-1;j++)
    {
        if(first<last)
        {
           if(a[mid]==svalue)
        {
            printf("\nvalue found\n");
            break;
        }
        else if(a[mid]>svalue)
        {
            last=mid-1;
            mid=(first+last)/2;
        }
        else
        {
            first=mid+1;
            mid=(first+last)/2;
        }
        }
        else
            printf("\nvalue not found\n");

    }
    return 0;
}
