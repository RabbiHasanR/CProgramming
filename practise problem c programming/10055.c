#include <stdio.h>
int main()
{
    long int ha,vv,d,temp;
    while(scanf("%ld%ld",&vv,&ha)!=EOF)
    {
        if(ha>vv)
        {
           temp=ha;
           ha=vv;
           vv=temp;
        }
        d=vv-ha;
        printf("%ld\n",d);
    }
    return 0;
}
