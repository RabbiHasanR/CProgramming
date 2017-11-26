///fibonacci number:0 1 1 2 3 5 8 13.....///
/// sample input:3
///              3
///              4
///              7

///sample output:1
///              2
///              8
#include <stdio.h>
int main()
{
    int n,m,c,i,j=1,a,b;
    scanf("%d",&m);
    while(j<=m){
             scanf("%d",&n);
                a=0;
    b=1;

    for(i=1;i<=n;i++)
    {
        if(i==n)
        printf("case#%d:%d\n",j,a);
        c=a+b;
        a=b;
        b=c;
    }
    j++;
    }
    return 0;
}
