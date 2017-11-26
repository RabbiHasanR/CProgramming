#include <stdio.h>
#define PI 3.1416
double rectangle_area(double height,double length);
double rectangle_perimeter(double height,double length);
double circle_circumference(double radius);
int main()
{
    double h,l,r,ar,pm,cir;
    printf("Enter h,l&r:");
    scanf("%lf%lf%lf",&h,&l,&r);
    ar= rectangle_area(h,l);
    pm=rectangle_perimeter(h,l);
    cir=circle_circumference(r);
    printf("\nArea of rectangle is %lf",ar);
    printf("\nPrimeter of rectangle is %lf",pm);
    printf("\nCircumfernce of circle is %lf",cir);

    return 0;
}

double rectangle_area( double height, double length)
{
    double area;
    area=height*length;
    return area;
}
double rectangle_perimeter(double height,double length)
{
    double perimeter;
    perimeter=2* height* length;
    return perimeter;
}
double circle_circumference( double radius)
{
    double circumference;
    circumference=2*PI*radius;
    return circumference;
}
