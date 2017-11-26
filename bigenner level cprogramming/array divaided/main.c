#include <stdio.h>


int main()
{
   int a[100],b[100],c[100],m,i,k=-1,j=-1,n=-1;
   printf("Enter value of m & stop program press -1:");
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
   for(i=0;i<=k;i++)
   {
       printf("vlaue of m:%d\n",a[i]);
   }
   for(i=0;i<=k;i++)
   {
       if(a[i]%3==0)
       {
           j++;
           b[j]=a[i];
       }
       else
       {
           n++;
           c[n]=a[i];
       }
   }
   printf("Value of b[100]:");
   for(i=0;i<=j;i++)
   {
       printf("\t%d",b[i]);
   }
   printf("\n");
   printf("Value of c[100]:");
   for(i=0;i<=n;i++)
   {
       printf("\t%d",c[i]);
   }
    return 0;
}
