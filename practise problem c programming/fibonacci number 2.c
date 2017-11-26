#include <stdio.h>
int main()
{
    int n,m,a,b,c,i;
    scanf("%d",&m);
    while(m--){
            a=0,b=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)

    {
        printf("%d\t",a);
        c=a+b;
        a=b;
        b=c;
    }
    printf("\n");
    }
    return 0;
}
