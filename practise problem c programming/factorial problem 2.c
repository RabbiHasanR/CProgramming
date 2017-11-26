///problem 5!=1*2*3*4*5
///sample input:5
///             6
///             0
///sample output:120
///              720
///               1

#include <stdio.h>
int main()
{
    int fact,i,n;
    while(scanf("%d",&n)!=EOF)///input factorial number///
    {
        fact=1;
        /*for(i=1;i<=fact;i++)
        {
            total*=i;
        }*/
        while(n>1)///condition///
        {
            fact*=n;///calculat factorial///
            n--;
        }
        printf("%d\n",fact);///print factorial///
    }
    return 0;
}
