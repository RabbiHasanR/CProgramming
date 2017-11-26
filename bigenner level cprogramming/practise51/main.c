#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int i=0;
    while(i<=5)
    {
        printf("%3d %3d\n",i,10-i);
        i++;
    }*/
    int n,ev=0,sum;
    printf("enter n: ");
    scanf("%d",&n);
    while(ev<n)
    {
        printf("\n%d \t %d\n",ev,sum=ev+ev);
        ev++;
        //sum=ev+ev;
       // printf("%d \t %d",ev,sum);
    }

    return 0;
}
