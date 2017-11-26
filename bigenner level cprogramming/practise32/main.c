#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,ev;
    ev=0;
    printf("enter n: ");
    scanf("%d",&n);
    while(ev<n)
    {
        printf("%d\n",ev);
        ev=ev+2;
    }
    return 0;
}
