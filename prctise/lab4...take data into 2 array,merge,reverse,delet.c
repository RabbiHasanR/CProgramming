#include <stdio.h>
int main()
{
    int array1[100],array2[100],array3[100],n,m=-1,p,q=-1,i,j=-1,merge[100],x=-1,y=-1,z=-1,even[100],odd[100],loc,t;
    printf("Enter first array value & stop press -999:\n");
    for(;;)
    {
        scanf("%d",&n);
        if(n==-999)
            break;
        else
        {
          m++;
          array1[m]=n;
        }
    }
    printf("\nEnter second array value & stop press 00:\n");
     for(;;)
    {
        scanf("%d",&p);
        if(p==00)
            break;
        else
        {
          q++;
          array2[q]=p;
        }
    }
    printf("\nFirst array inputed value:\n");
    for(i=0;i<=m;i++)
    {
       printf("%d\t",array1[i]);
    }
    printf("\nSecond array inputed value:\n");
    for(i=0;i<=q;i++)
    {
       printf("%d\t",array2[i]);
    }
    ///merge value///
    for(i=0;i<=m+q+1;i++)
    {
        if(i<=m)
        {
          j++;
          merge[j]=array1[i];
        }
        else
        {
          x++;
          j++;
          merge[j]=array2[x];
        }

    }
    printf("\nMerge value:\n");
    for(i=0;i<=m+q+1;i++)
    {
        printf("%d\t",merge[i]);
    }
    ///even or odd///
    for(i=0;i<=m+q+1;i++)
    {
        if(merge[i]%2==0)
        {
           y++;
           even[y]=merge[i];

        }
        else
        {
            z++;
            odd[z]=merge[i];
        }
    }
    printf("\nEven value:\n");
    for(i=0;i<=y;i++)
    {

        printf("%d\t",even[i]);
    }
    printf("\nOdd value:\n");
    for(i=0;i<=z;i++)
    {
        printf("%d\t",odd[i]);
    }
    ///reverge array///
    printf("\nreverge merge value:\n");
    for(i=m+q+1;i>=0;i--)
    {
        printf("mrege[%d]:%d\n",i,merge[i]);
    }
    ///delete merge///
    printf("\nEnter the location of element to be deleted:\n");
    scanf("%d",&loc);
    t=m+q+1;
    while(loc<=t)
    {
        merge[loc-1]=merge[loc];
        loc++;
    }
    t--;
    for(i=0;i<=t;i++)
    {
        printf("merge[%d]:%d\n",i,merge[i]);
    }
    return 0;
}
