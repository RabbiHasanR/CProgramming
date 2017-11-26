#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;
    printf("please enter year (4 digit) to check: ");
    scanf("%d",&year);
    if(year%400==0||(year%100!=0&&year%4==0))
    printf("%d this is a leap year",year);
    else
        printf("%d this is not leap year",year);

    return 0;
}
