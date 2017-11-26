#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice,total_count=0,i=0;
    char c;
    printf("if continue enter any number & not continue enter 0:");
    scanf("%d",&choice);
    printf("choice:%d",choice);
    while(choice!=0)
    {
        printf("\nEnter charectar:");
        scanf("%ch",&c);
        if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')
        {
            printf("\n %ch is vowel",c);
            i++;
            total_count+=i;
            printf("\nif continue enter any number & not continue enter 0:");
            scanf("%d",&choice);

        }

        else
        {
            printf("\n %ch is not vowel",c);
            scanf("%d",&choice);
        }


    }
    printf("\nTotal count:%d",total_count);
    return 0;
}
