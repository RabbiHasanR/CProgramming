#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    i=0;

    while(i<=5)
    {
        printf("%3d %3d",i,10-i);
        ++i;
    }
    return 0;
}
