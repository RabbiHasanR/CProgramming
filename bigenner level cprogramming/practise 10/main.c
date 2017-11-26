#include <stdio.h>
#include <math.h>
  float y,x ;
    int main()
{

  printf("Enter Y:");
  scanf("%f",&y);
   x = sqrt((1-y)/(1+y*y));
  printf("%f",x);



}
