#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double scale(double x,int n);

int main()
{
    double a;
    int b;
    scanf("%d",&b);
    scanf("%lf",&a);
    printf("result of call to function scale is %lf\n",scale(a,b));
    return 0;
}
double scale(double x,int n)
{
    double scale_factor;
    scale_factor=pow(10,n);
    return(x*scale_factor);
}

