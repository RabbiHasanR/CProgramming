#include <stdio.h>
#include <stdlib.h>

int main()
{

    int bangla,math,english;
    float avg;
    printf("please enter bangla,math & english number: ");
    scanf("%d %d %d",&bangla,&math,&english);
    avg=(bangla+math+english)/3;
    printf("avg number:%f",avg);
    if(avg>=80 && avg<=100)
        printf("\nResult:A");
    else if(avg>=60 && avg<=79)
        printf("\nResult:B");
    else if(avg>=50 && avg<=59)
        printf("\nResult:C");
    else
        printf("\nResult:F");

    return 0;
}
