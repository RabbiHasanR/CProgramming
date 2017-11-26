#include <stdio.h>

/*pointer*/

int main()
{
    int a,b;
    int *p,*q;
    p=&a;
    q=&b;
    a=5;
    b=7;

  printf("%d %d %d %d",*p,a,*q,b);

 /**p=*q;

  printf("\n%d %d %d %d",*p,a,*q,b);*/
   p=q;
   printf("\n%d %d %d %d",*p,a,*q,b);



    return 0;
}
