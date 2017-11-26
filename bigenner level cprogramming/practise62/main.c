#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count_emp=0,number_emp;
    double total_pay=0,hours,rate,pay;
    printf("enter total employe: ");
    scanf("%d",&number_emp);
    for(;count_emp<number_emp;count_emp++)
    {
        printf("\nhours: ");
        scanf("%lf",&hours);
        printf("\nrate: ");
        scanf("%lf",&rate);
        pay=hours*rate;
        printf("\npay is $%3lf",pay);
        total_pay+=pay;
    }
    printf("\ntotal payroll: $%3lf",total_pay);
    return 0;
}
