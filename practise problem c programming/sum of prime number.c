///problem: sum of prime number///

///sample input:2
///             1 10
///             5 3

///sample output:17
///              8

#include <stdio.h>
int main()
{
    int a,n,i,j,m,p,sum=0,temp,t;
    scanf("%d",&t);
    while(t--){
    scanf("%d %d",&m,&p);
    if(m>p)
    {
        temp=m;
        m=p;
        p=temp;
    }
    for(j=m;j<=p;j++){

        n=1;
            a=j;
            if(a==1){
        n=0;}
    for(i=2;i<a;i++)
    {
        if(a%i==0)
            n=0;
    }
    if(n==1)
        sum+=a;
        //printf("%dprime\t",a);
    /*else
        printf("not prime");*/
    }
    printf("%d\n",sum);
    }


    return 0;
}
