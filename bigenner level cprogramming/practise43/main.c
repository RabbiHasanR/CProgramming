#include <stdio.h>
#include <stdlib.h>

int main()
{
 /* int x=0;
   if(x=0)
    printf("its zero\n");
   else
   printf("\nits not zero");*/

  /* int a=10,b=5,c=5,d;
   d=b+c==a;
   printf("%d",d);*/

   /*int x=5;
   if(x<1);
   printf("hello");*/

   int  ch;
   printf("enter a value btw 1 to 2:");
   scanf("%d",&ch);
   switch(ch,ch+1)
   {
   case 1:
    printf("1\n");
    break;
   case 2:
    printf("2");
    break;

   }
    return 0;
}

