#include <stdio.h>
int main()
{
    int a[50],m,n,k=-1,b[50],j=-1,c[50],i=-1,d[50],x=-1,y=-1;
    printf("enter the value and stop program press -1:\n");
    for(;;)
    {
        scanf("%d",&m);
        if(m==-1)
            break;
        else
        {
            k++;
            a[k]=m;
        }
    }
    printf("print given value:\n");
    for(n=0;n<=k;n++)
    {
        printf("position%d:",n);
        printf("%4d\n",a[n]);
    }

    for(n=0;n<=k;n++)
    {
        if(a[n]%2==0)
        {
         j++;
         b[j]=a[n];
        }
        else
        {
            i++;
            c[i]=a[n];
        }
    }
    printf("\neven number:");
    for(n=0;n<=j;n++)
    {
        printf("\n%d",b[n]);
    }
    printf("\nodd number:");
    for(n=0;n<=i;n++)
    {
        printf("\n%d",c[n]);
    }
for(n=0;n<=k+j+i;n++)
{
    if(n<=k)
    {
        y++;
        d[y]=b[n];
    }
    else
    {
       x++;
       y++;
       d[y]=c[x];
    }
}

printf("\n show merge");
for(n=0;n<=k+j+i;n++)
    printf("\n%d",d[n]);
 return 0;
}
