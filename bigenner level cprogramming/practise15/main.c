#include <stdio.h>
#include <stdlib.h>

int main()
{
     float v,d,t;
     printf("please enter velocity(v) meter/second: ");
     scanf("%f",&v);
     printf("please enter time(t) second: ");
     scanf("%f",&t);
     d=v*t;
     printf("distance d= %f",d);
    return 0;
}
