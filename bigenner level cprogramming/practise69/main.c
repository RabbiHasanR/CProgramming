#include <stdio.h>
#include <stdlib.h>
int jas(int n);
int main()
{
   int a,sum;
   scanf("%d",&a);
   sum=jas(a);
   printf("%d is cube:%d",a,sum);
    return 0;
}
int jas(int n)
{
    return(n*n*n);
}
