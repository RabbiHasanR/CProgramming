#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b,c;
    float d,root1,root2;
    printf("enter a,b and c of quadratic equation: ");
    scanf("%f%f%f",&a,&b,&c);
    d=b*b-4*a*c;
    if(d<0)
    {
        printf("roots are complex number.\n");
        printf("roots of quadratic equation are: ");
        printf("\n %.3f%+.3fi",-b/(2*a),sqrt(-d)/(2*a));
        printf("\n %.3f%+.3fi",-b/(2*a),-sqrt(-d)/(2*a));
    }
    else if(d==0)
    {
        printf("both roots are equal.\n");
        root1=-b/(2*a);
        printf("root of quadratic equation is: %.3f",root1);

    }
    else
    {
        printf("roots are real numbers.\n");
        root1=(-b+sqrt(d))/(2*a);
        root2=(-b-sqrt(d))/(2*a);
        printf("roots of quadratic equation are: %.3f,%.3f",root1,root2);
    }
    return 0;
}
