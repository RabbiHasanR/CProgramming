#include<stdio.h>
int main()
{
 int a,b,c;
 printf("Enter 3 numbers");
 scanf("%d%d%d",&a,&b,&c);
 if(a>b && a>c)
  printf("\nMximum number is a = %d",a);
 else if(b>a && b>c)
  printf("\nMximum number is b = %d",b);
 else
   printf("\nMximum number is c = %d",c);
 if(a<b && a<c)
  printf("\nMinimum number is a = %d",a);
 else if(b<a && b<c)
  printf("\nMinimum number is b = %d",b);
 else
   printf("\nMinimum number is c = %d",c);

   return 0;
}
