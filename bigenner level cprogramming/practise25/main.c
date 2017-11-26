#include <stdio.h>
#include <math.h>

int main()
{
    int x,fx;
    printf("please enter x: ");
    scanf("%d",&x);
    fx=(pow(x,5)+5*pow(x,3)-2*x+3);
    printf("%d",fx);

    return 0;
}
