#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,count,sum=0;
   printf("enter n: ");
   scanf("%d",&n);
   for(count=1;count<=n;++count)
   {
       sum+=count;
      printf("\tsum=%d",sum);
   }

    return 0;
}
