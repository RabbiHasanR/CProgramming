#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count_emp,hours;
    float rate,pay;
    count_emp=0;
    while(count_emp<7)
    {
        printf("hours");
        scanf("%d",&hours);
        printf("rate");
        scanf("%f",&rate);
        pay= hours * rate;
        printf("pay is$%6.2f\n",pay);
        printf("\nall employees processed\n");
        ++count_emp;

    }
    return 0;
}
