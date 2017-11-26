#include <stdio.h>
int main()
{
    int a[100],n,k=-1,b[100],m,l=-1,c[100],x=-1,y=-1,i,j,o;
    printf("enter the first array value and stop press -11:");
    for(;;)
    {
        scanf("%d",&n);
        if(n==-11)
            break;
        else
        {
            k++;
            a[k]=n;
        }
    }
    printf("enter the second array value and stop press -22:\n");
    for(;;)
    {
        scanf("%d",&m);
        if(m==-22)
            break;
        else
        {
            l++;
            b[l]=m;
        }
    }
    printf("show the first array value:\n");
    for(i=0;i<=k;i++)
    {
        printf("\nposition a[%d]:%d",i,a[i]);
    }
    printf("show the second array value:\n");
    for(i=0;i<=l;i++)
    {
        printf("\nposition b[%d]:%d",i,b[i]);
    }
    printf("\nmerge value:");
    for(i=0;i<=k+l+1;i++)
    {
        if(i<=k)
        {
           x++;
           c[x]=a[i];
        }
        else
        {
            y++;
            x++;
            c[x]=b[y];
        }
    }
    for(i=0;i<=k+l+1;i++)
    {
        printf("\nposition b[%d]:%d",i,c[i]);
    }
    printf("\nshorting value:");
    for(i=0;i<=k+l+1;i++)
    {
        for(j=i+1;j<=k+l+1;j++)
        {
            if(c[i]>c[j])
            {
                o=c[i];
                c[i]=c[j];
                c[j]=o;
            }
        }
    }
    for(i=0;i<=k+l+1;i++)
    {
        printf("\nposition b[%d]:%d",i,c[i]);
    }
    return 0;

}
