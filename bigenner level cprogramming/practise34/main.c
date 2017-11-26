#include <stdio.h>
#include <stdlib.h>

int main()
{
    double total_pay,hours,rate,pay;
    int count_emp,number_emp;
    printf("enter number of employee:");
    scanf("%d",&number_emp);
    total_pay=0.0,count_emp=0;
    while(count_emp<number_emp)
    {
        printf("Hours:");
        scanf("%lf",&hours);
        printf("Rate: $");
        scanf("%lf",&rate);
        pay=hours*rate;
        printf("pay is $%lf\n\n",pay);
        total_pay=total_pay+pay;
        count_emp++;
        printf("All employees processed\n");
        printf("Total payroll is $%lf",total_pay);
    }
    return 0;
}
