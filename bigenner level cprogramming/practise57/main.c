#include <stdio.h>
#include <stdlib.h>

int main()
{
    //nested loop
    int i,j;
    for(i=1;i<=5;i++)
    {
        printf("i is now:%d\n",i);
        for(j=1;j<=5;j++)
         printf("\n%d",j);
    }
    return 0;
}
