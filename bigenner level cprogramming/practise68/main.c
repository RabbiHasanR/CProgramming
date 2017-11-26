#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("enter number: ");
    scanf("%d",&num);
    printf("%d is cube:%d",num,cube(num));

    return 0;
}
int cube(int n)
{
    return(n*n*n);
}
