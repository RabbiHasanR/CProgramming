#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hours,choice,count_emp=0,total_pay=0;
    double rate,pay;
    printf("enter choice: ");
    scanf("%d",&choice);
    while(choice!=7)
    {
        printf("hours: ");
        scanf("%d",&hours);
        printf("rate: ");
        scanf("%lf",&rate);
        pay=hours*rate;
        printf("\npay is: %lf",pay);
        count_emp++;
        total_pay+=pay;
         printf("\nenter choice: ");
    scanf("%d",&choice);
    }
    printf("\ntotal count:%d",count_emp);
    printf("\ntotal pay: %d",total_pay);
    return 0;
}
