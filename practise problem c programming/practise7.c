#include <stdio.h>
int main()
{
    /*int a,b,c,i,n,T;

    ///factorial number///
    while(scanf("%d",&n)!=EOF)
    {
        fact=1;
        while(n>1)
        {
            fact*=n;
            n--;
        }
        printf("%d\n",fact);
    }*/
    ///fibonacci number///
    /*scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
       a=0,b=1;
       for(i=1;i<=n;i++)
       {
           if(i==n)
           printf("%d\n",a);
           c=a+b;
           a=b;
           b=c;
       }

    }*/

    ///sum of prime number between n & m///
    int cheak,a,i,j,n,m,sum,T,temp;
    scanf("%d",&T);
    while(T--){
        sum=0;
    scanf("%d%d",&n,&m);
    if(n>m){
            temp=n;
        n=m;
        m=temp;
    }
    for(j=n;j<=m;j++){
            cheak=1;
            a=j;
    if(a==1)
       cheak=0;
    for(i=2;i<a;i++)
    {
        if(a%i==0)
            cheak=0;
    }
    if(cheak==1)
    {
        sum+=a;
    }

    }
    printf("%d\n",sum);
    }


    return 0;
}
