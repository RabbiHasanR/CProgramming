#include <stdio.h>
#include <math.h>

int main()
{
    float y,A;
    printf("enter: ");
    scanf("%f",&y);
    A=sqrt((1-y)/(1+y*y));
    printf("%.2f sq-meter",A);
    return 0;
}
