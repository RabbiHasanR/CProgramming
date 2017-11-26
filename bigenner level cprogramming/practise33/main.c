#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,sum,avg;
   a=0;
   while(a<=30)
   {
       printf("%d\t",a);
       ++a;
       sum=sum+a;
       avg=sum/31;

   }
   printf("sum:%d avg: %d\n\n",sum,avg);
    return 0;
}
