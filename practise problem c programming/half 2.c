#include <stdio.h>
int main()
{
    int i,j,n,c=1;
    scanf("%d",&n);
    c=n-1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=c;j++)
        {
            printf(" ");
        }
        c--;
        for(j=1;j<=2*i-1;j++)
        {
            printf("@");
        }
        printf("\n");
    }
    c=1;
    for(i=1;i<=n-1;i++)
    {
        for(j=1;j<=c;j++)
        {
            printf(" ");
        }
        c++;
        for(j=1;j<=2*(n-i)-1;j++)
        {
            printf("@");
        }
        printf("\n");
    }
    return 0;
}
