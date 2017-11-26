#include <stdio.h>
#include <stdlib.h>
#define miles_per_kms 0.6214
#define per_miles 0.35
int main()
{
    double kms,total_rate,total_miles;
    printf("enter kms: ");
    scanf("%lf",&kms);
    total_miles=miles_per_kms*kms;
    total_rate=total_miles*per_miles;
    printf("\nyou traveled:%lf miles",total_miles);
    printf("\nyour reimbursement is:%lf",total_rate);
    return 0;
}
