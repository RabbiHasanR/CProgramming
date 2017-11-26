#include<stdio.h>
int main()
{
    int a , b;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
      if(a>b) printf("%d",a-b);
      else printf("%d",b-a);
    }
    return 0;
}
