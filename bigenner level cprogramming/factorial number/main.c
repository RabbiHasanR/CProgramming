#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i,factorial=1;
    printf("Enter factorial number:");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        factorial*=i;
    }
    printf("\n%d",factorial);
    return 0;
}
