#include <stdio.h>
int main()
{
    int i,j,b,c=0,sum=0,sum1=0,all_sum;
    for(i=0;i<=9;i++)
    {
     b=(2*i)+1;
     c=c+b;
     sum+=c;
    }
    for(j=3;j<=30;j=j+3)
    {
        sum1+=j;
    }
    printf("%d",all_sum=sum+sum1);

    return 0;
}
