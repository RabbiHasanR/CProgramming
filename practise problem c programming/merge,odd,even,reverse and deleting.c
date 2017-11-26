#include <stdio.h>
int main()
{
    int a[100],b[100],i,j,n,m,k=-1,l=-1,c[100],y=-1,d[100],z=-1,x=-1,e[100],p=-1,index;
    printf("please enter the first array value and stop press -44:");
    for(;;)
    {
        scanf("%d",&n);
        if(n==-44)
            break;
        else
        {
            k++;
            a[k]=n;
        }
    }
    printf("\nshow the first array:");
    for(i=0;i<=k;i++)
        printf("\nposition a[%d]:%d",i,a[i]);

    printf("\nplease enter the second array value and stop press -55:");
    for(;;)
    {
        scanf("%d",&m);
        if(m==-55)
            break;
        else
        {
            l++;
            b[l]=m;
        }
    }
    printf("\nshow the second array:");
    for(i=0;i<=l;i++)
    printf("\nposition b[%d]:%d",i,b[i]);

    printf("\nmerge array:");
    for(i=0;i<=k+l+1;i++)
    {
        if(i<=k){
            y++;
        c[y]=a[i];
        }
        else
        {
            x++;
            y++;
            c[y]=b[x];
        }
    }
    printf("\nmerge array:");
    for(i=0;i<=k+l+1;i++)
        printf("\nposition d[%d]:%d",i,c[i]);

    for(i=0;i<=k+l+1;i++)
    {
        if(c[i]%2==0)
        {
          z++;
          d[z]=c[i];
        }
        else
        {
            p++;
            e[p]=c[i];
        }
    }
    printf("\nodd number:");
    for(i=0;i<=p;i++)
        printf("\n%d",e[i]);

    printf("\neven number:");
    for(i=0;i<=z;i++)
        printf("\n%d",d[i]);

printf("\nreverse:");
for(i=k;i>=0;i--)
{
        printf("%d\t",a[i]);
}



printf("\ndelet:");
scanf("%d",&index);
for(i=index;i<=k;i++)
{
    a[i]=a[i+1];

}
    k=k-1;

    printf("\nAfter delet:");
    for(i=0;i<=k;i++)
{
        printf("%d\t",a[i]);
}


    return 0;
}
