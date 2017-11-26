#include <stdio.h>
int main()
{
    int a[100],b[100],i,j,k=-1,s=-1,sum=0,sum1=0;


    printf("Enter the valu of i and stop press 0:");
    for(;;)
    {
        scanf("%d",&i);
        if(i==0)
            break;
        else
        {
            k++;
            a[k]=i;
            sum+=a[k];
        }

    }
    printf("Enter the valu of j and stop press 00:");
    for(;;)
    {
        scanf("%d",&j);
        if(j==00)
            break;
        else
        {
         s++;
         b[s]=j;
         sum1+=b[s];
        }
    }
      printf("sum of a[k] %d",sum);
      printf("\nsum of b[s] %d",sum1);
       return 0;


}
