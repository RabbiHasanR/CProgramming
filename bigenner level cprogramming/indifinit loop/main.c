#include <stdio.h>


int main()
{
   int a[10],i,m,k=-1;
   for(;;)
   {
    printf("please enter value: ");
    scanf("%d",&m);

    if(m==-99)
        break;

    else
    {
        k++;
        a[k]=m;
    }
    for(i=0;i<=k;i++)
    {
        printf("\n%d",a[i]);
    }

   }
    return 0;
}
