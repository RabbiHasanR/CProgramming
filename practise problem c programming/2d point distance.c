#include <stdio.h>
#include <math.h>

int main()
{
    int x1,x2,y1,y2;
    double distance,a,b;

    printf("Enter co-ordinate point value:\n");
    scanf("%d %d %d %d",&x1,&x2,&y1,&y2);

    a=pow((x2-x1),2);
    b=pow((y2-y1),2);


    distance=sqrt(a+b);
    printf("\n%lf %lf",a,b);
    printf("\nDistance of point:%.2lf",distance);
}
