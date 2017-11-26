#include <stdio.h>
int main()
{
    long int v,t,d;
    while(scanf("%ld%ld",&v,&t)!=EOF)
    {
        d=2*v*t;
        printf("%ld\n",d);
    }
    return 0;
}
