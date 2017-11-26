#include <stdio.h>
int main()
{
    int mainarray[100],array1[100],array2[100],n,k=-1,i,j=-1,l=-1,y=-1,x=-1,merg[100];
    printf("Enter value & stop -10000:\n");
    for(;;)
    {
        scanf("%d",&n);
        if(n==-10000)
            break;
        else
        {
            k++;
            mainarray[k]=n;
        }
    }
    printf("\nshow inputed value:\n");
    for(i=0;i<=k;i++)
    {
        printf("Position%d:",i);
        printf("%d\n",mainarray[i]);
    }
    for(i=0;i<=k;i++)
    {
        if(mainarray[i]%2==0)
        {
            j++;
            array1[j]=mainarray[i];
        }
        else
        {
            l++;
           array2[l]=mainarray[i];
        }

    }
    printf("\nEven number:\n");
    for(i=0;i<=j;i++)
    {
        printf("%d\t",array1[i]);
    }
    printf("\nOdd number:\n");
     for(i=0;i<=l;i++)
    {
        printf("%d\t",array2[i]);
    }
    ///marge data///
    for(i=0;i<=j+l+1;i++)
    {
        if(i<=j)
        {
           y++;
           merg[y]=array1[i];

        }
        else
        {
            x++;
            y++;
            merg[y]=array2[x];
        }
    }
    printf("\nmearge value:\n");
    for(i=0;i<=j+l+1;i++)
    {
        printf("%d\t",merg[i]);
    }
    return 0;
}
