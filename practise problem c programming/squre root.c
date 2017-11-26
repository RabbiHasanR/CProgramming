#include <stdio.h>
#include <math.h>
int main()
{
    int a,b;
    printf("Enter number:");
    scanf("%d",&a);
    b=round(sqrt(a));
    printf("%d",b);
    return 0;
}
