#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14

double find_circum(double r);
double find_area(double r);

int main()
{
  double radius;
  printf("enter radius: ");
  scanf("%lf",&radius);
  printf("\ncircum %2.3lf",find_circum(radius));
  printf("\narea %2.3lf",find_area(radius));
    return 0;
}
double find_area(double r)
{
    return(PI*pow(r,2));
}
double find_circum(double r)
{
 return(2.0*PI*r);
}
