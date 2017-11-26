#include <stdio.h>


int main()
{
    int number,choice;
    printf(" If you want loop running enter any number or not loop running enter 0:");
    scanf("%d",&choice);
    while(choice !=0)
    {
         printf("Enter Number:");
    scanf("%d",&number);

    if(number>100)
        printf("wrong number");
    else if(number>=80 && number<=100)
        printf("Mark is A+");
    else if(number>=75 && number<80)
        printf("Mark is A");
    else if(number>=70 && number<75)
        printf("Mark is A-");
    else if(number>=65 && number<70)
        printf("Mark is B+");
    else if(number>=60 && number<65)
        printf("Mark is B");
    else if(number>=55 && number<60)
        printf("Mark is B-");
    else if(number>=50 && number<55)
        printf("Mark is C+");
    else if(number>=45 && number<50)
        printf("Mark is C");
    else if(number>=40 && number<45)
        printf("Mark is D");
    else
        printf("Mark is F");

        printf("\nIf you want loop running enter any number or not loop running enter 0:");
    scanf("%d",&choice);
    }
    return 0;
}
