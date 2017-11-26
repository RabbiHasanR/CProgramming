#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,area,range,ear;
    printf("enter length a && wade b: ");
    scanf("%f %f",&a,&b);
    area=a*b;
    range=(2*(a+b));
    ear=sqrt((a*a+b*b));
    printf("area of rectangle: %f sqr-meter\n",area);
    printf("range of rectangle: %f meter\n",range);
    printf("ear of rectangle: %f meter\n",ear);
    return 0;
}
