#include <stdio.h>
int main()
{
    int array1[100],array2[100],array3[100],n,k=-1,i,j=-1,m=-1;
    printf("Enter value or stop press -10000:\n");
    for(;;)
    {
        scanf("%d",&n);
        if(n==-10000)
            break;
        else
        {
          k++;
          array1[k]=n;
        }
    }
    printf("Inputed value:\n");
    for(i=0;i<=k;i++)
    {
        printf("%d\n",array1[i]);
    }
    for(i=0;i<=k;i++)
    {
        if(array1[i]%2==0)
        {
            j++;
          array3[j]=array1[i];
        }
        else
        {
          m++;
          array2[m]=array1[i];
        }

    }
    printf("Even value are:\n");
    for(i=0;i<=j;i++)
    {
        printf("%d\t",array3[i]);
    }
    printf("\nOdd value are:\n");
    for(i=0;i<=m;i++)
    {
        printf("%d\t",array2[i]);
    }
    return 0;
}
