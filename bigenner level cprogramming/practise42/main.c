#include <stdio.h>
#include <stdlib.h>

int main()
{
   int sum=0,num;
   do
   {
       printf("enter n: ");
       scanf("%d",&num);
       sum+=num;
   }
   while(num!=0);
   printf("sum:%d",sum);
    return 0;
}
