#include <stdio.h>
int main()
{
    int i,j,a,c=0,d=0,e=0,sum;
    for(i=0;i<=9;i++)
    {
     a=(2*i)+1;
     c+=a;
     d+=c;
    }
    for(j=3;j<=30;j+=3)
     {
         e+=j;
     }
    printf("%d",sum=d+e);

    return 0;
}
