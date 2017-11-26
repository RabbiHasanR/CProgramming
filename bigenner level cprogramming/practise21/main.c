#include <stdio.h>
#include <math.h>

   int main()
{
     float a,b;
     double area;
    printf("the length of equal arm(meter): ");
    scanf("%f",&a);
    printf("the length of other arm(meter): ");
    scanf("%f",&b);

    printf("A: %f \n B: %f", a,b);
    float ab;
    ab = (a*a) - (b*b);
    printf("ab: %f \n", ab);
    float sqrtt;
    sqrtt = sqrt(ab);
    printf("sqrtt: %f \n", ab);
    long double finalr;
    finalr = b*sqrtt;
    printf("area: %lf \n", finalr);

    getchar();


}
