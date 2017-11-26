#include <stdio.h>
#include <math.h>

int main()
{
   float a,b,c,sum;
   printf("enter a: ");
   scanf("%f",&a);
   printf("enter b: ");
   scanf("%f",&b);
   printf("enter c: ");
   scanf("%f",&c);
   sum=(((-b)/(2*a))+sqrt((b*b)-(4*a*c)));
   printf("result of sum= %.2f",sum);
    return 0;
}
