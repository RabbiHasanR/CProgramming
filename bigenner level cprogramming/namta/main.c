#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    for(i=1;i<=10;i++)

    {
         printf("\nnamta for %d:",i);
        for(j=1;j<=10;j++)

            printf("\n%d*%d=%d",i,j,i*j);
    }


    return 0;
}
