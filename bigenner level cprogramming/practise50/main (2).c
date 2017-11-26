#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hours,rate,pay,count_emp=0,total_pay=0;
    while(count_emp<=3)
    {
        printf("\nenter hours: ");
        scanf("%d",&hours);
        printf("\nenter rate: $");
        scanf("%d",&rate);
        pay=hours*rate;
        printf("\npay is:%d$",pay);
        total_pay=total_pay+pay;
        printf("\nTotal pay:$%d",total_pay);
        count_emp++;
    }
    printf("\nall employees processed.");

    return 0;
}
