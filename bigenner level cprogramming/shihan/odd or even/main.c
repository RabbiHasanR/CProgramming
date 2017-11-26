#include <stdio.h>


int main()
{
    int number,choice;
    printf("If you want run program enter any number or not enter 0:");
    scanf("%d",&choice);
    while(choice !=0)
    {
    printf("Enter number:");
    scanf("%d",&number);
    if(number%2!=0)
        printf("This is odd number");
    else
        printf("This is even number");

        printf("\nIf you want run program enter any number or not enter 0:");
    scanf("%d",&choice);

    }
    return 0;
}
