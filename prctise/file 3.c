#include <stdio.h>
#include <stdlib.h>
int main()
{

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        printf("%d\n",n);
    }
    return 0;
}
