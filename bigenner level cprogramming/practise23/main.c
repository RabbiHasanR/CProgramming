#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("please enter a number: ");
    scanf("%d",&a);
    if(a%2!=0)
        printf("this number is odd.\n");
    else
        printf("this number is even.\n");
    return 0;
}
