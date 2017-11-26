#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a,b,c;
    int pennies,nickels;
    int dimes,quarters;
    int dollars;
    int change;
    int total_dollars;
    int total_cents;
    printf("plz enter your 3 initials and press return: ");
    scanf("%c%c%c",&a,&b,&c);
    printf("\n%c%c%c,plz enter your coin information.\n",a,b,c);
    printf("number of $ coins: ");
    scanf("%d",&dollars);
    printf("number of quarters: ");
    scanf("%d",&quarters);
    printf("number of dimes: ");
    scanf("%d",&dimes);
    printf("number of nickels: ");
    scanf("%d",&nickels);
    printf("number of pennies: ");
    scanf("%d",&pennies);
    total_cents=100*dollars+25*quarters+10*dimes+5*nickels+pennies;
    total_dollars=total_cents/100;
    change=total_cents%100;
    printf("\n\n%c%c%c coin credit\nDollars: %d\nChange: %d cents\n",a,b,c,total_dollars,change);

    return 0;
}
