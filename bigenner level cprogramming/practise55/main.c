#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum=0,i=1;
    for(;i<=100;)
    {
        sum=sum+i;
        i++;
    }
    printf("%d",sum);
    return 0;
}
