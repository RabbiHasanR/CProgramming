#include <stdio.h>
#include <stdlib.h>

int main()
{
    int digit[5],i,sum=0;
    printf("Enter 5 digit:");

    for(i=0;i<5;i++)
        scanf("%d",&digit[i]);
    for(i=0;i<5;i++)
        sum+=digit[i];

    printf("the sum of number:%d\n",sum);
    return 0;
}
