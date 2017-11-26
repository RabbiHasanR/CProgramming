#include <stdio.h>
#include <stdlib.h>
#define size 10

int main()
{
    int square[size],i;
    for(i=0;i<size;++i)
    {
        square[i]=i*i;
        printf("%d\n",square[i]);
    }
    return 0;
}

