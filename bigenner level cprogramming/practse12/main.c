#include <stdio.h>
#include <math.h>

int main()
{
   float a,area;
   printf("enter: ");
   scanf("%f",&a);
   area=(pow(a,2)*sqrt(3))/4;
   printf("area of the equilateral traingal= %.2f sq-meter",area);

   return 0;
}
