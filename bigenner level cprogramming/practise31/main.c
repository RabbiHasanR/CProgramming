#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    i=1;
    while(i<=100)
    {
        printf("%d\n",i);

        i=i+i;
    }
    return 0;
}
