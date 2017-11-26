#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,x;
    printf("enter the base of the teingle: ");
    scanf("%f",&a);
    printf("enter the hight of the tringle: ");
    scanf("%f",&b);
    x=(a*b)/2;
    printf("area of the tringle= %.2f",x);

    return 0;
}
