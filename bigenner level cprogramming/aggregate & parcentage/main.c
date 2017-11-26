#include <stdio.h>


int main()
{
    int num[5],i,aggregate=0,total=500,count=0;
    char choice;
    float parcentage;
    printf("If u wish ran enter any key and not enter M:");
    scanf("%c",&choice);
    while(choice!='M')
    {
        printf("Enter 5 subjects number:");
        for(i=0;i<5;i++)
        {
            scanf("%d",&num[i]);
        }
        for(i=0;i<5;i++)
        {
            aggregate+=num[i];
        }
         printf("\nAggregate number:%d",aggregate);
    parcentage=(aggregate*100)/total;
    printf("\n5 subject parcentage number:%.3f",parcentage);
      printf("\nIf u wish ran enter any key and not enter M:");
    scanf("%c",&choice);
    count++;
    }
    printf("Total count:%d",count);

    return 0;
}
